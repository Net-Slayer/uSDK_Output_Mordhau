// Class Mordhau.StartMatchmakingMatch

// 0x0160 (FullSize[0x0190] - InheritedSize[0x0030])

class UStartMatchmakingMatch : public UBlueprintAsyncActionBase

{

public:

	struct FScriptMulticastDelegate                    onSuccess;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	struct FScriptMulticastDelegate                    onFailure;                                                 // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_G37A[0x8];                                     // 0x0050(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	class UWorld*                                      World;                                                     // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	struct FPlayFabMatchmakingMatch                    Match;                                                     // 0x0060(0x00A8) (NativeAccessSpecifierPrivate)

	struct FString                                     GroupID;                                                   // 0x0108(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	struct FString                                     GroupName;                                                 // 0x0118(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	struct FPlayFabGroup                               Group;                                                     // 0x0128(0x0068) (HasGetValueTypeHash, NativeAccessSpecifierPrivate)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.StartMatchmakingMatch");

		return ptr;

	}







	class UStartMatchmakingMatch* STATIC_StartMatchmakingMatch(class UObject* WorldContextObject, const struct FPlayFabMatchmakingMatch& Match);

};



