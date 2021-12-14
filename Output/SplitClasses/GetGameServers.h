// Class Mordhau.GetGameServers

// 0x0070 (FullSize[0x00A0] - InheritedSize[0x0030])

class UGetGameServers : public UBlueprintAsyncActionBase

{

public:

	struct FScriptMulticastDelegate                    onSuccess;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	struct FScriptMulticastDelegate                    onFailure;                                                 // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_NC8G[0x8];                                     // 0x0050(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	struct FGameServerFilter                           Filter;                                                    // 0x0058(0x0048) (NativeAccessSpecifierPrivate)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.GetGameServers");

		return ptr;

	}







	class UGetGameServers* STATIC_GetGameServers(const struct FGameServerFilter& Filter);

};



