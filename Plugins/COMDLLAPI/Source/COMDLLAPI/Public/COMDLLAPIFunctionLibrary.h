// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "COMDLLAPIFunctionLibrary.generated.h"

__declspec(dllexport) bool InitMedicalHardwareAPI(char* COMName, long baudRate, int bytessize);
__declspec(dllexport)const char* GetBytesByDataIndex(int index);
__declspec(dllexport) void ReleaseMedicalHardwareAPI();
__declspec(dllexport)void GetAllData(char** &Out);
__declspec(dllexport)int GetNumOfData();
/**
 * 
 */
UCLASS()
class COMDLLAPI_API UCOMDLLAPIFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
private:
	static int _Index;
public:
	UFUNCTION(BlueprintCallable, Category = "UCOMDLLAPIFunctionLibrary")
		static int InitHardware(FString COMName, int BaudRate, int bytesSize);
	UFUNCTION(BlueprintCallable, Category = "UCOMDLLAPIFunctionLibrary")
		static FString GetHardwareDataByIndex(int index);
	UFUNCTION(BlueprintCallable, Category = "UCOMDLLAPIFunctionLibrary")
		static void ReleaseHardware();
	UFUNCTION(BlueprintCallable, Category = "UCOMDLLAPIFunctionLibrary")
		static void GetAllHardwareData(TArray<FString>& Out);
	UFUNCTION(BlueprintCallable, Category = "UCOMDLLAPIFunctionLibrary")
		static TArray<FString> ParerDataStr(FString source);
	UFUNCTION(BlueprintCallable, Category = "UCOMDLLAPIFunctionLibrary")
		static void GetRotatorFromString(FString SRC, FRotator& Out);
	UFUNCTION(BlueprintCallable, Category = "UCOMDLLAPIFunctionLibrary")
		static bool ForceInit(FString& WrongPortName);
	UFUNCTION(BlueprintCallable, Category = "UCOMDLLAPIFunctionLibrary")
		static void GetAllCOMName();

private:
	static TArray<FString> SplitStringToArray(FString SRC, FString Arg);

	
	
	
};
