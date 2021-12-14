// Class Mordhau.JoinMatchmakingTicket

// 0x00A8 (FullSize[0x00D8] - InheritedSize[0x0030])

class UJoinMatchmakingTicket : public UBlueprintAsyncActionBase

{

public:

	struct FScriptMulticastDelegate                    onSuccess;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	struct FScriptMulticastDelegate                    onFailure;                                                 // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_LXGC[0x8];                                     // 0x0050(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	struct FString                                     QueueName;                                                 // 0x0058(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	struct FString                                     TicketId;                                                  // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	struct FPlayFabMatchmakingAttributes               Attributes;                                                // 0x0078(0x0060) (HasGetValueTypeHash, NativeAccessSpecifierPrivate)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.JoinMatchmakingTicket");

		return ptr;

	}







	class UJoinMatchmakingTicket* STATIC_JoinMatchmakingTicket(const struct FString& QueueName, const struct FString& TicketId, const struct FPlayFabMatchmakingAttributes& Attributes);

};



