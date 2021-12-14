// Class Mordhau.MordhauInventoryItem

// 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])

class UMordhauInventoryItem : public UObject

{

public:

	class UTexture2D*                                  ItemIcon;                                                  // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	int                                                ItemDefID;                                                 // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	int                                                OriginalItemDefID;                                         // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FText                                       ItemName;                                                  // 0x0038(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	Mordhau_EItemRarity                                ItemRarity;                                                // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_J9YY[0x7];                                     // 0x0051(0x0007) MISSED OFFSET (PADDING)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.MordhauInventoryItem");

		return ptr;

	}







	void MarkSeen();

	bool GetWasSeen();

};



