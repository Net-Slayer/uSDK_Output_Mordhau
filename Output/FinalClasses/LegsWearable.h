#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "LegsWearable.generated.h"
// Class Mordhau.LegsWearable
class MORDHAU_API ULegsWearable  :  public UMordhauWearable
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(EditAnywhere, EditDefaultsOnly)
	uint8 DefaultFeet; // (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8 FeetWearables[0x10]; // UNKNOWN PROPERTY: ArrayProperty
	// Functions
UFUNCTION(BlueprintCallable, BlueprintPure)
	int GetFeetWearablesNum() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	class UClass* GetFeetWearable(int Index) const;
};
