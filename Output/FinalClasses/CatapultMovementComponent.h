#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "CatapultMovementComponent.generated.h"
// Class Mordhau.CatapultMovementComponent
class MORDHAU_API UCatapultMovementComponent  :  public USimpleWheeledVehicleMovementComponent
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(BlueprintReadOnly, EditAnywhere, EditDefaultsOnly)
	float DriveTorque; // (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY(BlueprintReadOnly, EditAnywhere, EditDefaultsOnly)
	float DriveWheelAngle; // (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY(BlueprintReadOnly, EditAnywhere, EditDefaultsOnly)
	float RotateFrontTorque; // (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY(BlueprintReadOnly, EditAnywhere, EditDefaultsOnly)
	float RotateRearTorque; // (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY(BlueprintReadOnly, EditAnywhere, EditDefaultsOnly)
	float RotateFrontWheelAngle; // (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY(BlueprintReadOnly, EditAnywhere, EditDefaultsOnly)
	float RotateRearWheelAngle; // (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY(BlueprintReadOnly, EditAnywhere, EditDefaultsOnly)
	float BrakeStrength; // (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY(BlueprintReadOnly, EditAnywhere, EditDefaultsOnly)
	float Bias; // (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY(BlueprintReadOnly, EditAnywhere, EditDefaultsOnly)
	float StuckVelocity; // (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY(BlueprintReadOnly, EditAnywhere, EditDefaultsOnly)
	float RotateDelay; // (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	// Functions
};
