// Fill out your copyright notice in the Description page of Project Settings.


#include "ElectricPole.h"

// Sets default values
AElectricPole::AElectricPole()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ElectricPole"));
	StaticMeshComponent->SetupAttachment(RootComponent);
	
}

// Called when the game starts or when spawned
void AElectricPole::BeginPlay()
{
	Super::BeginPlay();
	StaticMeshComponent->SetStaticMesh(StaticMesh);
	

}

void AElectricPole::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);
	StaticMeshComponent->SetStaticMesh(StaticMesh);
}

// Called every frame
void AElectricPole::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

