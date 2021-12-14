#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "GetMatchmakingPenalty.generated.h"
// Class Mordhau.GetMatchmakingPenalty
class MORDHAU_API UGetMatchmakingPenalty  :  public UBlueprintAsyncActionBase
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(Instanced, BlueprintAssignable)
	struct FScriptMulticastDelegate onSuccess; // (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
UPROPERTY(Instanced, BlueprintAssignable)
	struct FScriptMulticastDelegate onFailure; // (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FPlayFabPlayerEntity PlayerEntity; // (HasGetValueTypeHash, NativeAccessSpecifierPrivate)
UPROPERTY()
	struct FString GroupName; // (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
UPROPERTY()
	struct FString GroupID; // (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	// Functions
UFUNCTION(BlueprintCallable)
	static class UGetMatchmakingPenalty* GetMatchmakingPenalty(const struct FPlayFabPlayerEntity& PlayerEntity);
};
