#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "PseudoVehicleMovementComponent.generated.h"
// Class Mordhau.PseudoVehicleMovementComponent
class MORDHAU_API UPseudoVehicleMovementComponent  :  public UAdvancedCharacterMovement
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
	TArray<class UPrimitiveComponent*> SecondaryComponents; // (BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
	TArray<class UPrimitiveComponent*> SecondaryStepCapableComponents; // (BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	float TurningVelocity; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UCurveFloat* TurningBrakeAccelerationByVelocity; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UCurveFloat* TurningFactorByVelocity; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UCurveFloat* TurningAccelerationByVelocity; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float TurningFactorScaleAirborne; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// Functions
};
