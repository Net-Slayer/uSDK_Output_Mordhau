// Class Mordhau.MordhauHttpRequest

// 0x00A0 (FullSize[0x00D0] - InheritedSize[0x0030])

class UMordhauHttpRequest : public UOnlineBlueprintCallProxyBase

{

public:

	struct FScriptMulticastDelegate                    OnRequestComplete;                                         // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	struct FScriptMulticastDelegate                    OnRequestFailed;                                           // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_2HZ3[0x80];                                    // 0x0050(0x0080) MISSED OFFSET (PADDING)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.MordhauHttpRequest");

		return ptr;

	}







	class UMordhauHttpRequest* STATIC_MordhauHttpRequest(class UObject* WorldContext, const struct FString& InUrl, const struct FString& InVerb, TMap<struct FString, struct FString> InHeaderMap, class UPlayFabJsonObject* InPlayFabJsonObject);

};



