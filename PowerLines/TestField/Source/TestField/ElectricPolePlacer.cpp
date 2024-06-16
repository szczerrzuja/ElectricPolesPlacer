// Fill out your copyright notice in the Description page of Project Settings.


#include "ElectricPolePlacer.h"
#include "Components/InstancedStaticMeshComponent.h"

// Sets default values
AElectricPolePlacer::AElectricPolePlacer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	InstancedStaticPoleMeshComponent = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("InstancedStaticMEsh"));
	InstancedStaticPoleMeshComponent->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void AElectricPolePlacer::BeginPlay()
{
	Super::BeginPlay();

	
}

// Called every frame
void AElectricPolePlacer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	InstancedStaticPoleMeshComponent->SetStaticMesh(nullptr);
}

void AElectricPolePlacer::OnConstruction(const FTransform& Transform)
{

	Super::OnConstruction(Transform);
	//Delete All Actors
#if WITH_EDITOR
	if (!IWantToBake)
	{
		
		InstancedStaticPoleMeshComponent->ClearInstances();
		InstancedStaticPoleMeshComponent->SetStaticMesh(StaticPoleMesh);

		//Update start point, stop point and actor world position when changing them
		if (StartPoint.SquaredLength() > 0.001f)
			RecalculatePositionOfActor();

		CreatedPolesPositions.Empty();
		const FRotator RotationOfPoles = FRotationMatrix::MakeFromX(EndPoint.GetSafeNormal2D()).Rotator() + FRotator(0.0, 90.0, 0.0);

		//variables for collision detection
		FHitResult HitResult;
		FCollisionQueryParams TraceParams(FName(TEXT("GroundTrace")), true, this);
		//variables for poles positioning
		const FVector EndPointWorldPosition = GetActorLocation() + EndPoint;


		float distanceToEnd = EndPoint.Length();
		int numberOfPoles;
		float distBetweenPoles;
		FVector lastPolePlacedPossition;
		FVector EstimatedPositionOfNewPole;

		//create fist pole 
		GetWorld()->LineTraceSingleByChannel(HitResult, GetActorLocation() + FVector(0.0f, 0.0f, MaximumError),
			GetActorLocation() + FVector(0.0f, 0.0f, -MaximumError), ECollisionChannel::ECC_WorldStatic);
		if (HitResult.bBlockingHit)
		{
			InstancedStaticPoleMeshComponent->AddInstance(FTransform(RotationOfPoles + RotationOffsetForAllPoles, HitResult.Location, GetActorScale()), true);
			lastPolePlacedPossition = HitResult.ImpactPoint;
			CreatedPolesPositions.Add(HitResult.ImpactPoint - GetActorLocation());
		}
		else {
			lastPolePlacedPossition = GetActorLocation();
		}
		distanceToEnd = (EndPointWorldPosition - lastPolePlacedPossition).Length();
		
		//cant predict pole placing, when surfacce is not flat
		while (distanceToEnd > MaxDistanceBetweenPoles)
		{

			numberOfPoles = FMath::FloorToInt(distanceToEnd / MaxDistanceBetweenPoles);
			distBetweenPoles = FMath::Min(MaxDistanceBetweenPoles, distanceToEnd / numberOfPoles + 1);
			EstimatedPositionOfNewPole = lastPolePlacedPossition + ((EndPointWorldPosition - lastPolePlacedPossition).GetSafeNormal() * distBetweenPoles);


			GetWorld()->LineTraceSingleByChannel(HitResult, EstimatedPositionOfNewPole + FVector(0.0f, 0.0f, MaximumError),
				EstimatedPositionOfNewPole + FVector(0.0f, 0.0f, -MaximumError), ECollisionChannel::ECC_WorldStatic, TraceParams);
			if (HitResult.bBlockingHit)
			{
				if ((lastPolePlacedPossition - HitResult.ImpactPoint).Length() < MaxDistanceBetweenPoles / 8.0f)
					break;
				InstancedStaticPoleMeshComponent->AddInstance(FTransform(RotationOfPoles+RotationOffsetForAllPoles, HitResult.Location, GetActorScale()), true);
				lastPolePlacedPossition = HitResult.ImpactPoint;
				CreatedPolesPositions.Add(HitResult.ImpactPoint - GetActorLocation());
			}
			else
			{
				lastPolePlacedPossition = EstimatedPositionOfNewPole;
			}
			distanceToEnd = (EndPointWorldPosition - lastPolePlacedPossition).Length();

		}
		
		GetWorld()->LineTraceSingleByChannel(HitResult, EndPointWorldPosition + FVector(0.0f, 0.0f, MaximumError),
			EndPointWorldPosition + FVector(0.0f, 0.0f, -MaximumError), ECollisionChannel::ECC_WorldStatic, TraceParams);
		if (HitResult.bBlockingHit)
		{
			CreatedPolesPositions.Add(HitResult.ImpactPoint - GetActorLocation());
			InstancedStaticPoleMeshComponent->AddInstance(FTransform(RotationOfPoles + RotationOffsetForAllPoles, HitResult.Location, GetActorScale()), true);
		}


	}
	else
	{
		IWantToBake = false;
		const FActorSpawnParameters SpawnParams;
		const FRotator RotationOfPoles = FRotationMatrix::MakeFromX(EndPoint.GetSafeNormal()).Rotator();
		for (auto const& pos : CreatedPolesPositions)
		{
			AActor* NewActor = GetWorld()->SpawnActor<AActor>(PoleTemplate, pos + GetActorLocation(), RotationOfPoles + RotationOffsetForAllPoles);
		}
	}
#endif
}


/*
* Method to recalculate position of Endpoint and actor, when start point is changed
*/
void AElectricPolePlacer::RecalculatePositionOfActor()
{
	FVector EndWorldLocation;
	const FVector actorLocation = GetActorLocation();
	EndWorldLocation = actorLocation + EndPoint;
	SetActorLocation(actorLocation + StartPoint);
	EndPoint = EndWorldLocation - GetActorLocation();
	StartPoint = FVector::ZeroVector;
}



