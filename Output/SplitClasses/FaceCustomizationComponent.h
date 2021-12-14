// Class Mordhau.FaceCustomizationComponent

// 0x01A8 (FullSize[0x0258] - InheritedSize[0x00B0])

class UFaceCustomizationComponent : public UActorComponent

{

public:

	unsigned char                                      UnknownData_IMA9[0x8];                                     // 0x00B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	TMap<struct FName, int>                            BoneToParentGroupIdx;                                      // 0x00B8(0x0050) (NativeAccessSpecifierPublic)

	TMap<int, int>                                     BoneIdxToSculptableFaceBoneIdx;                            // 0x0108(0x0050) (NativeAccessSpecifierPublic)

	TMap<int, int>                                     SelectionBoneIdxToSculptableFaceBoneIdx;                   // 0x0158(0x0050) (NativeAccessSpecifierPublic)

	TMap<struct FName, int>                            BoneNameToSculptableFaceBoneIdx;                           // 0x01A8(0x0050) (NativeAccessSpecifierPublic)

	TArray<int>                                        BakedDefaultFaceValuesTranslate;                           // 0x01F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TArray<int>                                        BakedDefaultFaceValuesRotate;                              // 0x0208(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TArray<int>                                        BakedDefaultFaceValuesScale;                               // 0x0218(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              HideEarsAmount;                                            // 0x0228(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              HideNoseAmount;                                            // 0x022C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bRegenerateBakedDefaultFaceValues;                         // 0x0230(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bHasScaryFace;                                             // 0x0231(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_6AOB[0x2];                                     // 0x0232(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	struct FVector                                     ScaryFaceRotationMultipliers;                              // 0x0234(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FVector                                     ScaryFaceTranslationMultipliers;                           // 0x0240(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FVector                                     ScaryFaceScaleMultipliers;                                 // 0x024C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.FaceCustomizationComponent");

		return ptr;

	}







	void OnCharacterBuilt(class AMordhauCharacter* Character);

};



