#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "Cannon.generated.h"
// Class Mordhau.Cannon
class MORDHAU_API ACannon  :  public AVehicleBase
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FName HoleSocketName; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float MinXYDistanceToLoad; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector2D MinZDistanceToLoad; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY(BlueprintReadWrite, EditAnywhere, EditDefaultsOnly, Export, Instanced)
	class UProjectileTurretShooterComponent* ShooterComponent; // (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	// Functions
};
