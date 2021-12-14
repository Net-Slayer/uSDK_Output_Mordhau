#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "DriverComponent.generated.h"
// Class Mordhau.DriverComponent
class MORDHAU_API UDriverComponent  :  public UActorComponent
{
GENERATED_BODY()
public:
// Variables
	// Functions
UFUNCTION()
	void OnLateTick(float DeltaTime);
};
