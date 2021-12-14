// Class Mordhau.JoinMatchmakingMatch

// 0x00D0 (FullSize[0x0100] - InheritedSize[0x0030])

class UJoinMatchmakingMatch : public UBlueprintAsyncActionBase

{

public:

	struct FScriptMulticastDelegate                    onSuccess;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	struct FScriptMulticastDelegate                    onFailure;                                                 // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_VWI8[0x8];                                     // 0x0050(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	struct FPlayFabMatchmakingMatch                    Match;                                                     // 0x0058(0x00A8) (NativeAccessSpecifierPrivate)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.JoinMatchmakingMatch");

		return ptr;

	}







	class UJoinMatchmakingMatch* STATIC_JoinMatchmakingMatch(const struct FPlayFabMatchmakingMatch& Match);

};



