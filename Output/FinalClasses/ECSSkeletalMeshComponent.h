#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "ECSSkeletalMeshComponent.generated.h"
// Class Mordhau.ECSSkeletalMeshComponent
class MORDHAU_API UECSSkeletalMeshComponent  :  public USkeletalMeshComponent
{
GENERATED_BODY()
public:
// Variables
UPROPERTY()
	float AccumulatedDeltaTime; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// Functions
};
