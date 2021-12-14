// Class Mordhau.GetMordhauServerSessionMods

// 0x0148 (FullSize[0x0178] - InheritedSize[0x0030])

class UGetMordhauServerSessionMods : public UBlueprintAsyncActionBase

{

public:

	struct FScriptMulticastDelegate                    onSuccess;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	struct FScriptMulticastDelegate                    onFailure;                                                 // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	struct FServerSearchResult                         SearchResult;                                              // 0x0050(0x0110) (NativeAccessSpecifierPrivate)

	struct FString                                     ServerId;                                                  // 0x0160(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	unsigned char                                      UnknownData_QUJR[0x8];                                     // 0x0170(0x0008) MISSED OFFSET (PADDING)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.GetMordhauServerSessionMods");

		return ptr;

	}







	class UGetMordhauServerSessionMods* STATIC_GetMordhauServerSessionMods(const struct FServerSearchResult& SearchResult);

};



