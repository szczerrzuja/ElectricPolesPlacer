// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ElectricPole.h"
#include "ElectricPolePlacer.generated.h"


USTRUCT(BlueprintType)
struct FConnectionPair
{
	GENERATED_BODY()
	int FirstPoleIndex;
	int SecondPoleIndex;

};

USTRUCT(BlueprintType)
struct FPowerPolesConnection
{
	GENERATED_BODY()
	AActor* firstActor;
	AActor* secondActor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FConnectionPair> PowerLinesConnection;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int NumberOfLines;
};

struct FPowerCableHolder
{
	FVector worldStartPoint;
	FVector worldStopPoint;

};


UCLASS()
class TESTFIELD_API AElectricPolePlacer : public AActor
{
	GENERATED_BODY()
public:	
	// Sets default values for this actor's properties
	AElectricPolePlacer();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void OnConstruction(const FTransform& Transform) override;

#pragma region "Placing Items"
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tool", meta = (AllowPrivateAccess = "true", MakeEditWidget = true))
	FVector StartPoint;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tool", meta = (AllowPrivateAccess = "true", MakeEditWidget = true))
	FVector EndPoint;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tool", meta = (AllowPrivateAccess = "true"))
	FRotator RotationOffsetForAllPoles;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tool", meta = (AllowPrivateAccess = "true", ClampMin = "1.0", ClampMax = "2000000.0"))
	float MaxDistanceBetweenPoles = 2000.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tool", meta = (AllowPrivateAccess = "true", ClampMin = "1.0", ClampMax = "2000000.0"))
	float MaximumError = 2000.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tool", meta = (AllowPrivateAccess = "true", ClampMin = "1.0", ClampMax = "2000000.0"))
	bool IWantToBake = false;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tool", meta = (AllowPrivateAccess = "true", MakeEditWidget = true))
	TArray<FVector> CreatedPolesPositions;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mesh", meta = (AllowPrivateAccess = "true"))
	TSubclassOf<class AElectricPole> PoleTemplate;

	UPROPERTY(BlueprintReadWrite, Category = "Mesh", meta = (AllowPrivateAccess = "true"))
	UStaticMesh* StaticPoleMesh;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Mesh", meta = (AllowPrivateAccess = "true"))
	UInstancedStaticMeshComponent* InstancedStaticPoleMeshComponent;

	TArray<FPowerCableHolder> powerCablesConsturctionInformation;
	void RecalculatePositionOfActor();
	

};

