// Class Mordhau.HorseVehicleComponent

// 0x0010 (FullSize[0x01C0] - InheritedSize[0x01B0])

class UHorseVehicleComponent : public UMordhauVehicleComponent

{

public:

	class UCurveFloat*                                 RiderRearingCurve;                                         // 0x01B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_91FR[0x8];                                     // 0x01B8(0x0008) MISSED OFFSET (PADDING)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.HorseVehicleComponent");

		return ptr;

	}







};



