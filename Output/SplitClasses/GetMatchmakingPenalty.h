// Class Mordhau.GetMatchmakingPenalty

// 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])

class UGetMatchmakingPenalty : public UBlueprintAsyncActionBase

{

public:

	struct FScriptMulticastDelegate                    onSuccess;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	struct FScriptMulticastDelegate                    onFailure;                                                 // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_70RW[0x8];                                     // 0x0050(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	struct FPlayFabPlayerEntity                        PlayerEntity;                                              // 0x0058(0x0020) (HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	struct FString                                     GroupName;                                                 // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	struct FString                                     GroupID;                                                   // 0x0088(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.GetMatchmakingPenalty");

		return ptr;

	}







	class UGetMatchmakingPenalty* STATIC_GetMatchmakingPenalty(const struct FPlayFabPlayerEntity& PlayerEntity);

};



