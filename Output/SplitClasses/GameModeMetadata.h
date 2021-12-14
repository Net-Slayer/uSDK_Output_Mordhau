// Class Mordhau.GameModeMetadata

// 0x00A8 (FullSize[0x00D0] - InheritedSize[0x0028])

class UGameModeMetadata : public UObject

{

public:

	struct FString                                     Prefix;                                                    // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FText                                       Name;                                                      // 0x0038(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	struct FText                                       Description;                                               // 0x0050(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	class UTexture2D*                                  Thumbnail;                                                 // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TArray<struct FText>                               Tips;                                                      // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TMap<MordhauOnlineSubsystem_EServerRegion, struct FPlayerCountArray> PlayerCount;                                               // 0x0080(0x0050) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.GameModeMetadata");

		return ptr;

	}







	TArray<int> GetPlayerCount(MordhauOnlineSubsystem_EServerRegion ServerRegion);

	class UGameModeMetadata* STATIC_GetDefaultObject(class UClass* MetadataClass);

};



