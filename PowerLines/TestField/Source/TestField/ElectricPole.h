// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ElectricPole.generated.h"


UCLASS()
class TESTFIELD_API AElectricPole : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AElectricPole();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mesh", meta = (AllowPrivateAccess = "true"))
	UStaticMesh* StaticMesh;

	UPROPERTY(BlueprintReadWrite, Category = "Mesh", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* StaticMeshComponent;

	//holds points, where power lines are connected to electric Pole
	UPROPERTY(BlueprintReadWrite, Category = "Mesh", meta = (AllowPrivateAccess = "true"))
	TArray<FVector> PolePointOfConnection;
	
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
