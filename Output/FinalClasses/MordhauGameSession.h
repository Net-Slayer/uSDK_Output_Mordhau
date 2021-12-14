#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "MordhauGameSession.generated.h"
// Class Mordhau.MordhauGameSession
class MORDHAU_API AMordhauGameSession  :  public AGameSession
{
GENERATED_BODY()
public:
// Variables
UPROPERTY()
	int MaxSlots; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FString ServerName; // (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FString ServerPassword; // (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	TArray<int> Mods; // (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FString AdminPassword; // (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FString RconPassword; // (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	float RconTimeout; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	int RconPort; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	bool bRconTieredAdmins; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	bool bAllowHttpRequests; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	int MaxNetSkip; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	int FriendlyNetSkipOffset; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	TArray<struct FString> Admins; // (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	TMap<struct FString, int64_t> BannedPlayers; // (Config, NativeAccessSpecifierPublic)
UPROPERTY()
	TMap<struct FString, int64_t> MutedPlayers; // (Config, NativeAccessSpecifierPublic)
UPROPERTY()
	TArray<uint64_t> LegacyAdmins; // (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	TMap<uint64_t, int64_t> LegacyBannedPlayers; // (Config, NativeAccessSpecifierPublic)
UPROPERTY()
	TMap<uint64_t, int64_t> LegacyMutedPlayers; // (Config, NativeAccessSpecifierPublic)
UPROPERTY()
	bool bAdvertiseServerViaSteam; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	bool bUseLegacyPakMounting; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	bool bUseOfficialBanList; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	bool bUseOfficialMuteList; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(Instanced, BlueprintAssignable)
	struct FScriptMulticastDelegate OnRequestBan; // (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
UPROPERTY(Instanced, BlueprintAssignable)
	struct FScriptMulticastDelegate OnRequestUnban; // (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
UPROPERTY(Instanced, BlueprintAssignable)
	struct FScriptMulticastDelegate OnRequestMute; // (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
UPROPERTY(Instanced, BlueprintAssignable)
	struct FScriptMulticastDelegate OnRequestUnmute; // (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
UPROPERTY(Instanced, BlueprintAssignable)
	struct FScriptMulticastDelegate OnRequestKick; // (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
UPROPERTY(Instanced, BlueprintAssignable)
	struct FScriptMulticastDelegate OnMatchStateChanged; // (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
UPROPERTY()
	bool bAllowJsonForRconClients; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	int MaxRconPacketSize; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	bool bUseAdminTierSystem; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FString AdminActionWebhookURL; // (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FString AdminActionChatColor; // (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FString AdminPunishmentWebhookURL; // (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FString AdminPunishmentColor; // (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FString AdminChatCommandWebhookURL; // (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FString AdminChatCommandColor; // (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FString ServerLagReportsWebhookURL; // (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FString ServerLagReportColor; // (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FString ServerLagReportColor2; // (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FString ChatFeedWebhookURL; // (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FString ChatFeedColor; // (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	TArray<class URconCommand*> RconCommands; // (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	TMap<struct FString, struct FRconFlag> RconFlags; // (NativeAccessSpecifierPublic)
	// Functions
UFUNCTION(BlueprintCallable)
	void UploadAdminActionDataToWebhook(const struct FString& Command, const struct FPlayFabPlayer& Sender, const struct FString& Details);
UFUNCTION(BlueprintCallable)
	bool UnmutePlayer(const struct FString& PlayFabId, bool bExpired);
UFUNCTION(BlueprintCallable)
	bool UnbanPlayer(const struct FString& PlayFabId, bool bExpired);
UFUNCTION(BlueprintCallable)
	void TriggerRewardDropForPlayer(class APlayerController* Player);
UFUNCTION(BlueprintCallable)
	void TriggerRewardDrop();
UFUNCTION(BlueprintCallable)
	void ReportTimeLeft(TArray<float> TimeLeft);
UFUNCTION(BlueprintCallable)
	bool ReportPlayer(const struct FString& ReporteePlayFabID, const struct FString& ReporterPlayFabID, const struct FString& ReportType, const struct FString& ScreenshotFilename);
UFUNCTION(BlueprintCallable)
	void RemoveAdmin(class APlayerController* AdminPlayer);
UFUNCTION(BlueprintCallable)
	bool MutePlayerWithDuration(class APlayerController* MutedPlayer, int MuteDuration);
UFUNCTION(BlueprintCallable)
	bool MutePlayer(class APlayerController* MutedPlayer);
UFUNCTION(BlueprintCallable)
	bool KickPlayer(class APlayerController* KickedPlayer, const struct FText& KickReason);
UFUNCTION(BlueprintCallable, BlueprintPure)
	bool IsPlayerMuted(const struct FString& PlayFabId);
UFUNCTION(BlueprintCallable, BlueprintPure)
	bool IsPlayerBanned(const struct FString& PlayFabId);
UFUNCTION(BlueprintCallable, BlueprintPure)
	int GetPlayerMuteDuration(const struct FString& PlayFabId);
UFUNCTION(BlueprintCallable, BlueprintPure)
	int GetPlayerBanDuration(const struct FString& PlayFabId);
UFUNCTION(BlueprintCallable)
	bool BanPlayerWithDuration(class APlayerController* BannedPlayer, int BanDuration, const struct FText& BanReason);
UFUNCTION(BlueprintCallable)
	bool BanPlayer(class APlayerController* BannedPlayer, const struct FText& BanReason);
UFUNCTION(BlueprintCallable, BlueprintPure)
	bool AllowsJoin();
UFUNCTION(BlueprintCallable)
	void AllowJoin(bool bInAllowJoin);
UFUNCTION(BlueprintCallable)
	void AddTieredAdmin(class APlayerController* AdminPlayer, const struct FString& Tier);
UFUNCTION(BlueprintCallable)
	void AddAdmin(class APlayerController* AdminPlayer);
};
