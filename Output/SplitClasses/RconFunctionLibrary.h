// Class Mordhau.RconFunctionLibrary

// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])

class URconFunctionLibrary : public UBlueprintFunctionLibrary

{

public:





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.RconFunctionLibrary");

		return ptr;

	}







	struct FString STATIC_GetJsonTypeAsString(TEnumAsByte<PlayFab_EPFJson> Type);

	class UPlayFabJsonObject* STATIC_GenerateResponseObject(struct FRconResponseStruct* RconResponse);

	class UPlayFabJsonObject* STATIC_GenerateRequestInfoResponseObject(struct FRconRequestInfoResponse* RconRequestInfoResponse);

	class UPlayFabJsonValue* STATIC_GenerateRconParameterValue(struct FRconParameter* RconParameter);

};



