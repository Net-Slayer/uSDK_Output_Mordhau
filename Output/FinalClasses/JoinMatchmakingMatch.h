#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "JoinMatchmakingMatch.generated.h"
// Class Mordhau.JoinMatchmakingMatch
class MORDHAU_API UJoinMatchmakingMatch  :  public UBlueprintAsyncActionBase
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
	// Functions
UFUNCTION(BlueprintCallable)
	static class UJoinMatchmakingMatch* JoinMatchmakingMatch(const struct FPlayFabMatchmakingMatch& Match);
};
