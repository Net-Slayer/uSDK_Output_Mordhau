#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "GetGameServers.generated.h"
// Class Mordhau.GetGameServers
class MORDHAU_API UGetGameServers  :  public UBlueprintAsyncActionBase
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(Instanced, BlueprintAssignable)
	struct FScriptMulticastDelegate onSuccess; // (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
UPROPERTY(Instanced, BlueprintAssignable)
	struct FScriptMulticastDelegate onFailure; // (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FGameServerFilter Filter; // (NativeAccessSpecifierPrivate)
	// Functions
UFUNCTION(BlueprintCallable)
	static class UGetGameServers* GetGameServers(const struct FGameServerFilter& Filter);
};
