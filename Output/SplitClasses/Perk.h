// Class Mordhau.Perk

// 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])

class UPerk : public UObject

{

public:

	struct FText                                       Name;                                                      // 0x0028(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	int                                                Cost;                                                      // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_KB7A[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	struct FText                                       Description;                                               // 0x0048(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	class UTexture2D*                                  Icon;                                                      // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.Perk");

		return ptr;

	}







};



