// Class Mordhau.AdvancedCharacter

// 0x0630 (FullSize[0x0AE8] - InheritedSize[0x04B8])

class AAdvancedCharacter : public ACharacter

{

public:

	unsigned char                                      UnknownData_E4CA[0x8];                                     // 0x04B8(0x0008) Fix Super Size

	unsigned char                                      UnknownData_ZPNS[0x20];                                    // 0x04C0(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	TWeakObjectPtr<class APlayerState>                 LastPlayerState;                                           // 0x04E0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_TPY6[0x14];                                    // 0x04E8(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	TWeakObjectPtr<class AMordhauPlayerController>     InstanceOwner;                                             // 0x04FC(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bIsDead;                                                   // 0x0504(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bIsRagdollFalling;                                         // 0x0505(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_MQA2[0x2];                                     // 0x0506(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              RagdollFallingFromPerchRadius;                             // 0x0508(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              IsBurningSmoothed;                                         // 0x050C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              DistanceIntoFireFieldSmoothed;                             // 0x0510(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              DistanceIntoFireField;                                     // 0x0514(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              DistanceIntoSmokeFieldSmoothed;                            // 0x0518(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              DistanceIntoSmokeField;                                    // 0x051C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              LookUpValue;                                               // 0x0520(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_WPCV[0x4];                                     // 0x0524(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	class USkeletalMesh*                               OriginalMesh;                                              // 0x0528(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FScriptMulticastDelegate                    OnCharacterDied;                                           // 0x0530(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	struct FScriptMulticastDelegate                    OnTakeDamage;                                              // 0x0540(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_UPBO[0x8];                                     // 0x0550(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	struct FScriptMulticastDelegate                    OnCharacterDestroyed;                                      // 0x0558(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	struct FScriptMulticastDelegate                    OnTornOff;                                                 // 0x0568(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	struct FScriptMulticastDelegate                    OnUnPossessed;                                             // 0x0578(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	struct FScriptMulticastDelegate                    OnChangedTeam;                                             // 0x0588(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	struct FScriptMulticastDelegate                    OnCharacterBecomeViewTarget;                               // 0x0598(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	struct FScriptMulticastDelegate                    OnCharacterEndViewTarget;                                  // 0x05A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_N5NV[0x30];                                    // 0x05B8(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	int                                                UniqueAdvancedCharacterIndex;                              // 0x05E8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              MouseSmoothedTurnValue;                                    // 0x05EC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              MouseSmoothingTurnVelocity;                                // 0x05F0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              MouseSmoothedLookUpValue;                                  // 0x05F4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              MouseSmoothingLookUpVelocity;                              // 0x05F8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_05EZ[0x4];                                     // 0x05FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	struct FPrePhysTickFunction                        PrePhysTickFunction;                                       // 0x0600(0x0030) (NativeAccessSpecifierPublic)

	float                                              LODDeltaTime;                                              // 0x0630(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              LateLODDeltaTime;                                          // 0x0634(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_DTMY[0x28];                                    // 0x0638(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	unsigned char                                      Team;                                                      // 0x0660(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, EditConst, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bDisableOverlapsIfClientNotViewTarget;                     // 0x0661(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_KP18[0x6];                                     // 0x0662(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	class UTagSystemComponent*                         TagSystemComponent;                                        // 0x0668(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UDismemberableComponent*                     DismemberableComponent;                                    // 0x0670(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UEquipmentSystemComponent*                   EquipmentSystemComponent;                                  // 0x0678(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UDriverComponent*                            DriverComponent;                                           // 0x0680(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UMotionSystemComponent*                      MotionSystemComponent;                                     // 0x0688(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UPerkSystemComponent*                        PerkSystemComponent;                                       // 0x0690(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UInteractionSystemComponent*                 InteractionSystemComponent;                                // 0x0698(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UCharacterVoiceComponent*                    CharacterVoiceComponent;                                   // 0x06A0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UStaminaStatComponent*                       StaminaStatComponent;                                      // 0x06A8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UDamageableComponent*                        DamageableComponent;                                       // 0x06B0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UHealthStatComponent*                        HealthStatComponent;                                       // 0x06B8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UThudderComponent*                           BodyThudder;                                               // 0x06C0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	int                                                FootstepAudioComponentCount;                               // 0x06C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_C2SG[0x4];                                     // 0x06CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	TArray<class UAudioComponent*>                     FootstepAudioComponents;                                   // 0x06D0(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_TADD[0x4];                                     // 0x06E0(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              FootstepLODDistance;                                       // 0x06E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              FootstepEffectsMaxCameraDist;                              // 0x06E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_LLQE[0x4];                                     // 0x06EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	TArray<struct FName>                               FeetBones;                                                 // 0x06F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FVector                                     FootstepDecalSize;                                         // 0x0700(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_K6A7[0x4];                                     // 0x070C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	TArray<class UMaterialInterface*>                  FootstepDecals;                                            // 0x0710(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TArray<class UParticleSystem*>                     FootstepParticles;                                         // 0x0720(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class USoundCue*                                   FootstepSound;                                             // 0x0730(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              FootstepSoundZOffset;                                      // 0x0738(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FVector2D                                   FootstepVolumeVelocityRangeIn;                             // 0x073C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FVector2D                                   FootstepVolumeVelocityRangeOut;                            // 0x0744(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FVector2D                                   FootstepPitchVelocityRangeIn;                              // 0x074C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FVector2D                                   FootstepPitchVelocityRangeOut;                             // 0x0754(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              FootstepVolumeModifierViewTarget;                          // 0x075C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              FootstepVolumeModifierAlly;                                // 0x0760(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              FootstepVolumeModifierEnemy;                               // 0x0764(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	int                                                FootstepArmorTier;                                         // 0x0768(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_Z9KH[0x4];                                     // 0x076C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	class UPhysicsAsset*                               ClientPhysicsAsset;                                        // 0x0770(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UPhysicsAsset*                               BodyRagdollPhysicsAsset;                                   // 0x0778(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FDismemberedQueue                           DismemberedQueue;                                          // 0x0780(0x0060) (NativeAccessSpecifierPublic)

	struct FVector                                     MoveCompVelocityBeforeDeath;                               // 0x07E0(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              LastNonZeroVelocityTime;                                   // 0x07EC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bCanReceiveClientsideHits;                                 // 0x07F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_YWF3[0x3];                                     // 0x07F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	int                                                DamageArmorTierOverride;                                   // 0x07F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              DissolveDuration;                                          // 0x07F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_2VYJ[0x4];                                     // 0x07FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	class ULateTickComponent*                          LateTickComponent;                                         // 0x0800(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              DistanceToCameraHeuristic;                                 // 0x0808(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              DistanceToCamera;                                          // 0x080C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              OcclusionToCamera;                                         // 0x0810(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bSkipAnimPoseOnClientWhenNotRendered;                      // 0x0814(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_300S[0x3];                                     // 0x0815(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	struct FVector                                     DistanceToCameraMeshOffset;                                // 0x0818(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	int                                                LODRank;                                                   // 0x0824(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	int                                                LODBucketLevel;                                            // 0x0828(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bFancyMeshEffects;                                         // 0x082C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_J4Y3[0x3];                                     // 0x082D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              FancyMeshEffectsTurnOnDistance;                            // 0x0830(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              FancyMeshEffectsTurnOffDistance;                           // 0x0834(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bForceMaxQuality;                                          // 0x0838(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      ReplicatedCharacterFlags;                                  // 0x0839(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bWasEverPossessedByLocalPlayer;                            // 0x083A(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_JUSE[0x1];                                     // 0x083B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              LastPossessionTime;                                        // 0x083C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              RagdollFallingGetUpDuration;                               // 0x0840(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              RagdollFallingGetUpStartTime;                              // 0x0844(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              RagdollFallingStartTime;                                   // 0x0848(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              RagdollFallingMinTime;                                     // 0x084C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              RagdollFallingMinVelocityToGetUp;                          // 0x0850(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              RagdollFallingTimeAtMinVelocityToGetUp;                    // 0x0854(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_5QO9[0xC];                                     // 0x0858(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              JumpCooldown;                                              // 0x0864(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bJumped;                                                   // 0x0868(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bIsAirborneFromJump;                                       // 0x0869(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_0Y2E[0x2];                                     // 0x086A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              AirborneTime;                                              // 0x086C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              SmokeDistanceMaxValue;                                     // 0x0870(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              SmokeDistanceSmoothInterpSpeed;                            // 0x0874(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TWeakObjectPtr<class AMasterField>                 CurrentSmokeField;                                         // 0x0878(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UBurnableComponent*                          BurnableComponent;                                         // 0x0880(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bMeshesReceiveDecals;                                      // 0x0888(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_Z4B9[0x7];                                     // 0x0889(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	class AMordhauProjectile*                          CurrentProjectile;                                         // 0x0890(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bTurnUsesControllerInputYawScale;                          // 0x0898(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bAddForwardAxisToMovementInput;                            // 0x0899(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bAddRightAxisToMovementInput;                              // 0x089A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_PZV1[0x1];                                     // 0x089B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              SpawnTurnValue;                                            // 0x089C(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              LookUpLimit;                                               // 0x08A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              LookDownLimit;                                             // 0x08A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              TurnLimit;                                                 // 0x08A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      ReplicatedLookUpValue;                                     // 0x08AC(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_H5EI[0x3];                                     // 0x08AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              LookUpValueSmoothingTarget;                                // 0x08B0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              LookUpValueSmoothingFrom;                                  // 0x08B4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              LookUpValueSmoothingStartTime;                             // 0x08B8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              LookUpValueSmoothingEndTime;                               // 0x08BC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              LookSmoothingSlowAlpha;                                    // 0x08C0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              TurnRateCap;                                               // 0x08C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              TurnRateCapTarget;                                         // 0x08C8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              LookUpRateCap;                                             // 0x08CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              LookUpRateCapTarget;                                       // 0x08D0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bTurnRateIgnoresCap;                                       // 0x08D4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_691A[0x3];                                     // 0x08D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              TurnCapRemaining;                                          // 0x08D8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              LookUpCapRemaining;                                        // 0x08DC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FVector                                     LastObservedLocation;                                      // 0x08E0(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FVector                                     AccumulatedLocationLag;                                    // 0x08EC(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TArray<struct FFloatAndVector>                     DelayedLocationDeltas;                                     // 0x08F8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              CurrentLocationLagInduction;                               // 0x0908(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              LocationLagInductionTarget;                                // 0x090C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              LocationLagInductionChangeSpeed;                           // 0x0910(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              LocationLagInductionCounterweight;                         // 0x0914(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FVector                                     LastObservedLook;                                          // 0x0918(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FVector                                     AccumulatedLookLag;                                        // 0x0924(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TArray<struct FFloatAndVector>                     DelayedLookDeltas;                                         // 0x0930(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              CurrentLookLagInduction;                                   // 0x0940(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              LookLagInductionTarget;                                    // 0x0944(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              LookLagInductionChangeSpeed;                               // 0x0948(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              LookLagInductionCounterweight;                             // 0x094C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bPerformCustomDepthHighlight;                              // 0x0950(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bIsHighlighted;                                            // 0x0951(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bIsInteractable;                                           // 0x0952(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_F0M7[0x5];                                     // 0x0953(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	class UClass*                                      MarkerWidgetComponentClass;                                // 0x0958(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UClass*                                      MarkerWidgetClass;                                         // 0x0960(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_VF5J[0x8];                                     // 0x0968(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	struct FTransform                                  MarkerWidgetRelativeTransform;                             // 0x0970(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	struct FName                                       MarkerWidgetAttachSocket;                                  // 0x09A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UMordhauWidgetComponent*                     MarkerWidgetComponent;                                     // 0x09A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bCannotRequestSuicide;                                     // 0x09B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bWillStopMelee;                                            // 0x09B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bWillBleedOutOnKill;                                       // 0x09B2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_6GQ9[0x1];                                     // 0x09B3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              BleedingOutRemainingTime;                                  // 0x09B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bIsBleedingOut;                                            // 0x09B8(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_EXKH[0x7];                                     // 0x09B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	class UParticleSystem*                             DeathParticles;                                            // 0x09C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FName                                       DeathParticlesSocket;                                      // 0x09C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bDisableHealingItems;                                      // 0x09D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      Health;                                                    // 0x09D1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      ReplicatedHealth;                                          // 0x09D2(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_402M[0x1];                                     // 0x09D3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              HealthRegenDelay;                                          // 0x09D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      HealthRegenPerTick;                                        // 0x09D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_YGKF[0x3];                                     // 0x09D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              HealthRegenTickRate;                                       // 0x09DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bIgnoreGameStateHealthRegenRestriction;                    // 0x09E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_ME99[0x3];                                     // 0x09E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              OutOfBoundsKillTime;                                       // 0x09E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bIsAllowedOutOfBounds;                                     // 0x09E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bTeamkillsCountForAutoKick;                                // 0x09E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_7RO0[0x2];                                     // 0x09EA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              ReflectMeleeDamagePercentage;                              // 0x09EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bHasLastChance;                                            // 0x09F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_WUJB[0x3];                                     // 0x09F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	int                                                LastChanceHealAmount;                                      // 0x09F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              ReceivedDamageModifier;                                    // 0x09F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              ReceivedFallDamageModifier;                                // 0x09FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              ReceivedTeamDamageModifier;                                // 0x0A00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              ReceivedFireDamageModifier;                                // 0x0A04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              ReceivedRangedDamageModifier;                              // 0x0A08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              ReceivedDamageAbsorption;                                  // 0x0A0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              ReceivedDamageMax;                                         // 0x0A10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              KnockbackFlinch;                                           // 0x0A14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UClass*                                      HitEffect;                                                 // 0x0A18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UParticleSystem*                             BurningParticles;                                          // 0x0A20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FName                                       BurningAttachSocket;                                       // 0x0A28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class USoundCue*                                   BurningSound;                                              // 0x0A30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class USoundCue*                                   FallDamageSound;                                           // 0x0A38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FName                                       FallDamageSoundAttachToBone;                               // 0x0A40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TWeakObjectPtr<class UParticleSystemComponent>     CurrentBurningParticles;                                   // 0x0A48(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TWeakObjectPtr<class UAudioComponent>              CurrentBurningSound;                                       // 0x0A50(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FNetDamage                                  NetDamage;                                                 // 0x0A58(0x0024) (Net, RepNotify, NoDestructor, NativeAccessSpecifierPublic)

	float                                              DeathTime;                                                 // 0x0A7C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              ViewTargetAttenuationVolumeMultiplier;                     // 0x0A80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_BD0G[0x4];                                     // 0x0A84(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	class USoundAttenuation*                           ViewTargetAttenuationOverride;                             // 0x0A88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bForceLongDeathYell;                                       // 0x0A90(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_4OF8[0x7];                                     // 0x0A91(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	class USoundCue*                                   HurtYell;                                                  // 0x0A98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class USoundCue*                                   DeathYell;                                                 // 0x0AA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	int                                                DedicatedServerAnimFrameSkipLOD;                           // 0x0AA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FName                                       AdditiveOverrideType;                                      // 0x0AAC(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              AdditiveOverrideEndTime;                                   // 0x0AB4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              AdditiveOverrideStartTime;                                 // 0x0AB8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FName                                       LastFlinchAdditiveName;                                    // 0x0ABC(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              LastFlinchAdditiveTime;                                    // 0x0AC4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TEnumAsByte<Engine_EPhysicalSurface>               CharacterSurface;                                          // 0x0AC8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_RBWZ[0x7];                                     // 0x0AC9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	TArray<struct FSphericalLimbBounds>                SphericalLimbs;                                            // 0x0AD0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              RagdollForceMultIfDmgAgent;                                // 0x0AE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bForceRagdollIfDmgAgent;                                   // 0x0AE4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_0RG6[0x3];                                     // 0x0AE5(0x0003) Fix Super Size





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.AdvancedCharacter");

		return ptr;

	}







	void TurnNotAbsolute(float Value);

	void TurnAtRate(float Val);

	void Turn(float Val, bool bIsAbsolute);

	bool Trip();

	bool TraceSphericalLimbs(const struct FVector& TraceStart, const struct FVector& TraceEnd, struct FHitResult* OutResult);

	void Suicide();

	void StopRegen(float ExtraTime);

	void StopMontage(class UAnimMontage* Montage, float FadeOut);

	void StopHealthRegen(float ExtraTime);

	void StopAnim(float FadeOut);

	void StartRagdollWithBlend(float BlendDuration);

	void StartRagdoll();

	class UParticleSystemComponent* SpawnParticlesAttached(class UParticleSystem* Particle, const struct FVector& Location, const struct FRotator& Rotation, TEnumAsByte<Engine_EAttachLocation> AttachType, const struct FName& Socket, bool bForce);

	void SetOnSmoke(class AMasterField* SmokeField);

	void SetMaxAnimBlendWeight(class UAnimMontage** Montage, float MaxAmount);

	void SetLookLagInductionTarget(float Amount, float ChangeSpeed);

	void SetLocationLagInductionTarget(float Amount, float ChangeSpeed);

	void SetIsRagdollFalling(bool bInIsRagdollFalling);

	void SetAnimRate(class UAnimMontage* Montage, float NewRate);

	void SetAnimPosition(class UAnimMontage* Montage, float NewPosition);

	void SetAdditiveOverrideType(const struct FName& NewType, float Duration);

	void ServerTrip();

	void ServerSuicide();

	void ServerLookUp(float NewLookUp);

	void ResetLookLagInductionTarget();

	void ResetLocationLagInductionTarget();

	void ResetLagInductionTargets();

	void ResetAdditiveOverrideType();

	void RequestTrip();

	void RequestSuicide();

	void RequestMeshEnablePhysics(float Duration);

	void RegisterMaterialToDissolve(class UMaterialInstanceDynamic* Mat);

	void ReceiveMordhauDamage(float Damage, const struct FHitResult& HitResult, Mordhau_EMordhauDamageType DamageType, unsigned char SubDamageType, class AActor* Source, class AActor* Agent, class AController* EventInstigator);

	bool PlayHitEffectParticle(const struct FVector& Location, const struct FRotator& Rotation, const struct FName& bone, bool bFindOptimalSpot);

	class UAudioComponent* PlayCharacterSound(class USoundBase* Sound, const struct FName& bone, const struct FVector& InLocation, TEnumAsByte<Engine_EAttachLocation> AttachLocation, bool bAttach, class USoundAttenuation* Override, float VolumeMultiplier, float PitchMultiplier);

	class UAnimMontage* PlayAnim(class UAnimMontage* Montage, float PlayRate, bool bStopExistingMontages);

	void OnTookDamage(bool bWillKill, Mordhau_EMordhauDamageType Type, unsigned char SubType, const struct FName& bone, const struct FVector& Point, class AActor* Source, class AActor* Agent);

	void OnRep_Team();

	void OnRep_SpawnTurnValue();

	void OnRep_ReplicatedLookUpValue();

	void OnRep_ReplicatedHealth();

	void OnRep_ReplicatedCharacterFlags(unsigned char OldValue);

	void OnRep_NetDamage();

	void OnKilled(class AController* EventInstigator);

	void OnHit(class AActor* Actor, const struct FName& bone, const struct FVector& WorldLocation, unsigned char Tier, unsigned char SurfaceType);

	void OnHealthChanged();

	void OnDied(float Angle, Mordhau_EMordhauDamageType Type, unsigned char SubType, const struct FName& bone, const struct FVector& Point, class AActor* Source, class AActor* Agent);

	void OnCosmeticHit(Mordhau_EMordhauDamageType DamageType, unsigned char SubType, const struct FHitResult& Hit, class AActor* Agent);

	void OnAfterDied(float Angle, Mordhau_EMordhauDamageType Type, unsigned char SubType, const struct FName& bone, const struct FVector& Point, class AActor* Source, class AActor* Agent);

	void OffsetHealth(int Amount, bool bReplicate);

	void MoveRight(float Val);

	void MoveForward(float Val);

	float MordhauTakeDamage(float DamageAmount, const struct FHitResult& Hit, Mordhau_EMordhauDamageType DamageType, unsigned char DamageSubType, class AActor* Source, class AActor* Agent, class AController* EventInstigator);

	float ModifyDamage(float DamageAmount, const struct FMordhauDamageInfo& DamageInfo, class AController* EventInstigator);

	void LookUpNotAbsolute(float Value);

	void LookUpAtRate(float Val);

	void LookUp(float Val, bool bIsAbsolute);

	bool Knockback(const struct FVector& Amount);

	bool IsViewTarget();

	bool IsPlayerControlledIncludingVehicle();

	bool IsLocallyPlayerControlledIncludingVehicle();

	bool IsLocallyPlayerControlled();

	bool IsLocallyControlledOrUncontrolled();

	bool IsLocallyControlledIncludingVehicle();

	bool IsLastDismemberedBonePartial();

	bool IsLastDismemberedBoneBluntForce();

	bool IsAnimActive(class UAnimMontage* Montage);

	bool IsAirborne();

	float GetRawLookUpValue();

	class UMordhauMotion* GetMotion();

	float GetLookUpValue();

	Mordhau_EMordhauDamageType GetLastNetDamageType();

	class AActor* GetLastNetDamageSource();

	struct FVector GetLastDismemberedBoneForceDir();

	bool GetIsDead();

	float GetDistanceIntoSmokeFieldSmoothed();

	float GetDistanceIntoSmokeField();

	class AController* GetControllerIncludingVehicle();

	bool GetBestStickyLocation(const struct FVector& InLocation, struct FVector* OutLocation, struct FVector* OutNormal, struct FName* OutBone);

	unsigned char GetArmorTierForBone(const struct FName& BoneName);

	float GetAnimWeight(class UAnimMontage* Montage);

	float GetAdditiveOverrideTypeNormalizedTime();

	struct FName GetAdditiveOverrideType();

	bool CanBleedOutFromHit(const struct FHitResult& HitResult, Mordhau_EMordhauDamageType Type, unsigned char SubType, class AActor* Source, class AActor* Agent, class AController* EventInstigator);

	void BPLODTick(float DeltaTime);

	class UAudioComponent* BP_PlayCharacterSound(class USoundBase* Sound, const struct FName& bone, const struct FVector& Location, TEnumAsByte<Engine_EAttachLocation> AttachLocation, bool bAttach);

	void BoostAnimBlendWeight(class UAnimMontage** Montage, float BoostAmount);

	void BeginFlinchAdditiveOverride(const struct FName& FlinchOverrideName, const struct FName& AltFlinchOverrideName, float Duration, float Degree, bool bIsHead, float SnapDegreeToSteps);

	void ApplyRagdollForce(float Angle, Mordhau_EMordhauDamageType Type, unsigned char SubType, const struct FName& bone, const struct FVector& Point, class AActor* Source, class AActor* Agent);

	void AddWound(const struct FVector& ImpactPoint, const struct FVector& ImpactNormal, const struct FName& bone, class AActor* Agent, Mordhau_EMordhauDamageType DamageType, unsigned char DamageSubType);

	void AddTurnDegrees(float Delta);

};



