// Class Mordhau.ReserveServerSlots

// 0x0090 (FullSize[0x00C0] - InheritedSize[0x0030])

class UReserveServerSlots : public UBlueprintAsyncActionBase

{

public:

	struct FScriptMulticastDelegate                    onSuccess;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	struct FScriptMulticastDelegate                    OnFull;                                                    // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	struct FScriptMulticastDelegate                    onFailure;                                                 // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_PMK3[0x8];                                     // 0x0060(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	struct FString                                     ConnectString;                                             // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	class AMordhauBeaconClient*                        BeaconClient;                                              // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	class UWorld*                                      World;                                                     // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	struct FPlayFabServerDetails                       ServerDetails;                                             // 0x0088(0x0028) (NativeAccessSpecifierPrivate)

	TArray<struct FPlayFabMatchmakingPlayer>           Players;                                                   // 0x00B0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.ReserveServerSlots");

		return ptr;

	}







	class UReserveServerSlots* STATIC_ReserveServerSlots(class UObject* WorldContextObject, const struct FPlayFabServerDetails& ServerDetails, TArray<struct FPlayFabMatchmakingPlayer> Players);

};



