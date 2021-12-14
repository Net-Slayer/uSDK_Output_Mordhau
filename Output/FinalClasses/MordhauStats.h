#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "MordhauStats.generated.h"
// Class Mordhau.MordhauStats
class MORDHAU_API UMordhauStats  :  public UObject
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(BlueprintReadOnly)
	struct FStat GameVersion; // (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	struct FStat Blocks; // (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	struct FStat Chambers; // (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	struct FStat ProjectilesDeflected; // (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	struct FStat ProjectilesBlocked; // (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	struct FStat Battlecries; // (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	struct FStat Disarms; // (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	struct FStat Kills; // (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	struct FStat Assists; // (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	struct FStat KillsOneMatch; // (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	struct FStat AssistsOneMatch; // (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	struct FStat KillsOneLife; // (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	struct FStat DamageTakenOneLife; // (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	struct FStat HeadsDecapitated; // (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	struct FStat ProjectileHeadHits; // (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	struct FStat ProjectileTorsoHits; // (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	struct FStat ProjectileLegHits; // (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	struct FStat MeleeHeadHits; // (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	struct FStat MeleeTorsoHits; // (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	struct FStat MeleeLegHits; // (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	struct FStat KillsOneAttack; // (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	struct FStat FireKills; // (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	struct FStat CouchedHeadKills; // (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	struct FStat LadderKills; // (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	struct FStat TrampleKills; // (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	struct FStat CasualRank; // (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	struct FStat CasualRankSamples; // (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	struct FStat DuelRank; // (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	struct FStat DuelRankSamples; // (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	struct FStat DuelRankTimestamp; // (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	struct FStat DuelRankLeaderboard; // (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	struct FStat TeamfightRank; // (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	struct FStat TeamfightRankSamples; // (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	struct FStat TeamfightRankTimestamp; // (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	struct FStat TeamfightRankLeaderboard; // (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	struct FAchievement TheABCs; // (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	struct FAchievement LivedToTell; // (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	struct FAchievement Highlander; // (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	struct FAchievement KeepsComingOff; // (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	struct FAchievement EagleEye; // (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	struct FAchievement Yoink; // (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	struct FAchievement JusticeFromGrave; // (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	struct FAchievement NotSparta; // (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	struct FAchievement BurningMan; // (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	// Functions
UFUNCTION(BlueprintCallable)
	void UnlockAchievement(Mordhau_ECallResult* CallResult, const struct FAchievement& Achievement);
UFUNCTION(BlueprintCallable)
	void StoreStats(Mordhau_ECallResult* CallResult);
UFUNCTION(BlueprintCallable)
	void StorePlayerStats(Mordhau_ECallResult* CallResult, const struct FString& PlayFabId);
UFUNCTION(BlueprintCallable)
	void SetValue(Mordhau_ECallResult* CallResult, const struct FStat& Stat, int Value);
UFUNCTION(BlueprintCallable)
	void SetPlayerValue(Mordhau_ECallResult* CallResult, const struct FString& PlayFabId, const struct FStat& Stat, int Value);
UFUNCTION(BlueprintCallable)
	void ResetAllStats(Mordhau_ECallResult* CallResult, bool bAchievementsToo);
UFUNCTION(BlueprintCallable)
	void RequestStats(Mordhau_ECallResult* CallResult);
UFUNCTION(BlueprintCallable)
	void RequestPlayerStats(Mordhau_ECallResult* CallResult, const struct FString& PlayFabId);
UFUNCTION(BlueprintCallable)
	void LockAchievement(Mordhau_ECallResult* CallResult, const struct FAchievement& Achievement);
UFUNCTION(BlueprintCallable)
	void IsAchievementUnlocked(Mordhau_ECallResult* CallResult, const struct FAchievement& Achievement, bool* bIsUnlocked);
UFUNCTION(BlueprintCallable)
	void IncrementValueChecked(class UWorld* World, const struct FStat& Stat);
UFUNCTION(BlueprintCallable)
	bool GetValueByName(const struct FString& StatName, int* OutValue);
UFUNCTION(BlueprintCallable)
	void GetValue(Mordhau_ECallResult* CallResult, const struct FStat& Stat, int* Value);
UFUNCTION(BlueprintCallable)
	void GetPlayerValue(Mordhau_ECallResult* CallResult, const struct FString& PlayFabId, const struct FStat& Stat, int* Value);
UFUNCTION(BlueprintCallable)
	bool AreStatsAvailable(const struct FString& PlayFabId);
};
