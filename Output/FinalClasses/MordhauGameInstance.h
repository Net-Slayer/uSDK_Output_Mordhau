#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "MordhauGameInstance.generated.h"
// Class Mordhau.MordhauGameInstance
class MORDHAU_API UMordhauGameInstance  :  public UGameInstance
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FServerSearchResult ServerSession; // (BlueprintVisible, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FBasicServerInfo ServerInfo; // (BlueprintVisible, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FPlayFabServerDetails ServerDetails; // (BlueprintVisible, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FString ServerPassword; // (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	bool bServerFull; // (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int ChangeLevelCounter; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FText NetworkErrorText; // (BlueprintVisible, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly, EditAnywhere)
	TMap<struct FString, class UClass*> GameModeMetadata; // (Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly, EditAnywhere)
	TMap<struct FString, class UClass*> MapMetadata; // (Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<struct FText> Tips; // (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(Instanced, BlueprintAssignable)
	struct FScriptMulticastDelegate OnPartyUpdated; // (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	MordhauOnlineSubsystem_EServerRegion CurrentMatchmakingRegion; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<struct FString> CurrentMatchmakingGameModes; // (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(Instanced, BlueprintAssignable)
	struct FScriptMulticastDelegate OnMatchmakingRegionsDetermined; // (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	struct FString StartupMap; // (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	TArray<MordhauOnlineSubsystem_EServerRegion> CasualMatchmakingRegions; // (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	TArray<MordhauOnlineSubsystem_EServerRegion> RankedMatchmakingRegions; // (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(Instanced, BlueprintAssignable)
	struct FScriptMulticastDelegate OnPlayerInformationReceived; // (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	// Functions
UFUNCTION(BlueprintCallable)
	void UpdateParty(bool bUpdateProfile);
UFUNCTION()
	void UnregisterMetadata(int ModId);
UFUNCTION()
	void StopLoadingScreen();
UFUNCTION()
	void Shutdown();
UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void ShowPasswordDialog(const struct FServerSearchResult& SearchResult);
UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void ShowNetworkErrorDialog();
UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void ShowJoiningDialog(const struct FServerSearchResult& SearchResult);
UFUNCTION(BlueprintCallable)
	void ShowInviteDialog();
UFUNCTION(BlueprintCallable)
	void SetPartyServerDetails(const struct FPlayFabServerDetails& InServerDetails);
UFUNCTION(BlueprintCallable)
	void SetPartyMemberServerDetails(const struct FPlayFabServerDetails& InServerDetails);
UFUNCTION(BlueprintCallable)
	void SetPartyMemberProfile(const struct FPlayFabPlayer& Player, const struct FPlayerProfile& Profile);
UFUNCTION(BlueprintCallable)
	void SetPartyMatchmakingState(Mordhau_EMatchmakingState MatchmakingState);
UFUNCTION(BlueprintCallable)
	void SetPartyMatchmakingMembers(TArray<struct FString> Members);
UFUNCTION(BlueprintCallable)
	void SetPartyMatch(const struct FString& QueueName, const struct FString& MatchId);
UFUNCTION(BlueprintCallable)
	void SetPartyLeader(const struct FPlayFabPlayer& Player);
UFUNCTION(BlueprintCallable)
	void SetPartyGameServer(const struct FServerSearchResult& SearchResult);
UFUNCTION()
	void SetNetworkError(const struct FText& ErrorText);
UFUNCTION(BlueprintCallable)
	void SetMatchmakingMatchID(const struct FString& MatchId);
UFUNCTION()
	void SetLastPlayerLeaveTime(double InLastPlayerLeaveTime);
UFUNCTION()
	void SetIngameEvent(MordhauOnlineSubsystem_EIngameEvent InIngameEvent);
UFUNCTION(BlueprintCallable)
	bool ServerTravel(class UObject* WorldContextObject, const struct FString& MapName);
UFUNCTION(BlueprintCallable)
	void SaveConfig();
UFUNCTION()
	void RespondControllerConnectionChange(bool Status, int UserId, int ControllerId);
UFUNCTION(BlueprintCallable)
	void RequestPlayerInformation(const struct FPlayFabPlayer& Player);
UFUNCTION(BlueprintCallable)
	void RemovePartyMatchmakingTicket(const struct FString& QueueName);
UFUNCTION()
	void RegisterMetadata(int ModId, TArray<struct FString> AssetPaths);
UFUNCTION()
	void PerformPlatformLogin();
UFUNCTION()
	void OnStatsBecameAvailable();
UFUNCTION()
	void OnInventoryBecameAvailable();
UFUNCTION()
	void OnFindMordhauServerSessionByAddressSuccess(const struct FServerSearchResult& SearchResult);
UFUNCTION(BlueprintCallable)
	void LogMatchmakingState(const struct FString& Message);
UFUNCTION(BlueprintCallable)
	void LeaveParty();
UFUNCTION(BlueprintCallable)
	void KickPartyMember(const struct FPlayFabPlayer& Player);
UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void JoinSessionSearchResult(const struct FServerSearchResult& SearchResult);
UFUNCTION(BlueprintCallable)
	void JoinPartyGameServer();
UFUNCTION(BlueprintCallable, BlueprintPure)
	bool IsPartyReadyForMatchmaking();
UFUNCTION(BlueprintCallable)
	bool IsPartyMember(const struct FPlayFabPlayer& Player);
UFUNCTION(BlueprintCallable, BlueprintPure)
	bool IsPartyLeader();
UFUNCTION(BlueprintCallable, BlueprintPure)
	bool IsOfficialServerMuted();
UFUNCTION(BlueprintCallable, BlueprintPure)
	bool IsOfficialServerBanned();
UFUNCTION()
	bool IsLoggingIn();
UFUNCTION()
	bool IsLoggedIn();
UFUNCTION()
	bool IsLoadingScreenActive();
UFUNCTION(BlueprintCallable, BlueprintPure)
	bool IsInventoryAvailable();
UFUNCTION(BlueprintCallable, BlueprintPure)
	bool IsGlobalServerMuted();
UFUNCTION(BlueprintCallable, BlueprintPure)
	bool IsGlobalServerBanned();
UFUNCTION()
	void Init();
UFUNCTION()
	bool HasCompletedLogin();
UFUNCTION(BlueprintCallable)
	TMap<MordhauOnlineSubsystem_EServerLocation, int> GetServerRegionPings(MordhauOnlineSubsystem_EServerRegion Region);
UFUNCTION(BlueprintCallable)
	TArray<MordhauOnlineSubsystem_EServerLocation> GetServerLocationPreference(MordhauOnlineSubsystem_EServerRegion Region);
UFUNCTION()
	TMap<MordhauOnlineSubsystem_EServerLocation, int> GetServerLocationPings();
UFUNCTION()
	int GetServerLocationPing(MordhauOnlineSubsystem_EServerLocation Location);
UFUNCTION(BlueprintCallable)
	TArray<struct FString> GetProfaneWords();
UFUNCTION(BlueprintCallable, BlueprintPure)
	MordhauOnlineSubsystem_EPlatform GetPlatform();
UFUNCTION(BlueprintCallable, BlueprintPure)
	int GetPartySize();
UFUNCTION(BlueprintCallable)
	void GetPartyServerDetails(struct FPlayFabServerDetails* OutServerDetails, bool* bWasSuccessful);
UFUNCTION(BlueprintCallable, BlueprintPure)
	int GetPartyMMR(const struct FString& GameMode);
UFUNCTION(BlueprintCallable, BlueprintPure)
	struct FString GetPartyMemberStatus(const struct FPlayFabPlayer& Player);
UFUNCTION(BlueprintCallable)
	void GetPartyMemberServerDetails(const struct FPlayFabPlayer& Player, struct FPlayFabServerDetails* OutServerDetails, bool* bWasSuccessful);
UFUNCTION(BlueprintCallable)
	void GetPartyMemberServerAddress(const struct FPlayFabPlayer& Player, struct FServerAddress* Address, bool* bWasSuccessful);
UFUNCTION(BlueprintCallable, BlueprintPure)
	TArray<struct FPlayFabPlayer> GetPartyMembers();
UFUNCTION(BlueprintCallable)
	bool GetPartyMemberProfile(const struct FPlayFabPlayer& Player, struct FPlayerProfile* Profile);
UFUNCTION(BlueprintCallable, BlueprintPure)
	TArray<struct FPlayFabPlayerEntity> GetPartyMemberEntities();
UFUNCTION(BlueprintCallable)
	TArray<struct FMatchmakingTicket> GetPartyMatchmakingTickets();
UFUNCTION(BlueprintCallable, BlueprintPure)
	Mordhau_EMatchmakingState GetPartyMatchmakingState();
UFUNCTION(BlueprintCallable, BlueprintPure)
	TArray<struct FString> GetPartyMatchmakingMembers();
UFUNCTION(BlueprintCallable)
	void GetPartyMatch(struct FString* QueueName, struct FString* MatchId);
UFUNCTION(BlueprintCallable, BlueprintPure)
	struct FPlayFabPlayer GetPartyLeader();
UFUNCTION(BlueprintCallable, BlueprintPure)
	struct FString GetPartyID();
UFUNCTION(BlueprintCallable, BlueprintPure)
	struct FString GetPartyGroupID();
UFUNCTION(BlueprintCallable, BlueprintPure)
	TArray<struct FString> GetOtherPartyMembersEntityIDs();
UFUNCTION(BlueprintCallable)
	int GetOfficialServerMuteDuration();
UFUNCTION(BlueprintCallable)
	int GetOfficialServerBanDuration();
UFUNCTION(BlueprintCallable, BlueprintPure)
	int GetNumReservedSlots();
UFUNCTION()
	int GetNextMatchID();
UFUNCTION(BlueprintCallable, BlueprintPure)
	struct FString GetMatchmakingMatchID();
UFUNCTION(BlueprintCallable, BlueprintPure)
	struct FString GetMatchmakingGroupID();
UFUNCTION(BlueprintCallable)
	struct FMapInfo GetMapInfo(const struct FString& MapName);
UFUNCTION()
	double GetLastPlayerLeaveTime();
UFUNCTION()
	MordhauOnlineSubsystem_EIngameEvent GetIngameEvent();
UFUNCTION(BlueprintCallable)
	int GetGlobalServerMuteDuration();
UFUNCTION(BlueprintCallable)
	int GetGlobalServerBanDuration();
UFUNCTION(BlueprintCallable)
	TArray<struct FString> GetBlacklistedServers();
UFUNCTION()
	class UMapMetadata* FindMapMetadata(const struct FString& GameModeMapName);
UFUNCTION()
	class UGameModeMetadata* FindGameModeMetadata(const struct FString& GameModePrefix);
UFUNCTION()
	MordhauOnlineSubsystem_EServerRegion FindBestServerRegion();
UFUNCTION()
	MordhauOnlineSubsystem_EServerLocation FindBestServerLocation();
UFUNCTION(BlueprintCallable)
	void DetermineServerLocationPings();
UFUNCTION(BlueprintCallable)
	bool ClientTravelSession(const struct FServerSearchResult& SearchResult, const struct FString& Password);
UFUNCTION(BlueprintCallable)
	bool ClientTravelServerDetails(const struct FPlayFabServerDetails& InServerDetails, const struct FString& Password);
UFUNCTION(BlueprintCallable)
	bool ClientTravel(const struct FString& MapName, int PlayerCount);
UFUNCTION(BlueprintCallable)
	void ClearPartyServerDetails();
UFUNCTION(BlueprintCallable)
	void ClearPartyMemberServerDetails();
UFUNCTION(BlueprintCallable)
	void ClearPartyMemberProfile(const struct FPlayFabPlayer& Player);
UFUNCTION(BlueprintCallable)
	void ClearPartyMatchmakingTickets();
UFUNCTION(BlueprintCallable)
	void ClearPartyMatchmakingMembers();
UFUNCTION(BlueprintCallable)
	void ClearPartyMatch();
UFUNCTION(BlueprintCallable)
	void ClearPartyGameServer();
UFUNCTION(BlueprintCallable, BlueprintPure)
	bool CanLeaveParty();
UFUNCTION(BlueprintCallable, BlueprintPure)
	bool CanInviteToParty();
UFUNCTION(BlueprintCallable)
	void BPStopRecordingReplay();
UFUNCTION(BlueprintCallable)
	void BPStopPlayingReplay();
UFUNCTION(BlueprintCallable)
	void BPStartRecordingReplay(const struct FString& InName, const struct FString& FriendlyName, TArray<struct FString> AdditionalOptions);
UFUNCTION(BlueprintCallable)
	void BPPlayReplay(const struct FString& InName, TArray<struct FString> AdditionalOptions);
UFUNCTION(BlueprintCallable, BlueprintPure)
	bool AreStatsAvailable();
UFUNCTION(BlueprintCallable)
	void AddPartyMatchmakingTicket(const struct FString& QueueName, const struct FString& TicketId);
};
