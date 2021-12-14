// Class Mordhau.Mordhau1DVehicle

// 0x0008 (FullSize[0x0B70] - InheritedSize[0x0B68])

class AMordhau1DVehicle : public AMordhauVehicle

{

public:

	unsigned char                                      UnknownData_CXNX[0x8];                                     // 0x0B68(0x0008) Fix Super Size





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.Mordhau1DVehicle");

		return ptr;

	}







	void OnStepChanged();

};



