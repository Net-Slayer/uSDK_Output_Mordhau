// Class Mordhau.MordhauColor

// 0x0020 (FullSize[0x0078] - InheritedSize[0x0058])

class UMordhauColor : public UMordhauInventoryItem

{

public:

	struct FLinearColor                                Color;                                                     // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FLinearColor                                DisplayColor;                                              // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.MordhauColor");

		return ptr;

	}







};



