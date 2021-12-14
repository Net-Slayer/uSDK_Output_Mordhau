// Class Mordhau.SetMatchmakingMatchServerDetails

// 0x00F8 (FullSize[0x0128] - InheritedSize[0x0030])

class USetMatchmakingMatchServerDetails : public UBlueprintAsyncActionBase

{

public:

	struct FScriptMulticastDelegate                    onSuccess;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	struct FScriptMulticastDelegate                    onFailure;                                                 // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_4BH9[0x8];                                     // 0x0050(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	struct FPlayFabMatchmakingMatch                    Match;                                                     // 0x0058(0x00A8) (NativeAccessSpecifierPrivate)

	struct FPlayFabServerDetails                       ServerDetails;                                             // 0x0100(0x0028) (NativeAccessSpecifierPrivate)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.SetMatchmakingMatchServerDetails");

		return ptr;

	}







	class USetMatchmakingMatchServerDetails* STATIC_SetMatchmakingMatchServerDetails(const struct FPlayFabMatchmakingMatch& Match, const struct FPlayFabServerDetails& ServerDetails);

};



