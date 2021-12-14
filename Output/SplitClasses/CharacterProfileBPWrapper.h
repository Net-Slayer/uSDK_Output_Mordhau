// Class Mordhau.CharacterProfileBPWrapper

// 0x00B8 (FullSize[0x00E0] - InheritedSize[0x0028])

class UCharacterProfileBPWrapper : public UObject

{

public:

	struct FCharacterProfile                           Profile;                                                   // 0x0028(0x00B8) (BlueprintVisible, NativeAccessSpecifierPublic)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.CharacterProfileBPWrapper");

		return ptr;

	}







	void TogglePerk(unsigned char Perk);

	void SetWearablePattern(unsigned char Slot, unsigned char NewPattern);

	void SetWearableId(unsigned char Slot, unsigned char NewId);

	void SetWearableColor(unsigned char Slot, unsigned char ColorIdx, unsigned char NewColor);

	void SetVoicePitch(unsigned char NewValue);

	void SetVoice(unsigned char NewValue);

	void SetStrong(unsigned char NewValue);

	void SetSkinny(unsigned char NewValue);

	void SetSkinColor(unsigned char NewValue);

	void SetProfileName(const struct FText& NewName);

	void SetProfileCategory(const struct FString& NewCategory);

	void SetMetalTint(unsigned char NewValue);

	void SetMetalRoughnessScale(unsigned char NewValue);

	void SetIsFemale(bool bNewValue);

	void SetHairColor(unsigned char NewValue);

	void SetHair(unsigned char NewValue);

	void SetFat(unsigned char NewValue);

	void SetFacialHair(unsigned char NewValue);

	void SetFace(unsigned char NewValue);

	void SetEyeColor(unsigned char NewValue);

	void SetEyebrows(unsigned char NewValue);

	void SetEquipmentSkin(unsigned char Slot, unsigned char NewSkin);

	void SetEquipmentPattern(unsigned char Slot, unsigned char NewPattern);

	void SetEquipmentPartId(unsigned char Slot, unsigned char PartIdx, unsigned char NewPartId);

	void SetEquipmentId(unsigned char Slot, unsigned char NewId);

	void SetEquipmentCustomizationDirect(unsigned char Slot, const struct FEquipmentCustomization& NewCustomization);

	void SetEquipmentColor(unsigned char Slot, unsigned char ColorIdx, unsigned char NewColor);

	void SetEmblemColor(unsigned char ColorIdx, unsigned char NewValue);

	void SetEmblem(unsigned char NewValue);

	void SetAge(unsigned char NewValue);

	void RemoveAllEquipment();

	bool HasPerk(unsigned char Perk);

	void ForceValidate();

};



