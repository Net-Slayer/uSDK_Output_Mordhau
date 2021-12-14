#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "HeadWearable.generated.h"
// Class Mordhau.HeadWearable
class MORDHAU_API UHeadWearable  :  public UMordhauWearable
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(EditAnywhere, EditDefaultsOnly)
	uint8 DefaultCoif; // (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8 CoifWearables[0x10]; // UNKNOWN PROPERTY: ArrayProperty
UPROPERTY(EditAnywhere, EditDefaultsOnly)
	float HelmetAOOffset; // (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(EditAnywhere, EditDefaultsOnly)
	float HelmetAOPower; // (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(EditAnywhere, EditDefaultsOnly)
	float HelmetAOIntensity; // (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(EditAnywhere, EditDefaultsOnly)
	float HelmetAOEyeIntensity; // (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// Functions
UFUNCTION(BlueprintCallable, BlueprintPure)
	int GetCoifWearablesNum() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	class UClass* GetCoifWearable(int Index) const;
UFUNCTION(BlueprintCallable)
	void AddCoifWearable();
};
