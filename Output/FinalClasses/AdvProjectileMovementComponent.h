#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "AdvProjectileMovementComponent.generated.h"
// Class Mordhau.AdvProjectileMovementComponent
class MORDHAU_API UAdvProjectileMovementComponent  :  public UProjectileMovementComponent
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float DragDeceleration; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// Functions
};
