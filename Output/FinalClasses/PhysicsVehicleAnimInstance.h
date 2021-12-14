#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "PhysicsVehicleAnimInstance.generated.h"
// Class Mordhau.PhysicsVehicleAnimInstance
class MORDHAU_API UPhysicsVehicleAnimInstance  :  public UAnimInstance
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(BlueprintReadOnly)
	class AVehicleBase* VehicleOwner; // (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	// Functions
};
