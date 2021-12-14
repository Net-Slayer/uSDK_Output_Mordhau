#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "RconFunctionLibrary.generated.h"
// Class Mordhau.RconFunctionLibrary
class MORDHAU_API URconFunctionLibrary  :  public UBlueprintFunctionLibrary
{
GENERATED_BODY()
public:
// Variables
	// Functions
UFUNCTION(BlueprintCallable)
	static struct FString GetJsonTypeAsString(TEnumAsByte<PlayFab_EPFJson> Type);
UFUNCTION(BlueprintCallable)
	static class UPlayFabJsonObject* GenerateResponseObject(struct FRconResponseStruct* RconResponse);
UFUNCTION(BlueprintCallable)
	static class UPlayFabJsonObject* GenerateRequestInfoResponseObject(struct FRconRequestInfoResponse* RconRequestInfoResponse);
UFUNCTION(BlueprintCallable)
	static class UPlayFabJsonValue* GenerateRconParameterValue(struct FRconParameter* RconParameter);
};
