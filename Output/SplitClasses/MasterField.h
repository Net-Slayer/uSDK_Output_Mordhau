// Class Mordhau.MasterField

// 0x0118 (FullSize[0x0338] - InheritedSize[0x0220])

class AMasterField : public AActor

{

public:

	unsigned char                                      UnknownData_4ZVR[0x5C];                                    // 0x0220(0x005C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              CreatedTime;                                               // 0x027C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              DeactivatedTime;                                           // 0x0280(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              DeactivationStartedTime;                                   // 0x0284(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bAreSubfieldsHidden;                                       // 0x0288(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bIsFieldActive;                                            // 0x0289(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bHasBegunDeactivation;                                     // 0x028A(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_Q4PK[0x5];                                     // 0x028B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	TArray<class UFieldSpawnComponent*>                SubFieldSpawns;                                            // 0x0290(0x0010) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TArray<TWeakObjectPtr<class ASubField>>            SubFields;                                                 // 0x02A0(0x0010) (ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FBox                                        CombinedBoundsBox;                                         // 0x02B0(0x001C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	float                                              FieldLifeTime;                                             // 0x02CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              FieldDeactivationTime;                                     // 0x02D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              FieldFadeOutTime;                                          // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TArray<class UClass*>                              CollisionFilter;                                           // 0x02D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TMap<class AActor*, int>                           ActorPresenceTickCount;                                    // 0x02E8(0x0050) (BlueprintVisible, NativeAccessSpecifierPublic)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.MasterField");

		return ptr;

	}







	void UpdateField();

	void SetSubFieldsHidden(bool bAreHidden);

	void RecomputeCombinedBoundingBox();

	TArray<class ASubField*> GetSubFields();

	struct FVector GetFieldBoundsCenter();

	void DeactivateAndDestroyField();

	void CreateField();

	float ComputeDistanceIntoField(const struct FVector& Location);

	void BeginFieldDeactivation();

};



