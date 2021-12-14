// Class Mordhau.LODSkeletalMeshComponent

// 0x00C4 (FullSize[0x0B80] - InheritedSize[0x0ABC])

class ULODSkeletalMeshComponent : public USkeletalMeshComponent

{

public:

	unsigned char                                      UnknownData_M9NV[0x4];                                     // 0x0ABC(0x0004) Fix Super Size

	unsigned char                                      UnknownData_QPH1[0x80];                                    // 0x0AC0(0x0080) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              LODDeltaTime;                                              // 0x0B40(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              LastLODDeltaTime;                                          // 0x0B44(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bHasSkippedThisFrame;                                      // 0x0B48(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_R2P4[0x3];                                     // 0x0B49(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	int                                                FramesSinceLastLODTick;                                    // 0x0B4C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	int                                                FramesUntilNextLODTick;                                    // 0x0B50(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bUseBoneRadiusBounds;                                      // 0x0B54(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_91HD[0x3];                                     // 0x0B55(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	struct FName                                       BoneRadiusBoundsBoneName;                                  // 0x0B58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              BoneRadiusBoundsRadius;                                    // 0x0B60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              MaxLODDeltaTime;                                           // 0x0B64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bSmoothClothLODTransition;                                 // 0x0B68(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_F0FO[0x3];                                     // 0x0B69(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              ClothLODTransitionSpeed;                                   // 0x0B6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bSkipTransformUpdate;                                      // 0x0B70(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bPreventTicking;                                           // 0x0B71(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bUpdateLODIfPreventTicking;                                // 0x0B72(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bForceNextTick;                                            // 0x0B73(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_GTB0[0xC];                                     // 0x0B74(0x000C) MISSED OFFSET (PADDING)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.LODSkeletalMeshComponent");

		return ptr;

	}







};



