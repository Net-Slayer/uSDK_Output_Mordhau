#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "MordhauSingleton.generated.h"
// Class Mordhau.MordhauSingleton
class MORDHAU_API UMordhauSingleton  :  public UObject
{
GENERATED_BODY()
public:
// Variables
	uint8 AlwaysLoadedObjects[0x50]; // UNKNOWN PROPERTY: SetProperty
	uint8 CachedLoadedClassMap[0x50]; // UNKNOWN PROPERTY: MapProperty
	uint8 LoadQueue[0x50]; // UNKNOWN PROPERTY: SetProperty
	uint8 CurrentlyProcessingLoadQueue[0x50]; // UNKNOWN PROPERTY: SetProperty
UPROPERTY(Transient)
	TArray<struct FSoftObjectPath> CurrentlyProcessingLoadQueueArray; // (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(Transient)
	class USkeletalMesh* DefaultCharacterMesh; // (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float PathPheromoneDecayTerm; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float PathPheromoneMaxVisualizationAmount; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int MaxBloodPools; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int SingletonVersion; // (BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<class UClass*> BotProfiles; // (Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(EditAnywhere)
	TArray<struct FString> RandomBotNames; // (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(EditAnywhere)
	uint8 DefaultHead; // (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8 HeadWearables[0x10]; // UNKNOWN PROPERTY: ArrayProperty
	uint8 OriginalHeadWearables[0x10]; // UNKNOWN PROPERTY: ArrayProperty
UPROPERTY(EditAnywhere)
	uint8 DefaultUpperChest; // (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8 UpperChestWearables[0x10]; // UNKNOWN PROPERTY: ArrayProperty
	uint8 OriginalUpperChestWearables[0x10]; // UNKNOWN PROPERTY: ArrayProperty
UPROPERTY(EditAnywhere)
	uint8 DefaultLegs; // (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8 LegsWearables[0x10]; // UNKNOWN PROPERTY: ArrayProperty
	uint8 OriginalLegsWearables[0x10]; // UNKNOWN PROPERTY: ArrayProperty
	uint8 Equipment[0x10]; // UNKNOWN PROPERTY: ArrayProperty
	uint8 OriginalEquipment[0x10]; // UNKNOWN PROPERTY: ArrayProperty
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<class UClass*> MaleFaces; // (Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<class UClass*> FemaleFaces; // (Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8 Voices[0x10]; // UNKNOWN PROPERTY: ArrayProperty
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<class UClass*> Emblems; // (Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<class UClass*> Badges; // (Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<class UClass*> Perks; // (Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<class UClass*> Archetypes; // (Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<class UClass*> Eyebrows; // (Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<struct FMordhauColorItemTable> ColorTables; // (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FMordhauColorItemTable SkinColorTable; // (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FMordhauColorItemTable EyeColorTable; // (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FMordhauColorItemTable HairColorTable; // (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FMordhauColorItemTable EmblemColorTable; // (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FMordhauColorItemTable MetalTintsColorTable; // (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	uint8 SelectedBadge; // (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	uint8 SelectedLevelDisplayType; // (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<struct FCharacterProfile> CharacterProfiles; // (Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8 AllInventoryItems[0x50]; // UNKNOWN PROPERTY: SetProperty
	uint8 PreviousLaunchInventoryItems[0x50]; // UNKNOWN PROPERTY: SetProperty
	uint8 UnseenInventoryItems[0x50]; // UNKNOWN PROPERTY: SetProperty
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<struct FCharacterProfile> DefaultProfiles; // (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<struct FEquipmentCustomization> DefaultCharacterEquipment; // (Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<struct FCharacterGearCustomization> DefaultCharacterTier; // (Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FFaceCustomization DefaultCharacterFace; // (Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FAppearanceCustomization DefaultCharacterAppearance; // (Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<struct FCharacterProfile> BotCharacterProfiles; // (BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<struct FCharacterProfile> DefaultBotCharacterProfiles; // (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UClass* DefaultCharacter; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly, Transient)
	bool bIsLoaded; // (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// Functions
UFUNCTION(BlueprintCallable)
	void UpdatePreviousLaunchInventory();
UFUNCTION(BlueprintCallable)
	class AMordhauEquipment* SpawnEquipment(class UWorld* WorldRef, const struct FEquipmentCustomization& Customization, uint8 Emblem, uint8 EmblemColor1, uint8 EmblemColor2, bool bForceInstantMeshUpdate, bool bForceMipStreaming);
UFUNCTION(BlueprintCallable)
	void SaveToConfig();
UFUNCTION()
	void LoadQueueFinishedLoadingChunk();
UFUNCTION(BlueprintCallable)
	void LoadFromConfig();
UFUNCTION(BlueprintCallable, BlueprintPure)
	int GetVoicesNum() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	class UClass* GetVoice(int Index) const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	int GetUpperChestWearablesNum() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	class UClass* GetUpperChestWearable(int Index) const;
UFUNCTION(BlueprintCallable)
	class UMordhauColor* GetTableColorObject(uint8 Table, uint8 ID);
UFUNCTION(BlueprintCallable)
	struct FLinearColor GetTableColor(uint8 Table, uint8 ID);
UFUNCTION(BlueprintCallable)
	class UMordhauColor* GetSkinColorObject(uint8 ID);
UFUNCTION(BlueprintCallable)
	struct FLinearColor GetSkinColor(uint8 ID);
UFUNCTION(BlueprintCallable)
	class UMordhauColor* GetMetalTintsColorObject(uint8 ID);
UFUNCTION(BlueprintCallable)
	struct FLinearColor GetMetalTintsColor(uint8 ID);
UFUNCTION(BlueprintCallable, BlueprintPure)
	int GetLegsWearablesNum() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	class UClass* GetLegsWearable(int Index) const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	bool GetIsLoadingAssets() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	int GetHeadWearablesNum() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	class UClass* GetHeadWearable(int Index) const;
UFUNCTION(BlueprintCallable)
	class UMordhauColor* GetHairColorObject(uint8 ID);
UFUNCTION(BlueprintCallable)
	struct FLinearColor GetHairColor(uint8 ID);
UFUNCTION(BlueprintCallable)
	class UMordhauColor* GetEyeColorObject(uint8 ID);
UFUNCTION(BlueprintCallable)
	struct FLinearColor GetEyeColor(uint8 ID);
UFUNCTION(BlueprintCallable, BlueprintPure)
	int GetEquipmentNum() const;
UFUNCTION(BlueprintCallable)
	uint8 GetEquipmentID(class UClass* EquipmentType);
UFUNCTION(BlueprintCallable, BlueprintPure)
	class UClass* GetEquipment(int Index) const;
UFUNCTION(BlueprintCallable)
	class UMordhauColor* GetEmblemColorObject(uint8 ID);
UFUNCTION(BlueprintCallable)
	struct FLinearColor GetEmblemColor(uint8 ID);
UFUNCTION(BlueprintCallable)
	void ApplyProfileTo(const struct FCharacterProfile& Profile, class AMordhauCharacter* Char, uint8 Team, bool bAddEquipment);
};
