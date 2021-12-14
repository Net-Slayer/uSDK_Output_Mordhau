// Class Mordhau.CharacterBurnableComponent

// 0x0008 (FullSize[0x0140] - InheritedSize[0x0138])

class UCharacterBurnableComponent : public UBurnableComponent

{

public:

	unsigned char                                      UnknownData_SD60[0x8];                                     // 0x0138(0x0008) MISSED OFFSET (PADDING)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.CharacterBurnableComponent");

		return ptr;

	}







};



