// Class Mordhau.BTTask_Experimental

// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])

class UBTTask_Experimental : public UBTTaskNode

{

public:

	unsigned char                                      UnknownData_SDE2[0x8];                                     // 0x0070(0x0008) MISSED OFFSET (PADDING)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.BTTask_Experimental");

		return ptr;

	}







};



