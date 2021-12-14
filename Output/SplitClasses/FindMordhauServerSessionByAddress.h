// Class Mordhau.FindMordhauServerSessionByAddress

// 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])

class UFindMordhauServerSessionByAddress : public UBlueprintAsyncActionBase

{

public:

	struct FScriptMulticastDelegate                    onSuccess;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	struct FScriptMulticastDelegate                    onFailure;                                                 // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	class UWorld*                                      World;                                                     // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	struct FServerAddress                              Address;                                                   // 0x0058(0x0008) (NoDestructor, NativeAccessSpecifierPrivate)

	unsigned char                                      UnknownData_OO4Q[0x8];                                     // 0x0060(0x0008) MISSED OFFSET (PADDING)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.FindMordhauServerSessionByAddress");

		return ptr;

	}







	class UFindMordhauServerSessionByAddress* STATIC_FindMordhauServerSessionByAddress(class UObject* WorldContextObject, const struct FServerAddress& Address);

};



