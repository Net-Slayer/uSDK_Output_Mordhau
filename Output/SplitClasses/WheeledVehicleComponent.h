// Class Mordhau.WheeledVehicleComponent

// 0x0010 (FullSize[0x01C0] - InheritedSize[0x01B0])

class UWheeledVehicleComponent : public UMordhauVehicleComponent

{

public:

	class AMordhauWheeledVehicle*                      WheeledVehicle;                                            // 0x01B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	unsigned char                                      UnknownData_GCUY[0x8];                                     // 0x01B8(0x0008) MISSED OFFSET (PADDING)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.WheeledVehicleComponent");

		return ptr;

	}







};

