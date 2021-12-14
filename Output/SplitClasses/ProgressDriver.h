// Class Mordhau.ProgressDriver

// 0x0008 (FullSize[0x0380] - InheritedSize[0x0378])

class AProgressDriver : public AMordhauActor

{

public:

	unsigned char                                      UnknownData_WFTR[0x8];                                     // 0x0378(0x0008) Fix Super Size





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.ProgressDriver");

		return ptr;

	}







};



