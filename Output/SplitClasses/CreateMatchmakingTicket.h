// Class Mordhau.CreateMatchmakingTicket

// 0x00B0 (FullSize[0x00E0] - InheritedSize[0x0030])

class UCreateMatchmakingTicket : public UBlueprintAsyncActionBase

{

public:

	struct FScriptMulticastDelegate                    onSuccess;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	struct FScriptMulticastDelegate                    onFailure;                                                 // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_B9DA[0x8];                                     // 0x0050(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	struct FString                                     QueueName;                                                 // 0x0058(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	struct FPlayFabMatchmakingAttributes               Attributes;                                                // 0x0068(0x0060) (HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	TArray<struct FString>                             Members;                                                   // 0x00C8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	int                                                Timeout;                                                   // 0x00D8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	unsigned char                                      UnknownData_5O0D[0x4];                                     // 0x00DC(0x0004) MISSED OFFSET (PADDING)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.CreateMatchmakingTicket");

		return ptr;

	}







	class UCreateMatchmakingTicket* STATIC_CreateMatchmakingTicket(const struct FString& QueueName, const struct FPlayFabMatchmakingAttributes& Attributes, TArray<struct FString> Members, int Timeout);

};



