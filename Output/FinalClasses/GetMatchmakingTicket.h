#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "GetMatchmakingTicket.generated.h"
// Class Mordhau.GetMatchmakingTicket
class MORDHAU_API UGetMatchmakingTicket  :  public UBlueprintAsyncActionBase
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
	// Functions
UFUNCTION(BlueprintCallable)
	static class UGetMatchmakingTicket* GetMatchmakingTicket(const struct FString& QueueName, const struct FString& TicketId);
};
