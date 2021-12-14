#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "Badge.generated.h"
// Class Mordhau.Badge
class MORDHAU_API UBadge  :  public UMordhauInventoryItem
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UTexture2D* Texture; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// Functions
};
