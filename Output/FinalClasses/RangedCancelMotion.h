#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "RangedCancelMotion.generated.h"
// Class Mordhau.RangedCancelMotion
class MORDHAU_API URangedCancelMotion  :  public UMordhauMotion
{
GENERATED_BODY()
public:
// Variables
UPROPERTY()
	class AMordhauEquipment* RangedEquipment; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(Export, Instanced)
	class UAudioComponent* CurrentlyPlayingRangedCancel; // (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// Functions
};
