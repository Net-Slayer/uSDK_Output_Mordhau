// Class Mordhau.DestroyMordhauServerSession

// 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])

class UDestroyMordhauServerSession : public UBlueprintAsyncActionBase

{

public:

	struct FScriptMulticastDelegate                    onSuccess;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	struct FScriptMulticastDelegate                    onFailure;                                                 // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_0UQY[0x18];                                    // 0x0050(0x0018) MISSED OFFSET (PADDING)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.DestroyMordhauServerSession");

		return ptr;

	}







	class UDestroyMordhauServerSession* STATIC_DestroyMordhauServerSession();

};



