#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "Archetype.generated.h"
// Class Mordhau.Archetype
class MORDHAU_API UArchetype  :  public UObject
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int CharacterPoints; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// Functions
};
