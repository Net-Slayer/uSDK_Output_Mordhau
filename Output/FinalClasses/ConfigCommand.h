#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "ConfigCommand.generated.h"
// Class Mordhau.ConfigCommand
class MORDHAU_API UConfigCommand  :  public URconCommand
{
GENERATED_BODY()
public:
// Variables
UPROPERTY()
	TMap<struct FString, Mordhau_EConfigValueType> ValueTypes; // (NativeAccessSpecifierPrivate)
	// Functions
};
