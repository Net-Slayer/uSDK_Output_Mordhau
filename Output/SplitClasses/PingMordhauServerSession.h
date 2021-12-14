// Class Mordhau.PingMordhauServerSession

// 0x0140 (FullSize[0x0170] - InheritedSize[0x0030])

class UPingMordhauServerSession : public UBlueprintAsyncActionBase

{

public:

	struct FScriptMulticastDelegate                    onSuccess;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	struct FScriptMulticastDelegate                    onFailure;                                                 // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_8B75[0x8];                                     // 0x0050(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	class UWorld*                                      World;                                                     // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	struct FServerSearchResult                         SearchResult;                                              // 0x0060(0x0110) (NativeAccessSpecifierPrivate)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.PingMordhauServerSession");

		return ptr;

	}







	class UPingMordhauServerSession* STATIC_PingMordhauServerSession(class UObject* WorldContextObject, const struct FServerSearchResult& SearchResult);

};



