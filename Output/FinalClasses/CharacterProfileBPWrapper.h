#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "CharacterProfileBPWrapper.generated.h"
// Class Mordhau.CharacterProfileBPWrapper
class MORDHAU_API UCharacterProfileBPWrapper  :  public UObject
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FCharacterProfile Profile; // (BlueprintVisible, NativeAccessSpecifierPublic)
	// Functions
UFUNCTION(BlueprintCallable)
	void TogglePerk(uint8 Perk);
UFUNCTION(BlueprintCallable)
	void SetWearablePattern(uint8 Slot, uint8 NewPattern);
UFUNCTION(BlueprintCallable)
	void SetWearableId(uint8 Slot, uint8 NewId);
UFUNCTION(BlueprintCallable)
	void SetWearableColor(uint8 Slot, uint8 ColorIdx, uint8 NewColor);
UFUNCTION(BlueprintCallable)
	void SetVoicePitch(uint8 NewValue);
UFUNCTION(BlueprintCallable)
	void SetVoice(uint8 NewValue);
UFUNCTION(BlueprintCallable)
	void SetStrong(uint8 NewValue);
UFUNCTION(BlueprintCallable)
	void SetSkinny(uint8 NewValue);
UFUNCTION(BlueprintCallable)
	void SetSkinColor(uint8 NewValue);
UFUNCTION(BlueprintCallable)
	void SetProfileName(const struct FText& NewName);
UFUNCTION(BlueprintCallable)
	void SetProfileCategory(const struct FString& NewCategory);
UFUNCTION(BlueprintCallable)
	void SetMetalTint(uint8 NewValue);
UFUNCTION(BlueprintCallable)
	void SetMetalRoughnessScale(uint8 NewValue);
UFUNCTION(BlueprintCallable)
	void SetIsFemale(bool bNewValue);
UFUNCTION(BlueprintCallable)
	void SetHairColor(uint8 NewValue);
UFUNCTION(BlueprintCallable)
	void SetHair(uint8 NewValue);
UFUNCTION(BlueprintCallable)
	void SetFat(uint8 NewValue);
UFUNCTION(BlueprintCallable)
	void SetFacialHair(uint8 NewValue);
UFUNCTION(BlueprintCallable)
	void SetFace(uint8 NewValue);
UFUNCTION(BlueprintCallable)
	void SetEyeColor(uint8 NewValue);
UFUNCTION(BlueprintCallable)
	void SetEyebrows(uint8 NewValue);
UFUNCTION(BlueprintCallable)
	void SetEquipmentSkin(uint8 Slot, uint8 NewSkin);
UFUNCTION(BlueprintCallable)
	void SetEquipmentPattern(uint8 Slot, uint8 NewPattern);
UFUNCTION(BlueprintCallable)
	void SetEquipmentPartId(uint8 Slot, uint8 PartIdx, uint8 NewPartId);
UFUNCTION(BlueprintCallable)
	void SetEquipmentId(uint8 Slot, uint8 NewId);
UFUNCTION(BlueprintCallable)
	void SetEquipmentCustomizationDirect(uint8 Slot, const struct FEquipmentCustomization& NewCustomization);
UFUNCTION(BlueprintCallable)
	void SetEquipmentColor(uint8 Slot, uint8 ColorIdx, uint8 NewColor);
UFUNCTION(BlueprintCallable)
	void SetEmblemColor(uint8 ColorIdx, uint8 NewValue);
UFUNCTION(BlueprintCallable)
	void SetEmblem(uint8 NewValue);
UFUNCTION(BlueprintCallable)
	void SetAge(uint8 NewValue);
UFUNCTION(BlueprintCallable)
	void RemoveAllEquipment();
UFUNCTION(BlueprintCallable)
	bool HasPerk(uint8 Perk);
UFUNCTION(BlueprintCallable)
	void ForceValidate();
};
