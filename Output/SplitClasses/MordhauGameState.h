// Class Mordhau.MordhauGameState

// 0x0500 (FullSize[0x0790] - InheritedSize[0x0290])

class AMordhauGameState : public AGameState

{

public:

	struct FGameStateLastDemotableTickFunction         LastDemotableTickFunction;                                 // 0x0290(0x0030) (NativeAccessSpecifierPrivate)

	struct FGameStatePostPhysicsTickFunction           PostPhysicsTickFunction;                                   // 0x02C0(0x0030) (NativeAccessSpecifierPrivate)

	unsigned char                                      UnknownData_U8U6[0x80];                                    // 0x02F0(0x0080) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	TArray<TWeakObjectPtr<class AAdvancedCharacter>>   CharacterTemporaryArrayCached;                             // 0x0370(0x0010) (ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	TArray<float>                                      NextBudgetTime;                                            // 0x0380(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	unsigned char                                      UnknownData_QL83[0x8];                                     // 0x0390(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	TArray<class AParticleSystemActor*>                ParticleSystemActors;                                      // 0x0398(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	unsigned char                                      UnknownData_6K0I[0x8];                                     // 0x03A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	TArray<class AAdvancedCharacter*>                  CharacterDistanceArray;                                    // 0x03B0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	TMap<class AAdvancedCharacter*, int>               CharacterToDistanceArray;                                  // 0x03C0(0x0050) (NativeAccessSpecifierPrivate)

	unsigned char                                      CharacterPendingForDistanceArray[0x50];                    // 0x0410(0x0050) UNKNOWN PROPERTY: SetProperty

	TArray<TWeakObjectPtr<class AAdvancedCharacter>>   RagdollDistanceArray;                                      // 0x0460(0x0010) (ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	TMap<int64_t, class USkeletalMesh*>                EquipmentMeshCacheMap;                                     // 0x0470(0x0050) (NativeAccessSpecifierPrivate)

	class APreSkinnedPoseOracle*                       PreSkinnedPoseOracle;                                      // 0x04C0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	double                                             NextLoginTime;                                             // 0x04C8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	double                                             LoginAttemptInterval;                                      // 0x04D0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	int                                                LoginAttempts;                                             // 0x04D8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	int                                                MaxLoginAttempts;                                          // 0x04DC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	double                                             NextTokenRefreshTime;                                      // 0x04E0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	double                                             TokenRefreshInterval;                                      // 0x04E8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	struct FString                                     MatchmakingTicketID;                                       // 0x04F0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	struct FString                                     MatchmakingMatchID;                                        // 0x0500(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	bool                                               bAreStatsAvailable;                                        // 0x0510(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	bool                                               bIsInventoryAvailable;                                     // 0x0511(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	unsigned char                                      UnknownData_M671[0x6];                                     // 0x0512(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	TArray<class AAdvancedCharacter*>                  ImmutableLivingCharacterArray;                             // 0x0518(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_LBZP[0x8];                                     // 0x0528(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	TArray<struct FLineTraceMemoryEntry>               AttackTracesMemory;                                        // 0x0530(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UClass*                                      MetaData;                                                  // 0x0540(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bDisableClientStats;                                       // 0x0548(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bDisableChat;                                              // 0x0549(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bDisableScoreboard;                                        // 0x054A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bAllowHealthRegen;                                         // 0x054B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bDoNotLimitPlaceables;                                     // 0x054C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bOverrideArmorSpeedAndAccelerationFactor;                  // 0x054D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_K1BA[0x2];                                     // 0x054E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              OverrideArmorSpeedFactor;                                  // 0x0550(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              OverrideArmorAccelerationFactor;                           // 0x0554(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bAllPlayersHaveMarkers;                                    // 0x0558(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_A0PG[0x7];                                     // 0x0559(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	unsigned char                                      BannedEquipment[0x50];                                     // 0x0559(0x0050) UNKNOWN PROPERTY: SetProperty

	unsigned char                                      BannedPerks[0x50];                                         // 0x05B0(0x0050) UNKNOWN PROPERTY: SetProperty

	struct FString                                     MOTDURL;                                                   // 0x0600(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bIsThirdPersonCameraDisabled;                              // 0x0610(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_9BUW[0x3];                                     // 0x0611(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              ConstrainAspectRatio;                                      // 0x0614(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bDisableClientMods;                                        // 0x0618(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_XJ6I[0x3];                                     // 0x0619(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	int                                                MatchDurationMax;                                          // 0x061C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	int                                                ReplicatedMatchDurationMax;                                // 0x0620(0x0004) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_VY8Z[0x4];                                     // 0x0624(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	TMap<int, class AMapCameraActor*>                  MapCameraActors;                                           // 0x0628(0x0050) (BlueprintVisible, NativeAccessSpecifierPublic)

	float                                              DefaultEndMatchMapChangeTime;                              // 0x0678(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              EndMatchMapChangeEnd;                                      // 0x067C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              PostMatchScreenDelay;                                      // 0x0680(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              DefaultWarmupTime;                                         // 0x0684(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bSkipWarmupInDevBuild;                                     // 0x0688(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bBlockInputInWarmup;                                       // 0x0689(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_96ER[0x2];                                     // 0x068A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	int                                                MinPlayersToStart;                                         // 0x068C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              WarmupEnd;                                                 // 0x0690(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bDoNotGoToNextMapOnMatchEnd;                               // 0x0694(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bDoNotShowPostMatchScreen;                                 // 0x0695(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bAllowSpawning;                                            // 0x0696(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      TeamCount;                                                 // 0x0697(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TArray<float>                                      TeamScores;                                                // 0x0698(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bIsTeamMode;                                               // 0x06A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bEnforceTeamColors;                                        // 0x06A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_VA0M[0x6];                                     // 0x06AA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	TArray<struct FLinearColor>                        TeamColors;                                                // 0x06B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TArray<struct FString>                             TeamNames;                                                 // 0x06C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TArray<struct FLinearColor>                        SecondaryTeamColors;                                       // 0x06D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TArray<class AControlPoint*>                       AllCapturePoints;                                          // 0x06E0(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	int                                                Team1CapturePoints;                                        // 0x06F0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	int                                                Team2CapturePoints;                                        // 0x06F4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bUsePushTopologicalProgress;                               // 0x06F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      PushTopologicalProgressAttackingTeam;                      // 0x06F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_V1TM[0x2];                                     // 0x06FA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              Team1TopologicalProgress;                                  // 0x06FC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              Team2TopologicalProgress;                                  // 0x0700(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_MSW2[0x4];                                     // 0x0704(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	TArray<struct FCapturePointGroup>                  CapturePointTopologicalOrdering;                           // 0x0708(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TMap<struct FName, struct FGroupSoundGroup>        SoundGroups;                                               // 0x0718(0x0050) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)

	float                                              LastBotVoiceCommandTime;                                   // 0x0768(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              LastBotEmoteTime;                                          // 0x076C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              LastBotClimbTime;                                          // 0x0770(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_65GZ[0x4];                                     // 0x0774(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	TArray<TWeakObjectPtr<class UDecalComponent>>      BloodDecalsArray;                                          // 0x0778(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_OPSQ[0x8];                                     // 0x0788(0x0008) MISSED OFFSET (PADDING)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.MordhauGameState");

		return ptr;

	}







	void UpdateSoundGroups();

	void UpdateCapturePointData();

	void UnregisterParticleSystemActor(class AParticleSystemActor* ParticleActor);

	void StoreEquipmentMeshInCache(class USkeletalMesh* Mesh, int ID, unsigned char Skin, unsigned char Part1, unsigned char Part2, unsigned char Part3, bool bUseAuxiliaryMesh);

	bool ShouldTickThisFrame(class AAdvancedCharacter* Character);

	bool ShouldTickAnimationThisFrame(class AAdvancedCharacter* Character);

	bool ShouldPaintGearWithTeamColors();

	bool ShouldBlockPawnInput();

	void ReserveCharacterRagdoll(class AAdvancedCharacter* Character);

	void RemoveCharacterFromDistanceArray(class AAdvancedCharacter* Character);

	void RegisterParticleSystemActor(class AParticleSystemActor* ParticleActor);

	void PostPhysicsTick(float DeltaTime);

	void OnReplicatedMOTD();

	void OnRep_ReplicatedMatchDurationMax();

	void OnRep_MOTDURL();

	void LocalPlayerChangedTeam();

	bool LineTraceCharacters(const struct FVector& LineStart, const struct FVector& LineEnd, TArray<struct FHitResult>* Results);

	void LastDemotableTick(float DeltaTime);

	bool IsFriendly(class AActor* ActorA, class AActor* ActorB, bool bIsFriendlyIfSelf);

	struct FString GetTeamName(int Team);

	struct FLinearColor GetTeamColor(int Team);

	struct FLinearColor GetSecondaryTeamColor(int Team);

	TArray<int> GetPlayerCountsPerTeam(bool bOnlyLiving, bool bOnlyWithValidProfiles);

	class USkeletalMesh* GetEquipmentMeshFromCache(int ID, unsigned char Skin, unsigned char Part1, unsigned char Part2, unsigned char Part3, bool bUseAuxiliaryMesh);

	int64_t GetEquipmentCacheHash(int ID, unsigned char Skin, unsigned char Part1, unsigned char Part2, unsigned char Part3, bool bUseAuxiliaryMesh);

	int GetCurrentFrame();

	class AAdvancedCharacter* GetCharacterByDistanceRank(int DistanceRank);

	struct FTransform GetBindPoseTransform(class USkeletalMesh* Mesh, const struct FName& SocketName);

	class AMapCameraActor* GetAppropriateMapCameraActor(class APlayerController* Controller);

	bool CanPlayerJoinTeam(class AMordhauPlayerState* Player, int Team);

	bool CanImmediatelyChangeProfile(class AController* Controller);

};



