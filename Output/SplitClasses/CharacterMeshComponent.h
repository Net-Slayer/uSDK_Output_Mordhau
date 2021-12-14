// Class Mordhau.CharacterMeshComponent

// 0x00C0 (FullSize[0x0C40] - InheritedSize[0x0B80])

class UCharacterMeshComponent : public ULODSkeletalMeshComponent

{

public:

	unsigned char                                      UnknownData_EKXG[0x18];                                    // 0x0B80(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	unsigned char                                      MaxWounds;                                                 // 0x0B98(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_X1EM[0x7];                                     // 0x0B99(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	TArray<class USkeletalMeshComponent*>              BloodReceivingSkeletalMeshes;                              // 0x0BA0(0x0010) (BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FName                                       BloodIntensityParamName;                                   // 0x0BB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_0K8G[0x28];                                    // 0x0BB8(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	class UPhysicsAsset*                               RagdollFallingFromPhysicsAsset;                            // 0x0BE0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FName                                       RagdollFallingProfileName;                                 // 0x0BE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UPhysicsAsset*                               RagdollFallingPhysicsAsset;                                // 0x0BF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              RagdollFallingBlendOutSpeed;                               // 0x0BF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FVector                                     RagdollFallingApplyForce;                                  // 0x0BFC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FVector                                     RagdollFallingApplyForceAir;                               // 0x0C08(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FName                                       RagdollFallingApplyForceBoneName;                          // 0x0C14(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_09LI[0xC];                                     // 0x0C1C(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	TArray<TWeakObjectPtr<class UMaterialInstanceDynamic>> DissolveMaterialInstances;                                 // 0x0C28(0x0010) (ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_BPJB[0x8];                                     // 0x0C38(0x0008) MISSED OFFSET (PADDING)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.CharacterMeshComponent");

		return ptr;

	}







	void OnCharacterStoppedRagdollFalling();

	void OnCharacterStartedRagdollFalling();

	void OnCharacterLODTick(float DeltaTime);

	void OnCharacterDied(class AAdvancedCharacter* Character);

};



