// Class Mordhau.MordhauAIController

// 0x02D8 (FullSize[0x0600] - InheritedSize[0x0328])

class AMordhauAIController : public AAIController

{

public:

	unsigned char                                      UnknownData_4H7V[0x14];                                    // 0x0328(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	TWeakObjectPtr<class AActor>                       FacingActor;                                               // 0x033C(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	TWeakObjectPtr<class USkeletalMeshComponent>       FacingSkelMesh;                                            // 0x0344(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	struct FName                                       FacingBone;                                                // 0x034C(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	unsigned char                                      UnknownData_3JX3[0x24];                                    // 0x0354(0x0024) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	class UAISenseConfig_Sight*                        SightConfig;                                               // 0x0378(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	class UAISenseConfig_Hearing*                      HearingConfig;                                             // 0x0380(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	class UAISenseConfig_Damage*                       DamageConfig;                                              // 0x0388(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	unsigned char                                      UnknownData_I922[0x50];                                    // 0x0390(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	struct FRotator                                    DesiredControlRotationOverride;                            // 0x03E0(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	TWeakObjectPtr<class AMordhauCharacter>            ReallyCloseEnemyCached;                                    // 0x03EC(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TWeakObjectPtr<class AMordhauCharacter>            LastClosestEnemy;                                          // 0x03F4(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bIsClosestEnemySaturated;                                  // 0x03FC(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_W4HE[0xB];                                     // 0x03FD(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	TWeakObjectPtr<class AMordhauCharacter>            ClosestEnemyOverride;                                      // 0x0408(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      ClosestEnemyIgnoreSet[0x50];                               // 0x0410(0x0050) UNKNOWN PROPERTY: SetProperty

	bool                                               bFirstRun;                                                 // 0x0460(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_FC6D[0x3];                                     // 0x0461(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              LODDeltaTime;                                              // 0x0464(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              RandomFloat;                                               // 0x0468(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_NE07[0x4];                                     // 0x046C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	class UBotProfile*                                 BotProfile;                                                // 0x0470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UBotBehaviorProfile*                         BehaviorProfile;                                           // 0x0478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_8PDO[0xC];                                     // 0x0480(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              RotationInterpolationTime;                                 // 0x048C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FCharacterProfile                           CharacterProfile;                                          // 0x0490(0x00B8) (NativeAccessSpecifierPublic)

	class ACustomizationReplicationActor*              CustomizationReplicationActor;                             // 0x0548(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bUsePassedCustomizationReplicationActor;                   // 0x0550(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_GGGS[0x3];                                     // 0x0551(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              EnemyScanInterval;                                         // 0x0554(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              EnemyScanIntervalVariance;                                 // 0x0558(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bAutoRespawn;                                              // 0x055C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bWantsRespawn;                                             // 0x055D(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_7Q15[0x2];                                     // 0x055E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              NextRespawnTime;                                           // 0x0560(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bWants1DMovementBackwards;                                 // 0x0564(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_LM6I[0x3];                                     // 0x0565(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	struct FVector                                     DesiredClimbTarget;                                        // 0x0568(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bEnableAnticipateTurns;                                    // 0x0574(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bEnableObstacleAvoidance;                                  // 0x0575(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bEnableSeparation;                                         // 0x0576(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bEnableOptimizeVisibility;                                 // 0x0577(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bEnableOptimizeTopology;                                   // 0x0578(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bEnablePathOffset;                                         // 0x0579(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bEnableSlowdownAtGoal;                                     // 0x057A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_CLV0[0x1];                                     // 0x057B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              SeparationWeight;                                          // 0x057C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              CollisionQueryRange;                                       // 0x0580(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              PathOptimizationRange;                                     // 0x0584(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              AvoidanceRangeMultiplier;                                  // 0x0588(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TEnumAsByte<AIModule_ECrowdAvoidanceQuality>       AvoidanceQuality;                                          // 0x058C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	AIModule_ECrowdSimulationState                     SimulationState;                                           // 0x058D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_MCAV[0x2];                                     // 0x058E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	class UClass*                                      DefaultNavQueryFilter;                                     // 0x0590(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UClass*                                      Team1NavQueryFilter;                                       // 0x0598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UClass*                                      Team2NavQueryFilter;                                       // 0x05A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UClass*                                      NoLadderNavQueryFilter;                                    // 0x05A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_ISRO[0x48];                                    // 0x05B0(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              MidPointAcceptanceRadius;                                  // 0x05F8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	unsigned char                                      UnknownData_DQX0[0x4];                                     // 0x05FC(0x0004) MISSED OFFSET (PADDING)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.MordhauAIController");

		return ptr;

	}







	void UpdatePerceptionInfo(class AAdvancedCharacter* InCharacter, struct FPerceptionInfo* PerceptionInfo);

	void StopInteract();

	void StartInteract(class AActor* Target);

	void StartFacingMovement(float LocationUpOffset);

	void StartFacingLocation(const struct FVector& WorldLocation);

	void StartFacingBone(class USkeletalMeshComponent* SkelMesh, const struct FName& BoneToFace, float LocationUpOffset, const struct FVector2D& DegreeOffset);

	void StartFacingActor2D(class AActor* Actor, float LocationUpOffset);

	void StartFacingActor(class AActor* Actor, float LocationUpOffset, const struct FVector2D& DegreeOffset);

	void SetClosestEnemyOverride(class AMordhauCharacter* Override);

	void ResumeLogic(const struct FString& Reason);

	void RequestVoiceCommand(unsigned char Command);

	void RefreshCharacterProfile();

	bool PerceivesEnemy();

	bool PerceivesAlly();

	void PauseLogic(const struct FString& Reason);

	void OnStoppedPerceivingCharacter(class AAdvancedCharacter* PerceivedCharacter, const struct FPerceptionInfo& PerceptionInfo);

	void OnStartedPerceivingCharacter(class AAdvancedCharacter* PerceivedCharacter, const struct FPerceptionInfo& PerceptionInfo);

	void OnPerceptionUpdated(TArray<class AActor*> InUpdatedActors);

	void OnCharacterDiedOrDestroyed(class AAdvancedCharacter* AdvancedCharacter);

	void OnAfterUnPossess();

	TEnumAsByte<AIModule_EPathFollowingRequestResult> MoveToLocationWithRandomMidpoint(const struct FVector& Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, class UClass* FilterClass, bool bAllowPartialPath);

	bool IsMovePending();

	int GetTeam();

	TArray<class AMordhauCharacter*> GetPerceivedEnemies();

	TArray<class AMordhauCharacter*> GetPerceivedAllies();

	struct FVector GetMoveMidpoint(const struct FVector& Goal, class ANavigationData* NavData, class UClass* FilterClass);

	float GetMotionBasedRandom();

	class AMordhauCharacter* GetKthClosestOfThree(int Idx);

	class AActor* GetCurrentlyFacingActor();

	Mordhau_EAIFacingMode GetCurrentFacingMode();

	class AMordhauCharacter* GetClosestEnemyOverride();

	class AMordhauCharacter* GetClosestEnemy();

	class AMordhauCharacter* GetClosestAlly();

	int GetAllyClearanceSides();

	void DestroyController();

	bool CanSee(class AActor* Target, float Distance);

	bool CanInteract(class AActor* Target);

};



