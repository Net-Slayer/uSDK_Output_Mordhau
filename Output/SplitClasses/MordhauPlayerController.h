// Class Mordhau.MordhauPlayerController

// 0x0630 (FullSize[0x0BA0] - InheritedSize[0x0570])

class AMordhauPlayerController : public APlayerController

{

public:

	unsigned char                                      UnknownData_8Q8V[0x4];                                     // 0x0570(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	TWeakObjectPtr<class APawn>                        LastPawn;                                                  // 0x0574(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	unsigned char                                      UnknownData_VA2U[0x64];                                    // 0x057C(0x0064) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	class UTagSystemComponent*                         TagSystemComponent;                                        // 0x05E0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FScriptMulticastDelegate                    OnServerRestrictionInfoReceived;                           // 0x05E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	float                                              TotalMordhauCharacterTeamDamage;                           // 0x05F8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              TotalMordhauCharacterDamage;                               // 0x05FC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bIsAnythingRestockable;                                    // 0x0600(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_9VL5[0x3];                                     // 0x0601(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	int                                                SelectedCharacterProfile;                                  // 0x0604(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	int                                                SelectedDefaultProfile;                                    // 0x0608(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_WBSL[0x4];                                     // 0x060C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	struct FCharacterProfile                           CharacterProfile;                                          // 0x0610(0x00B8) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

	bool                                               bReceivedValidProfileFromClient;                           // 0x06C8(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_0CE7[0x3];                                     // 0x06C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              LastAskedForSpawnTime;                                     // 0x06CC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	int                                                SpawnToken;                                                // 0x06D0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_HUZ6[0xC];                                     // 0x06D4(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	struct FCharacterProfile                           LastSentCharacterProfile;                                  // 0x06E0(0x00B8) (NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_VMY8[0x8];                                     // 0x0798(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	class ACustomizationReplicationActor*              CustomizationReplicationActor;                             // 0x07A0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bSendsDefaultCustomization;                                // 0x07A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_9UBD[0x7];                                     // 0x07A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	TArray<struct FEquipmentCustomization>             DefaultCharacterEquipment;                                 // 0x07B0(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_L1Z4[0x10];                                    // 0x07C0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	TArray<struct FCharacterGearCustomization>         DefaultCharacterTier;                                      // 0x07D0(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_PL6T[0x8];                                     // 0x07E0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	struct FCharacterProfile                           PendingCharacterProfile;                                   // 0x07E8(0x00B8) (BlueprintVisible, NativeAccessSpecifierPublic)

	bool                                               bIsPendingCharacterProfileASelectedDefaultProfile;         // 0x08A0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_LX76[0x7];                                     // 0x08A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	struct FCharacterProfile                           ConstructingCharacterProfile;                              // 0x08A8(0x00B8) (NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_4X5S[0x4];                                     // 0x0960(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	TWeakObjectPtr<class AMordhauCharacter>            LastControlledCharacter;                                   // 0x0964(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_8VBH[0x54];                                    // 0x096C(0x0054) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              NextRespawnTime;                                           // 0x09C0(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_VC1C[0x2];                                     // 0x09C4(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	bool                                               bUseInstancing;                                            // 0x09C6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_5W6X[0x1];                                     // 0x09C7(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	unsigned char                                      InInstanceWithControllers[0x50];                           // 0x09C7(0x0050) UNKNOWN PROPERTY: SetProperty

	float                                              LocallyTrackedObjectiveScore;                              // 0x0A18(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bWantsBlockInput;                                          // 0x0A1C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_BHT5[0x3];                                     // 0x0A1D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              MaxAFKTime;                                                // 0x0A20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bOnlyAFKIfAlive;                                           // 0x0A24(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_KTG1[0x3];                                     // 0x0A25(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              CurrentAFKTime;                                            // 0x0A28(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FVector                                     LastAFKCheckCameraLocation;                                // 0x0A2C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bIsAuthenticating;                                         // 0x0A38(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bIsAuthenticated;                                          // 0x0A39(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bClientRequestedRewards;                                   // 0x0A3A(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bServerReceivedRewards;                                    // 0x0A3B(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	int                                                RewardedGold;                                              // 0x0A3C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	int                                                RewardedXP;                                                // 0x0A40(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FServerStats                                ServerStats;                                               // 0x0A44(0x0018) (NoDestructor, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_VGPH[0x4];                                     // 0x0A5C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	TArray<struct FString>                             MapVoteMaps;                                               // 0x0A60(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TArray<unsigned char>                              MapVoteCounts;                                             // 0x0A70(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	int                                                Rank;                                                      // 0x0A80(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_0QAL[0x4];                                     // 0x0A84(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	struct FString                                     MatchmakingMatchID;                                        // 0x0A88(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FPlayerCommand                              CurrentPlayerCommand;                                      // 0x0A98(0x0030) (NativeAccessSpecifierPublic)

	TArray<class UClass*>                              PreferredWeaponModes;                                      // 0x0AC8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_0BAC[0x10];                                    // 0x0AD8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	TArray<struct FString>                             ScreenshotFilenames;                                       // 0x0AE8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_OC61[0x20];                                    // 0x0AF8(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	bool                                               bServerSupportsLagReports;                                 // 0x0B18(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_98MJ[0x7F];                                    // 0x0B19(0x007F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	class UClass*                                      CataClass;                                                 // 0x0B98(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.MordhauPlayerController");

		return ptr;

	}







	void VoteMap(const struct FString& MapName);

	void VoteLevel(const struct FString& LevelName);

	void VoteKick(const struct FString& PlayerNameOrPlayFabID);

	void UpdateWeaponMode(class UClass* WeaponToUpdate, bool bAltMode);

	void Unmute(const struct FString& PlayerNameOrPlayFabID);

	void UnmountPak(const struct FString& PakPath);

	void Unban(const struct FString& PlayFabId);

	void Turn(float Value);

	void ToggleStamina();

	void ToggleServerNetProfile();

	void ToggleDamage();

	void TakeReportScreenshot();

	void StopServerStatsFile();

	void StartServerStatsFile();

	void SpectatorCmd(const struct FString& SpecCmd);

	void Slomo(float Value);

	void ShowTips();

	void ShowEquipment();

	void ShowAuthTraces(bool bValue);

	bool SharesInstanceWith(class AActor* OtherActor);

	void SetWeaponModesArray(TArray<class UClass*> InWeapons);

	void SetServerSupportsLagReports(bool bSupported);

	void SetMaxNetSkip(int NewMaxNetSkip);

	void SetFriendlyNetSkipOffset(int NewFriendlyNetSkipOffset);

	void SetChoiceMenuConsumesInput(bool Value);

	void ServerVoteLevel(const struct FString& LevelName);

	void ServerUnbanPlayer(const struct FString& PlayFabId);

	void ServerToggleStamina();

	void ServerToggleNetProfile();

	void ServerToggleDamage();

	void ServerStopServerStatsFile();

	void ServerStartServerStatsFile();

	void ServerSlomo(float Value);

	void ServerSetXPAndMMR(int XP, int DuelMMR, int TeamfightMMR, int CasualMMR);

	void ServerSetSpawnToken(int NewToken);

	void ServerSetSessionTicket(const struct FString& InSessionTicket);

	void ServerSetMaxNetSkip(int NewMaxNetSkip);

	void ServerSetMatchmakingMatchID(const struct FString& InMatchmakingMatchID);

	void ServerSetLevelDisplayType(unsigned char NewLevelDisplayType);

	void ServerSetFriendlyNetSkipOffset(int NewFriendlyNetSkipOffset);

	void ServerSetBadge(unsigned char NewBadge);

	void ServerRequestSphericalHitboxes();

	void ServerRequestSetTeam(int NewTeam);

	void ServerRequestSetSkillsCustomization(const struct FSkillsCustomization& NewCharacterSkills);

	void ServerRequestSetGearCustomization(const struct FCharacterGearCustomization& NewCharacterGear);

	void ServerRequestSetFaceCustomization(const struct FFaceCustomization& NewCharacterFace);

	void ServerRequestSetDefaultProfile(int NewDefaultProfile);

	void ServerRequestSetDefaultCharacterTiers(TArray<struct FCharacterGearCustomization> Tiers);

	void ServerRequestSetDefaultCharacterEquipment(TArray<struct FEquipmentCustomization> Equip);

	void ServerRequestSetAppearanceCustomization(const struct FAppearanceCustomization& NewCharacterAppearance);

	void ServerRequestAuthTraces(bool bEnabled);

	void ServerReportServerLag();

	void ServerRemoveBots(int Amount, int Team);

	void ServerRemoveAdmin(const struct FString& PlayFabId);

	void ServerPlayerStatus(const struct FString& PlayFabId);

	void ServerNotifyPlayerDisconnecting();

	void ServerNotifyItemsUnlocked();

	void ServerMuteList();

	void ServerKickPlayer(const struct FString& PlayFabId, const struct FString& KickReason);

	void ServerHasPassedCheck(unsigned char Param);

	void ServerGetServerStats();

	void ServerGetMapVoteMaps();

	void ServerGetMapVoteCounts();

	void ServerChatUnmutePlayer(const struct FString& PlayFabId);

	void ServerChatMutePlayer(const struct FString& PlayFabId, int MuteDuration);

	void ServerChangeLevel(const struct FString& LevelName);

	void ServerBanPlayer(const struct FString& PlayFabId, int BanDuration, const struct FString& BanReason);

	void ServerBanList();

	void ServerAdminLogin(const struct FString& Password);

	void ServerAdminList();

	void ServerAddBots(int Amount, int Team);

	void ServerAddAdmin(const struct FString& PlayFabId);

	void Server_Reliable_GiveCata();

	void SaveCurrentProfilesAsBotProfiles();

	void RequestSphericalHitboxes();

	void RequestServerRestrictionInfo();

	void RequestRewards();

	void RequestReportPlayer(const struct FString& ReporteePlayFabID, const struct FString& ReportType, const struct FString& Screenshot);

	void ReportServerLag();

	void ReportPlayer(const struct FString& ReporteePlayFabID, const struct FString& ReportType, const struct FString& ScreenshotFilename);

	void RemoveBotsTeam(int Amount, int Team);

	void RemoveBots(int Amount);

	void RemoveAdmin(const struct FString& PlayerNameOrPlayFabID);

	void RegisterAnglingYInput(float Value);

	void RegisterAnglingXInput(float Value);

	void ReceiveServerRestrictionInfo(const struct FServerRestrictionInfo& Info);

	void ProcessChatCommand(const struct FString& Prefix, const struct FString& Command, const struct FString& Args);

	void PrepareAndSendCustomizationIfChanged();

	void PlayerStatus(const struct FString& PlayFabId);

	void PlayerList();

	void ParryThis();

	void OnSpectatorCmd(const struct FString& Cmd, const struct FString& Param);

	void OnSpectatorAction(unsigned char Action);

	void OnSettingsChanged();

	void OnRequestVoteKick(class AMordhauPlayerState* TargetPlayer);

	void OnRequestCancelVoteKick();

	void OnReceivedKillScore(class AMordhauCharacter* Killed);

	void OnReceivedAssistScore(float Percentage, class AMordhauCharacter* Killed);

	void OnPlayFabLoginComplete(bool bWasSuccessful, const struct FString& PlayFabId);

	void OnNewProfileFromClientPreValidation();

	void OnNewProfileFromClientPostValidation();

	void OnMordhauCharacterSpawned(class AMordhauCharacter* SpawnedCharacter);

	void OnIsAnythingRestockableChanged();

	void OnInventoryItemsUnlocked(bool bWasSuccessful, TArray<struct FItemStack> ItemStacks);

	void OnHighlightStart(class AActor* Actor);

	void OnHighlightEnd(class AActor* Actor);

	void OnGetPlayFabPlayerComplete(bool bWasSuccessful, const struct FString& PlayFabId, const struct FPlayFabPlayer& PlayFabPlayer);

	void OnGetPlayFabIDsFromPlatformIDsComplete(bool bWasSuccessful, TMap<struct FString, struct FString> PlayFabIds);

	void OnAmmoChanged(class AMordhauEquipment* Equipment, int AmmoDifference);

	void OnAfterUnPossess();

	void OnAfterPossess(class APawn* APawn);

	void OnAFKTimeExceededMaximum();

	void OnActionFailed(const struct FName& Reason);

	void MuteList();

	void Mute(const struct FString& PlayerNameOrPlayFabID, int MuteDuration);

	void MountPak(const struct FString& PakPath);

	void LookupPlayer(const struct FString& UniqueId);

	void LookUp(float Value);

	void Kick(const struct FString& PlayerNameOrPlayFabID, const struct FString& KickReason);

	bool IsSessionTicketAvailable();

	bool IsInventoryAvailable();

	bool IsAuthenticating();

	bool IsAuthenticated();

	bool IsAllowedServer(const struct FString& Command);

	bool IsAllowedClient(const struct FString& Command);

	bool IsAdmin();

	void GiveClientScoreBP(Mordhau_EScoreFeedReason Reason, int ScoreAmount);

	void GiveCata();

	struct FPlayFabPlayer GetPlayFabPlayer();

	struct FString GetPlayFabId();

	class AAdvancedCharacter* GetNextViewablePlayerNonAuth(bool bReverse, bool bOnlyOwnTeam);

	class AMordhauCharacter* GetLastControlledCharacter();

	bool GetDefaultTierCustomizationForSlot(Mordhau_EMainWearableSlot MainSlot, unsigned char ArmorTier, TMap<Mordhau_EWearableSlot, struct FWearableCustomization>* OutMap);

	bool GetDefaultEquipmentCustomizationFor(class UClass* ForEquipmentClass, struct FEquipmentCustomization* OutCustomization);

	class AMordhauCharacter* GetControlledMordhauCharacter(bool bAlsoSearchVehicle);

	struct FVector2D GetAnglingVector();

	float GetAnglingAngle();

	void FlushPendingAnglingInputs();

	void EquipmentCommand(int Command);

	void DisplayMessage(class APlayerState* SenderPlayerState, const struct FString& S, const struct FName& Type, float MsgLifeTime);

	void DisplayAnnouncement(const struct FString& Text, const struct FString& Subtext, float Duration);

	void CopyName(const struct FString& UniqueId);

	void CopyID(const struct FString& UniqueId);

	int ComputePlayerRank();

	void ClientWasKicked_Implementation(const struct FText& KickReason);

	void ClientSetServerStats(const struct FServerStats& InServerStats);

	void ClientSetServerInfo(const struct FBasicServerInfo& ServerInfo);

	void ClientSetPlayFabMatch(const struct FPlayFabMatch& InMatch);

	void ClientSetMapVoteMaps(TArray<struct FString> InMapVoteMaps);

	void ClientSetMapVoteCounts(TArray<unsigned char> InMapVoteCounts);

	void ClientSetFlags(const struct FString& InMyFlags, TArray<struct FAdminFlag> InAdminFlags);

	void ClientSetControlAndPawnRotation(class APawn* APawn, const struct FRotator& NewRotation);

	void ClientRequestXPAndMMR();

	void ClientRequestSessionTicket();

	void ClientRequestMatchmakingMatchID();

	void ClientReceiveSphericalHitboxes(TArray<struct FVector> Locations, const struct FVector& WeaponTraceStart, const struct FVector& WeaponTraceEnd);

	void ClientReceiveScoreNoState(unsigned char ReasonAndParam, int16_t ScoreAmount);

	void ClientReceiveScoreBP(Mordhau_EScoreFeedReason Reason, unsigned char ReasonParam, float ScoreAmount, class AMordhauPlayerState* AssociatedPlayer);

	void ClientReceiveScore(unsigned char ReasonAndParam, int16_t ScoreAmount, class AMordhauPlayerState* AssociatedPlayer);

	void ClientReceiveMessage(const struct FString& Message);

	void ClientMessageBP(const struct FString& String);

	void ClientDrawTracer(const struct FVector& Start, const struct FVector& End);

	void ChooseExit();

	void Choose9();

	void Choose8();

	void Choose7();

	void Choose6();

	void Choose5();

	void Choose4();

	void Choose3();

	void Choose2();

	void Choose1();

	void ChoiceMenuOptionSelected(int Choice);

	void ChoiceMenu(int Index);

	void ChangeMap(const struct FString& MapName);

	void ChangeLevel(const struct FString& LevelName);

	void CancelVoteKick();

	bool CanAskForSpawn();

	void BanList();

	void Ban(const struct FString& PlayerNameOrPlayFabID, int BanDuration, const struct FString& BanReason);

	void AskForSpawn();

	bool AreStatsAvailable();

	void AdminLogin(const struct FString& Password);

	void AdminList();

	void AddBotsTeam(int Amount, int Team);

	void AddBots(int Amount);

	void AddAdmin(const struct FString& PlayerNameOrPlayFabID);

};



