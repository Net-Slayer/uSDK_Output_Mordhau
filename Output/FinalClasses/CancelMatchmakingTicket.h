#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "CancelMatchmakingTicket.generated.h"
// Class Mordhau.CancelMatchmakingTicket
class MORDHAU_API UCancelMatchmakingTicket  :  public UBlueprintAsyncActionBase
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
	// Functions
UFUNCTION(BlueprintCallable)
	static class UCancelMatchmakingTicket* CancelMatchmakingTicket(const struct FString& QueueName);
};
