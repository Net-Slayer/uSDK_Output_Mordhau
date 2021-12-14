// Class Mordhau.MordhauGameInstance

// 0x09E8 (FullSize[0x0B80] - InheritedSize[0x0198])

class UMordhauGameInstance : public UGameInstance

{

public:

	unsigned char                                      UnknownData_SQBA[0x5D0];                                   // 0x0198(0x05D0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	struct FServerSearchResult                         ServerSession;                                             // 0x0768(0x0110) (BlueprintVisible, NativeAccessSpecifierPublic)

	struct FBasicServerInfo                            ServerInfo;                                                // 0x0878(0x0018) (BlueprintVisible, NativeAccessSpecifierPublic)

	struct FPlayFabServerDetails                       ServerDetails;                                             // 0x0890(0x0028) (BlueprintVisible, NativeAccessSpecifierPublic)

	struct FString                                     ServerPassword;                                            // 0x08B8(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bServerFull;                                               // 0x08C8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_Y3L5[0x3];                                     // 0x08C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	int                                                ChangeLevelCounter;                                        // 0x08CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FText                                       NetworkErrorText;                                          // 0x08D0(0x0018) (BlueprintVisible, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_97ZX[0xA0];                                    // 0x08E8(0x00A0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	TMap<struct FString, class UClass*>                GameModeMetadata;                                          // 0x0988(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, NativeAccessSpecifierPublic)

	TMap<struct FString, class UClass*>                MapMetadata;                                               // 0x09D8(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, NativeAccessSpecifierPublic)

	TArray<struct FText>                               Tips;                                                      // 0x0A28(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FScriptMulticastDelegate                    OnPartyUpdated;                                            // 0x0A38(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	MordhauOnlineSubsystem_EServerRegion               CurrentMatchmakingRegion;                                  // 0x0A48(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_QMEN[0x7];                                     // 0x0A49(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	TArray<struct FString>                             CurrentMatchmakingGameModes;                               // 0x0A50(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FScriptMulticastDelegate                    OnMatchmakingRegionsDetermined;                            // 0x0A60(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_888Z[0xD0];                                    // 0x0A70(0x00D0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	struct FString                                     StartupMap;                                                // 0x0B40(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TArray<MordhauOnlineSubsystem_EServerRegion>       CasualMatchmakingRegions;                                  // 0x0B50(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TArray<MordhauOnlineSubsystem_EServerRegion>       RankedMatchmakingRegions;                                  // 0x0B60(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FScriptMulticastDelegate                    OnPlayerInformationReceived;                               // 0x0B70(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.MordhauGameInstance");

		return ptr;

	}







	void UpdateParty(bool bUpdateProfile);

	void UnregisterMetadata(int ModId);

	void StopLoadingScreen();

	void Shutdown();

	void ShowPasswordDialog(const struct FServerSearchResult& SearchResult);

	void ShowNetworkErrorDialog();

	void ShowJoiningDialog(const struct FServerSearchResult& SearchResult);

	void ShowInviteDialog();

	void SetPartyServerDetails(const struct FPlayFabServerDetails& InServerDetails);

	void SetPartyMemberServerDetails(const struct FPlayFabServerDetails& InServerDetails);

	void SetPartyMemberProfile(const struct FPlayFabPlayer& Player, const struct FPlayerProfile& Profile);

	void SetPartyMatchmakingState(Mordhau_EMatchmakingState MatchmakingState);

	void SetPartyMatchmakingMembers(TArray<struct FString> Members);

	void SetPartyMatch(const struct FString& QueueName, const struct FString& MatchId);

	void SetPartyLeader(const struct FPlayFabPlayer& Player);

	void SetPartyGameServer(const struct FServerSearchResult& SearchResult);

	void SetNetworkError(const struct FText& ErrorText);

	void SetMatchmakingMatchID(const struct FString& MatchId);

	void SetLastPlayerLeaveTime(double InLastPlayerLeaveTime);

	void SetIngameEvent(MordhauOnlineSubsystem_EIngameEvent InIngameEvent);

	bool ServerTravel(class UObject* WorldContextObject, const struct FString& MapName);

	void SaveConfig();

	void RespondControllerConnectionChange(bool Status, int UserId, int ControllerId);

	void RequestPlayerInformation(const struct FPlayFabPlayer& Player);

	void RemovePartyMatchmakingTicket(const struct FString& QueueName);

	void RegisterMetadata(int ModId, TArray<struct FString> AssetPaths);

	void PerformPlatformLogin();

	void OnStatsBecameAvailable();

	void OnInventoryBecameAvailable();

	void OnFindMordhauServerSessionByAddressSuccess(const struct FServerSearchResult& SearchResult);

	void LogMatchmakingState(const struct FString& Message);

	void LeaveParty();

	void KickPartyMember(const struct FPlayFabPlayer& Player);

	void JoinSessionSearchResult(const struct FServerSearchResult& SearchResult);

	void JoinPartyGameServer();

	bool IsPartyReadyForMatchmaking();

	bool IsPartyMember(const struct FPlayFabPlayer& Player);

	bool IsPartyLeader();

	bool IsOfficialServerMuted();

	bool IsOfficialServerBanned();

	bool IsLoggingIn();

	bool IsLoggedIn();

	bool IsLoadingScreenActive();

	bool IsInventoryAvailable();

	bool IsGlobalServerMuted();

	bool IsGlobalServerBanned();

	void Init();

	bool HasCompletedLogin();

	TMap<MordhauOnlineSubsystem_EServerLocation, int> GetServerRegionPings(MordhauOnlineSubsystem_EServerRegion Region);

	TArray<MordhauOnlineSubsystem_EServerLocation> GetServerLocationPreference(MordhauOnlineSubsystem_EServerRegion Region);

	TMap<MordhauOnlineSubsystem_EServerLocation, int> GetServerLocationPings();

	int GetServerLocationPing(MordhauOnlineSubsystem_EServerLocation Location);

	TArray<struct FString> GetProfaneWords();

	MordhauOnlineSubsystem_EPlatform GetPlatform();

	int GetPartySize();

	void GetPartyServerDetails(struct FPlayFabServerDetails* OutServerDetails, bool* bWasSuccessful);

	int GetPartyMMR(const struct FString& GameMode);

	struct FString GetPartyMemberStatus(const struct FPlayFabPlayer& Player);

	void GetPartyMemberServerDetails(const struct FPlayFabPlayer& Player, struct FPlayFabServerDetails* OutServerDetails, bool* bWasSuccessful);

	void GetPartyMemberServerAddress(const struct FPlayFabPlayer& Player, struct FServerAddress* Address, bool* bWasSuccessful);

	TArray<struct FPlayFabPlayer> GetPartyMembers();

	bool GetPartyMemberProfile(const struct FPlayFabPlayer& Player, struct FPlayerProfile* Profile);

	TArray<struct FPlayFabPlayerEntity> GetPartyMemberEntities();

	TArray<struct FMatchmakingTicket> GetPartyMatchmakingTickets();

	Mordhau_EMatchmakingState GetPartyMatchmakingState();

	TArray<struct FString> GetPartyMatchmakingMembers();

	void GetPartyMatch(struct FString* QueueName, struct FString* MatchId);

	struct FPlayFabPlayer GetPartyLeader();

	struct FString GetPartyID();

	struct FString GetPartyGroupID();

	TArray<struct FString> GetOtherPartyMembersEntityIDs();

	int GetOfficialServerMuteDuration();

	int GetOfficialServerBanDuration();

	int GetNumReservedSlots();

	int GetNextMatchID();

	struct FString GetMatchmakingMatchID();

	struct FString GetMatchmakingGroupID();

	struct FMapInfo GetMapInfo(const struct FString& MapName);

	double GetLastPlayerLeaveTime();

	MordhauOnlineSubsystem_EIngameEvent GetIngameEvent();

	int GetGlobalServerMuteDuration();

	int GetGlobalServerBanDuration();

	TArray<struct FString> GetBlacklistedServers();

	class UMapMetadata* FindMapMetadata(const struct FString& GameModeMapName);

	class UGameModeMetadata* FindGameModeMetadata(const struct FString& GameModePrefix);

	MordhauOnlineSubsystem_EServerRegion FindBestServerRegion();

	MordhauOnlineSubsystem_EServerLocation FindBestServerLocation();

	void DetermineServerLocationPings();

	bool ClientTravelSession(const struct FServerSearchResult& SearchResult, const struct FString& Password);

	bool ClientTravelServerDetails(const struct FPlayFabServerDetails& InServerDetails, const struct FString& Password);

	bool ClientTravel(const struct FString& MapName, int PlayerCount);

	void ClearPartyServerDetails();

	void ClearPartyMemberServerDetails();

	void ClearPartyMemberProfile(const struct FPlayFabPlayer& Player);

	void ClearPartyMatchmakingTickets();

	void ClearPartyMatchmakingMembers();

	void ClearPartyMatch();

	void ClearPartyGameServer();

	bool CanLeaveParty();

	bool CanInviteToParty();

	void BPStopRecordingReplay();

	void BPStopPlayingReplay();

	void BPStartRecordingReplay(const struct FString& InName, const struct FString& FriendlyName, TArray<struct FString> AdditionalOptions);

	void BPPlayReplay(const struct FString& InName, TArray<struct FString> AdditionalOptions);

	bool AreStatsAvailable();

	void AddPartyMatchmakingTicket(const struct FString& QueueName, const struct FString& TicketId);

};



