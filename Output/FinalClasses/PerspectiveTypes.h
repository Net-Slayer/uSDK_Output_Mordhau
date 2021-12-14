#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "PerspectiveTypes.generated.h"
// Class Mordhau.PerspectiveTypes
class MORDHAU_API UPerspectiveTypes  :  public UBlueprintFunctionLibrary
{
GENERATED_BODY()
public:
// Variables
	// Functions
UFUNCTION(BlueprintCallable, BlueprintPure)
	static class UAnimMontage* Get(const struct FPerspectiveAnimMontage& PerspectiveType, bool bIsFirstPerson);
};
