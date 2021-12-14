#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "MapMetadata.generated.h"
// Class Mordhau.MapMetadata
class MORDHAU_API UMapMetadata  :  public UMapMetadataBase
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<class UClass*> Overrides; // (Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// Functions
};
