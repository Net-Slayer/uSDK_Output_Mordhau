#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "ArmsWearable.generated.h"
// Class Mordhau.ArmsWearable
class MORDHAU_API UArmsWearable  :  public UMordhauWearable
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(EditAnywhere, EditDefaultsOnly)
	uint8 DefaultHands; // (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8 HandsWearables[0x10]; // UNKNOWN PROPERTY: ArrayProperty
	// Functions
UFUNCTION(BlueprintCallable, BlueprintPure)
	int GetHandsWearablesNum() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	class UClass* GetHandsWearable(int Index) const;
};
