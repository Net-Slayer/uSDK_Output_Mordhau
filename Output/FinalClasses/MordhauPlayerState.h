#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "MordhauPlayerState.generated.h"
// Class Mordhau.MordhauPlayerState
class MORDHAU_API AMordhauPlayerState  :  public APlayerState
{
GENERATED_BODY()
public:
// Variables
UPROPERTY()
	TWeakObjectPtr<class AMordhauCharacter> LastMordhauCharacter; // (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
UPROPERTY(Transient)
	TArray<float> MedianPings; // (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(Transient)
	TArray<float> MedianPingsSorted; // (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(Transient)
	int CurMedianPingIndex; // (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(Transient)
	float PingMedian; // (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(Transient)
	int LocalStableShortID; // (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(Replicated, Transient)
	int16_t ReplicatedRank; // (Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(Replicated, ReplicatedUsing="OnRep_ReplicatedKills", Transient)
	int16_t ReplicatedKills; // (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(Replicated, ReplicatedUsing="OnRep_ReplicatedAssists", Transient)
	int16_t ReplicatedAssists; // (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(Replicated, ReplicatedUsing="OnRep_ReplicatedDeathsAndFlags", Transient)
	uint16_t ReplicatedDeathsAndFlags; // (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(Replicated, ReplicatedUsing="OnRep_ReplicatedTeam", Transient)
	int8_t ReplicatedTeam; // (Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient)
	uint8 Badge; // (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient)
	uint8 LevelDisplayType; // (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsPartyMember; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsFriend; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int FilteredTeamKills; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly, Transient)
	bool bIsAlive; // (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly, Transient)
	int Kills; // (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly, Transient)
	int Deaths; // (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly, Transient)
	int Assists; // (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly, Transient)
	int Team; // (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
	bool bIsAdmin; // (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
	struct FString AdminTier; // (Edit, BlueprintVisible, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
	int KilledLocalPlayerCounter; // (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
	bool bIsMuted; // (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
	int KilledByLocalPlayerCounter; // (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(Transient)
	struct FPlayFabPlayer PlayFabPlayer; // (Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(Transient)
	struct FString SessionTicket; // (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// Functions
UFUNCTION(BlueprintCallable)
	void SetTeam(int NewTeam);
UFUNCTION(BlueprintCallable)
	void SetPlayerName(const struct FString& S);
UFUNCTION(BlueprintCallable)
	void OnRep_ReplicatedTeam();
UFUNCTION(BlueprintCallable)
	void OnRep_ReplicatedKills();
UFUNCTION(BlueprintCallable)
	void OnRep_ReplicatedDeathsAndFlags();
UFUNCTION(BlueprintCallable)
	void OnRep_ReplicatedAssists();
UFUNCTION(BlueprintCallable, BlueprintPure)
	int GetRank() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	struct FPlayFabPlayer GetPlayFabPlayer();
UFUNCTION(BlueprintCallable, BlueprintPure)
	struct FString GetPlayFabId();
UFUNCTION(BlueprintCallable)
	class AMordhauCharacter* GetLastPossessedMordhauCharacter();
UFUNCTION(BlueprintCallable)
	void BanPlayer(int BanDuration, const struct FString& BanReason, bool bIsOfficialServerBan, Mordhau_EBanType BanType);
UFUNCTION(BlueprintCallable)
	void AddScore(int Amount);
UFUNCTION(BlueprintCallable)
	void AddKills(int Amount);
UFUNCTION(BlueprintCallable)
	void AddDeaths(int Amount);
UFUNCTION(BlueprintCallable)
	void AddAssists(int Amount);
};
