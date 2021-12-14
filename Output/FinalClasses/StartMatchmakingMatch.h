#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "StartMatchmakingMatch.generated.h"
// Class Mordhau.StartMatchmakingMatch
class MORDHAU_API UStartMatchmakingMatch  :  public UBlueprintAsyncActionBase
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(Instanced, BlueprintAssignable)
	struct FScriptMulticastDelegate onSuccess; // (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
UPROPERTY(Instanced, BlueprintAssignable)
	struct FScriptMulticastDelegate onFailure; // (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
UPROPERTY()
	class UWorld* World; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
UPROPERTY()
	struct FPlayFabMatchmakingMatch Match; // (NativeAccessSpecifierPrivate)
UPROPERTY()
	struct FString GroupID; // (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
UPROPERTY()
	struct FString GroupName; // (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
UPROPERTY()
	struct FPlayFabGroup Group; // (HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	// Functions
UFUNCTION(BlueprintCallable)
	static class UStartMatchmakingMatch* StartMatchmakingMatch(class UObject* WorldContextObject, const struct FPlayFabMatchmakingMatch& Match);
};
