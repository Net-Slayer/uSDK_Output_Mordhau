#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "PenalizeForLeavingActiveMatch.generated.h"
// Class Mordhau.PenalizeForLeavingActiveMatch
class MORDHAU_API UPenalizeForLeavingActiveMatch  :  public UBlueprintAsyncActionBase
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
	class UGetMatchmakingPenalty* GetMatchmakingPenalty; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
UPROPERTY()
	struct FString GroupName; // (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
UPROPERTY()
	struct FString GroupID; // (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
UPROPERTY()
	int LeaveCount; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
UPROPERTY()
	int64_t LeaveTimestamp; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
UPROPERTY()
	int64_t BanEndTimestamp; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	// Functions
UFUNCTION(BlueprintCallable)
	static class UPenalizeForLeavingActiveMatch* PenalizeForLeavingActiveMatch(const struct FPlayFabPlayerEntity& PlayerEntity);
UFUNCTION()
	void OnGetMatchmakingPenaltySuccess(const struct FPlayFabPlayerEntity& InPlayerEntity, int InLeaveCount, const struct FDateTime& InLeaveTime, const struct FDateTime& InBanEndTime);
UFUNCTION()
	void OnGetMatchmakingPenaltyFailure(const struct FPlayFabPlayerEntity& InPlayerEntity, int InLeaveCount, const struct FDateTime& InLeaveTime, const struct FDateTime& InBanEndTime);
};
