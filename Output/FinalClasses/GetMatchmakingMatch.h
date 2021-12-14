#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "GetMatchmakingMatch.generated.h"
// Class Mordhau.GetMatchmakingMatch
class MORDHAU_API UGetMatchmakingMatch  :  public UBlueprintAsyncActionBase
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(Instanced, BlueprintAssignable)
	struct FScriptMulticastDelegate onSuccess; // (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
UPROPERTY(Instanced, BlueprintAssignable)
	struct FScriptMulticastDelegate onFailure; // (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FString QueueName; // (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
UPROPERTY()
	struct FString MatchId; // (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	// Functions
UFUNCTION(BlueprintCallable)
	static class UGetMatchmakingMatch* GetMatchmakingMatch(const struct FString& QueueName, const struct FString& MatchId);
};
