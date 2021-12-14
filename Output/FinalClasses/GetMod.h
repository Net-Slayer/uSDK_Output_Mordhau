#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "GetMod.generated.h"
// Class Mordhau.GetMod
class MORDHAU_API UGetMod  :  public UBlueprintAsyncActionBase
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
	static class UGetMod* GetMod(int ModId);
};
