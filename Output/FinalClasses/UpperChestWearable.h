#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "UpperChestWearable.generated.h"
// Class Mordhau.UpperChestWearable
class MORDHAU_API UUpperChestWearable  :  public UMordhauWearable
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(EditAnywhere, EditDefaultsOnly)
	uint8 DefaultLowerChest; // (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8 LowerChestWearables[0x10]; // UNKNOWN PROPERTY: ArrayProperty
UPROPERTY(EditAnywhere, EditDefaultsOnly)
	uint8 DefaultArms; // (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8 ArmsWearables[0x10]; // UNKNOWN PROPERTY: ArrayProperty
UPROPERTY(EditAnywhere, EditDefaultsOnly)
	uint8 DefaultShoulders; // (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8 ShouldersWearables[0x10]; // UNKNOWN PROPERTY: ArrayProperty
	// Functions
UFUNCTION(BlueprintCallable, BlueprintPure)
	int GetShouldersWearablesNum() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	class UClass* GetShouldersWearable(int Index) const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	int GetLowerChestWearablesNum() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	class UClass* GetLowerChestWearable(int Index) const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	int GetArmsWearablesNum() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	class UClass* GetArmsWearable(int Index) const;
};
