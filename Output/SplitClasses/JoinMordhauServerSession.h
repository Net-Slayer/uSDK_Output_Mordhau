// Class Mordhau.JoinMordhauServerSession

// 0x0148 (FullSize[0x0178] - InheritedSize[0x0030])

class UJoinMordhauServerSession : public UBlueprintAsyncActionBase

{

public:

	struct FScriptMulticastDelegate                    onSuccess;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	struct FScriptMulticastDelegate                    onFailure;                                                 // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_UKTT[0x128];                                   // 0x0050(0x0128) MISSED OFFSET (PADDING)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.JoinMordhauServerSession");

		return ptr;

	}







	class UJoinMordhauServerSession* STATIC_JoinMordhauServerSession(const struct FServerSearchResult& SearchResult);

};



