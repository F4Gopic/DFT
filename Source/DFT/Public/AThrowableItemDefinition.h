// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AThrowableItemDefinition.generated.h"

UCLASS()
class DFT_API AAThrowableItemDefinition : public AActor
{
	GENERATED_BODY()

public:
	// Max Ammo Of The Turret
	UPROPERTY(BlueprintReadWrite, VisibleDefaultsOnly, Category = "Default")
	int MaxAmmo = 30;

	// Current Ammo Of The Turret
	UPROPERTY(BlueprintReadWrite, VisibleDefaultsOnly, Category = "Default")
	int CurrentAmmo = 30;

	// Rotation Speed Of The Turret Top
	UPROPERTY(BlueprintReadWrite, VisibleDefaultsOnly, Category = "Default")
	float TurretTopRotationSpeed = 45.0;

	// Distance To Target
	UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly, Category = "Default")
	float DistanceToTarget;

	// Sensing Radius
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Default")
	float SensingRadius = 600;

	// Get The Turret's Max Ammo
	UFUNCTION(BlueprintPure)
	int GetTurretMaxAmmo() const { return MaxAmmo; }

	// Set The Turret's Max Ammo
	UFUNCTION(BlueprintCallable)
	void SetTurretMaxAmmo(int NewAmmo) { MaxAmmo = NewAmmo; }

	// Set The Turret Top's Rotation Speed
	UFUNCTION(BlueprintCallable)
	void SetTurretTopRotationSpeed(float NewRotationSpeed) { TurretTopRotationSpeed = NewRotationSpeed; }

	
public:	
	// Sets default values for this actor's properties
	AAThrowableItemDefinition();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
