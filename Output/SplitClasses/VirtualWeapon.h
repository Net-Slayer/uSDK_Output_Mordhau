// Class Mordhau.VirtualWeapon

// 0x0000 (FullSize[0x1C20] - InheritedSize[0x1C20])

class AVirtualWeapon : public AMordhauWeapon

{

public:





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.VirtualWeapon");

		return ptr;

	}







	void InitializeVirtualWeapon(class AMordhauCharacter* Character);

};



