#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "SetMatchmakingMatchServerDetails.generated.h"
// Class Mordhau.SetMatchmakingMatchServerDetails
class MORDHAU_API USetMatchmakingMatchServerDetails  :  public UBlueprintAsyncActionBase
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(Instanced, BlueprintAssignable)
	struct FScriptMulticastDelegate onSuccess; // (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
UPROPERTY(Instanced, BlueprintAssignable)
	struct FScriptMulticastDelegate onFailure; // (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FPlayFabMatchmakingMatch Match; // (NativeAccessSpecifierPrivate)
UPROPERTY()
	struct FPlayFabServerDetails ServerDetails; // (NativeAccessSpecifierPrivate)
	// Functions
UFUNCTION(BlueprintCallable)
	static class USetMatchmakingMatchServerDetails* SetMatchmakingMatchServerDetails(const struct FPlayFabMatchmakingMatch& Match, const struct FPlayFabServerDetails& ServerDetails);
};
