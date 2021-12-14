#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "MordhauPlayerController.generated.h"
// Class Mordhau.MordhauPlayerController
class MORDHAU_API AMordhauPlayerController  :  public APlayerController
{
GENERATED_BODY()
public:
// Variables
UPROPERTY()
	TWeakObjectPtr<class APawn> LastPawn; // (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
UPROPERTY(BlueprintReadOnly, Export, Instanced)
	class UTagSystemComponent* TagSystemComponent; // (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(Instanced, BlueprintAssignable)
	struct FScriptMulticastDelegate OnServerRestrictionInfoReceived; // (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float TotalMordhauCharacterTeamDamage; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float TotalMordhauCharacterDamage; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	bool bIsAnythingRestockable; // (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int SelectedCharacterProfile; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int SelectedDefaultProfile; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	struct FCharacterProfile CharacterProfile; // (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bReceivedValidProfileFromClient; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float LastAskedForSpawnTime; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int SpawnToken; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FCharacterProfile LastSentCharacterProfile; // (NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	class ACustomizationReplicationActor* CustomizationReplicationActor; // (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bSendsDefaultCustomization; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<struct FEquipmentCustomization> DefaultCharacterEquipment; // (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<struct FCharacterGearCustomization> DefaultCharacterTier; // (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FCharacterProfile PendingCharacterProfile; // (BlueprintVisible, NativeAccessSpecifierPublic)
UPROPERTY()
	bool bIsPendingCharacterProfileASelectedDefaultProfile; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FCharacterProfile ConstructingCharacterProfile; // (NativeAccessSpecifierPublic)
UPROPERTY()
	TWeakObjectPtr<class AMordhauCharacter> LastControlledCharacter; // (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
	float NextRespawnTime; // (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bUseInstancing; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8 InInstanceWithControllers[0x50]; // UNKNOWN PROPERTY: SetProperty
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float LocallyTrackedObjectiveScore; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bWantsBlockInput; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float MaxAFKTime; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bOnlyAFKIfAlive; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float CurrentAFKTime; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FVector LastAFKCheckCameraLocation; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	bool bIsAuthenticating; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	bool bIsAuthenticated; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	bool bClientRequestedRewards; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	bool bServerReceivedRewards; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	int RewardedGold; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	int RewardedXP; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FServerStats ServerStats; // (NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	TArray<struct FString> MapVoteMaps; // (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	TArray<uint8> MapVoteCounts; // (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	int Rank; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	struct FString MatchmakingMatchID; // (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FPlayerCommand CurrentPlayerCommand; // (NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
	TArray<class UClass*> PreferredWeaponModes; // (Edit, BlueprintVisible, ZeroConstructor, Transient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	TArray<struct FString> ScreenshotFilenames; // (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	bool bServerSupportsLagReports; // (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(EditAnywhere, EditDefaultsOnly)
	class UClass* CataClass; // (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// Functions
UFUNCTION()
	void VoteMap(const struct FString& MapName);
UFUNCTION()
	void VoteLevel(const struct FString& LevelName);
UFUNCTION()
	void VoteKick(const struct FString& PlayerNameOrPlayFabID);
UFUNCTION(Server, Reliable, BlueprintNativeEvent)
	void UpdateWeaponMode(class UClass* WeaponToUpdate, bool bAltMode);
UFUNCTION()
	void Unmute(const struct FString& PlayerNameOrPlayFabID);
UFUNCTION()
	void UnmountPak(const struct FString& PakPath);
UFUNCTION()
	void Unban(const struct FString& PlayFabId);
UFUNCTION()
	void Turn(float Value);
UFUNCTION()
	void ToggleStamina();
UFUNCTION()
	void ToggleServerNetProfile();
UFUNCTION()
	void ToggleDamage();
UFUNCTION()
	void TakeReportScreenshot();
UFUNCTION()
	void StopServerStatsFile();
UFUNCTION()
	void StartServerStatsFile();
UFUNCTION()
	void SpectatorCmd(const struct FString& SpecCmd);
UFUNCTION()
	void Slomo(float Value);
UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void ShowTips();
UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void ShowEquipment();
UFUNCTION()
	void ShowAuthTraces(bool bValue);
UFUNCTION(BlueprintCallable, BlueprintPure)
	bool SharesInstanceWith(class AActor* OtherActor) const;
UFUNCTION(Server, Reliable, BlueprintNativeEvent)
	void SetWeaponModesArray(TArray<class UClass*> InWeapons);
UFUNCTION(Client, Reliable, BlueprintNativeEvent)
	void SetServerSupportsLagReports(bool bSupported);
UFUNCTION()
	void SetMaxNetSkip(int NewMaxNetSkip);
UFUNCTION()
	void SetFriendlyNetSkipOffset(int NewFriendlyNetSkipOffset);
UFUNCTION(BlueprintCallable)
	void SetChoiceMenuConsumesInput(bool Value);
UFUNCTION(Server, Reliable, BlueprintNativeEvent)
	void ServerVoteLevel(const struct FString& LevelName);
UFUNCTION(Server, Reliable, BlueprintNativeEvent)
	void ServerUnbanPlayer(const struct FString& PlayFabId);
UFUNCTION(Server, Reliable, BlueprintNativeEvent)
	void ServerToggleStamina();
UFUNCTION(Server, Reliable, BlueprintNativeEvent)
	void ServerToggleNetProfile();
UFUNCTION(Server, Reliable, BlueprintNativeEvent)
	void ServerToggleDamage();
UFUNCTION(Server, Reliable, BlueprintNativeEvent)
	void ServerStopServerStatsFile();
UFUNCTION(Server, Reliable, BlueprintNativeEvent)
	void ServerStartServerStatsFile();
UFUNCTION(Server, Reliable, BlueprintNativeEvent)
	void ServerSlomo(float Value);
UFUNCTION(Server, Reliable, BlueprintNativeEvent)
	void ServerSetXPAndMMR(int XP, int DuelMMR, int TeamfightMMR, int CasualMMR);
UFUNCTION(Server, Reliable, BlueprintNativeEvent)
	void ServerSetSpawnToken(int NewToken);
UFUNCTION(Server, Reliable, BlueprintNativeEvent)
	void ServerSetSessionTicket(const struct FString& InSessionTicket);
UFUNCTION(Server, Reliable, BlueprintNativeEvent)
	void ServerSetMaxNetSkip(int NewMaxNetSkip);
UFUNCTION(Server, Reliable, BlueprintNativeEvent)
	void ServerSetMatchmakingMatchID(const struct FString& InMatchmakingMatchID);
UFUNCTION(Server, Reliable, BlueprintNativeEvent)
	void ServerSetLevelDisplayType(uint8 NewLevelDisplayType);
UFUNCTION(Server, Reliable, BlueprintNativeEvent)
	void ServerSetFriendlyNetSkipOffset(int NewFriendlyNetSkipOffset);
UFUNCTION(Server, Reliable, BlueprintNativeEvent)
	void ServerSetBadge(uint8 NewBadge);
UFUNCTION(Server, Reliable, BlueprintNativeEvent)
	void ServerRequestSphericalHitboxes();
UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent)
	void ServerRequestSetTeam(int NewTeam);
UFUNCTION(Server, Reliable, BlueprintNativeEvent)
	void ServerRequestSetSkillsCustomization(const struct FSkillsCustomization& NewCharacterSkills);
UFUNCTION(Server, Reliable, BlueprintNativeEvent)
	void ServerRequestSetGearCustomization(const struct FCharacterGearCustomization& NewCharacterGear);
UFUNCTION(Server, Reliable, BlueprintNativeEvent)
	void ServerRequestSetFaceCustomization(const struct FFaceCustomization& NewCharacterFace);
UFUNCTION(Server, Reliable, BlueprintNativeEvent)
	void ServerRequestSetDefaultProfile(int NewDefaultProfile);
UFUNCTION(Server, Reliable, BlueprintNativeEvent)
	void ServerRequestSetDefaultCharacterTiers(TArray<struct FCharacterGearCustomization> Tiers);
UFUNCTION(Server, Reliable, BlueprintNativeEvent)
	void ServerRequestSetDefaultCharacterEquipment(TArray<struct FEquipmentCustomization> Equip);
UFUNCTION(Server, Reliable, BlueprintNativeEvent)
	void ServerRequestSetAppearanceCustomization(const struct FAppearanceCustomization& NewCharacterAppearance);
UFUNCTION(Server, Reliable, BlueprintNativeEvent)
	void ServerRequestAuthTraces(bool bEnabled);
UFUNCTION(Server, Reliable, BlueprintNativeEvent)
	void ServerReportServerLag();
UFUNCTION(Server, Reliable, BlueprintNativeEvent)
	void ServerRemoveBots(int Amount, int Team);
UFUNCTION(Server, Reliable, BlueprintNativeEvent)
	void ServerRemoveAdmin(const struct FString& PlayFabId);
UFUNCTION(Server, Reliable, BlueprintNativeEvent)
	void ServerPlayerStatus(const struct FString& PlayFabId);
UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent)
	void ServerNotifyPlayerDisconnecting();
UFUNCTION(Server, Reliable, BlueprintNativeEvent)
	void ServerNotifyItemsUnlocked();
UFUNCTION(Server, Reliable, BlueprintNativeEvent)
	void ServerMuteList();
UFUNCTION(Server, Reliable, BlueprintNativeEvent)
	void ServerKickPlayer(const struct FString& PlayFabId, const struct FString& KickReason);
UFUNCTION(Server, Reliable, BlueprintNativeEvent)
	void ServerHasPassedCheck(uint8 Param);
UFUNCTION(Server, BlueprintNativeEvent)
	void ServerGetServerStats();
UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent)
	void ServerGetMapVoteMaps();
UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent)
	void ServerGetMapVoteCounts();
UFUNCTION(Server, Reliable, BlueprintNativeEvent)
	void ServerChatUnmutePlayer(const struct FString& PlayFabId);
UFUNCTION(Server, Reliable, BlueprintNativeEvent)
	void ServerChatMutePlayer(const struct FString& PlayFabId, int MuteDuration);
UFUNCTION(Server, Reliable, BlueprintNativeEvent)
	void ServerChangeLevel(const struct FString& LevelName);
UFUNCTION(Server, Reliable, BlueprintNativeEvent)
	void ServerBanPlayer(const struct FString& PlayFabId, int BanDuration, const struct FString& BanReason);
UFUNCTION(Server, Reliable, BlueprintNativeEvent)
	void ServerBanList();
UFUNCTION(Server, Reliable, BlueprintNativeEvent)
	void ServerAdminLogin(const struct FString& Password);
UFUNCTION(Server, Reliable, BlueprintNativeEvent)
	void ServerAdminList();
UFUNCTION(Server, Reliable, BlueprintNativeEvent)
	void ServerAddBots(int Amount, int Team);
UFUNCTION(Server, Reliable, BlueprintNativeEvent)
	void ServerAddAdmin(const struct FString& PlayFabId);
UFUNCTION(Server, Reliable, BlueprintNativeEvent)
	void Server_Reliable_GiveCata();
UFUNCTION()
	void SaveCurrentProfilesAsBotProfiles();
UFUNCTION()
	void RequestSphericalHitboxes();
UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent)
	void RequestServerRestrictionInfo();
UFUNCTION(BlueprintCallable)
	void RequestRewards();
UFUNCTION(BlueprintCallable, Client, Reliable, BlueprintNativeEvent)
	void RequestReportPlayer(const struct FString& ReporteePlayFabID, const struct FString& ReportType, const struct FString& Screenshot);
UFUNCTION(BlueprintCallable)
	void ReportServerLag();
UFUNCTION(Server, Reliable, BlueprintNativeEvent)
	void ReportPlayer(const struct FString& ReporteePlayFabID, const struct FString& ReportType, const struct FString& ScreenshotFilename);
UFUNCTION()
	void RemoveBotsTeam(int Amount, int Team);
UFUNCTION()
	void RemoveBots(int Amount);
UFUNCTION()
	void RemoveAdmin(const struct FString& PlayerNameOrPlayFabID);
UFUNCTION(BlueprintCallable)
	void RegisterAnglingYInput(float Value);
UFUNCTION(BlueprintCallable)
	void RegisterAnglingXInput(float Value);
UFUNCTION(Client, Reliable, BlueprintNativeEvent)
	void ReceiveServerRestrictionInfo(const struct FServerRestrictionInfo& Info);
UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void ProcessChatCommand(const struct FString& Prefix, const struct FString& Command, const struct FString& Args);
UFUNCTION(BlueprintCallable)
	void PrepareAndSendCustomizationIfChanged();
UFUNCTION()
	void PlayerStatus(const struct FString& PlayFabId);
UFUNCTION()
	void PlayerList();
UFUNCTION(BlueprintImplementableEvent)
	void ParryThis();
UFUNCTION(BlueprintImplementableEvent)
	void OnSpectatorCmd(const struct FString& Cmd, const struct FString& Param);
UFUNCTION(BlueprintNativeEvent)
	void OnSpectatorAction(uint8 Action);
UFUNCTION()
	void OnSettingsChanged();
UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnRequestVoteKick(class AMordhauPlayerState* TargetPlayer);
UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnRequestCancelVoteKick();
UFUNCTION(BlueprintImplementableEvent)
	void OnReceivedKillScore(class AMordhauCharacter* Killed);
UFUNCTION(BlueprintImplementableEvent)
	void OnReceivedAssistScore(float Percentage, class AMordhauCharacter* Killed);
UFUNCTION()
	void OnPlayFabLoginComplete(bool bWasSuccessful, const struct FString& PlayFabId);
UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnNewProfileFromClientPreValidation();
UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnNewProfileFromClientPostValidation();
UFUNCTION(BlueprintNativeEvent)
	void OnMordhauCharacterSpawned(class AMordhauCharacter* SpawnedCharacter);
UFUNCTION(BlueprintImplementableEvent)
	void OnIsAnythingRestockableChanged();
UFUNCTION()
	void OnInventoryItemsUnlocked(bool bWasSuccessful, TArray<struct FItemStack> ItemStacks);
UFUNCTION(BlueprintNativeEvent)
	void OnHighlightStart(class AActor* Actor);
UFUNCTION(BlueprintNativeEvent)
	void OnHighlightEnd(class AActor* Actor);
UFUNCTION()
	void OnGetPlayFabPlayerComplete(bool bWasSuccessful, const struct FString& PlayFabId, const struct FPlayFabPlayer& PlayFabPlayer);
UFUNCTION()
	void OnGetPlayFabIDsFromPlatformIDsComplete(bool bWasSuccessful, TMap<struct FString, struct FString> PlayFabIds);
UFUNCTION(BlueprintImplementableEvent)
	void OnAmmoChanged(class AMordhauEquipment* Equipment, int AmmoDifference);
UFUNCTION(BlueprintNativeEvent)
	void OnAfterUnPossess();
UFUNCTION(BlueprintNativeEvent)
	void OnAfterPossess(class APawn* APawn);
UFUNCTION(BlueprintImplementableEvent)
	void OnAFKTimeExceededMaximum();
UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnActionFailed(const struct FName& Reason);
UFUNCTION()
	void MuteList();
UFUNCTION()
	void Mute(const struct FString& PlayerNameOrPlayFabID, int MuteDuration);
UFUNCTION()
	void MountPak(const struct FString& PakPath);
UFUNCTION()
	void LookupPlayer(const struct FString& UniqueId);
UFUNCTION()
	void LookUp(float Value);
UFUNCTION()
	void Kick(const struct FString& PlayerNameOrPlayFabID, const struct FString& KickReason);
UFUNCTION()
	bool IsSessionTicketAvailable();
UFUNCTION(BlueprintCallable)
	bool IsInventoryAvailable();
UFUNCTION()
	bool IsAuthenticating();
UFUNCTION()
	bool IsAuthenticated();
UFUNCTION(BlueprintCallable)
	bool IsAllowedServer(const struct FString& Command);
UFUNCTION(BlueprintCallable)
	bool IsAllowedClient(const struct FString& Command);
UFUNCTION(BlueprintCallable, BlueprintPure)
	bool IsAdmin() const;
UFUNCTION(BlueprintCallable)
	void GiveClientScoreBP(Mordhau_EScoreFeedReason Reason, int ScoreAmount);
UFUNCTION()
	void GiveCata();
UFUNCTION(BlueprintCallable, BlueprintPure)
	struct FPlayFabPlayer GetPlayFabPlayer() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	struct FString GetPlayFabId();
UFUNCTION(BlueprintCallable)
	class AAdvancedCharacter* GetNextViewablePlayerNonAuth(bool bReverse, bool bOnlyOwnTeam);
UFUNCTION(BlueprintCallable)
	class AMordhauCharacter* GetLastControlledCharacter();
UFUNCTION(BlueprintCallable)
	bool GetDefaultTierCustomizationForSlot(Mordhau_EMainWearableSlot MainSlot, uint8 ArmorTier, TMap<Mordhau_EWearableSlot, struct FWearableCustomization>* OutMap);
UFUNCTION(BlueprintCallable)
	bool GetDefaultEquipmentCustomizationFor(class UClass* ForEquipmentClass, struct FEquipmentCustomization* OutCustomization);
UFUNCTION(BlueprintCallable, BlueprintPure)
	class AMordhauCharacter* GetControlledMordhauCharacter(bool bAlsoSearchVehicle) const;
UFUNCTION(BlueprintCallable)
	struct FVector2D GetAnglingVector();
UFUNCTION(BlueprintCallable)
	float GetAnglingAngle();
UFUNCTION(BlueprintCallable)
	void FlushPendingAnglingInputs();
UFUNCTION()
	void EquipmentCommand(int Command);
UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void DisplayMessage(class APlayerState* SenderPlayerState, const struct FString& S, const struct FName& Type, float MsgLifeTime);
UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void DisplayAnnouncement(const struct FString& Text, const struct FString& Subtext, float Duration);
UFUNCTION()
	void CopyName(const struct FString& UniqueId);
UFUNCTION()
	void CopyID(const struct FString& UniqueId);
UFUNCTION(BlueprintNativeEvent)
	int ComputePlayerRank();
UFUNCTION()
	void ClientWasKicked_Implementation(const struct FText& KickReason);
UFUNCTION(Client, BlueprintNativeEvent)
	void ClientSetServerStats(const struct FServerStats& InServerStats);
UFUNCTION(Client, Reliable, BlueprintNativeEvent)
	void ClientSetServerInfo(const struct FBasicServerInfo& ServerInfo);
UFUNCTION(Client, Reliable, BlueprintNativeEvent)
	void ClientSetPlayFabMatch(const struct FPlayFabMatch& InMatch);
UFUNCTION(Client, Reliable, BlueprintNativeEvent)
	void ClientSetMapVoteMaps(TArray<struct FString> InMapVoteMaps);
UFUNCTION(Client, Reliable, BlueprintNativeEvent)
	void ClientSetMapVoteCounts(TArray<uint8> InMapVoteCounts);
UFUNCTION(Client, Reliable, BlueprintNativeEvent)
	void ClientSetFlags(const struct FString& InMyFlags, TArray<struct FAdminFlag> InAdminFlags);
UFUNCTION(Client, Reliable, BlueprintNativeEvent)
	void ClientSetControlAndPawnRotation(class APawn* APawn, const struct FRotator& NewRotation);
UFUNCTION(Client, Reliable, BlueprintNativeEvent)
	void ClientRequestXPAndMMR();
UFUNCTION(Client, Reliable, BlueprintNativeEvent)
	void ClientRequestSessionTicket();
UFUNCTION(Client, Reliable, BlueprintNativeEvent)
	void ClientRequestMatchmakingMatchID();
UFUNCTION(Client, Reliable, BlueprintNativeEvent)
	void ClientReceiveSphericalHitboxes(TArray<struct FVector> Locations, const struct FVector& WeaponTraceStart, const struct FVector& WeaponTraceEnd);
UFUNCTION(Client, Reliable, BlueprintNativeEvent)
	void ClientReceiveScoreNoState(uint8 ReasonAndParam, int16_t ScoreAmount);
UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void ClientReceiveScoreBP(Mordhau_EScoreFeedReason Reason, uint8 ReasonParam, float ScoreAmount, class AMordhauPlayerState* AssociatedPlayer);
UFUNCTION(Client, Reliable, BlueprintNativeEvent)
	void ClientReceiveScore(uint8 ReasonAndParam, int16_t ScoreAmount, class AMordhauPlayerState* AssociatedPlayer);
UFUNCTION(Client, Reliable, BlueprintNativeEvent)
	void ClientReceiveMessage(const struct FString& Message);
UFUNCTION(BlueprintCallable)
	void ClientMessageBP(const struct FString& String);
UFUNCTION(Client, BlueprintNativeEvent)
	void ClientDrawTracer(const struct FVector& Start, const struct FVector& End);
UFUNCTION()
	void ChooseExit();
UFUNCTION()
	void Choose9();
UFUNCTION()
	void Choose8();
UFUNCTION()
	void Choose7();
UFUNCTION()
	void Choose6();
UFUNCTION()
	void Choose5();
UFUNCTION()
	void Choose4();
UFUNCTION()
	void Choose3();
UFUNCTION()
	void Choose2();
UFUNCTION()
	void Choose1();
UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void ChoiceMenuOptionSelected(int Choice);
UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void ChoiceMenu(int Index);
UFUNCTION()
	void ChangeMap(const struct FString& MapName);
UFUNCTION()
	void ChangeLevel(const struct FString& LevelName);
UFUNCTION()
	void CancelVoteKick();
UFUNCTION(BlueprintCallable)
	bool CanAskForSpawn();
UFUNCTION()
	void BanList();
UFUNCTION()
	void Ban(const struct FString& PlayerNameOrPlayFabID, int BanDuration, const struct FString& BanReason);
UFUNCTION(BlueprintCallable)
	void AskForSpawn();
UFUNCTION(BlueprintCallable)
	bool AreStatsAvailable();
UFUNCTION()
	void AdminLogin(const struct FString& Password);
UFUNCTION()
	void AdminList();
UFUNCTION()
	void AddBotsTeam(int Amount, int Team);
UFUNCTION()
	void AddBots(int Amount);
UFUNCTION()
	void AddAdmin(const struct FString& PlayerNameOrPlayFabID);
};
