// Class Mordhau.AttackMotion

// 0x1050 (FullSize[0x10F0] - InheritedSize[0x00A0])

class UAttackMotion : public UMordhauMotion

{

public:

	unsigned char                                      UnknownData_QY5D[0x20];                                    // 0x00A0(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	TArray<struct FVector>                             VisualizeAttackAccelerationTraces;                         // 0x00C0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TArray<float>                                      VisualizeAttackAccelerationDeltaTimes;                     // 0x00D0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bShowAutomaticBlendingDebug;                               // 0x00E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bShowAutomaticBlendingVisualDebug;                         // 0x00E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bShowWindUpSmoothingDebug;                                 // 0x00E2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bUsesTrail;                                                // 0x00E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              PlayAttackYellTimeReleaseOffset;                           // 0x00E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              WooshTimeFactor;                                           // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bWantsSlowLookSmoothingInRecovery;                         // 0x00EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_0BTH[0x3];                                     // 0x00ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	struct FVector2D                                   AnglingLimits;                                             // 0x00F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FPerspectiveHighMidLowSpineSpaceAdditive    AnglingAdditiveWindUp;                                     // 0x00F8(0x0318) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	struct FHighMidLowSpineSpaceAdditive               AnglingAdditiveRelease;                                    // 0x0410(0x018C) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	struct FPerspectiveHighMidLowSpineSpaceAdditive    RiposteAnglingAdditiveWindUp;                              // 0x059C(0x0318) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	struct FHighMidLowSpineSpaceAdditive               RiposteAnglingAdditiveRelease;                             // 0x08B4(0x018C) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	float                                              ExperimentalLiveRecoveryDuration;                          // 0x0A40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               LiveRecoveryHitsAreThuds;                                  // 0x0A44(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bIncludeMissingDeltaTime;                                  // 0x0A45(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_01JW[0x2];                                     // 0x0A46(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	class UCurveFloat*                                 WorldCollisionPercentageTriggerCurve;                      // 0x0A48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UCurveFloat*                                 WorldCollisionAbsoluteTriggerCurve;                        // 0x0A50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              TraceMemoryStayDuration;                                   // 0x0A58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              MaxParryAngleForChamberAndActiveParry;                     // 0x0A5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              MaxParryWeaponAngleForChamberAndActiveParry;               // 0x0A60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	int                                                ActiveParryStaminaCost;                                    // 0x0A64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              ActiveParryWindow;                                         // 0x0A68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bCanBeParriedInEarlyRelease;                               // 0x0A6C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bNoDamageInEarlyRelease;                                   // 0x0A6D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bCanBeParriedByForwardCollider;                            // 0x0A6E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bCanBeParriedByForwardColliderInEarlyRelease;              // 0x0A6F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              ClashAngle;                                                // 0x0A70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              EarlyReleaseIsClashableAfter;                              // 0x0A74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              ChamberWindow;                                             // 0x0A78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	int                                                ChamberStaminaRecover;                                     // 0x0A7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              ToChamberAttackAngleTolerance;                             // 0x0A80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_PFRE[0x4];                                     // 0x0A84(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              GlanceDamageModifier;                                      // 0x0A88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bStopOnHitOnKills;                                         // 0x0A8C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bCanTraceHitUsingShieldBlockCollider;                      // 0x0A8D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bStunsHeldBlock;                                           // 0x0A8E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bIsComboFromMiss;                                          // 0x0A8F(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              MinAngleToRearHorse;                                       // 0x0A90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              MissTwiceStaminaCostMultiplier;                            // 0x0A94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              RiposteTradeDamageFactor;                                  // 0x0A98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              RiposteWindUpCanParryWindow;                               // 0x0A9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bUseSeamlessCFTPInRecovery;                                // 0x0AA0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_X0JU[0x3];                                     // 0x0AA1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              HitRecovery;                                               // 0x0AA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              HitStopRecovery;                                           // 0x0AA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              ClashedRecovery;                                           // 0x0AAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FPerspectiveFloat                           MissRecoveryToPlayRate;                                    // 0x0AB0(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	struct FPerspectiveVector2D                        MissRecoveryPlayRateClamp;                                 // 0x0AB8(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	float                                              RecoveryQueueWindow;                                       // 0x0AC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_61WA[0x4];                                     // 0x0ACC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	class UAnimMontage*                                BounceMontage;                                             // 0x0AD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FPerspectiveAnimSequence                    BounceAdditive;                                            // 0x0AD8(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	struct FPerspectiveCurveFloat                      WorldBounceCurve;                                          // 0x0AE8(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	struct FPerspectiveCurveFloat                      WorldBounceScaleCurve;                                     // 0x0AF8(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	struct FPerspectiveCurveFloat                      ParryBounceCurve;                                          // 0x0B08(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	struct FPerspectiveCurveFloat                      ParryLateBounceCurve;                                      // 0x0B18(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	struct FPerspectiveCurveFloat                      ParryBounceScaleCurve;                                     // 0x0B28(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	float                                              EarlyRelease;                                              // 0x0B38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              EarlyReleaseTimeFactor;                                    // 0x0B3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              RiposteEarlyRelease;                                       // 0x0B40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              RiposteEarlyReleaseTimeFactor;                             // 0x0B44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              StrikeAnimationNormalizedRecoveryOffset;                   // 0x0B48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_7ROW[0x4];                                     // 0x0B4C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	class UCurveFloat*                                 SupersprintDurationByRangeCurve;                           // 0x0B50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              SupersprintStartOffset;                                    // 0x0B58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              SupersprintDuration;                                       // 0x0B5C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_11ZR[0x4];                                     // 0x0B60(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              FeintWindow;                                               // 0x0B64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              ComboFeintWindow;                                          // 0x0B68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bIsRiposteFeintable;                                       // 0x0B6C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bCanAttackFromFeintLockout;                                // 0x0B6D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_A51E[0x2];                                     // 0x0B6E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	struct FPerspectiveFloat                           FeintAnimRate;                                             // 0x0B70(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	struct FPerspectiveFloat                           FeintAnimDurationOffset;                                   // 0x0B78(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	struct FPerspectiveFloat                           FeintAnimMinimumDuration;                                  // 0x0B80(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	bool                                               bCanAutoFeintToAttack;                                     // 0x0B88(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bRiposteAteFeintInput;                                     // 0x0B89(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_LYU0[0x2];                                     // 0x0B8A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              MinWindUpTimeBeforeMorphing;                               // 0x0B8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              MorphWindow;                                               // 0x0B90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              MorphWindupModifier;                                       // 0x0B94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UCurveFloat*                                 MorphWindupCurve;                                          // 0x0B98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              MaxMorphTotalTime;                                         // 0x0BA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              MorphKickExtraTime;                                        // 0x0BA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              ReleaseJumpBlockTime;                                      // 0x0BA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bPerformWeaponSlidingSparks;                               // 0x0BAC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FPerspectiveBool                            RegularAttacksUseAutoBlendIn;                              // 0x0BAD(0x0002) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	struct FPerspectiveBool                            RiposteAttacksUseAutoBlendIn;                              // 0x0BAF(0x0002) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	struct FPerspectiveBool                            ComboAttacksUseAutoBlendIn;                                // 0x0BB1(0x0002) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	struct FPerspectiveBool                            PostClashAttacksUseAutoBlendIn;                            // 0x0BB3(0x0002) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	struct FPerspectiveBool                            MorphAttacksUseAutoBlendIn;                                // 0x0BB5(0x0002) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_QV3K[0x1];                                     // 0x0BB7(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	struct FPerspectiveCurveFloat                      AutoBlendInWeaponCurve;                                    // 0x0BB8(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	float                                              AutoBlendConsiderUpVectorIfLargerThanAngle;                // 0x0BC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_4192[0x4];                                     // 0x0BCC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	struct FPerspectiveCurveFloat                      AutoBlendInSpineCurve;                                     // 0x0BD0(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	int                                                AutoBlendOptimizeForwardSteps;                             // 0x0BE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	int                                                RiposteAutoBlendOptimizeForwardSteps;                      // 0x0BE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              AutoBlendOptimizeForwardStepSize;                          // 0x0BE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FPerspectiveFloat                           NormalBlendIn;                                             // 0x0BEC(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	struct FPerspectiveFloat                           NormalSlowBlendIn;                                         // 0x0BF4(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	struct FPerspectiveFloat                           NormalParrySlowBlendIn;                                    // 0x0BFC(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	struct FPerspectiveFloat                           ComboBlendIn;                                              // 0x0C04(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	struct FPerspectiveFloat                           PostClashBlendIn;                                          // 0x0C0C(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	struct FPerspectiveFloat                           MorphBlendIn;                                              // 0x0C14(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	struct FPerspectiveFloat                           RiposteBlendIn;                                            // 0x0C1C(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	struct FPerspectiveFloat                           RiposteWithShieldBlendIn;                                  // 0x0C24(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_RMHS[0x4];                                     // 0x0C2C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	class UCurveFloat*                                 BlendInCurve;                                              // 0x0C30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FPerspectiveCurveFloat                      ComboBlendInCurve;                                         // 0x0C38(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	class UCurveFloat*                                 MorphBlendInCurve;                                         // 0x0C48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UCurveFloat*                                 RiposteBlendInCurve;                                       // 0x0C50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              BlendIn;                                                   // 0x0C58(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bUseAutomaticBlendIn;                                      // 0x0C5C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_IMI9[0x3];                                     // 0x0C5D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	struct FPerspectiveAnimSequenceBase                Animation;                                                 // 0x0C60(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	TMap<struct FGameplayTag, struct FPerspectiveAnimSequenceBase> ComboAnimations;                                           // 0x0C70(0x0050) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	TMap<struct FGameplayTag, struct FPerspectiveAnimSequenceBase> MorphAnimations;                                           // 0x0CC0(0x0050) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	struct FPerspectiveAnimSequenceBase                RiposteAnimation;                                          // 0x0D10(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	struct FPerspectiveAnimSequenceBase                AltRiposteAnimation;                                       // 0x0D20(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	struct FPerspectiveAnimSequenceBase                ClashAnimation;                                            // 0x0D30(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	struct FPerspectiveAnimMontage                     LeftTorsoMontage;                                          // 0x0D40(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	struct FPerspectiveAnimMontage                     RiposteLeftTorsoMontage;                                   // 0x0D50(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	class UAnimMontage*                                CurrentLeftTorsoAnimMontage;                               // 0x0D60(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FPerspectiveFloat                           BlendOut;                                                  // 0x0D68(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	struct FPerspectiveFloat                           SuccessfulHitBlendOutAnimTime;                             // 0x0D70(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	struct FPerspectiveFloat                           SuccessfulHitPlayRate;                                     // 0x0D78(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_5OWF[0x8];                                     // 0x0D80(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	unsigned char                                      BlockedAttacks[0x50];                                      // 0x0D80(0x0050) UNKNOWN PROPERTY: SetProperty

	unsigned char                                      UnknownData_HYIN[0x4];                                     // 0x0DD8(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	struct FPerspectiveBool                            EnableWindUpSmoothing;                                     // 0x0DDC(0x0002) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_6DFG[0x2];                                     // 0x0DDE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	struct FVector2D                                   WindUpSmoothingExponentClamp;                              // 0x0DE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UCurveFloat*                                 WindUpCurve;                                               // 0x0DE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FPerspectiveCurveFloat                      ComboWindUpCurve;                                          // 0x0DF0(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	float                                              AnimationTimeFor3PTransition;                              // 0x0E00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_GUR4[0x4];                                     // 0x0E04(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	class UCurveFloat*                                 ReleaseCurve;                                              // 0x0E08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UCurveFloat*                                 RiposteReleaseCurve;                                       // 0x0E10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	Mordhau_EAttackMove                                ComingFromMove;                                            // 0x0E18(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_RDIU[0x7];                                     // 0x0E19(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	class UParryMotion*                                ComingFromAsParry;                                         // 0x0E20(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FAttackInfo                                 AttackInfo;                                                // 0x0E28(0x0128) (BlueprintVisible, NativeAccessSpecifierPublic)

	struct FSpineSpaceAdditive                         TargetAdditive;                                            // 0x0F50(0x0084) (NoDestructor, NativeAccessSpecifierPublic)

	struct FSpineSpaceAdditive                         WindUpAdditive;                                            // 0x0FD4(0x0084) (NoDestructor, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_DNSI[0x18];                                    // 0x1058(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              AngleTarget;                                               // 0x1070(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              LastReleaseNormalizedTime;                                 // 0x1074(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              LastWindupNormalizedTime;                                  // 0x1078(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bHasHitFriendly;                                           // 0x107C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	Mordhau_EAttackType                                Type;                                                      // 0x107D(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	Mordhau_EAttackMove                                Move;                                                      // 0x107E(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_9X4O[0x1];                                     // 0x107F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              WindupEnd;                                                 // 0x1080(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              ReleaseEnd;                                                // 0x1084(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_AEGR[0x18];                                    // 0x1088(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	class UAnimMontage*                                Montage;                                                   // 0x10A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UAnimSequenceBase*                           WindupSequenceUsed;                                        // 0x10A8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UAnimSequenceBase*                           QueuedAnimFor3PRelease;                                    // 0x10B0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class AMordhauWeapon*                              Weapon;                                                    // 0x10B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UAttackMotion*                               PreviousLastAttackMotion;                                  // 0x10C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bHasQueuedServerCombo;                                     // 0x10C8(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_CWP6[0x3];                                     // 0x10C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              QueuedServerComboAngle;                                    // 0x10CC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	Mordhau_EAttackMove                                QueuedServerComboMove;                                     // 0x10D0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bHasQueuedMove;                                            // 0x10D1(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_MZIE[0x2];                                     // 0x10D2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              QueuedAngle;                                               // 0x10D4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	Mordhau_EAttackMove                                QueuedMove;                                                // 0x10D8(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	Mordhau_EAttackStage                               Stage;                                                     // 0x10D9(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bHasHit;                                                   // 0x10DA(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bHasHitIncludingCosmeticHit;                               // 0x10DB(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              FirstHitTime;                                              // 0x10DC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              FirstHitIncludingCosmeticReleaseNormalizedTime;            // 0x10E0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bHasChambered;                                             // 0x10E4(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_4GNX[0xB];                                     // 0x10E5(0x000B) MISSED OFFSET (PADDING)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.AttackMotion");

		return ptr;

	}







	bool ShouldStunOnHit(class UMotionSystemComponent* OtherComponent);

	void SetHasHitIncludingCosmeticHit(bool bPlayHitShake);

	void PrepareAnimationData();

	bool OverrideTrace(struct FVector* OutStart, struct FVector* OutEnd);

	bool OverrideIsUsingAdditionalTracers(bool* OutResult);

	bool OverrideAdditionalTrace(struct FVector* OutStart, struct FVector* OutEnd);

	void ModifyAttackInfo();

	class AMordhauWeapon* FindWeapon();

	float ComputeWindup();

};



