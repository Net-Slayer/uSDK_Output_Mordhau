#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "MordhauColor.generated.h"
// Class Mordhau.MordhauColor
class MORDHAU_API UMordhauColor  :  public UMordhauInventoryItem
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FLinearColor Color; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FLinearColor DisplayColor; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// Functions
};
