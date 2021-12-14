// Class Mordhau.MordhauCapsuleComponent

// 0x0010 (FullSize[0x0420] - InheritedSize[0x0410])

class UMordhauCapsuleComponent : public UCapsuleComponent

{

public:

	unsigned char                                      UnknownData_BL0P[0x10];                                    // 0x0410(0x0010) MISSED OFFSET (PADDING)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.MordhauCapsuleComponent");

		return ptr;

	}







};



