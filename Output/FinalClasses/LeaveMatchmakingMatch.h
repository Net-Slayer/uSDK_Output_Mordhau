#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "LeaveMatchmakingMatch.generated.h"
// Class Mordhau.LeaveMatchmakingMatch
class MORDHAU_API ULeaveMatchmakingMatch  :  public UBlueprintAsyncActionBase
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
	static class ULeaveMatchmakingMatch* LeaveMatchmakingMatch(const struct FPlayFabMatchmakingMatch& Match);
};
