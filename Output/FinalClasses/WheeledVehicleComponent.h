#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "WheeledVehicleComponent.generated.h"
// Class Mordhau.WheeledVehicleComponent
class MORDHAU_API UWheeledVehicleComponent  :  public UMordhauVehicleComponent
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(BlueprintReadOnly)
	class AMordhauWheeledVehicle* WheeledVehicle; // (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	// Functions
};
