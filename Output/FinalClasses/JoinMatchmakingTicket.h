#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "JoinMatchmakingTicket.generated.h"
// Class Mordhau.JoinMatchmakingTicket
class MORDHAU_API UJoinMatchmakingTicket  :  public UBlueprintAsyncActionBase
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
	struct FString TicketId; // (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
UPROPERTY()
	struct FPlayFabMatchmakingAttributes Attributes; // (HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	// Functions
UFUNCTION(BlueprintCallable)
	static class UJoinMatchmakingTicket* JoinMatchmakingTicket(const struct FString& QueueName, const struct FString& TicketId, const struct FPlayFabMatchmakingAttributes& Attributes);
};
