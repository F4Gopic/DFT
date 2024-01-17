// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "Networking.h"

UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Replication")
uint8 bReplicates = 1;



/**
 * 
 */
class DFT_API HelperFunctions
{
public:
	HelperFunctions();
	~HelperFunctions();
};
