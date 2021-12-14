// Class Mordhau.EnvQueryGenerator_Equipment

// 0x0008 (FullSize[0x0058] - InheritedSize[0x0050])

class UEnvQueryGenerator_Equipment : public UEnvQueryGenerator

{

public:

	unsigned char                                      UnknownData_B9NX[0x8];                                     // 0x0050(0x0008) MISSED OFFSET (PADDING)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.EnvQueryGenerator_Equipment");

		return ptr;

	}







};



