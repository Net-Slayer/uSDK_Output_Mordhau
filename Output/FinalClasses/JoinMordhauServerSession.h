#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "JoinMordhauServerSession.generated.h"
// Class Mordhau.JoinMordhauServerSession
class MORDHAU_API UJoinMordhauServerSession  :  public UBlueprintAsyncActionBase
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(Instanced, BlueprintAssignable)
	struct FScriptMulticastDelegate onSuccess; // (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
UPROPERTY(Instanced, BlueprintAssignable)
	struct FScriptMulticastDelegate onFailure; // (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	// Functions
UFUNCTION(BlueprintCallable)
	static class UJoinMordhauServerSession* JoinMordhauServerSession(const struct FServerSearchResult& SearchResult);
};
