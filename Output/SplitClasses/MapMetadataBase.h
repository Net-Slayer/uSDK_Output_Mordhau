// Class Mordhau.MapMetadataBase

// 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])

class UMapMetadataBase : public UObject

{

public:

	struct FText                                       Name;                                                      // 0x0028(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	TArray<struct FSoftObjectPath>                     Maps;                                                      // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FSoftObjectPath                             Thumbnail;                                                 // 0x0050(0x0018) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TArray<struct FSoftObjectPath>                     BackgroundImages;                                          // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TArray<struct FSoftObjectPath>                     ForegroundImages;                                          // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TArray<struct FText>                               Tips;                                                      // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.MapMetadataBase");

		return ptr;

	}







};



