// Class Mordhau.MordhauGameUserSettings

// 0x0218 (FullSize[0x0338] - InheritedSize[0x0120])

class UMordhauGameUserSettings : public UGameUserSettings

{

public:

	struct FScriptMulticastDelegate                    OnSettingsChanged;                                         // 0x0120(0x0010) (ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_EK8T[0x10];                                    // 0x0130(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	TArray<struct FString>                             AvailableLanguages;                                        // 0x0140(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	uint32_t                                           MordhauVersion;                                            // 0x0150(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	unsigned char                                      UnknownData_IT2G[0x4];                                     // 0x0154(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	struct FString                                     Language;                                                  // 0x0158(0x0010) (ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	int                                                Gore;                                                      // 0x0168(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	int                                                ProfanityFilter;                                           // 0x016C(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	int                                                ThirdPersonDeathCamera;                                    // 0x0170(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	int                                                CharacterCloth;                                            // 0x0174(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	int                                                FriendlyMarkers;                                           // 0x0178(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	int                                                HideDefaultLoadouts;                                       // 0x017C(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	int                                                NoTeamColorsOnGear;                                        // 0x0180(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	float                                              Headbob;                                                   // 0x0184(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	float                                              MovementHeadbob;                                           // 0x0188(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	float                                              CombatHeadbob;                                             // 0x018C(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	int                                                MaxRagdolls;                                               // 0x0190(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	float                                              RagdollStayTime;                                           // 0x0194(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	float                                              MouseSmoothing;                                            // 0x0198(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	float                                              RangedSensitivity;                                         // 0x019C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	bool                                               ForceFeedback;                                             // 0x01A0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	unsigned char                                      UnknownData_0OLV[0x3];                                     // 0x01A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	int                                                DrawTracers;                                               // 0x01A4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	float                                              DrawTracersStayTime;                                       // 0x01A8(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	unsigned char                                      UnknownData_WC3T[0x4];                                     // 0x01AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	int                                                ShowServerInScoreboard;                                    // 0x01B0(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	int                                                CrosshairType;                                             // 0x01B4(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	int                                                ShowKilledBy;                                              // 0x01B8(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	int                                                ShowStatusBar;                                             // 0x01BC(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	int                                                ShowTargetInfo;                                            // 0x01C0(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	int                                                ShowSpawnInfo;                                             // 0x01C4(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	int                                                ShowChatBox;                                               // 0x01C8(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	int                                                ShowEmotesMenu;                                            // 0x01CC(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	int                                                ShowEquipment;                                             // 0x01D0(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	int                                                ShowAmmo;                                                  // 0x01D4(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	int                                                ShowAnnouncements;                                         // 0x01D8(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	int                                                ShowTips;                                                  // 0x01DC(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	int                                                ShowObjectives;                                            // 0x01E0(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	int                                                ShowHitMarker;                                             // 0x01E4(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	int                                                ShowScoreFeed;                                             // 0x01E8(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	int                                                ShowCombatHints;                                           // 0x01EC(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	int                                                ShowKillFeed;                                              // 0x01F0(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	int                                                QuickSpawn;                                                // 0x01F4(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	int                                                ShowObservedDelay;                                         // 0x01F8(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	int                                                HideWatermark;                                             // 0x01FC(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	int                                                ShowInteractionChecks;                                     // 0x0200(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	int                                                EnableHordeSquadSpawning;                                  // 0x0204(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	float                                              ScreenPercentage;                                          // 0x0208(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	float                                              FieldOfView;                                               // 0x020C(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	float                                              CameraDistance;                                            // 0x0210(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	float                                              Gamma;                                                     // 0x0214(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	int                                                NvidiaReflex;                                              // 0x0218(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	int                                                AntiAliasing;                                              // 0x021C(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	int                                                IndirectCapsuleShadows;                                    // 0x0220(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	int                                                CharacterFidelity;                                         // 0x0224(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	int                                                RagdollFidelity;                                           // 0x0228(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	int                                                ScreenSpaceReflections;                                    // 0x022C(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	float                                              Bloom;                                                     // 0x0230(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	float                                              MotionBlur;                                                // 0x0234(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	int                                                AmbientOcclusion;                                          // 0x0238(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	int                                                LensFlares;                                                // 0x023C(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	float                                              MasterVolume;                                              // 0x0240(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	float                                              EffectsVolume;                                             // 0x0244(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	float                                              MusicVolume;                                               // 0x0248(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	float                                              VideoVolume;                                               // 0x024C(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	float                                              VoiceVolume;                                               // 0x0250(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	float                                              InstrumentsVolume;                                         // 0x0254(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	MordhauOnlineSubsystem_EServerRegion               CasualMatchmakingRegion;                                   // 0x0258(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	MordhauOnlineSubsystem_EServerRegion               RankedMatchmakingRegion;                                   // 0x0259(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	unsigned char                                      UnknownData_6OU7[0x6];                                     // 0x025A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	TArray<struct FString>                             CasualMatchmakingGameModes;                                // 0x0260(0x0010) (ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	TArray<struct FString>                             RankedMatchmakingGameModes;                                // 0x0270(0x0010) (ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	TMap<struct FString, struct FPlayerCountArray>     SelectedGameModePlayerCounts;                              // 0x0280(0x0050) (Config, Protected, NativeAccessSpecifierProtected)

	bool                                               bServerBrowserNotFull;                                     // 0x02D0(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	bool                                               bServerBrowserHasPlayers;                                  // 0x02D1(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	bool                                               bServerBrowserNoPassword;                                  // 0x02D2(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	unsigned char                                      UnknownData_ME9F[0x5];                                     // 0x02D3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	struct FString                                     ServerBrowserServerName;                                   // 0x02D8(0x0010) (ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	struct FString                                     ServerBrowserGameMode;                                     // 0x02E8(0x0010) (ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	int                                                ServerBrowserMaxPing;                                      // 0x02F8(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	unsigned char                                      UnknownData_8EEM[0x4];                                     // 0x02FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	struct FString                                     ServerBrowserSortType;                                     // 0x0300(0x0010) (ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	TArray<struct FString>                             FavoriteServers;                                           // 0x0310(0x0010) (ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	TArray<struct FString>                             RecentServers;                                             // 0x0320(0x0010) (ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	unsigned char                                      ServerTypeFilter;                                          // 0x0330(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	unsigned char                                      ServerPopulationFilter;                                    // 0x0331(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	unsigned char                                      ServerModdedFilter;                                        // 0x0332(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	unsigned char                                      ServerPasswordFilter;                                      // 0x0333(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	unsigned char                                      UnknownData_FDYJ[0x4];                                     // 0x0334(0x0004) MISSED OFFSET (PADDING)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.MordhauGameUserSettings");

		return ptr;

	}







	bool ShouldShowWatermark();

	bool ShouldShowTips();

	bool ShouldShowTargetInfo();

	bool ShouldShowStatusBar();

	bool ShouldShowSpawnInfo();

	bool ShouldShowServerInScoreboard();

	bool ShouldShowScoreFeed();

	bool ShouldShowObservedDelay();

	bool ShouldShowObjectives();

	bool ShouldShowMatchmakingDebug();

	bool ShouldShowKillFeed();

	bool ShouldShowKilledBy();

	bool ShouldShowHUD();

	bool ShouldShowHitMarker();

	bool ShouldShowEquipment();

	bool ShouldShowEmotesMenu();

	bool ShouldShowChatBox();

	bool ShouldShowBlood();

	bool ShouldShowAnnouncements();

	bool ShouldShowAmmo();

	bool ShouldQuickSpawn();

	bool ShouldDrawTracers();

	void SetVoiceVolume(float NewVolume);

	void SetVideoVolume(float NewVolume);

	void SetTracersStayTime(float NewStayTime);

	void SetThirdPersonDeathcamera(int NewThirdPersonDeathCamera);

	void SetShowTips(int NewShowTips);

	void SetShowTargetInfo(int NewShowTargetInfo);

	void SetShowStatusBar(int NewShowStatusBar);

	void SetShowSpawnInfo(int NewShowSpawnInfo);

	void SetShowServerInScoreboard(int NewShowServerInScoreboard);

	void SetShowScoreFeed(int NewShowScoreFeed);

	void SetShowObservedDelay(int NewShowObservedDelay);

	void SetShowObjectives(int NewShowObjectives);

	void SetShowMatchmakingDebug(int NewShowMatchmakingDebug);

	void SetShowKillFeed(int NewShowKillFeed);

	void SetShowKilledBy(int NewShowKilledBy);

	void SetShowHitMarker(int NewShowHitMarker);

	void SetShowEquipment(int NewShowEquipment);

	void SetShowEmotesMenu(int NewEmotesMenu);

	void SetShowCombatHints(int NewShowCombatHints);

	void SetShowChatBox(int NewShowChatBox);

	void SetShowAnnouncements(int NewShowAnnouncements);

	void SetShowAmmo(int NewShowAmmo);

	void SetServerFilter(Mordhau_EServerFilterCategories FilterCategory, unsigned char Value);

	void SetServerBrowserSortType(const struct FString& NewSortType);

	void SetServerBrowserServerName(const struct FString& NewServerName);

	void SetServerBrowserNotFull(bool bNewNotFull);

	void SetServerBrowserNoPassword(bool bNewNoPassword);

	void SetServerBrowserMaxPing(int NewMaxPing);

	void SetServerBrowserHasPlayers(bool bNewHasPlayers);

	void SetServerBrowserGameMode(const struct FString& NewGameMode);

	void SetSelectedGameModePlayerCounts(const struct FString& GameMode, TArray<int> SelectedPlayerCounts);

	void SetScreenSpaceReflections(int NewScreenSpaceReflections);

	void SetScreenPercentage(float NewScreenPercentage);

	void SetRecentServers(TArray<struct FString> NewRecentServers);

	void SetRankedMatchmakingRegion(MordhauOnlineSubsystem_EServerRegion NewRegion);

	void SetRankedMatchmakingGameModes(TArray<struct FString> NewGameModes);

	void SetRangedSensitivity(float NewRangedSensitivity);

	void SetRagdollStayTime(float NewTime);

	void SetRagdollFidelity(int NewFidelity);

	void SetQuickSpawn(int NewQuickSpawn);

	void SetProfanityFilter(int NewProfanityFilter);

	void SetNvidiaReflex(int NewNvidiaReflex);

	void SetNoTeamColorsOnGear(int NewNoTeamColorsOnGear);

	void SetMusicVolume(float NewVolume);

	void SetMovementHeadbob(float NewMovementHeadbob);

	void SetMouseSmoothing(float NewSmoothing);

	void SetMotionBlur(float NewMotionBlur);

	void SetMaxRagdolls(int NewMax);

	void SetMasterVolume(float NewVolume);

	void SetLensFlares(int NewLensFlares);

	void SetLanguage(const struct FString& NewLanguage);

	void SetInstrumentsVolume(float NewVolume);

	void SetIndirectCapsuleShadows(int NewShadows);

	void SetHideWatermark(int NewHideWatermark);

	void SetHideHUD(int NewHideHUD);

	void SetHideDefaultLoadouts(int NewHideDefaultLoadouts);

	void SetHeadbob(float NewHeadbob);

	void SetGore(int NewGore);

	void SetGamma(float NewGamma);

	void SetFriendlyMarkers(int NewFriendlyMarkers);

	void SetForceFeedbackEnabled(bool Enabled);

	void SetFieldOfView(float NewFOV);

	void SetFavoriteServers(TArray<struct FString> NewFavoriteServers);

	void SetEffectsVolume(float NewVolume);

	void SetDrawTracers(int NewDrawTracers);

	void SetCrosshairType(int NewCrosshairType);

	void SetCombatHeadbob(float NewCombatHeadbob);

	void SetCharacterFidelity(int NewFidelity);

	void SetCharacterCloth(int NewCharacterCloth);

	void SetCasualMatchmakingRegion(MordhauOnlineSubsystem_EServerRegion NewRegion);

	void SetCasualMatchmakingGameModes(TArray<struct FString> NewGameModes);

	void SetCameraDistance(float NewCameraDistance);

	void SetBloom(float NewBloom);

	void SetAntiAliasing(int NewAntiAliasing);

	void SetAmbientOcclusion(int NewAmbientOcclusion);

	float GetVoiceVolume();

	float GetVideoVolume();

	struct FVector2D GetTracersStayTimeLimits();

	float GetTracersStayTime();

	int GetThirdPersonDeathCamera();

	int GetShowTips();

	int GetShowTargetInfo();

	int GetShowStatusBar();

	int GetShowSpawnInfo();

	int GetShowServerInScoreboard();

	int GetShowScoreFeed();

	int GetShowObservedDelay();

	int GetShowObjectives();

	int GetShowKillFeed();

	int GetShowKilledBy();

	int GetShowHitMarker();

	int GetShowEquipment();

	int GetShowEmotesMenu();

	int GetShowCombatHints();

	int GetShowChatBox();

	int GetShowAnnouncements();

	int GetShowAmmo();

	unsigned char GetServerFilterValue(Mordhau_EServerFilterCategories FilterCategory);

	struct FString GetServerBrowserSortType();

	struct FString GetServerBrowserServerName();

	bool GetServerBrowserNotFull();

	bool GetServerBrowserNoPassword();

	int GetServerBrowserMaxPing();

	bool GetServerBrowserHasPlayers();

	struct FString GetServerBrowserGameMode();

	TArray<int> GetSelectedGameModePlayerCounts(const struct FString& GameMode);

	int GetScreenSpaceReflections();

	struct FVector2D GetScreenPercentageLimits();

	float GetScreenPercentage();

	TArray<struct FString> GetRecentServers();

	MordhauOnlineSubsystem_EServerRegion GetRankedMatchmakingRegion();

	TArray<struct FString> GetRankedMatchmakingGameModes();

	struct FVector2D GetRangedSensitivityLimits();

	float GetRangedSensitivity();

	float GetRagdollStayTimeLimit();

	float GetRagdollStayTime();

	int GetRagdollFidelity();

	int GetQuickSpawn();

	int GetProfanityFilter();

	int GetNvidiaReflex();

	int GetNoTeamColorsOnGear();

	float GetMusicVolume();

	struct FVector2D GetMovementHeadbobLimits();

	float GetMovementHeadbob();

	struct FVector2D GetMouseSmoothingLimits();

	float GetMouseSmoothing();

	struct FVector2D GetMotionBlurLimits();

	float GetMotionBlur();

	int GetMaxRagdollsLimit();

	int GetMaxRagdolls();

	float GetMasterVolume();

	int GetLensFlares();

	struct FString GetLanguage();

	float GetInstrumentsVolume();

	int GetIndirectCapsuleShadows();

	int GetHideWatermark();

	int GetHideHUD();

	int GetHideDefaultLoadouts();

	struct FVector2D GetHeadbobLimits();

	float GetHeadbob();

	int GetGore();

	struct FVector2D GetGammaLimits();

	float GetGamma();

	int GetFriendlyMarkers();

	struct FVector2D GetFrameRateLimits();

	bool GetForceFeedbackEnabled();

	struct FVector2D GetFieldOfViewLimits();

	float GetFieldOfView();

	TArray<struct FString> GetFavoriteServers();

	float GetEffectsVolume();

	int GetDrawTracers();

	float GetCurrentMotionBlur();

	float GetCurrentGamma();

	float GetCurrentBloom();

	int GetCrosshairType();

	struct FVector2D GetCombatHeadbobLimits();

	float GetCombatHeadbob();

	int GetCharacterFidelity();

	int GetCharacterCloth();

	MordhauOnlineSubsystem_EServerRegion GetCasualMatchmakingRegion();

	TArray<struct FString> GetCasualMatchmakingGameModes();

	struct FVector2D GetCameraDistanceLimits();

	float GetCameraDistance();

	struct FVector2D GetBloomLimits();

	float GetBloom();

	void GetAvailableLanguages(TArray<struct FString>* AvailableLanguages);

	int GetAntiAliasing();

	int GetAmbientOcclusion();

	int GetActualCrosshairType();

	void ApplyTextureQualityUsingTextureGroups(int Quality);

	void ApplyAudioVolumes();

};



