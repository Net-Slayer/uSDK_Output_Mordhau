// Class Mordhau.ReserveMordhauServerSessionSlots

// 0x0160 (FullSize[0x0190] - InheritedSize[0x0030])

class UReserveMordhauServerSessionSlots : public UBlueprintAsyncActionBase

{

public:

	struct FScriptMulticastDelegate                    onSuccess;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	struct FScriptMulticastDelegate                    OnFull;                                                    // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	struct FScriptMulticastDelegate                    onFailure;                                                 // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_RUN0[0x8];                                     // 0x0060(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	class UWorld*                                      World;                                                     // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	struct FServerSearchResult                         SearchResult;                                              // 0x0070(0x0110) (NativeAccessSpecifierPrivate)

	TArray<struct FPlayFabPlayerEntity>                PartyMembers;                                              // 0x0180(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.ReserveMordhauServerSessionSlots");

		return ptr;

	}







	class UReserveMordhauServerSessionSlots* STATIC_ReserveMordhauServerSessionSlots(class UObject* WorldContextObject, const struct FServerSearchResult& SearchResult, TArray<struct FPlayFabPlayerEntity> PartyMembers);

};



