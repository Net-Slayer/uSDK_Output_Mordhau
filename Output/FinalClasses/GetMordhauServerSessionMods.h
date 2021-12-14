#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "GetMordhauServerSessionMods.generated.h"
// Class Mordhau.GetMordhauServerSessionMods
class MORDHAU_API UGetMordhauServerSessionMods  :  public UBlueprintAsyncActionBase
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(Instanced, BlueprintAssignable)
	struct FScriptMulticastDelegate onSuccess; // (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
UPROPERTY(Instanced, BlueprintAssignable)
	struct FScriptMulticastDelegate onFailure; // (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FServerSearchResult SearchResult; // (NativeAccessSpecifierPrivate)
UPROPERTY()
	struct FString ServerId; // (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	// Functions
UFUNCTION(BlueprintCallable)
	static class UGetMordhauServerSessionMods* GetMordhauServerSessionMods(const struct FServerSearchResult& SearchResult);
};
