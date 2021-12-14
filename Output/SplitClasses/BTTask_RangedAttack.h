// Class Mordhau.BTTask_RangedAttack

// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])

class UBTTask_RangedAttack : public UBTTaskNode

{

public:

	float                                              MaxProjectileFlightTime;                                   // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_1BNY[0x4];                                     // 0x0074(0x0004) MISSED OFFSET (PADDING)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.BTTask_RangedAttack");

		return ptr;

	}







};



