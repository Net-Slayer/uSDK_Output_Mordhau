#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "Catapult.generated.h"
// Class Mordhau.Catapult
class MORDHAU_API ACatapult  :  public AVehicleBase
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(BlueprintReadOnly, EditAnywhere, EditDefaultsOnly, Export, Instanced)
	class UProjectileArmShooterComponent* ProjectileArmShooter; // (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	// Functions
};
