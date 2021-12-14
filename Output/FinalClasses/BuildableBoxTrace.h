#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "BuildableBoxTrace.generated.h"
// Class Mordhau.BuildableBoxTrace
class MORDHAU_API UBuildableBoxTrace  :  public UBuildableTraceBase
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FName ProfileName; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float StartTraceXAxisPercentage; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// Functions
};
