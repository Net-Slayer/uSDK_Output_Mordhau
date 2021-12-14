// Class Mordhau.StaminaStatComponent

// 0x0018 (FullSize[0x00F0] - InheritedSize[0x00D8])

class UStaminaStatComponent : public UStatComponent

{

public:

	bool                                               bPlaysOutOfBreathSound;                                    // 0x00D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_0KJR[0x3];                                     // 0x00D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	int                                                BreathingSoundPlayBelowStamina;                            // 0x00DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              BreathingSoundMaxDistance;                                 // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TWeakObjectPtr<class UAudioComponent>              LastBreath;                                                // 0x00E4(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_2CMZ[0x4];                                     // 0x00EC(0x0004) MISSED OFFSET (PADDING)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.StaminaStatComponent");

		return ptr;

	}







	void OnCharacterDied(class AAdvancedCharacter* Character);

};



