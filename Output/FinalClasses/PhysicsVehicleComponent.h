#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "PhysicsVehicleComponent.generated.h"
// Class Mordhau.PhysicsVehicleComponent
class MORDHAU_API UPhysicsVehicleComponent  :  public UMordhauVehicleComponent
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FName LeftHandIKPushTarget; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FName RightHandIKPushTarget; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY(EditAnywhere, EditDefaultsOnly)
	float MaxSpeed; // (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY(EditAnywhere, EditDefaultsOnly)
	float MaxRotation; // (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	// Functions
};
