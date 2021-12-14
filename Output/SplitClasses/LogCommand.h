// Class Mordhau.LogCommand

// 0x0050 (FullSize[0x00D0] - InheritedSize[0x0080])

class ULogCommand : public URconCommand

{

public:

	unsigned char                                      UnknownData_HP4Z[0x50];                                    // 0x0080(0x0050) MISSED OFFSET (PADDING)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.LogCommand");

		return ptr;

	}







};



