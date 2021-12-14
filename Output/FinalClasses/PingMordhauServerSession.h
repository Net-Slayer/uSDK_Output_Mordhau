#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "PingMordhauServerSession.generated.h"
// Class Mordhau.PingMordhauServerSession
class MORDHAU_API UPingMordhauServerSession  :  public UBlueprintAsyncActionBase
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(Instanced, BlueprintAssignable)
	struct FScriptMulticastDelegate onSuccess; // (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
UPROPERTY(Instanced, BlueprintAssignable)
	struct FScriptMulticastDelegate onFailure; // (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
UPROPERTY()
	class UWorld* World; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
UPROPERTY()
	struct FServerSearchResult SearchResult; // (NativeAccessSpecifierPrivate)
	// Functions
UFUNCTION(BlueprintCallable)
	static class UPingMordhauServerSession* PingMordhauServerSession(class UObject* WorldContextObject, const struct FServerSearchResult& SearchResult);
};
