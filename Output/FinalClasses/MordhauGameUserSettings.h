#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "MordhauGameUserSettings.generated.h"
// Class Mordhau.MordhauGameUserSettings
class MORDHAU_API UMordhauGameUserSettings  :  public UGameUserSettings
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(Instanced)
	struct FScriptMulticastDelegate OnSettingsChanged; // (ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
UPROPERTY()
	TArray<struct FString> AvailableLanguages; // (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	uint32_t MordhauVersion; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	struct FString Language; // (ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	int Gore; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	int ProfanityFilter; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	int ThirdPersonDeathCamera; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	int CharacterCloth; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	int FriendlyMarkers; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	int HideDefaultLoadouts; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	int NoTeamColorsOnGear; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	float Headbob; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	float MovementHeadbob; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	float CombatHeadbob; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	int MaxRagdolls; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	float RagdollStayTime; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	float MouseSmoothing; // (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	float RangedSensitivity; // (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	bool ForceFeedback; // (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	int DrawTracers; // (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	float DrawTracersStayTime; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	int ShowServerInScoreboard; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	int CrosshairType; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	int ShowKilledBy; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	int ShowStatusBar; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	int ShowTargetInfo; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	int ShowSpawnInfo; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	int ShowChatBox; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	int ShowEmotesMenu; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	int ShowEquipment; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	int ShowAmmo; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	int ShowAnnouncements; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	int ShowTips; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	int ShowObjectives; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	int ShowHitMarker; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	int ShowScoreFeed; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	int ShowCombatHints; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	int ShowKillFeed; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	int QuickSpawn; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	int ShowObservedDelay; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	int HideWatermark; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	int ShowInteractionChecks; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	int EnableHordeSquadSpawning; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	float ScreenPercentage; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	float FieldOfView; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	float CameraDistance; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	float Gamma; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	int NvidiaReflex; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	int AntiAliasing; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	int IndirectCapsuleShadows; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	int CharacterFidelity; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	int RagdollFidelity; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	int ScreenSpaceReflections; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	float Bloom; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	float MotionBlur; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	int AmbientOcclusion; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	int LensFlares; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	float MasterVolume; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	float EffectsVolume; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	float MusicVolume; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	float VideoVolume; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	float VoiceVolume; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	float InstrumentsVolume; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	MordhauOnlineSubsystem_EServerRegion CasualMatchmakingRegion; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	MordhauOnlineSubsystem_EServerRegion RankedMatchmakingRegion; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	TArray<struct FString> CasualMatchmakingGameModes; // (ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	TArray<struct FString> RankedMatchmakingGameModes; // (ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	TMap<struct FString, struct FPlayerCountArray> SelectedGameModePlayerCounts; // (Config, Protected, NativeAccessSpecifierProtected)
UPROPERTY()
	bool bServerBrowserNotFull; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	bool bServerBrowserHasPlayers; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	bool bServerBrowserNoPassword; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	struct FString ServerBrowserServerName; // (ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	struct FString ServerBrowserGameMode; // (ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	int ServerBrowserMaxPing; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	struct FString ServerBrowserSortType; // (ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	TArray<struct FString> FavoriteServers; // (ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	TArray<struct FString> RecentServers; // (ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	uint8 ServerTypeFilter; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	uint8 ServerPopulationFilter; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	uint8 ServerModdedFilter; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	uint8 ServerPasswordFilter; // (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	// Functions
UFUNCTION(BlueprintCallable, BlueprintPure)
	bool ShouldShowWatermark() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	bool ShouldShowTips() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	bool ShouldShowTargetInfo() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	bool ShouldShowStatusBar() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	bool ShouldShowSpawnInfo() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	bool ShouldShowServerInScoreboard() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	bool ShouldShowScoreFeed() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	bool ShouldShowObservedDelay() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	bool ShouldShowObjectives() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	bool ShouldShowMatchmakingDebug() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	bool ShouldShowKillFeed() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	bool ShouldShowKilledBy() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	bool ShouldShowHUD() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	bool ShouldShowHitMarker() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	bool ShouldShowEquipment() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	bool ShouldShowEmotesMenu() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	bool ShouldShowChatBox() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	bool ShouldShowBlood() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	bool ShouldShowAnnouncements() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	bool ShouldShowAmmo() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	bool ShouldQuickSpawn() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	bool ShouldDrawTracers() const;
UFUNCTION(BlueprintCallable)
	void SetVoiceVolume(float NewVolume);
UFUNCTION(BlueprintCallable)
	void SetVideoVolume(float NewVolume);
UFUNCTION(BlueprintCallable)
	void SetTracersStayTime(float NewStayTime);
UFUNCTION(BlueprintCallable)
	void SetThirdPersonDeathcamera(int NewThirdPersonDeathCamera);
UFUNCTION(BlueprintCallable)
	void SetShowTips(int NewShowTips);
UFUNCTION(BlueprintCallable)
	void SetShowTargetInfo(int NewShowTargetInfo);
UFUNCTION(BlueprintCallable)
	void SetShowStatusBar(int NewShowStatusBar);
UFUNCTION(BlueprintCallable)
	void SetShowSpawnInfo(int NewShowSpawnInfo);
UFUNCTION(BlueprintCallable)
	void SetShowServerInScoreboard(int NewShowServerInScoreboard);
UFUNCTION(BlueprintCallable)
	void SetShowScoreFeed(int NewShowScoreFeed);
UFUNCTION(BlueprintCallable)
	void SetShowObservedDelay(int NewShowObservedDelay);
UFUNCTION(BlueprintCallable)
	void SetShowObjectives(int NewShowObjectives);
UFUNCTION(BlueprintCallable)
	void SetShowMatchmakingDebug(int NewShowMatchmakingDebug);
UFUNCTION(BlueprintCallable)
	void SetShowKillFeed(int NewShowKillFeed);
UFUNCTION(BlueprintCallable)
	void SetShowKilledBy(int NewShowKilledBy);
UFUNCTION(BlueprintCallable)
	void SetShowHitMarker(int NewShowHitMarker);
UFUNCTION(BlueprintCallable)
	void SetShowEquipment(int NewShowEquipment);
UFUNCTION(BlueprintCallable)
	void SetShowEmotesMenu(int NewEmotesMenu);
UFUNCTION(BlueprintCallable)
	void SetShowCombatHints(int NewShowCombatHints);
UFUNCTION(BlueprintCallable)
	void SetShowChatBox(int NewShowChatBox);
UFUNCTION(BlueprintCallable)
	void SetShowAnnouncements(int NewShowAnnouncements);
UFUNCTION(BlueprintCallable)
	void SetShowAmmo(int NewShowAmmo);
UFUNCTION(BlueprintCallable)
	void SetServerFilter(Mordhau_EServerFilterCategories FilterCategory, uint8 Value);
UFUNCTION(BlueprintCallable)
	void SetServerBrowserSortType(const struct FString& NewSortType);
UFUNCTION(BlueprintCallable)
	void SetServerBrowserServerName(const struct FString& NewServerName);
UFUNCTION(BlueprintCallable)
	void SetServerBrowserNotFull(bool bNewNotFull);
UFUNCTION(BlueprintCallable)
	void SetServerBrowserNoPassword(bool bNewNoPassword);
UFUNCTION(BlueprintCallable)
	void SetServerBrowserMaxPing(int NewMaxPing);
UFUNCTION(BlueprintCallable)
	void SetServerBrowserHasPlayers(bool bNewHasPlayers);
UFUNCTION(BlueprintCallable)
	void SetServerBrowserGameMode(const struct FString& NewGameMode);
UFUNCTION(BlueprintCallable)
	void SetSelectedGameModePlayerCounts(const struct FString& GameMode, TArray<int> SelectedPlayerCounts);
UFUNCTION(BlueprintCallable)
	void SetScreenSpaceReflections(int NewScreenSpaceReflections);
UFUNCTION(BlueprintCallable)
	void SetScreenPercentage(float NewScreenPercentage);
UFUNCTION(BlueprintCallable)
	void SetRecentServers(TArray<struct FString> NewRecentServers);
UFUNCTION(BlueprintCallable)
	void SetRankedMatchmakingRegion(MordhauOnlineSubsystem_EServerRegion NewRegion);
UFUNCTION(BlueprintCallable)
	void SetRankedMatchmakingGameModes(TArray<struct FString> NewGameModes);
UFUNCTION(BlueprintCallable)
	void SetRangedSensitivity(float NewRangedSensitivity);
UFUNCTION(BlueprintCallable)
	void SetRagdollStayTime(float NewTime);
UFUNCTION(BlueprintCallable)
	void SetRagdollFidelity(int NewFidelity);
UFUNCTION(BlueprintCallable)
	void SetQuickSpawn(int NewQuickSpawn);
UFUNCTION(BlueprintCallable)
	void SetProfanityFilter(int NewProfanityFilter);
UFUNCTION(BlueprintCallable)
	void SetNvidiaReflex(int NewNvidiaReflex);
UFUNCTION(BlueprintCallable)
	void SetNoTeamColorsOnGear(int NewNoTeamColorsOnGear);
UFUNCTION(BlueprintCallable)
	void SetMusicVolume(float NewVolume);
UFUNCTION(BlueprintCallable)
	void SetMovementHeadbob(float NewMovementHeadbob);
UFUNCTION(BlueprintCallable)
	void SetMouseSmoothing(float NewSmoothing);
UFUNCTION(BlueprintCallable)
	void SetMotionBlur(float NewMotionBlur);
UFUNCTION(BlueprintCallable)
	void SetMaxRagdolls(int NewMax);
UFUNCTION(BlueprintCallable)
	void SetMasterVolume(float NewVolume);
UFUNCTION(BlueprintCallable)
	void SetLensFlares(int NewLensFlares);
UFUNCTION(BlueprintCallable)
	void SetLanguage(const struct FString& NewLanguage);
UFUNCTION(BlueprintCallable)
	void SetInstrumentsVolume(float NewVolume);
UFUNCTION(BlueprintCallable)
	void SetIndirectCapsuleShadows(int NewShadows);
UFUNCTION(BlueprintCallable)
	void SetHideWatermark(int NewHideWatermark);
UFUNCTION(BlueprintCallable)
	void SetHideHUD(int NewHideHUD);
UFUNCTION(BlueprintCallable)
	void SetHideDefaultLoadouts(int NewHideDefaultLoadouts);
UFUNCTION(BlueprintCallable)
	void SetHeadbob(float NewHeadbob);
UFUNCTION(BlueprintCallable)
	void SetGore(int NewGore);
UFUNCTION(BlueprintCallable)
	void SetGamma(float NewGamma);
UFUNCTION(BlueprintCallable)
	void SetFriendlyMarkers(int NewFriendlyMarkers);
UFUNCTION(BlueprintCallable)
	void SetForceFeedbackEnabled(bool Enabled);
UFUNCTION(BlueprintCallable)
	void SetFieldOfView(float NewFOV);
UFUNCTION(BlueprintCallable)
	void SetFavoriteServers(TArray<struct FString> NewFavoriteServers);
UFUNCTION(BlueprintCallable)
	void SetEffectsVolume(float NewVolume);
UFUNCTION(BlueprintCallable)
	void SetDrawTracers(int NewDrawTracers);
UFUNCTION(BlueprintCallable)
	void SetCrosshairType(int NewCrosshairType);
UFUNCTION(BlueprintCallable)
	void SetCombatHeadbob(float NewCombatHeadbob);
UFUNCTION(BlueprintCallable)
	void SetCharacterFidelity(int NewFidelity);
UFUNCTION(BlueprintCallable)
	void SetCharacterCloth(int NewCharacterCloth);
UFUNCTION(BlueprintCallable)
	void SetCasualMatchmakingRegion(MordhauOnlineSubsystem_EServerRegion NewRegion);
UFUNCTION(BlueprintCallable)
	void SetCasualMatchmakingGameModes(TArray<struct FString> NewGameModes);
UFUNCTION(BlueprintCallable)
	void SetCameraDistance(float NewCameraDistance);
UFUNCTION(BlueprintCallable)
	void SetBloom(float NewBloom);
UFUNCTION(BlueprintCallable)
	void SetAntiAliasing(int NewAntiAliasing);
UFUNCTION(BlueprintCallable)
	void SetAmbientOcclusion(int NewAmbientOcclusion);
UFUNCTION(BlueprintCallable, BlueprintPure)
	float GetVoiceVolume() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	float GetVideoVolume() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	struct FVector2D GetTracersStayTimeLimits() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	float GetTracersStayTime() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	int GetThirdPersonDeathCamera() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	int GetShowTips() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	int GetShowTargetInfo() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	int GetShowStatusBar() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	int GetShowSpawnInfo() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	int GetShowServerInScoreboard() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	int GetShowScoreFeed() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	int GetShowObservedDelay() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	int GetShowObjectives() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	int GetShowKillFeed() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	int GetShowKilledBy() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	int GetShowHitMarker() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	int GetShowEquipment() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	int GetShowEmotesMenu() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	int GetShowCombatHints() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	int GetShowChatBox() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	int GetShowAnnouncements() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	int GetShowAmmo() const;
UFUNCTION(BlueprintCallable)
	uint8 GetServerFilterValue(Mordhau_EServerFilterCategories FilterCategory);
UFUNCTION(BlueprintCallable, BlueprintPure)
	struct FString GetServerBrowserSortType() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	struct FString GetServerBrowserServerName() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	bool GetServerBrowserNotFull() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	bool GetServerBrowserNoPassword() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	int GetServerBrowserMaxPing() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	bool GetServerBrowserHasPlayers() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	struct FString GetServerBrowserGameMode() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	TArray<int> GetSelectedGameModePlayerCounts(const struct FString& GameMode);
UFUNCTION(BlueprintCallable, BlueprintPure)
	int GetScreenSpaceReflections() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	struct FVector2D GetScreenPercentageLimits() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	float GetScreenPercentage() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	TArray<struct FString> GetRecentServers() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	MordhauOnlineSubsystem_EServerRegion GetRankedMatchmakingRegion() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	TArray<struct FString> GetRankedMatchmakingGameModes() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	struct FVector2D GetRangedSensitivityLimits() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	float GetRangedSensitivity() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	float GetRagdollStayTimeLimit() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	float GetRagdollStayTime() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	int GetRagdollFidelity() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	int GetQuickSpawn() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	int GetProfanityFilter() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	int GetNvidiaReflex() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	int GetNoTeamColorsOnGear() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	float GetMusicVolume() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	struct FVector2D GetMovementHeadbobLimits() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	float GetMovementHeadbob() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	struct FVector2D GetMouseSmoothingLimits() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	float GetMouseSmoothing() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	struct FVector2D GetMotionBlurLimits() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	float GetMotionBlur() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	int GetMaxRagdollsLimit() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	int GetMaxRagdolls() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	float GetMasterVolume() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	int GetLensFlares() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	struct FString GetLanguage() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	float GetInstrumentsVolume() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	int GetIndirectCapsuleShadows() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	int GetHideWatermark() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	int GetHideHUD() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	int GetHideDefaultLoadouts() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	struct FVector2D GetHeadbobLimits() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	float GetHeadbob() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	int GetGore() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	struct FVector2D GetGammaLimits() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	float GetGamma() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	int GetFriendlyMarkers() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	struct FVector2D GetFrameRateLimits() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	bool GetForceFeedbackEnabled() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	struct FVector2D GetFieldOfViewLimits() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	float GetFieldOfView() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	TArray<struct FString> GetFavoriteServers() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	float GetEffectsVolume() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	int GetDrawTracers() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	float GetCurrentMotionBlur() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	float GetCurrentGamma() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	float GetCurrentBloom() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	int GetCrosshairType() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	struct FVector2D GetCombatHeadbobLimits() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	float GetCombatHeadbob() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	int GetCharacterFidelity() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	int GetCharacterCloth() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	MordhauOnlineSubsystem_EServerRegion GetCasualMatchmakingRegion() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	TArray<struct FString> GetCasualMatchmakingGameModes() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	struct FVector2D GetCameraDistanceLimits() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	float GetCameraDistance() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	struct FVector2D GetBloomLimits() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	float GetBloom() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	void GetAvailableLanguages(TArray<struct FString>* AvailableLanguages) const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	int GetAntiAliasing() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	int GetAmbientOcclusion() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	int GetActualCrosshairType() const;
UFUNCTION(BlueprintCallable)
	void ApplyTextureQualityUsingTextureGroups(int Quality) const;
UFUNCTION(BlueprintCallable)
	void ApplyAudioVolumes();
};
