// Class Mordhau.MordhauSingleton

// 0x07C0 (FullSize[0x07E8] - InheritedSize[0x0028])

class UMordhauSingleton : public UObject

{

public:

	unsigned char                                      UnknownData_Q7YC[0x148];                                   // 0x0028(0x0148) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	unsigned char                                      AlwaysLoadedObjects[0x50];                                 // 0x0028(0x0050) UNKNOWN PROPERTY: SetProperty

	unsigned char                                      CachedLoadedClassMap[0x50];                                // 0x01C0(0x0050) UNKNOWN PROPERTY: MapProperty

	unsigned char                                      UnknownData_I4C2[0xE8];                                    // 0x0210(0x00E8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	unsigned char                                      LoadQueue[0x50];                                           // 0x0210(0x0050) UNKNOWN PROPERTY: SetProperty

	unsigned char                                      UnknownData_WMZ5[0x8];                                     // 0x0348(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	unsigned char                                      CurrentlyProcessingLoadQueue[0x50];                        // 0x0348(0x0050) UNKNOWN PROPERTY: SetProperty

	TArray<struct FSoftObjectPath>                     CurrentlyProcessingLoadQueueArray;                         // 0x03A0(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class USkeletalMesh*                               DefaultCharacterMesh;                                      // 0x03B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_PZQ3[0x50];                                    // 0x03B8(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              PathPheromoneDecayTerm;                                    // 0x0408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              PathPheromoneMaxVisualizationAmount;                       // 0x040C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	int                                                MaxBloodPools;                                             // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	int                                                SingletonVersion;                                          // 0x0414(0x0004) (BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TArray<class UClass*>                              BotProfiles;                                               // 0x0418(0x0010) (Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TArray<struct FString>                             RandomBotNames;                                            // 0x0428(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      DefaultHead;                                               // 0x0438(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_R6PZ[0x7];                                     // 0x0439(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	unsigned char                                      HeadWearables[0x10];                                       // 0x0439(0x0010) UNKNOWN PROPERTY: ArrayProperty

	unsigned char                                      OriginalHeadWearables[0x10];                               // 0x0450(0x0010) UNKNOWN PROPERTY: ArrayProperty

	unsigned char                                      DefaultUpperChest;                                         // 0x0460(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_F3C2[0x7];                                     // 0x0461(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	unsigned char                                      UpperChestWearables[0x10];                                 // 0x0461(0x0010) UNKNOWN PROPERTY: ArrayProperty

	unsigned char                                      OriginalUpperChestWearables[0x10];                         // 0x0478(0x0010) UNKNOWN PROPERTY: ArrayProperty

	unsigned char                                      DefaultLegs;                                               // 0x0488(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_LTE9[0x7];                                     // 0x0489(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	unsigned char                                      LegsWearables[0x10];                                       // 0x0489(0x0010) UNKNOWN PROPERTY: ArrayProperty

	unsigned char                                      OriginalLegsWearables[0x10];                               // 0x04A0(0x0010) UNKNOWN PROPERTY: ArrayProperty

	unsigned char                                      Equipment[0x10];                                           // 0x04B0(0x0010) UNKNOWN PROPERTY: ArrayProperty

	unsigned char                                      OriginalEquipment[0x10];                                   // 0x04C0(0x0010) UNKNOWN PROPERTY: ArrayProperty

	TArray<class UClass*>                              MaleFaces;                                                 // 0x04D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TArray<class UClass*>                              FemaleFaces;                                               // 0x04E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      Voices[0x10];                                              // 0x04F0(0x0010) UNKNOWN PROPERTY: ArrayProperty

	TArray<class UClass*>                              Emblems;                                                   // 0x0500(0x0010) (Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TArray<class UClass*>                              Badges;                                                    // 0x0510(0x0010) (Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TArray<class UClass*>                              Perks;                                                     // 0x0520(0x0010) (Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TArray<class UClass*>                              Archetypes;                                                // 0x0530(0x0010) (Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TArray<class UClass*>                              Eyebrows;                                                  // 0x0540(0x0010) (Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TArray<struct FMordhauColorItemTable>              ColorTables;                                               // 0x0550(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FMordhauColorItemTable                      SkinColorTable;                                            // 0x0560(0x0028) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	struct FMordhauColorItemTable                      EyeColorTable;                                             // 0x0588(0x0028) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	struct FMordhauColorItemTable                      HairColorTable;                                            // 0x05B0(0x0028) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	struct FMordhauColorItemTable                      EmblemColorTable;                                          // 0x05D8(0x0028) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	struct FMordhauColorItemTable                      MetalTintsColorTable;                                      // 0x0600(0x0028) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	unsigned char                                      SelectedBadge;                                             // 0x0628(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      SelectedLevelDisplayType;                                  // 0x0629(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_6883[0x6];                                     // 0x062A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	TArray<struct FCharacterProfile>                   CharacterProfiles;                                         // 0x0630(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      AllInventoryItems[0x50];                                   // 0x0640(0x0050) UNKNOWN PROPERTY: SetProperty

	unsigned char                                      PreviousLaunchInventoryItems[0x50];                        // 0x0690(0x0050) UNKNOWN PROPERTY: SetProperty

	unsigned char                                      UnseenInventoryItems[0x50];                                // 0x06E0(0x0050) UNKNOWN PROPERTY: SetProperty

	TArray<struct FCharacterProfile>                   DefaultProfiles;                                           // 0x0730(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TArray<struct FEquipmentCustomization>             DefaultCharacterEquipment;                                 // 0x0740(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TArray<struct FCharacterGearCustomization>         DefaultCharacterTier;                                      // 0x0750(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FFaceCustomization                          DefaultCharacterFace;                                      // 0x0760(0x0030) (Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic)

	struct FAppearanceCustomization                    DefaultCharacterAppearance;                                // 0x0790(0x0028) (Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic)

	TArray<struct FCharacterProfile>                   BotCharacterProfiles;                                      // 0x07B8(0x0010) (BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TArray<struct FCharacterProfile>                   DefaultBotCharacterProfiles;                               // 0x07C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UClass*                                      DefaultCharacter;                                          // 0x07D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bIsLoaded;                                                 // 0x07E0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_0QD7[0x7];                                     // 0x07E1(0x0007) MISSED OFFSET (PADDING)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.MordhauSingleton");

		return ptr;

	}







	void UpdatePreviousLaunchInventory();

	class AMordhauEquipment* SpawnEquipment(class UWorld* WorldRef, const struct FEquipmentCustomization& Customization, unsigned char Emblem, unsigned char EmblemColor1, unsigned char EmblemColor2, bool bForceInstantMeshUpdate, bool bForceMipStreaming);

	void SaveToConfig();

	void LoadQueueFinishedLoadingChunk();

	void LoadFromConfig();

	int GetVoicesNum();

	class UClass* GetVoice(int Index);

	int GetUpperChestWearablesNum();

	class UClass* GetUpperChestWearable(int Index);

	class UMordhauColor* GetTableColorObject(unsigned char Table, unsigned char ID);

	struct FLinearColor GetTableColor(unsigned char Table, unsigned char ID);

	class UMordhauColor* GetSkinColorObject(unsigned char ID);

	struct FLinearColor GetSkinColor(unsigned char ID);

	class UMordhauColor* GetMetalTintsColorObject(unsigned char ID);

	struct FLinearColor GetMetalTintsColor(unsigned char ID);

	int GetLegsWearablesNum();

	class UClass* GetLegsWearable(int Index);

	bool GetIsLoadingAssets();

	int GetHeadWearablesNum();

	class UClass* GetHeadWearable(int Index);

	class UMordhauColor* GetHairColorObject(unsigned char ID);

	struct FLinearColor GetHairColor(unsigned char ID);

	class UMordhauColor* GetEyeColorObject(unsigned char ID);

	struct FLinearColor GetEyeColor(unsigned char ID);

	int GetEquipmentNum();

	unsigned char GetEquipmentID(class UClass* EquipmentType);

	class UClass* GetEquipment(int Index);

	class UMordhauColor* GetEmblemColorObject(unsigned char ID);

	struct FLinearColor GetEmblemColor(unsigned char ID);

	void ApplyProfileTo(const struct FCharacterProfile& Profile, class AMordhauCharacter* Char, unsigned char Team, bool bAddEquipment);

};



