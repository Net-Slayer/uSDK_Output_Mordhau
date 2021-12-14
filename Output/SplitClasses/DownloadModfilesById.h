// Class Mordhau.DownloadModfilesById

// 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])

class UDownloadModfilesById : public UBlueprintAsyncActionBase

{

public:

	struct FScriptMulticastDelegate                    onSuccess;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	struct FScriptMulticastDelegate                    onFailure;                                                 // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_HDKL[0x10];                                    // 0x0050(0x0010) MISSED OFFSET (PADDING)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.DownloadModfilesById");

		return ptr;

	}







	class UDownloadModfilesById* STATIC_DownloadModfilesById(TArray<int> ModIds);

};



