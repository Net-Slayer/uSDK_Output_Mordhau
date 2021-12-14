#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "LateTickComponent.generated.h"
// Class Mordhau.LateTickComponent
class MORDHAU_API ULateTickComponent  :  public UActorComponent
{
GENERATED_BODY()
public:
// Variables
UPROPERTY()
	float LODDeltaTime; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// Functions
};
