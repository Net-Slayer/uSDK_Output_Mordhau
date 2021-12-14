#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "HorseVehicleComponent.generated.h"
// Class Mordhau.HorseVehicleComponent
class MORDHAU_API UHorseVehicleComponent  :  public UMordhauVehicleComponent
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UCurveFloat* RiderRearingCurve; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// Functions
};
