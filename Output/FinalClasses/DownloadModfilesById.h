#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "DownloadModfilesById.generated.h"
// Class Mordhau.DownloadModfilesById
class MORDHAU_API UDownloadModfilesById  :  public UBlueprintAsyncActionBase
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(Instanced, BlueprintAssignable)
	struct FScriptMulticastDelegate onSuccess; // (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
UPROPERTY(Instanced, BlueprintAssignable)
	struct FScriptMulticastDelegate onFailure; // (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	// Functions
UFUNCTION(BlueprintCallable)
	static class UDownloadModfilesById* DownloadModfilesById(TArray<int> ModIds);
};
