#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "ReserveMordhauServerSessionSlots.generated.h"
// Class Mordhau.ReserveMordhauServerSessionSlots
class MORDHAU_API UReserveMordhauServerSessionSlots  :  public UBlueprintAsyncActionBase
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(Instanced, BlueprintAssignable)
	struct FScriptMulticastDelegate onSuccess; // (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
UPROPERTY(Instanced, BlueprintAssignable)
	struct FScriptMulticastDelegate OnFull; // (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
UPROPERTY(Instanced, BlueprintAssignable)
	struct FScriptMulticastDelegate onFailure; // (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
UPROPERTY()
	class UWorld* World; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
UPROPERTY()
	struct FServerSearchResult SearchResult; // (NativeAccessSpecifierPrivate)
UPROPERTY()
	TArray<struct FPlayFabPlayerEntity> PartyMembers; // (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	// Functions
UFUNCTION(BlueprintCallable)
	static class UReserveMordhauServerSessionSlots* ReserveMordhauServerSessionSlots(class UObject* WorldContextObject, const struct FServerSearchResult& SearchResult, TArray<struct FPlayFabPlayerEntity> PartyMembers);
};
