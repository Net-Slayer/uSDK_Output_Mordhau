#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "MapCameraActor.generated.h"
// Class Mordhau.MapCameraActor
class MORDHAU_API AMapCameraActor  :  public ACameraActor
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int Team; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float AtmosphericFogMultiplierOverride; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// Functions
};
