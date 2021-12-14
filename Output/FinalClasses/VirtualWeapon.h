#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "VirtualWeapon.generated.h"
// Class Mordhau.VirtualWeapon
class MORDHAU_API AVirtualWeapon  :  public AMordhauWeapon
{
GENERATED_BODY()
public:
// Variables
	// Functions
UFUNCTION(BlueprintCallable)
	void InitializeVirtualWeapon(class AMordhauCharacter* Character);
};
