// Class Mordhau.StabMotion

// 0x0018 (FullSize[0x1108] - InheritedSize[0x10F0])

class UStabMotion : public UAttackMotion

{

public:

	struct FRotator                                    AnimAngleCueAmount;                                        // 0x10F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_GMM1[0x4];                                     // 0x10FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	class UCurveFloat*                                 AnimAngleCurve;                                            // 0x1100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.StabMotion");

		return ptr;

	}







};



