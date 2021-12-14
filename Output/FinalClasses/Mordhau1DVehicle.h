#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "Mordhau1DVehicle.generated.h"
// Class Mordhau.Mordhau1DVehicle
class MORDHAU_API AMordhau1DVehicle  :  public AMordhauVehicle
{
GENERATED_BODY()
public:
// Variables
	// Functions
UFUNCTION(BlueprintNativeEvent)
	void OnStepChanged();
};
