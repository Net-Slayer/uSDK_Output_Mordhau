// Class Mordhau.MordhauShield

// 0x0010 (FullSize[0x1C30] - InheritedSize[0x1C20])

class AMordhauShield : public AMordhauWeapon

{

public:

	bool                                               bCanBlockMeleePassively;                                   // 0x1C20(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_VW13[0x3];                                     // 0x1C21(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              PassiveBlockDamageModifier;                                // 0x1C24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bAllowShieldWall;                                          // 0x1C28(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_WE3A[0x7];                                     // 0x1C29(0x0007) MISSED OFFSET (PADDING)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.MordhauShield");

		return ptr;

	}







};



