#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "DisarmedMotion.generated.h"
// Class Mordhau.DisarmedMotion
class MORDHAU_API UDisarmedMotion  :  public UMordhauMotion
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float RecoveryTime; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// Functions
};
