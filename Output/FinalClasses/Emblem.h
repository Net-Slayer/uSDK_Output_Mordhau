#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "Emblem.generated.h"
// Class Mordhau.Emblem
class MORDHAU_API UEmblem  :  public UMordhauInventoryItem
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UTexture2D* Texture; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// Functions
};
