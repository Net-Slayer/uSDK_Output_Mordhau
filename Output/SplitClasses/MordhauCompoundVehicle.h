// Class Mordhau.MordhauCompoundVehicle

// 0x0008 (FullSize[0x0B70] - InheritedSize[0x0B68])

class AMordhauCompoundVehicle : public AMordhauVehicle

{

public:

	unsigned char                                      UnknownData_EPP1[0x8];                                     // 0x0B68(0x0008) Fix Super Size





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.MordhauCompoundVehicle");

		return ptr;

	}







};



