// Class Mordhau.Badge

// 0x0008 (FullSize[0x0060] - InheritedSize[0x0058])

class UBadge : public UMordhauInventoryItem

{

public:

	class UTexture2D*                                  Texture;                                                   // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.Badge");

		return ptr;

	}







};



