// Class Mordhau.MapMetadata

// 0x0010 (FullSize[0x00A8] - InheritedSize[0x0098])

class UMapMetadata : public UMapMetadataBase

{

public:

	TArray<class UClass*>                              Overrides;                                                 // 0x0098(0x0010) (Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.MapMetadata");

		return ptr;

	}







};



