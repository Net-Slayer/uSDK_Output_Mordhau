#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "CrowdObstacleComponent.generated.h"
// Class Mordhau.CrowdObstacleComponent
class MORDHAU_API UCrowdObstacleComponent  :  public UActorComponent
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(EditAnywhere, EditDefaultsOnly)
	bool bEnabledOnStart; // (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY(EditAnywhere, EditDefaultsOnly)
	float ObstacleRadius; // (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY(EditAnywhere, EditDefaultsOnly)
	float ObstacleHalfHeigth; // (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY(EditAnywhere, EditDefaultsOnly)
	struct FVector LocationOffset; // (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	// Functions
UFUNCTION(BlueprintCallable)
	void UnregisterObstacle();
UFUNCTION(BlueprintCallable)
	void RegisterObstacle();
};
