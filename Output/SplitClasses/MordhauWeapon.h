// Class Mordhau.MordhauWeapon

// 0x0F58 (FullSize[0x1C20] - InheritedSize[0x0CC8])

class AMordhauWeapon : public AMordhauEquipment

{

public:

	TArray<struct FHitResult>                          SingleTraceHitsCache;                                      // 0x0CC8(0x0010) (ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	TWeakObjectPtr<class UAudioComponent>              LastWoosh;                                                 // 0x0CD8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	bool                                               bAreCurrentTracersValid;                                   // 0x0CE0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bArePreviousTracersValid;                                  // 0x0CE1(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bAreCurrentTracersInvalidated;                             // 0x0CE2(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bHasAdditionalTracers;                                     // 0x0CE3(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bSecondHasAdditionalTracers;                               // 0x0CE4(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_8WV6[0x3];                                     // 0x0CE5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	struct FVector                                     CurrentTraceStart;                                         // 0x0CE8(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FVector                                     CurrentTraceEnd;                                           // 0x0CF4(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FVector                                     PreviousTraceStart;                                        // 0x0D00(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FVector                                     PreviousTraceEnd;                                          // 0x0D0C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FVector                                     CurrentAdditionalTraceStart;                               // 0x0D18(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FVector                                     CurrentAdditionalTraceEnd;                                 // 0x0D24(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FVector                                     PreviousAdditionalTraceStart;                              // 0x0D30(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FVector                                     PreviousAdditionalTraceEnd;                                // 0x0D3C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	Mordhau_EAttackMove                                LastObservedMove;                                          // 0x0D48(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_P6UI[0x7];                                     // 0x0D49(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	TArray<struct FVector>                             LastTraceStarts;                                           // 0x0D50(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FActorSetAndArray                           CosmeticIgnoreActors;                                      // 0x0D60(0x0060) (NativeAccessSpecifierPublic)

	struct FActorTraceData                             CosmeticActorTraceData;                                    // 0x0DC0(0x0068) (NativeAccessSpecifierPublic)

	TArray<class AActor*>                              ActorIgnoreCache;                                          // 0x0E28(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      ActorSetCache[0x50];                                       // 0x0E38(0x0050) UNKNOWN PROPERTY: SetProperty

	TArray<struct FHitResult>                          HitResultCache;                                            // 0x0E88(0x0010) (ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bCanBlock;                                                 // 0x0E98(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bCanBlockOnFoot;                                           // 0x0E99(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bCanBlockOnHorseback;                                      // 0x0E9A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bCanCouchOnHorseback;                                      // 0x0E9B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_4HRX[0x4];                                     // 0x0E9C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	class UAnimMontage*                                CouchWindUpAnim;                                           // 0x0EA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UAnimMontage*                                CouchWindUpAnim1P;                                         // 0x0EA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UAnimMontage*                                CouchLoopAnim;                                             // 0x0EB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UAnimMontage*                                CouchReleaseAnim;                                          // 0x0EB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UAnimMontage*                                CouchReleaseAnim1P;                                        // 0x0EC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	Mordhau_EDismembermentType                         StrikeDismembermentType;                                   // 0x0EC8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	Mordhau_EDismembermentType                         SecondStrikeDismembermentType;                             // 0x0EC9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	Mordhau_EDismembermentType                         StabDismembermentType;                                     // 0x0ECA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	Mordhau_EDismembermentType                         SecondStabDismembermentType;                               // 0x0ECB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              SlideRadius;                                               // 0x0ECC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              AttackSupersprintDuration;                                 // 0x0ED0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              SecondAttackSupersprintDuration;                           // 0x0ED4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              StabReleaseModifier;                                       // 0x0ED8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_3K0E[0x4];                                     // 0x0EDC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	struct FAttackInfo                                 StabAttack;                                                // 0x0EE0(0x0128) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	struct FAttackInfo                                 SecondStabAttack;                                          // 0x1008(0x0128) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	struct FAttackInfo                                 CouchAttack;                                               // 0x1130(0x0128) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	struct FAttackInfo                                 SecondCouchAttack;                                         // 0x1258(0x0128) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	struct FAttackInfo                                 StrikeAttack;                                              // 0x1380(0x0128) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	struct FAttackInfo                                 SecondStrikeAttack;                                        // 0x14A8(0x0128) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	struct FAttackInfo                                 KickAttack;                                                // 0x15D0(0x0128) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	struct FAttackInfo                                 SecondKickAttack;                                          // 0x16F8(0x0128) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	struct FAttackInfo                                 BashAttack;                                                // 0x1820(0x0128) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	int                                                AttackMask;                                                // 0x1948(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	int                                                ParryMask;                                                 // 0x194C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              ParryWindowOffset;                                         // 0x1950(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_1BEP[0xC];                                     // 0x1954(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	struct FTransform                                  ParryBoxTransform;                                         // 0x1960(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	struct FVector2D                                   ParryTurnCap;                                              // 0x1990(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FVector2D                                   ShieldWallTurnCap;                                         // 0x1998(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FVector2D                                   ParrySuccessTurnCap;                                       // 0x19A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              ParryBackpedalSpeedFactor;                                 // 0x19A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bIsParryHeld;                                              // 0x19AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_WEDZ[0x3];                                     // 0x19AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              BoostCosmeticTracersBy;                                    // 0x19B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bUsesExtraEnvironmentTracers;                              // 0x19B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bHitKnockbackOnTeammates;                                  // 0x19B5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_DPJK[0x2];                                     // 0x19B6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	struct FVector                                     ClashNormal;                                               // 0x19B8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FVector                                     SecondClashNormal;                                         // 0x19C4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	Mordhau_EMovementRestriction                       BlockMovementRestriction;                                  // 0x19D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_J1M5[0x3];                                     // 0x19D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              BlockStaminaNegation;                                      // 0x19D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FVector2D                                   BlockStaminaClamp;                                         // 0x19D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              SecondBlockStaminaNegation;                                // 0x19E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FVector2D                                   SecondBlockStaminaClamp;                                   // 0x19E4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_ASZI[0x4];                                     // 0x19EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	class UPrimitiveComponent*                         ClashCollider;                                             // 0x19F0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UPrimitiveComponent*                         BlockCollider;                                             // 0x19F8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UClass*                                      WeaponAnimationProfileClass;                               // 0x1A00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UClass*                                      SecondWeaponAnimationProfileClass;                         // 0x1A08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UClass*                                      HorseWeaponAnimationProfileClass;                          // 0x1A10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UClass*                                      LadderWeaponAnimationProfileClass;                         // 0x1A18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UMeleeWeaponAnimationProfile*                HorseWeaponAnimationProfile;                               // 0x1A20(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UMeleeWeaponAnimationProfile*                LadderWeaponAnimationProfile;                              // 0x1A28(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UMeleeWeaponAnimationProfile*                WeaponAnimationProfile;                                    // 0x1A30(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UMeleeWeaponAnimationProfile*                SecondWeaponAnimationProfile;                              // 0x1A38(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class USoundCue*                                   BlockedSound;                                              // 0x1A40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class USoundCue*                                   BlockedViewTargetSweetener;                                // 0x1A48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class USoundCue*                                   HitCancelSound;                                            // 0x1A50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class USoundCue*                                   WasBlockedSound;                                           // 0x1A58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FVector2D                                   EnvironmentPitchScaleByDamageIn;                           // 0x1A60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FVector2D                                   EnvironmentPitchScaleByDamageOut;                          // 0x1A68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FVector2D                                   EnvironmentVolumeScaleByDamageIn;                          // 0x1A70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FVector2D                                   EnvironmentVolumeScaleByDamageOut;                         // 0x1A78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              WooshVolumeMultiplierViewTarget;                           // 0x1A80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_OMT9[0x4];                                     // 0x1A84(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	class USoundCue*                                   StrikeHitSound;                                            // 0x1A88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class USoundCue*                                   StabHitSound;                                              // 0x1A90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class USoundCue*                                   EnvironmentHitSound;                                       // 0x1A98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class USoundCue*                                   SecondStrikeHitSound;                                      // 0x1AA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class USoundCue*                                   SecondStabHitSound;                                        // 0x1AA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class USoundCue*                                   SecondEnvironmentHitSound;                                 // 0x1AB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class USoundCue*                                   StrikeWooshSound;                                          // 0x1AB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class USoundCue*                                   StabWooshSound;                                            // 0x1AC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class USoundCue*                                   SlideStartSound;                                           // 0x1AC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class USoundCue*                                   SlideEndSound;                                             // 0x1AD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bDeriveHandGripFromTracers;                                // 0x1AD8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bSecondDeriveHandGripFromTracers;                          // 0x1AD9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bHasWoodenHandle;                                          // 0x1ADA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_JZKS[0x1];                                     // 0x1ADB(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              TrailLifeTimeFactor;                                       // 0x1ADC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              TrailExtraTime;                                            // 0x1AE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              BloodTrailMaxDuration;                                     // 0x1AE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              SwingTrailFadeOutDuration;                                 // 0x1AE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_MK8U[0x4];                                     // 0x1AEC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	class UParticleSystem*                             SwingTrailParticles;                                       // 0x1AF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UParticleSystem*                             BloodTrailParticles;                                       // 0x1AF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UParticleSystem*                             BlockParticles;                                            // 0x1B00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UParticleSystem*                             HitCancelParticles;                                        // 0x1B08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TArray<class UParticleSystem*>                     ImpactParticlesBySurface;                                  // 0x1B10(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UParticleSystem*                             SlideParticles;                                            // 0x1B20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TWeakObjectPtr<class AMordhauWeapon>               SlidingWith;                                               // 0x1B28(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class USoundCue*                                   EndCurrentSlideWithSound;                                  // 0x1B30(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              SlidingStartTime;                                          // 0x1B38(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TWeakObjectPtr<class UAudioComponent>              CurrentSlideStartSound;                                    // 0x1B3C(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TWeakObjectPtr<class UAudioComponent>              LastHitSoundA;                                             // 0x1B44(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TWeakObjectPtr<class UAudioComponent>              LastHitSoundB;                                             // 0x1B4C(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TWeakObjectPtr<class UParticleSystemComponent>     CurrentSlideParticles;                                     // 0x1B54(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TWeakObjectPtr<class UParticleSystemComponent>     CurrentSwingTrailParticles;                                // 0x1B5C(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TWeakObjectPtr<class UParticleSystemComponent>     CurrentBloodTrailParticles;                                // 0x1B64(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              TrailTimeBeforeStop;                                       // 0x1B6C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              SwingTrailOriginalLifeTime;                                // 0x1B70(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              SwingTrailEndTime;                                         // 0x1B74(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              BloodTrailEndTime;                                         // 0x1B78(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              Length;                                                    // 0x1B7C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              SecondLength;                                              // 0x1B80(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              BloodLevel1;                                               // 0x1B84(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              BloodLevel2;                                               // 0x1B88(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bPlayedHitEffect;                                          // 0x1B8C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_IB8I[0x3];                                     // 0x1B8D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	struct FVector                                     TrailUp;                                                   // 0x1B90(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FVector                                     SecondTrailUp;                                             // 0x1B9C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FVector                                     TrailRight;                                                // 0x1BA8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FVector                                     SecondTrailRight;                                          // 0x1BB4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              DefaultTrailFactor;                                        // 0x1BC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              SecondDefaultTrailFactor;                                  // 0x1BC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bRegularAttacksUseBlood2;                                  // 0x1BC8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bSecondRegularAttacksUseBlood2;                            // 0x1BC9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_TFXF[0x2];                                     // 0x1BCA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              TrailFactor;                                               // 0x1BCC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              SecondTrailFactor;                                         // 0x1BD0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              TrailWeight;                                               // 0x1BD4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_X358[0x8];                                     // 0x1BD8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	struct FTransform                                  LastTrailTransform;                                        // 0x1BE0(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	struct FVector                                     LastObservedTraceDirection;                                // 0x1C10(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_G88V[0x4];                                     // 0x1C1C(0x0004) MISSED OFFSET (PADDING)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.MordhauWeapon");

		return ptr;

	}







	void UpdateTrail(float Weight);

	void SetIsAllowedToAddForce(bool bIsAllowed);

	bool RequestBlock(Mordhau_EBlockType BlockType, bool bAllowFTP);

	void OnWasBlocked(const struct FBlockResult& Result, Mordhau_EAttackMove Move);

	void OnHit(class AActor* Actor, Mordhau_EAttackMove Move, const struct FName& bone, const struct FVector& WorldLocation, unsigned char Tier, unsigned char SurfaceType);

	void OnCosmeticHit(Mordhau_EAttackMove Move, const struct FHitResult& Hit);

	void OnBlockStarted(Mordhau_EBlockType Type);

	void OnBlocked(const struct FBlockResult& Result, Mordhau_EAttackMove Move);

	void OnAttackStopped();

	void OnAttackStarted(Mordhau_EAttackMove Move, float Angle);

	bool IsAllowedToAddForce();

	void IncreaseBloodLevel(float Amount);

	void GetTrace(struct FVector* TraceStart, struct FVector* TraceEnd);

	struct FAttackInfo GetBaseAttackInfo(Mordhau_EAttackMove Move);

	void GetAdditionalTrace(struct FVector* TraceStart, struct FVector* TraceEnd);

	void AddTraceEntryData(class AActor* Actor, const struct FName& bone);

};



