// Class Mordhau.MordhauProjectile

// 0x0448 (FullSize[0x07C0] - InheritedSize[0x0378])

class AMordhauProjectile : public AMordhauActor

{

public:

	class USkeletalMeshComponent*                      SkeletalMeshComponent;                                     // 0x0378(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class USceneComponent*                             SpinComponent;                                             // 0x0380(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bDestroyWhenTerminated;                                    // 0x0388(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bWasAttachedOnClient;                                      // 0x0389(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_LOIZ[0x6];                                     // 0x038A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	struct FText                                       ProjectileName;                                            // 0x0390(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	struct FVector                                     LastProjectileLocation;                                    // 0x03A8(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bHideProjectile;                                           // 0x03B4(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_U9JY[0xB];                                     // 0x03B5(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	struct FTransform                                  CosmeticOffsetToBlendOut;                                  // 0x03C0(0x0030) (BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	float                                              CosmeticOffsetBlendOutSpeed;                               // 0x03F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              CosmeticOffsetBlendWeight;                                 // 0x03F4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_TKQF[0x8];                                     // 0x03F8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	struct FTransform                                  OriginalMeshRelativeTransform;                             // 0x0400(0x0030) (BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	struct FQuat                                       DefaultMeshRotationOffset;                                 // 0x0430(0x0010) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	TArray<struct FWoundInfo>                          WoundInfoArray;                                            // 0x0440(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TArray<TEnumAsByte<Engine_EPhysicalSurface>>       WillStickyOn;                                              // 0x0450(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TArray<TEnumAsByte<Engine_EPhysicalSurface>>       WillPassThroughOn;                                         // 0x0460(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TMap<TEnumAsByte<Engine_EPhysicalSurface>, class UParticleSystem*> SurfaceImpactParticles;                                    // 0x0470(0x0050) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	TMap<TEnumAsByte<Engine_EPhysicalSurface>, struct FDecalInfo> SurfaceImpactDecals;                                       // 0x04C0(0x0050) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	struct FVector                                     RotationSpin;                                              // 0x0510(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              PathBlendDuration;                                         // 0x051C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              RagdollLifeSpan;                                           // 0x0520(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      AttackMask;                                                // 0x0524(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_IL06[0x3];                                     // 0x0525(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              DamageMultiplier;                                          // 0x0528(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_NB1S[0x4];                                     // 0x052C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	class USoundCue*                                   FlightSound;                                               // 0x0530(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class USoundCue*                                   ImpactSound;                                               // 0x0538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class USoundCue*                                   FleshImpactSound;                                          // 0x0540(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TWeakObjectPtr<class UAudioComponent>              CurrentFlightSound;                                        // 0x0548(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FActorSetAndArray                           CosmeticIgnoreActors;                                      // 0x0550(0x0060) (NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_CUQP[0x70];                                    // 0x05B0(0x0070) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	TArray<struct FHitResult>                          HitResultCache;                                            // 0x0620(0x0010) (ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FRotator                                    AccumulatedRotationSpin;                                   // 0x0630(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	struct FReplicatedProjectileInfo                   ReplicatedProjectileInfo;                                  // 0x063C(0x0034) (BlueprintVisible, Net, RepNotify, NoDestructor, NativeAccessSpecifierPublic)

	TWeakObjectPtr<class AActor>                       Creator;                                                   // 0x0670(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TWeakObjectPtr<class AController>                  OwningController;                                          // 0x0678(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TWeakObjectPtr<class APawn>                        OwningPawn;                                                // 0x0680(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bIsFromLocalPlayer;                                        // 0x0688(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_7I4Q[0x7];                                     // 0x0689(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	class AMordhauProjectile*                          AssociatedProjectile;                                      // 0x0690(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              DamageModifierHuntsmanPerk;                                // 0x0698(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_HNK1[0x4];                                     // 0x069C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	TArray<float>                                      Damage;                                                    // 0x06A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TArray<float>                                      HeadBonus;                                                 // 0x06B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TArray<float>                                      LegBonus;                                                  // 0x06C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              WoodDamage;                                                // 0x06D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              StoneDamage;                                               // 0x06D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bHasReceivedInfo;                                          // 0x06D8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_Q2QA[0x3];                                     // 0x06D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              FiredTime;                                                 // 0x06DC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              LastProjectileSweepTime;                                   // 0x06E0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bUsesLocalProjectileBlending;                              // 0x06E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bIsConfirmed;                                              // 0x06E5(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bHasTerminated;                                            // 0x06E6(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_FI0Q[0x1];                                     // 0x06E7(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              TerminatedTime;                                            // 0x06E8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bHasNetworkOrigin;                                         // 0x06EC(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bHasFired;                                                 // 0x06ED(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_YIRO[0x2];                                     // 0x06EE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	TArray<class UClass*>                              RestockAmmoForEquipment;                                   // 0x06F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UClass*                                      GiveEquipmentOnPickup;                                     // 0x0700(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bAssignCustomizationOnPickup;                              // 0x0708(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_RHKF[0x7];                                     // 0x0709(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	struct FEquipmentCustomization                     CreatorEquipmentCustomization;                             // 0x0710(0x0030) (NativeAccessSpecifierPublic)

	bool                                               bIsActiveBlendProjectile;                                  // 0x0740(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bHasStartedTrail;                                          // 0x0741(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bAutomaticallyDetermineMeshLocation;                       // 0x0742(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_7JH0[0x1];                                     // 0x0743(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	int                                                ProjectileCollisionPrecedence;                             // 0x0744(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bWillIgnoreShooter;                                        // 0x0748(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bAutomaticallyDetermineSpinLocation;                       // 0x0749(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_QA4E[0x2];                                     // 0x074A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              StickySurfacePitchBlend;                                   // 0x074C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              StickySurfaceYawBlend;                                     // 0x0750(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_25N1[0x4];                                     // 0x0754(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	class UParticleSystem*                             TrailParticleTemplate;                                     // 0x0758(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TWeakObjectPtr<class UParticleSystemComponent>     CurrentTrailParticles;                                     // 0x0760(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FName                                       TrailStartSocket;                                          // 0x0768(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FName                                       TrailEndSocket;                                            // 0x0770(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              TrailWidth;                                                // 0x0778(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TEnumAsByte<Engine_ETrailWidthMode>                TrailWidthMode;                                            // 0x077C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bIsLocallyPredicted;                                       // 0x077D(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_4YYI[0x2];                                     // 0x077E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              HitBounceForce;                                            // 0x0780(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              AttackBounceForce;                                         // 0x0784(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              ParryBounceForce;                                          // 0x0788(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              ProjectileBounceForce;                                     // 0x078C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              EnvironmentBounceForce;                                    // 0x0790(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              BounceAngularVelocityFactor;                               // 0x0794(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              BounceMinAngularVelocity;                                  // 0x0798(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bShouldFlinch;                                             // 0x079C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_FRF6[0x3];                                     // 0x079D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              CullDistanceRagdoll;                                       // 0x07A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_NSBY[0x4];                                     // 0x07A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	class UBoxComponent*                               CollisionComp;                                             // 0x07A8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UAdvProjectileMovementComponent*             ProjectileMovement;                                        // 0x07B0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_DJF2[0x8];                                     // 0x07B8(0x0008) MISSED OFFSET (PADDING)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.MordhauProjectile");

		return ptr;

	}







	bool WillSticky(unsigned char Surface);

	bool WillPassThrough(unsigned char Surface);

	bool UsesProjectileBlending();

	void UpdateProjectileState(float DeltaTime);

	void TerminateProjectile();

	void SweepProjectile();

	void StopTrail();

	void StartTrail();

	void SpawnParticles(const struct FVector& Location, const struct FRotator& Rotation, class UParticleSystem* System);

	void SpawnDecal(const struct FVector& Location, const struct FRotator& Rotation, const struct FDecalInfo& DecalInfo);

	void SetCurrentTrailParticles(class UParticleSystemComponent* ParticleSystemComponent);

	bool RestockCharacter(class AMordhauCharacter* Character);

	void ProcessProjectileHit(bool bIsBlocking, const struct FHitResult& Hit);

	void OnRep_ReplicatedProjectileInfo();

	void OnProjectileHitCosmetic(class AActor* OtherActor, const struct FHitResult& Hit);

	void OnProjectileHit(const struct FVector& HitLocation, const struct FVector& HitNormal, float BounceForce, unsigned char Surface, bool bHasHitWorld, bool bHasStopped);

	void OnProjectileFired();

	void OnProjectileDamagedDamagable(class UDamageableComponent* DamagableComp, bool bWillKill, const struct FVector& WorldLocation, const struct FName& bone);

	void InitializeProjectile(class AController* InOwningController, bool bInIsLocallyPredicted, class AActor* InCreator);

	struct FTransform GetWorldMeshTransformWithOffsets();

	class AController* GetProjectileOwningController();

	class AActor* GetProjectileCreator();

	float GetPercentageOfMaxVelocityClamped();

	class UParticleSystemComponent* GetCurrentTrailParticles();

	struct FTransform GetBlendedTransform(const struct FTransform& Ours, const struct FTransform& Associated, float T);

	struct FTransform GetBlendedMeshTransform(float T);

	struct FTransform GetBlendedActorTransform(float T);

	void Fire();

	void CarryOverTrail(class AMordhauProjectile* NewProjectile);

	void BounceComponent(class USkeletalMeshComponent* ComponentToBounce, const struct FVector& NewVelocity, const struct FVector& NewAngularVelocity);

	bool AttachProjectile(const struct FHitResult& Hit);

};



