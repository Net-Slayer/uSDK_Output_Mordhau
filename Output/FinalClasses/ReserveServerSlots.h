#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "ReserveServerSlots.generated.h"
// Class Mordhau.ReserveServerSlots
class MORDHAU_API UReserveServerSlots  :  public UBlueprintAsyncActionBase
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
	struct FString ConnectString; // (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
UPROPERTY()
	class AMordhauBeaconClient* BeaconClient; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
UPROPERTY()
	class UWorld* World; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
UPROPERTY()
	struct FPlayFabServerDetails ServerDetails; // (NativeAccessSpecifierPrivate)
UPROPERTY()
	TArray<struct FPlayFabMatchmakingPlayer> Players; // (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	// Functions
UFUNCTION(BlueprintCallable)
	static class UReserveServerSlots* ReserveServerSlots(class UObject* WorldContextObject, const struct FPlayFabServerDetails& ServerDetails, TArray<struct FPlayFabMatchmakingPlayer> Players);
};
