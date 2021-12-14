#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "DestroyMordhauServerSession.generated.h"
// Class Mordhau.DestroyMordhauServerSession
class MORDHAU_API UDestroyMordhauServerSession  :  public UBlueprintAsyncActionBase
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
	static class UDestroyMordhauServerSession* DestroyMordhauServerSession();
};
