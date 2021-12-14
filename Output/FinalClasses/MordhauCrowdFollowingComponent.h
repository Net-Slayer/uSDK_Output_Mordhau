#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "MordhauCrowdFollowingComponent.generated.h"
// Class Mordhau.MordhauCrowdFollowingComponent
class MORDHAU_API UMordhauCrowdFollowingComponent  :  public UCrowdFollowingComponent
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float PheromoneDepositAmount; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float PheromoneDepositInterval; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// Functions
};
