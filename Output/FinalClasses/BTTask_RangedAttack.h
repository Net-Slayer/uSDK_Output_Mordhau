#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "BTTask_RangedAttack.generated.h"
// Class Mordhau.BTTask_RangedAttack
class MORDHAU_API UBTTask_RangedAttack  :  public UBTTaskNode
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float MaxProjectileFlightTime; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// Functions
};
