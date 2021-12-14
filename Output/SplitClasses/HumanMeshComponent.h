// Class Mordhau.HumanMeshComponent

// 0x01F0 (FullSize[0x0E30] - InheritedSize[0x0C40])

class UHumanMeshComponent : public UCharacterMeshComponent

{

public:

	unsigned char                                      UnknownData_7A1U[0x10];                                    // 0x0C40(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	class USkeletalMesh*                               FPMesh;                                                    // 0x0C50(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class USkeletalMesh*                               FPDeadMesh;                                                // 0x0C58(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class USkeletalMesh*                               UnifiedMesh;                                               // 0x0C60(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TArray<class ULODSkeletalMeshComponent*>           SlaveSkeletalMeshComponents;                               // 0x0C68(0x0010) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              ClothBlendWeightInterpSpeed;                               // 0x0C78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FVector2D                                   FOVLODDistanceScaleIn;                                     // 0x0C7C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FVector2D                                   FOVLODDistanceScaleOut;                                    // 0x0C84(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bForceInstantMeshUpdate;                                   // 0x0C8C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_R18S[0x3];                                     // 0x0C8D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              UnifiedMeshDistance;                                       // 0x0C90(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              SeparatedMeshDistance;                                     // 0x0C94(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TArray<float>                                      LODIncreaseDistance;                                       // 0x0C98(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TArray<float>                                      LODDecreaseDistance;                                       // 0x0CA8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	int                                                CurrentForcedLOD;                                          // 0x0CB8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bMeshesAreInitialized;                                     // 0x0CBC(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bMaterialsAreInitialized;                                  // 0x0CBD(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bHasInvisibleBody;                                         // 0x0CBE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_GVGY[0x1];                                     // 0x0CBF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	TArray<class USkeletalMesh*>                       OverrideMeshConstructionParts;                             // 0x0CC0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	Mordhau_EWearableSlot                              SingleSlotMode;                                            // 0x0CD0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_PVT4[0x7];                                     // 0x0CD1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	class UClass*                                      SingleSlotModeWearableToUse;                               // 0x0CD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class USkeleton*                                   BodySkeleton;                                              // 0x0CE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UPhysicsAsset*                               ShadowPhysicsAsset;                                        // 0x0CE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bHasScaryBody;                                             // 0x0CF0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_K1NB[0x3];                                     // 0x0CF1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              HelmetAOOffset;                                            // 0x0CF4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              HelmetAOPower;                                             // 0x0CF8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              HelmetAOIntensity;                                         // 0x0CFC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              HelmetAOEyeIntensity;                                      // 0x0D00(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_J2F7[0x4];                                     // 0x0D04(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	class UMaterialInterface*                          LODMasterMaterial;                                         // 0x0D08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UMaterialInterface*                          UberMergeHighMaterial;                                     // 0x0D10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UMaterialInterface*                          UberMergeLowMaterial;                                      // 0x0D18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UMaterialInterface*                          HelmetCoifMaterial;                                        // 0x0D20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UMaterialInterface*                          ChestShouldersMaterial;                                    // 0x0D28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UMaterialInterface*                          ArmsGlovesMaterial;                                        // 0x0D30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UMaterialInterface*                          LowerChestMaterial;                                        // 0x0D38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UMaterialInterface*                          LegsBootsMaterial;                                         // 0x0D40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UMaterialInterface*                          HelmetCoifChestMaterial;                                   // 0x0D48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UMaterialInterface*                          LegsBootsChestLowMaterial;                                 // 0x0D50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UMaterialInterface*                          ArmsGlovesShouldersMaterial;                               // 0x0D58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TArray<class UAnimMontage*>                        UnarmedPreviewPoses;                                       // 0x0D60(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UBlendSpaceBase*                             UnarmedUpperBlendSpace1P;                                  // 0x0D70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UAnimSequence*                               UnarmedUpperAdditive1P;                                    // 0x0D78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UBlendSpaceBase*                             UnarmedUpperBlendSpace;                                    // 0x0D80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UAnimSequence*                               UnarmedUpperAdditive;                                      // 0x0D88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UAnimSequence*                               UnarmedLowerAnimation;                                     // 0x0D90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UAnimSequence*                               UnarmedJumpAnimation;                                      // 0x0D98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UAnimSequence*                               UnarmedLandAnimation;                                      // 0x0DA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UAnimSequence*                               UnarmedFallingAnimation;                                   // 0x0DA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UAnimSequence*                               UnarmedJumpAnimation1P;                                    // 0x0DB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UAnimSequence*                               UnarmedLandAnimation1P;                                    // 0x0DB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UAnimSequence*                               UnarmedFallingAnimation1P;                                 // 0x0DC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UBlendSpaceBase*                             HorseUnarmedUpperBlendSpace1P;                             // 0x0DC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UAnimSequence*                               HorseUnarmedUpperAdditive1P;                               // 0x0DD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UBlendSpaceBase*                             HorseUnarmedUpperBlendSpace;                               // 0x0DD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UAnimSequence*                               HorseUnarmedUpperAdditive;                                 // 0x0DE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UAnimSequence*                               HorseUnarmedRearing;                                       // 0x0DE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UAnimSequence*                               HorseUnarmedRearing1P;                                     // 0x0DF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UAnimSequence*                               HorseUnarmedJump;                                          // 0x0DF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UAnimSequence*                               HorseUnarmedJump1P;                                        // 0x0E00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UAnimMontage*                                InteractWithAnimation;                                     // 0x0E08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UAnimMontage*                                InteractWith1PAnimation;                                   // 0x0E10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bIgnoreAngularVelocityAnimation;                           // 0x0E18(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_3OJU[0x7];                                     // 0x0E19(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	class UCurveFloat*                                 RiposteBlendInCurve;                                       // 0x0E20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_2J79[0x8];                                     // 0x0E28(0x0008) MISSED OFFSET (PADDING)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.HumanMeshComponent");

		return ptr;

	}







	void UpdateSkeletalMeshComponentMaterials(class USkeletalMeshComponent* USMC);

	void UpdateAllSkeletalMeshComponentMaterials();

	void SetMaterialParamsForMergedSlot(const struct FString& Prefix, class UMordhauWearable* Wearable, class UMaterialInstanceDynamic* Mid, bool LowQuality);

	void SetMaterialParamsForLODMasterSlot(const struct FString& Slot, class UMordhauWearable* Wearable, class UMaterialInstanceDynamic* Mid);

	void OnCharacterTornOff(class AAdvancedCharacter* Character);

	void OnCharacterChangedTeam(class AAdvancedCharacter* Character);

	void OnCharacterCameraStyleChanged(class AMordhauCharacter* Character);

	void OnCharacterBuilt(class AMordhauCharacter* Character);

	void ModifyBodyColors(const struct FLinearColor& InSkinColor, const struct FLinearColor& InHairColor, const struct FLinearColor& InEyeColor, struct FLinearColor* OutSkinColor, struct FLinearColor* OutHairColor, struct FLinearColor* OutEyeColor);

	bool CreateUnifiedMeshIfNone(bool bRequireHeavyDutyCheck);

	bool CreateFPMeshIfNone();

	bool CreateFPDeadMeshIfNone();

};



