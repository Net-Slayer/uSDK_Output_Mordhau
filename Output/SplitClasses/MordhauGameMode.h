// Class Mordhau.MordhauGameMode

// 0x0298 (FullSize[0x05A0] - InheritedSize[0x0308])

class AMordhauGameMode : public AGameMode

{

public:

	TArray<struct FGameModeName>                       MapPrefixes;                                               // 0x0308(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TArray<struct FString>                             MapRotation;                                               // 0x0318(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TMap<struct FString, struct FString>               MapGameModeOverrides;                                      // 0x0328(0x0050) (Edit, BlueprintVisible, Config, GlobalConfig, NativeAccessSpecifierPublic)

	struct FString                                     MOTDURL;                                                   // 0x0378(0x0010) (BlueprintVisible, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bIsThirdPersonCameraDisabled;                              // 0x0388(0x0001) (BlueprintVisible, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_7YA9[0x3];                                     // 0x0389(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              ConstrainAspectRatio;                                      // 0x038C(0x0004) (BlueprintVisible, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bIsHitStopOnTeamHitsDisabled;                              // 0x0390(0x0001) (BlueprintVisible, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bDisableClientMods;                                        // 0x0391(0x0001) (BlueprintVisible, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_X5CH[0x6];                                     // 0x0392(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	TArray<struct FString>                             SpawnServerActorsOnMapLoad;                                // 0x0398(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bLogKillfeed;                                              // 0x03A8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bLogChat;                                                  // 0x03A9(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bLogScore;                                                 // 0x03AA(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bAllowSpawningServerActorsOnMapLoad;                       // 0x03AB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bAllowAdminChat;                                           // 0x03AC(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bAllowWhisperChat;                                         // 0x03AD(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_CWHF[0x2];                                     // 0x03AE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	TArray<TWeakObjectPtr<class AController>>          SpawnQueue;                                                // 0x03B0(0x0010) (ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TWeakObjectPtr<class AController>                  CurrentlySpawningController;                               // 0x03C0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class AActor*                                      CurrentlySpawningPlayerStart;                              // 0x03C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	int                                                CurrentlySpawningStage;                                    // 0x03D0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bMatchTimeRanOut;                                          // 0x03D4(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_LFKW[0x3];                                     // 0x03D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              PlayerRespawnTime;                                         // 0x03D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bUsesSlowPlayerSpawning;                                   // 0x03DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_TAJW[0x3];                                     // 0x03DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	int                                                AutoKickOnTeamKillAmount;                                  // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bPlayersSpawnInWaves;                                      // 0x03E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bPlayersDropAllGearOnDeath;                                // 0x03E5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bEquipmentDoesNotDespawn;                                  // 0x03E6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_Z7NK[0x1];                                     // 0x03E7(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              OverrideEquipmentDespawnTime;                              // 0x03E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              BallistaRespawnTime;                                       // 0x03EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              CatapultRespawnTime;                                       // 0x03F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              HorseRespawnTime;                                          // 0x03F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TArray<struct FString>                             MapVoteMaps;                                               // 0x03F8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	Mordhau_EOfficialServerVisibility                  OfficialServerVisibility;                                  // 0x0408(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_4PNO[0x3];                                     // 0x0409(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              DamageFactor;                                              // 0x040C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              TeamDamageFactor;                                          // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	int                                                TeamDamageFlinch;                                          // 0x0414(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              SpawnProtectionDuration;                                   // 0x0418(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bDisableDamage;                                            // 0x041C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bDisableStamina;                                           // 0x041D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bIsScoringDisabled;                                        // 0x041E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_BJUC[0x1];                                     // 0x041F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              AssistScoreFactor;                                         // 0x0420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      AssistDamageToCountAsKill;                                 // 0x0424(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_R3S4[0x3];                                     // 0x0425(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              KillScoreChange;                                           // 0x0428(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              KillTeamScoreChange;                                       // 0x042C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              TeamKillScoreChange;                                       // 0x0430(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              TeamKillTeamScoreChange;                                   // 0x0434(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bTeamKillsDecrementKillerKills;                            // 0x0438(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bTeamKillsIncrementKilledDeaths;                           // 0x0439(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bSuicideDecrementsKills;                                   // 0x043A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_T44N[0x5];                                     // 0x043B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	TArray<struct FString>                             ChatMessages;                                              // 0x0440(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TMap<struct FString, struct FString>               MessageTypeMap;                                            // 0x0450(0x0050) (BlueprintVisible, Config, NativeAccessSpecifierPublic)

	TMap<struct FString, struct FPlayerChatMessagesContainer> PlayerMessagesMap;                                         // 0x04A0(0x0050) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	struct FScriptMulticastDelegate                    OnRconStringCommand;                                       // 0x04F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	TArray<struct FRconEventStruct>                    RconEvents;                                                // 0x0500(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FScriptMulticastDelegate                    OnMessageBroadcasted;                                      // 0x0510(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	struct FScriptMulticastDelegate                    OnAfterLogin;                                              // 0x0520(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	struct FScriptMulticastDelegate                    OnBeforeLogout;                                            // 0x0530(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	TArray<struct FChatCommandStruct>                  ChatCommands;                                              // 0x0540(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_CSBB[0x50];                                    // 0x0550(0x0050) MISSED OFFSET (PADDING)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.MordhauGameMode");

		return ptr;

	}







	bool VoteLevel(class APlayerController* Player, const struct FString& LevelName);

	void SetTeamScore(int Team, float Amount);

	bool SetRconEvent(struct FRconEventStruct* InStruct, const struct FScriptDelegate& InEvent, bool bOverrideExisting);

	void RequestedAssignTeam(class AController* Controller, int Team);

	void RemoveBots(int Amount, int Team);

	void OnTeamScoreChanged(int Team, float OldValue);

	void OnScoreChanged(class APlayerState* State, float OldValue);

	void OnMatchStateChanged(const struct FName& OldState, const struct FName& NewState);

	void OnKillsChanged(class APlayerState* State, int OldValue);

	void OnKilled(class AController* Killer, class AController* KilledPlayer, class APawn* KilledPawn, Mordhau_EMordhauDamageType Type, unsigned char SubType, class AActor* DamageSource, class AActor* DamageAgent);

	void OnDeathsChanged(class APlayerState* State, int OldValue);

	void OnAssistsChanged(class APlayerState* State, int OldValue);

	void MatchTimeRanOut();

	bool IsSpawnpointAllowed(class APlayerStart* PlayerStart, class AController* Player);

	float GetSpawnpointPreference(class APlayerStart* PlayerStart, class AController* Player);

	TArray<struct FString> GetNextMaps(int Count);

	struct FString GetNextMap();

	TArray<struct FString> GetMapVoteMaps();

	TArray<unsigned char> GetMapVoteCounts();

	float GetDamageFactor(class AActor* DamageSource, class AActor* DamageTarget);

	bool ControllerCanRestart(class AController* Controller);

	bool ChangeLevel(const struct FString& LevelName);

	bool CanDealDamage(class AActor* DamageSource, class AActor* DamageTarget);

	bool CanClash(class APawn* Source, class APawn* Target);

	bool CanChamber(class APawn* Source, class APawn* Target);

	void Broadcast(class AActor* Sender, const struct FString& Msg, const struct FName& Type);

	void AddTeamScore(int Team, float Amount);

	void AddBots(int Amount, int Team);

};



