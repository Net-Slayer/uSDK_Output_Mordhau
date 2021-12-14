#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "BuildableLineTrace.generated.h"
// Class Mordhau.BuildableLineTrace
class MORDHAU_API UBuildableLineTrace  :  public UBuildableTraceBase
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector TraceStartOffset; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector TraceEndOffset; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// Functions
};
