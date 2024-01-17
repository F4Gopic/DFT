#pragma once
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CoreMinimal.h"
#include "ReadWrite.generated.h"
// Fill out your copyright notice in the Description page of Project Settings.


UCLASS()
class UReadWrite : public UBlueprintFunctionLibrary
{

  GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "SavedData")
	static FString ReadStringFromFile(FString FilePath, bool& BOutSuccess, FString& OutInfoMessage);




	UFUNCTION(BlueprintCallable, Category = "SavedData")
	static void WriteStringToFile(FString FilePath, FString String, bool& BOutSuccess, FString& OutInfoMessage);
};

/**
 * 
 */
//class DFT_API ReadWrite
//{
//public:
	//ReadWrite();
	//~ReadWrite();
//};
