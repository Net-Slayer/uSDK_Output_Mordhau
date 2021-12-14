#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "WheeledVehicleAnimInstance.generated.h"
// Class Mordhau.WheeledVehicleAnimInstance
class MORDHAU_API UWheeledVehicleAnimInstance  :  public UAdvancedCharacterAnimInstance
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float WheelCastDistance; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// Functions
};
