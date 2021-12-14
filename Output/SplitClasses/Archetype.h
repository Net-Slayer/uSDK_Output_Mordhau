// Class Mordhau.Archetype

// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])

class UArchetype : public UObject

{

public:

	int                                                CharacterPoints;                                           // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_RI40[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.Archetype");

		return ptr;

	}







};



