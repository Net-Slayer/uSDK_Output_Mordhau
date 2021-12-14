// Class Mordhau.Turret

// 0x0008 (FullSize[0x0AF0] - InheritedSize[0x0AE8])

class ATurret : public AAdvancedCharacter

{

public:

	unsigned char                                      UnknownData_Y3GO[0x8];                                     // 0x0AE8(0x0008) Fix Super Size





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.Turret");

		return ptr;

	}







};



