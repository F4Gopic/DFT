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
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Default")
	int MaxAmmo = 30;

	// Get The Turret's Max Ammo
	UFUNCTION(BlueprintPure)
	int GetTurretMaxAmmo() const { return MaxAmmo; }

	// Set The Turret's Max Ammo
	UFUNCTION(BlueprintCallable)
	void SetTurretMaxAmmo(int NewAmmo) { MaxAmmo = NewAmmo; }

	
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
