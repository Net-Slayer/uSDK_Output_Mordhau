// Class Mordhau.MordhauCharacter

// 0x07A8 (FullSize[0x1290] - InheritedSize[0x0AE8])

class AMordhauCharacter : public AAdvancedCharacter

{

public:

	class UMordhauMotion*                              Motion;                                                    // 0x0AE8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	unsigned char                                      UnknownData_E9D9[0x8];                                     // 0x0AF0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	TMap<struct FName, class UMordhauWearable*>        WearableProtectionCoverageMap;                             // 0x0AF8(0x0050) (NativeAccessSpecifierPrivate)

	unsigned char                                      UnknownData_QOAI[0x10];                                    // 0x0B48(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	class UMordhauCameraComponent*                     MordhauCamera;                                             // 0x0B58(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UFaceCustomizationComponent*                 FaceCustomizationComponent;                                // 0x0B60(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              NextAllowedVoiceCommandTime;                               // 0x0B68(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bWantsClimb;                                               // 0x0B6C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bAllowDrop;                                                // 0x0B6D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bAllowClimbing;                                            // 0x0B6E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bAllowVehicles;                                            // 0x0B6F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bAllowEquipmentRotate;                                     // 0x0B70(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_XI4B[0x3];                                     // 0x0B71(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              InTeamAreaSince;                                           // 0x0B74(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bOverrideIsInEnemyTeamArea;                                // 0x0B78(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bIsHoldingBlock;                                           // 0x0B79(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bIsHoldingModeSwitch;                                      // 0x0B7A(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_HN9Q[0x1];                                     // 0x0B7B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              HoldingModeSwitchTime;                                     // 0x0B7C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              TimeToHoldModeSwitchForOtherHand;                          // 0x0B80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FSpineSpaceAdditive                         OverrideSpineSpaceAdditive;                                // 0x0B84(0x0084) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	bool                                               bUseOverrideSpineSpaceAdditive;                            // 0x0C08(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_0A7D[0x3];                                     // 0x0C09(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	struct FSpineSpaceAdditive                         SpineSpaceAdditiveTarget;                                  // 0x0C0C(0x0084) (NoDestructor, NativeAccessSpecifierPublic)

	struct FSpineSpaceAdditive                         SpineSpaceAdditiveFrom;                                    // 0x0C90(0x0084) (NoDestructor, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_WFBP[0xC];                                     // 0x0D14(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	bool                                               bIsLeftArmDisabled;                                        // 0x0D20(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bIsRightArmDisabled;                                       // 0x0D21(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bIsLeftLegDisabled;                                        // 0x0D22(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bIsRightLegDisabled;                                       // 0x0D23(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_X1MP[0x4];                                     // 0x0D24(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	TArray<struct FFacialBoneSetup>                    FaceCustomizationSetup;                                    // 0x0D28(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bDoNotAnimateBreathing;                                    // 0x0D38(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bDoNotUseGrounding;                                        // 0x0D39(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bIsSoundDisabled;                                          // 0x0D3A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bDoNotLookAtOthers;                                        // 0x0D3B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      ReplicatedDodge;                                           // 0x0D3C(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      ReplicatedKnockback;                                       // 0x0D3D(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      ReplicatedVoiceCommand;                                    // 0x0D3E(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_NU7F[0x1];                                     // 0x0D3F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	TWeakObjectPtr<class ACustomizationReplicationActor> ReplicatedCustomizationReplicationActor;                   // 0x0D40(0x0008) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TArray<struct FTransform>                          FaceCustomizationBonesTransforms;                          // 0x0D48(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_W3IX[0x8];                                     // 0x0D58(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	class AControlPoint*                               CurrentCapturePoint;                                       // 0x0D60(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              CurrentCapturePointTime;                                   // 0x0D68(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bForceColorOverrides;                                      // 0x0D6C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_N3X9[0x3];                                     // 0x0D6D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	struct FLinearColor                                ColorAOverride;                                            // 0x0D70(0x0010) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FLinearColor                                ColorBOverride;                                            // 0x0D80(0x0010) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	int                                                CurrentForcedLOD;                                          // 0x0D90(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_7V6I[0x4];                                     // 0x0D94(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	TArray<TWeakObjectPtr<class AActor>>               ActorsThatDestroyWithUs;                                   // 0x0D98(0x0010) (ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TWeakObjectPtr<class UParticleSystemComponent>     CurrentBleedOutParticles;                                  // 0x0DA8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TWeakObjectPtr<class AActor>                       LastMovementFrontalHitActor;                               // 0x0DB0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_O73B[0xC];                                     // 0x0DB8(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	bool                                               bWantsCrouch;                                              // 0x0DC4(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_IWTY[0x3];                                     // 0x0DC5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              CrouchCooldown;                                            // 0x0DC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              SprintingMoveBlockedByFractionToTrigger;                   // 0x0DCC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              MoveBlockedBySlowMinInterval;                              // 0x0DD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_MLXA[0x4];                                     // 0x0DD4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	struct FVector                                     ClimbTargetLocation;                                       // 0x0DD8(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              LastNoticeableLookChange;                                  // 0x0DE4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FVector2D                                   PreviousLookValues;                                        // 0x0DE8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              NoticeableLookChangeMinRate;                               // 0x0DF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_HXIV[0x4];                                     // 0x0DF4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	TArray<struct FDamageRecord>                       DamageHistory;                                             // 0x0DF8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_1GID[0x10];                                    // 0x0E08(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              StructureDamageModifier;                                   // 0x0E18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              StructureRepairModifier;                                   // 0x0E1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	int                                                ExtraStaminaOnHit;                                         // 0x0E20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              StaminaCostModifier;                                       // 0x0E24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              MeleeWindupModifier;                                       // 0x0E28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              MeleeComboExtraWindupModifier;                             // 0x0E2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              MeleeReleaseModifier;                                      // 0x0E30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              MeleeMissRecoveryModifier;                                 // 0x0E34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              LegDamageBonusModifierAirborne;                            // 0x0E38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bIsUnflinchable;                                           // 0x0E3C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_XDPX[0x3];                                     // 0x0E3D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              UnflinchableDamageThreshold;                               // 0x0E40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bIsHitStopOnTeamHitsDisabled;                              // 0x0E44(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bCanDodge;                                                 // 0x0E45(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      Stamina;                                                   // 0x0E46(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      ReplicatedStamina;                                         // 0x0E47(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      StaminaRegenPerTick;                                       // 0x0E48(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_IQTO[0x3];                                     // 0x0E49(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              StaminaRegenDelay;                                         // 0x0E4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	int                                                StaminaOnKill;                                             // 0x0E50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	int                                                HealthOnKill;                                              // 0x0E54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              StaminaRegenTickRate;                                      // 0x0E58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              JumpStaminaCost;                                           // 0x0E5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              LastEnemyKilledTimeWithMeleeOrRanged;                      // 0x0E60(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              KnockbackParry;                                            // 0x0E64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              KnockbackWorld;                                            // 0x0E68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              KnockbackClash;                                            // 0x0E6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_NOVF[0x4];                                     // 0x0E70(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              EasyParryUntilTime;                                        // 0x0E74(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              FallingTime;                                               // 0x0E78(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              FallingTimeToRagdoll;                                      // 0x0E7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              LastDodgeTime;                                             // 0x0E80(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              DodgeDuration;                                             // 0x0E84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              DodgeCooldown;                                             // 0x0E88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	int                                                DodgeStaminaCost;                                          // 0x0E8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bWasDodgeCanceled;                                         // 0x0E90(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_DNSY[0x3];                                     // 0x0E91(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	struct FVector                                     DodgeDirection;                                            // 0x0E94(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FVector                                     DodgeDirectionLocal;                                       // 0x0EA0(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              TotalChaseTime;                                            // 0x0EAC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              LastChaseTime;                                             // 0x0EB0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              TotalChasedTime;                                           // 0x0EB4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              LastChasedTime;                                            // 0x0EB8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_VUO1[0x4];                                     // 0x0EBC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	class UAnimSequence*                               SkinnyPose;                                                // 0x0EC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UAnimSequence*                               FatPose;                                                   // 0x0EC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UAnimSequence*                               StrongPose;                                                // 0x0ED0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bIgnoresTeamColors;                                        // 0x0ED8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bWasHitAfterDeath;                                         // 0x0ED9(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_K0VV[0x2];                                     // 0x0EDA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	TWeakObjectPtr<class AActor>                       CurrentlyTracking;                                         // 0x0EDC(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              LastTrackingUpdate;                                        // 0x0EE4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bIsFirstPerson;                                            // 0x0EE8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      CameraStyle;                                               // 0x0EE9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_ODF7[0x2];                                     // 0x0EEA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              CurrentSpeedFOVOffset;                                     // 0x0EEC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              MaxSprintFOVOffset;                                        // 0x0EF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              MaxSprintFOVOffsetInterpSpeed;                             // 0x0EF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FVector                                     CameraLocation1P;                                          // 0x0EF8(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FVector                                     CameraLocation1PCosmeticOffset;                            // 0x0F04(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FRotator                                    CameraRotation1P;                                          // 0x0F10(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	struct FRotator                                    CameraRotation1PMeshSpace;                                 // 0x0F1C(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	TWeakObjectPtr<class AActor>                       InteractionTarget;                                         // 0x0F28(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              UseHoldTime;                                               // 0x0F30(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              EllipseBubbleLength;                                       // 0x0F34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              EllipseBubbleRadius;                                       // 0x0F38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              EllipseBubbleMaxHeightDiff;                                // 0x0F3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FVector2D                                   BlockColliderForwardParryDistance;                         // 0x0F40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UBoxComponent*                               BlockCollider;                                             // 0x0F48(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FTransform                                  LowBlockColliderRelativeOffset;                            // 0x0F50(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	struct FTransform                                  HighBlockColliderRelativeOffset;                           // 0x0F80(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	struct FTransform                                  OriginalBlockColliderRelativeOffset;                       // 0x0FB0(0x0030) (BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_T5DF[0x10];                                    // 0x0FE0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	struct FVector                                     LastRequestedFireOrigin;                                   // 0x0FF0(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FRotator                                    LastRequestedFireRotation;                                 // 0x0FFC(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	bool                                               bWantsFire;                                                // 0x1008(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bWantsBlock;                                               // 0x1009(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bWantsFeintOrBlock;                                        // 0x100A(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_UYZ5[0x5];                                     // 0x100B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	TArray<class UParticleSystem*>                     SprintFootstepParticles;                                   // 0x1010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UClass*                                      BloodHitEffect;                                            // 0x1020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UClass*                                      BloodMetalHitEffect;                                       // 0x1028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UParticleSystem*                             BleedingOutParticleEffect;                                 // 0x1030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UParticleSystem*                             DodgeParticleEffect;                                       // 0x1038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UClass*                                      DodgeCameraShake;                                          // 0x1040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UClass*                                      FallDamageCameraShake;                                     // 0x1048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UClass*                                      RunLeftHeadBobShake;                                       // 0x1050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UClass*                                      RunRightHeadBobShake;                                      // 0x1058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UClass*                                      WalkLeftHeadBobShake;                                      // 0x1060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UClass*                                      WalkRightHeadBobShake;                                     // 0x1068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UClass*                                      BlockShakeEffect;                                          // 0x1070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UClass*                                      BlockedShakeEffect;                                        // 0x1078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UClass*                                      FlinchShakeEffect;                                         // 0x1080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FNetBlock                                   NetBlock;                                                  // 0x1088(0x0010) (Net, RepNotify, NoDestructor, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_FC1N[0x8];                                     // 0x1098(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	class UMordhauVehicleComponent*                    CurrentVehicle;                                            // 0x10A0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      DeathSyncedRandom;                                         // 0x10A8(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FNetMotion                                  ReplicatedNetMotion;                                       // 0x10A9(0x0006) (Net, RepNotify, NoDestructor, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_E5TS[0x1];                                     // 0x10AF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	TArray<class UClass*>                              Motions;                                                   // 0x10B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TArray<class UClass*>                              EmoteMotions;                                              // 0x10C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TArray<struct FEmoteEntry>                         CharacterEmotes;                                           // 0x10D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TArray<struct FEmoteEntry>                         UnarmedEmotes;                                             // 0x10E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bWantsCharacterRebuild;                                    // 0x10F0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_XJGT[0x7];                                     // 0x10F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	TArray<class UMordhauWearable*>                    WearableObjectInstances;                                   // 0x10F8(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FCharacterProfile                           Profile;                                                   // 0x1108(0x00B8) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	bool                                               bDestroyEquipmentOnDeath;                                  // 0x11C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      EquipmentInventorySize;                                    // 0x11C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_ATY3[0x6];                                     // 0x11C2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	TArray<class AMordhauEquipment*>                   Equipment;                                                 // 0x11C8(0x0010) (BlueprintVisible, Net, ZeroConstructor, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class AMordhauEquipment*                           RightHandEquipment;                                        // 0x11D8(0x0008) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class AMordhauEquipment*                           LeftHandEquipment;                                         // 0x11E0(0x0008) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UClass*                                      Quiver;                                                    // 0x11E8(0x0008) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class AKickWeapon*                                 KickWeapon;                                                // 0x11F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bCanJumpKick;                                              // 0x11F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_JOKX[0x3];                                     // 0x11F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              FallingTimeToScream;                                       // 0x11FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class USoundCue*                                   DodgeSound;                                                // 0x1200(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class USoundCue*                                   DodgeSoundLocalPlayer;                                     // 0x1208(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class USoundCue*                                   SnappyArmorFoley;                                          // 0x1210(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class USoundCue*                                   NonSnappyArmorFoley;                                       // 0x1218(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class USoundCue*                                   CrouchStartSound;                                          // 0x1220(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class USoundCue*                                   CrouchEndSound;                                            // 0x1228(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class USoundCue*                                   ReleaseFoley;                                              // 0x1230(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TWeakObjectPtr<class UAudioComponent>              LastArmorFoley;                                            // 0x1238(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FScriptMulticastDelegate                    OnPreBeginPlay;                                            // 0x1240(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	struct FScriptMulticastDelegate                    OnVehicleChanged;                                          // 0x1250(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	struct FScriptMulticastDelegate                    OnCameraStyleChanged;                                      // 0x1260(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_GLVO[0x8];                                     // 0x1270(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	struct FScriptMulticastDelegate                    OnCharacterBuilt;                                          // 0x1278(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_QNT6[0x8];                                     // 0x1288(0x0008) MISSED OFFSET (PADDING)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.MordhauCharacter");

		return ptr;

	}







	bool ValidateInteractionTarget(class AActor* TargetActor);

	void UseReleased();

	void UsePressed();

	void UpdateWearableInstanceColorsAndPatterns();

	void UpdateLOD(float DeltaTime);

	void UpdateFPCamera(float DeltaSeconds, float InLookUpValue, bool bOnlyUpdateRotation, const struct FRotator& Offset);

	void UpdateAllSkeletalMeshComponentMaterials();

	bool TryDismember(const struct FName& bone, const struct FVector& Point, class AMordhauWeapon* Weapon, Mordhau_EAttackMove Move, bool bIsRagdollDismember);

	bool TryClimbing();

	void ToggleWeaponModeReleased();

	void ToggleWeaponModePressed();

	void SwitchToFists();

	void SwitchModeAndReAttach(class AMordhauEquipment* ToSwitch);

	void SwitchEquipmentByIndex(unsigned char Index);

	void SwitchEquipment(class AMordhauEquipment* ToSwitch);

	void StopSupersprint();

	void StopStaminaRegen(float ExtraTime);

	void StopSprinting();

	void StopScreaming();

	void StopListenForStrike360();

	void StopListenForStab360();

	void StopCurrentVoiceCommand();

	void StopCrouching();

	void StopAttackYell();

	void StartSupersprint();

	void StartSprinting();

	void StartScreaming();

	void StartCrouching();

	void SprintReleased();

	void SprintPressed();

	void SprintingMoveBlockedBy(class AActor* BlockedBy);

	void ShowEquipmentIfViewTarget();

	void SetQuiver(class UClass* NewQuiver);

	void SetFaceCustomizationTranslate(const struct FName& BoneName, const struct FVector& Vector);

	void SetFaceCustomizationScale(const struct FName& BoneName, const struct FVector& Vector);

	void SetFaceCustomizationRotate(const struct FName& BoneName, const struct FVector& Vector);

	void SetCustomizationReplicationActor(class ACustomizationReplicationActor* CRA);

	void SetCurrentlyTracking(class AActor* NewTrackingTarget);

	void SetCameraStyle(unsigned char NewStyle, bool bBlendCamera);

	void ServerSuggestHitDetection(class AAdvancedCharacter* OtherCharacter, const struct FVector_NetQuantize& HitLocation, unsigned char BoneId);

	void ServerSetInteractionTarget(class AActor* Target);

	void ServerRequestVoiceCommand(unsigned char VoiceRequest);

	void ServerRequestPassiveInteraction(class AActor* Target);

	void ServerRequestDodge(unsigned char PackedWorldYaw);

	void ServerQueueAttack(Mordhau_EAttackMove Move, unsigned char Angle, unsigned char MotionID);

	void ServerFinishInteraction(unsigned char Result);

	void ServerDropParry(unsigned char MotionID);

	void ServerAssignNetMotion(const struct FNetMotion& NewNetMotion, unsigned char LastAuthObserved);

	void ServerAssignFireAim(const struct FVector& Orig, const struct FRotator& Rot);

	bool RestockEquipmentFromAmmoBox();

	TArray<class AMordhauEquipment*> RestockDefaultEquipment(int MaxSlotsToRestock);

	void RequestVoiceCommand(unsigned char CommandType, bool bAllowQueue);

	void RequestUse();

	void RequestToggleWeaponMode();

	void RequestStrike360();

	void RequestStab360();

	void RequestRightUpperStrike();

	void RequestRightStrike();

	void RequestRightStab();

	void RequestRightLowerStrike();

	void RequestRangedCancel();

	bool RequestParry(Mordhau_EBlockType BlockType, bool bAllowFTP);

	void RequestLeftUpperStrike();

	void RequestLeftStrike();

	void RequestLeftStab();

	void RequestLeftLowerStrike();

	void RequestKick();

	void RequestJump();

	void RequestHolster(unsigned char Mode);

	void RequestFire();

	void RequestFeint();

	void RequestEmote(unsigned char EmoteId);

	void RequestDrop();

	void RequestCouchedAttack();

	void RequestClimb(const struct FVector& TargetLocation, bool bIsSlowClimb);

	void RequestBash();

	void RequestAttack(Mordhau_EAttackMove Move, float Angle);

	bool QueueDismember(const struct FName& bone, bool bIsDismemberPartial, bool bIsBluntForce, const struct FVector& Force, class AActor* Agent);

	void PreviousShieldEquipment();

	void PreviousEquipmentReleased();

	void PreviousEquipmentPressed();

	void PreviousEquipment();

	class UAudioComponent* PlaySnappyArmorFoley();

	class UAudioComponent* PlayNonSnappyArmorFoley();

	class UAudioComponent* PlayMouthSound(class USoundBase* Sound, float VolumeMultiplier);

	void PlayHurtYell();

	void PlayDeathYell(bool bIsLongYell);

	void PlayAttackYell();

	bool PickUpToSlot(class AMordhauEquipment* ToEquip, unsigned char Slot);

	bool PickUp(class AMordhauEquipment* ToEquip, int PreferredSlot);

	bool PerformVoiceCommand(unsigned char PackedVoiceCommand);

	void OnRep_RightHandEquipment();

	void OnRep_ReplicatedVoiceCommand();

	void OnRep_ReplicatedStamina();

	void OnRep_ReplicatedNetMotion();

	void OnRep_ReplicatedKnockback();

	void OnRep_ReplicatedDodge();

	void OnRep_ReplicatedCustomizationReplicationActor();

	void OnRep_Quiver();

	void OnRep_NetBlock();

	void OnRep_LeftHandEquipment();

	void OnRep_Equipment();

	void OnPostProfileAssigned();

	void OnPostDismember(const struct FName& bone, class ASeparatedBodyPart* SeparatedPart, class AActor* Agent);

	void OnPickedUp(class AMordhauEquipment* Eq);

	void OnDropped(class AMordhauEquipment* Eq);

	void OnBlockedMelee(const struct FHitResult& HitResult, class AMordhauCharacter* Attacker);

	void OnAttackStarted();

	void OnActionFailed(const struct FName& Reason);

	void OffsetStamina(int Amount, bool bReplicate);

	void NextShieldEquipment();

	void NextEquipmentReleased();

	void NextEquipmentPressed();

	void NextEquipment();

	void MoveBlockedBySlow(const struct FHitResult& Impact);

	bool ModifyParryResult(bool InResult, const struct FHitResult& HitResult, class AMordhauCharacter* Attacker);

	void ListenForStrike360();

	void ListenForStab360();

	void LeftTeamArea(int OwningTeam);

	void JumpReleased();

	void JumpPressed();

	bool STATIC_IsRightLeg(const struct FName& bone);

	bool STATIC_IsRightArm(const struct FName& bone);

	bool STATIC_IsLeg(const struct FName& bone);

	bool STATIC_IsLeftLeg(const struct FName& bone);

	bool STATIC_IsLeftArm(const struct FName& bone);

	bool IsInKnockback();

	bool IsInEnemyTeamArea();

	bool IsInAnyTeamArea();

	bool IsHoldingBlock();

	bool STATIC_IsHead(const struct FName& bone);

	bool IsBoneDismembered(const struct FName& bone);

	bool STATIC_IsBody(const struct FName& bone);

	bool STATIC_IsArm(const struct FName& bone);

	void Holster(class AMordhauEquipment* ToHolster);

	bool HasPerk(unsigned char PerkId);

	bool HasEquipmentHeSpawnedWith();

	Mordhau_EMovementRestriction GetMovementRestriction();

	class UAudioComponent* GetLastVoiceCommand();

	float GetLastVehicleTime();

	class UMordhauVehicleComponent* GetLastUsedVehicle(float MaximumTimeDiscrepancy);

	class AActor* GetLastMovementFrontalHitActor(float MaxAgeSeconds);

	struct FVector GetFaceCustomizationTranslate(const struct FName& BoneName);

	struct FTransform GetFaceCustomizationTransform(const struct FName& BoneName);

	struct FVector GetFaceCustomizationScale(const struct FName& BoneName);

	struct FVector GetFaceCustomizationRotate(const struct FName& BoneName);

	int GetFaceCustomizationBoneIdx(const struct FName& BoneName);

	bool GetEquipmentIndex(class AMordhauEquipment* Equip, unsigned char* OutIndex);

	class ACustomizationReplicationActor* GetCustomizationReplicationActor();

	struct FNetMotion GetCurrentNetMotion();

	class ULODSkeletalMeshComponent* GetClothMesh();

	TArray<struct FName> GetAllFaceSelectionChildBonesRecursive(const struct FName& ParentBone);

	void FreeHandsForEquipment(class AMordhauEquipment* EquipmentInstigator);

	void ForceUpdateMeshVisibility();

	void FlipAttackSideReleased();

	void FlipAttackSidePressed();

	void FireReleased();

	void FirePressed();

	class AMordhauEquipment* FindEquipmentToRestock(TArray<class UClass*> ValidEquipment);

	class AController* FindBestKiller(float CutOffTime);

	void FeintOrBlockReleased();

	void FeintOrBlockPressed();

	void ExplodeLimbs(const struct FVector& Force, class AActor* DamageCauser, class AController* InstigatedByController);

	void EquipSlot9();

	void EquipSlot8();

	void EquipSlot7();

	void EquipSlot6();

	void EquipSlot5();

	void EquipSlot4();

	void EquipSlot3();

	void EquipSlot2();

	void EquipSlot1();

	bool EquipSlot(unsigned char Index, bool bDisplayEquipmentList);

	void EnteredTeamArea(int OwningTeam);

	void EnableBlockCollider();

	void EmptyHands();

	class AMordhauEquipment* DropSlot(unsigned char Index, bool bForce);

	class AMordhauEquipment* DropEquipment(class AMordhauEquipment* ToDrop, bool bForce);

	void DoCameraShakeIfViewTarget(class UClass* Shake, float Scale, TEnumAsByte<Engine_ECameraAnimPlaySpace> PlaySpace, const struct FRotator& UserPlaySpaceRot, Mordhau_ECameraShakeType ShakeType);

	class ASeparatedBodyPart* Dismember(struct FDismemberedBoneData* InDismemberedBoneData);

	void DisableLimb(const struct FName& BoneName);

	void DisableBlockCollider();

	void CycleCamera();

	void CrouchReleased();

	void CrouchPressed();

	void ClientSetNetMotion(const struct FNetMotion& NewMotion, float ServerStartTime);

	bool CheckCanEquipAlt(class AMordhauEquipment* Equip);

	bool CheckCanEquip(class AMordhauEquipment* Equip);

	bool CanPerformAttack(Mordhau_EAttackMove Move);

	bool CanInitiateMotion(class UClass* NewMotion, bool bAttemptCancel);

	bool CanEmote();

	bool CanEasyParry();

	bool CanDismember(const struct FName& bone);

	bool CanAccomodate(class UClass* EquipmentToTest);

	void CalculateLedgeOffsetAndNormal(class UClimbingMotion* ClimbingMotion, struct FVector* OutOffset, struct FVector* OutNormal);

	void BlockReleased();

	void BlockPressed();

	void BakeFaceCustomizationTransforms(bool bDeferBake);

	void AssignProfile(const struct FCharacterProfile& NewProfile);

	void AssignNetMotionSimple(unsigned char MotionType, unsigned char Param0, unsigned char Param1, unsigned char Param2);

	void AssignNetBlock(const struct FBlockResult& BlockResult, Mordhau_EAttackMove BlockedMove, class AActor* Weapon);

	void STATIC_AppendRightLegSet();

	void STATIC_AppendRightArmSet();

	void STATIC_AppendLeftLegSet();

	void STATIC_AppendLeftArmSet();

	void STATIC_AppendHeadSet();

	void STATIC_AppendBodySet();

};



