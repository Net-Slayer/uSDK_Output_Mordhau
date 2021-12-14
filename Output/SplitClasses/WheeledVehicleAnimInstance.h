// Class Mordhau.WheeledVehicleAnimInstance

// 0x0010 (FullSize[0x0340] - InheritedSize[0x0330])

class UWheeledVehicleAnimInstance : public UAdvancedCharacterAnimInstance

{

public:

	float                                              WheelCastDistance;                                         // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_T7E2[0xC];                                     // 0x0334(0x000C) MISSED OFFSET (PADDING)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.WheeledVehicleAnimInstance");

		return ptr;

	}







};



