// Fill out your copyright notice in the Description page of Project Settings.


#include "ReadWrite.h"
#include "HAL/PlatformFileManager.h" //Core


FString UReadWrite::ReadStringFromFile(FString FilePath, bool& BOutSuccess, FString& OutInfoMessage)
{
	//Check if the file exists
	if (!FPlatformFileManager::Get().GetPlatformFile().FileExists(*FilePath))
	{
		BOutSuccess = false;
		OutInfoMessage = FString::Printf(TEXT("Read String From File Failed - File Doesn't Exist - '%s'"), *FilePath);
		return "";
	}

	FString RetString = "";

	// Try to read the file. Output goes in RetString
	if (!FFileHelper::LoadFileToString(RetString, *FilePath))
	{
		BOutSuccess = false;
		OutInfoMessage = FString::Printf(TEXT("Read String From File Failed - Was not able to read the file, is this a text file? - '%s'"), *FilePath);
		return "";
	}

    BOutSuccess = false;
	OutInfoMessage = FString::Printf(TEXT("Read String From File Succeeded - '%s'"), *FilePath);
	return RetString;






}






void UReadWrite::WriteStringToFile(FString FilePath, FString String, bool& BOutSuccess, FString& OutInfoMessage)
{

	// Try to write the string into the file
	if (!FFileHelper::SaveStringToFile(String, *FilePath))
	{
		BOutSuccess = false;
		OutInfoMessage = FString::Printf(TEXT("Write String To File Failed - Was not able to Write To file, is your file read only? Is the path valid? - '%s'"), *FilePath);
		return;
	}

	BOutSuccess = false;
	OutInfoMessage = FString::Printf(TEXT("Write String To File Succeeded - '%s'"), *FilePath);


}
















//ReadWrite::ReadWrite()
//{
//}

//ReadWrite::~ReadWrite()
//{
//}
