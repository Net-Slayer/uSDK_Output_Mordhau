#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "CreateMatchmakingTicket.generated.h"
// Class Mordhau.CreateMatchmakingTicket
class MORDHAU_API UCreateMatchmakingTicket  :  public UBlueprintAsyncActionBase
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
	struct FPlayFabMatchmakingAttributes Attributes; // (HasGetValueTypeHash, NativeAccessSpecifierPrivate)
UPROPERTY()
	TArray<struct FString> Members; // (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
UPROPERTY()
	int Timeout; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	// Functions
UFUNCTION(BlueprintCallable)
	static class UCreateMatchmakingTicket* CreateMatchmakingTicket(const struct FString& QueueName, const struct FPlayFabMatchmakingAttributes& Attributes, TArray<struct FString> Members, int Timeout);
};
