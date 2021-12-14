#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "MordhauHttpRequest.generated.h"
// Class Mordhau.MordhauHttpRequest
class MORDHAU_API UMordhauHttpRequest  :  public UOnlineBlueprintCallProxyBase
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(Instanced, BlueprintAssignable)
	struct FScriptMulticastDelegate OnRequestComplete; // (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
UPROPERTY(Instanced, BlueprintAssignable)
	struct FScriptMulticastDelegate OnRequestFailed; // (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	// Functions
UFUNCTION(BlueprintCallable)
	static class UMordhauHttpRequest* MordhauHttpRequest(class UObject* WorldContext, const struct FString& InUrl, const struct FString& InVerb, TMap<struct FString, struct FString> InHeaderMap, class UPlayFabJsonObject* InPlayFabJsonObject);
};
