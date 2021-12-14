#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "FindMordhauServerSessionByAddress.generated.h"
// Class Mordhau.FindMordhauServerSessionByAddress
class MORDHAU_API UFindMordhauServerSessionByAddress  :  public UBlueprintAsyncActionBase
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
	struct FServerAddress Address; // (NoDestructor, NativeAccessSpecifierPrivate)
	// Functions
UFUNCTION(BlueprintCallable)
	static class UFindMordhauServerSessionByAddress* FindMordhauServerSessionByAddress(class UObject* WorldContextObject, const struct FServerAddress& Address);
};
