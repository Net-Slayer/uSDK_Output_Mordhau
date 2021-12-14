#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "MordhauGameMode.generated.h"
// Class Mordhau.MordhauGameMode
class MORDHAU_API AMordhauGameMode  :  public AGameMode
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(BlueprintReadOnly)
	TArray<struct FGameModeName> MapPrefixes; // (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<struct FString> MapRotation; // (Edit, BlueprintVisible, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TMap<struct FString, struct FString> MapGameModeOverrides; // (Edit, BlueprintVisible, Config, GlobalConfig, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FString MOTDURL; // (BlueprintVisible, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsThirdPersonCameraDisabled; // (BlueprintVisible, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float ConstrainAspectRatio; // (BlueprintVisible, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsHitStopOnTeamHitsDisabled; // (BlueprintVisible, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bDisableClientMods; // (BlueprintVisible, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	TArray<struct FString> SpawnServerActorsOnMapLoad; // (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	bool bLogKillfeed; // (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	bool bLogChat; // (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	bool bLogScore; // (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bAllowSpawningServerActorsOnMapLoad; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	bool bAllowAdminChat; // (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	bool bAllowWhisperChat; // (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	TArray<TWeakObjectPtr<class AController>> SpawnQueue; // (ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	TWeakObjectPtr<class AController> CurrentlySpawningController; // (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	class AActor* CurrentlySpawningPlayerStart; // (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	int CurrentlySpawningStage; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bMatchTimeRanOut; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float PlayerRespawnTime; // (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bUsesSlowPlayerSpawning; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int AutoKickOnTeamKillAmount; // (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bPlayersSpawnInWaves; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bPlayersDropAllGearOnDeath; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bEquipmentDoesNotDespawn; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float OverrideEquipmentDespawnTime; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float BallistaRespawnTime; // (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float CatapultRespawnTime; // (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float HorseRespawnTime; // (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	TArray<struct FString> MapVoteMaps; // (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly, EditAnywhere)
	Mordhau_EOfficialServerVisibility OfficialServerVisibility; // (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float DamageFactor; // (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float TeamDamageFactor; // (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int TeamDamageFlinch; // (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float SpawnProtectionDuration; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bDisableDamage; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bDisableStamina; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsScoringDisabled; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float AssistScoreFactor; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	uint8 AssistDamageToCountAsKill; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float KillScoreChange; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float KillTeamScoreChange; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float TeamKillScoreChange; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float TeamKillTeamScoreChange; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bTeamKillsDecrementKillerKills; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bTeamKillsIncrementKilledDeaths; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bSuicideDecrementsKills; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<struct FString> ChatMessages; // (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TMap<struct FString, struct FString> MessageTypeMap; // (BlueprintVisible, Config, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TMap<struct FString, struct FPlayerChatMessagesContainer> PlayerMessagesMap; // (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
UPROPERTY(Instanced, BlueprintAssignable)
	struct FScriptMulticastDelegate OnRconStringCommand; // (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<struct FRconEventStruct> RconEvents; // (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(Instanced, BlueprintAssignable)
	struct FScriptMulticastDelegate OnMessageBroadcasted; // (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
UPROPERTY(Instanced, BlueprintAssignable)
	struct FScriptMulticastDelegate OnAfterLogin; // (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
UPROPERTY(Instanced, BlueprintAssignable)
	struct FScriptMulticastDelegate OnBeforeLogout; // (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<struct FChatCommandStruct> ChatCommands; // (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// Functions
UFUNCTION(BlueprintCallable)
	bool VoteLevel(class APlayerController* Player, const struct FString& LevelName);
UFUNCTION(BlueprintCallable)
	void SetTeamScore(int Team, float Amount);
UFUNCTION(BlueprintCallable)
	bool SetRconEvent(struct FRconEventStruct* InStruct, const struct FScriptDelegate& InEvent, bool bOverrideExisting);
UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void RequestedAssignTeam(class AController* Controller, int Team);
UFUNCTION(BlueprintImplementableEvent)
	void RemoveBots(int Amount, int Team);
UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnTeamScoreChanged(int Team, float OldValue);
UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnScoreChanged(class APlayerState* State, float OldValue);
UFUNCTION(BlueprintImplementableEvent)
	void OnMatchStateChanged(const struct FName& OldState, const struct FName& NewState);
UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnKillsChanged(class APlayerState* State, int OldValue);
UFUNCTION(BlueprintNativeEvent)
	void OnKilled(class AController* Killer, class AController* KilledPlayer, class APawn* KilledPawn, Mordhau_EMordhauDamageType Type, uint8 SubType, class AActor* DamageSource, class AActor* DamageAgent);
UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnDeathsChanged(class APlayerState* State, int OldValue);
UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnAssistsChanged(class APlayerState* State, int OldValue);
UFUNCTION(BlueprintNativeEvent)
	void MatchTimeRanOut();
UFUNCTION(BlueprintNativeEvent)
	bool IsSpawnpointAllowed(class APlayerStart* PlayerStart, class AController* Player);
UFUNCTION(BlueprintNativeEvent)
	float GetSpawnpointPreference(class APlayerStart* PlayerStart, class AController* Player);
UFUNCTION(BlueprintCallable)
	TArray<struct FString> GetNextMaps(int Count);
UFUNCTION(BlueprintCallable)
	struct FString GetNextMap();
UFUNCTION(BlueprintCallable)
	TArray<struct FString> GetMapVoteMaps();
UFUNCTION(BlueprintCallable)
	TArray<uint8> GetMapVoteCounts();
UFUNCTION(BlueprintNativeEvent)
	float GetDamageFactor(class AActor* DamageSource, class AActor* DamageTarget);
UFUNCTION(BlueprintNativeEvent)
	bool ControllerCanRestart(class AController* Controller);
UFUNCTION(BlueprintCallable)
	bool ChangeLevel(const struct FString& LevelName);
UFUNCTION(BlueprintNativeEvent)
	bool CanDealDamage(class AActor* DamageSource, class AActor* DamageTarget);
UFUNCTION(BlueprintNativeEvent)
	bool CanClash(class APawn* Source, class APawn* Target);
UFUNCTION(BlueprintNativeEvent)
	bool CanChamber(class APawn* Source, class APawn* Target);
UFUNCTION(BlueprintCallable)
	void Broadcast(class AActor* Sender, const struct FString& Msg, const struct FName& Type);
UFUNCTION(BlueprintCallable)
	void AddTeamScore(int Team, float Amount);
UFUNCTION(BlueprintImplementableEvent)
	void AddBots(int Amount, int Team);
};
