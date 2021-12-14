#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "StabMotion.generated.h"
// Class Mordhau.StabMotion
class MORDHAU_API UStabMotion  :  public UAttackMotion
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FRotator AnimAngleCueAmount; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UCurveFloat* AnimAngleCurve; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// Functions
};
