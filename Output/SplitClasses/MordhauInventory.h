// Class Mordhau.MordhauInventory

// 0x01E0 (FullSize[0x0208] - InheritedSize[0x0028])

class UMordhauInventory : public UObject

{

public:

	unsigned char                                      UnknownData_LLVE[0x1A0];                                   // 0x0028(0x01A0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	struct FScriptMulticastDelegate                    OnItemsRefreshed;                                          // 0x01C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	struct FScriptMulticastDelegate                    OnItemsDropped;                                            // 0x01D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	struct FScriptMulticastDelegate                    OnRewardsDropped;                                          // 0x01E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	struct FScriptMulticastDelegate                    OnItemsUnlocked;                                           // 0x01F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.MordhauInventory");

		return ptr;

	}







	void UnlockLevelUnlocks(Mordhau_ECallResult* CallResult, const struct FString& PlayFabId);

	void UnlockItems(Mordhau_ECallResult* CallResult, const struct FString& PlayFabId, TArray<int> ItemDefIDs);

	void UnlockItem(Mordhau_ECallResult* CallResult, const struct FString& PlayFabId, int ItemDefID);

	void TriggerItemDrop(Mordhau_ECallResult* CallResult, int ItemDefID);

	bool SetPlayerXP(const struct FString& PlayFabId, int XP);

	bool SetPlayerGold(const struct FString& PlayFabId, int Gold);

	void SetItemQuantity(Mordhau_ECallResult* CallResult, const struct FString& PlayFabId, int ItemDefID, int Quantity);

	void ResetInventory(Mordhau_ECallResult* CallResult);

	void RequestUnlockRecipes();

	void RefreshPlayerItems(Mordhau_ECallResult* CallResult, const struct FString& PlayFabId);

	void RefreshItems(Mordhau_ECallResult* CallResult);

	bool IsSkinAvailable(const struct FString& PlayFabId, const struct FEquipmentSkinEntry& Skin);

	bool IsInventoryAvailable(const struct FString& PlayFabId);

	bool HasSkin(const struct FString& PlayFabId, const struct FEquipmentSkinEntry& Skin);

	bool HasItem(const struct FString& PlayFabId, int ItemDefID);

	int STATIC_GetXPItemDefID();

	int GetXP();

	void GetUnlockRecipe(Mordhau_ECallResult* CallResult, int ItemDefID, struct FUnlockRecipe* Recipe);

	int STATIC_GetTutorialPackageItemDefID();

	int STATIC_GetSupporterPackageItemDefID();

	int STATIC_GetStackQuantity(const struct FItemStack& ItemStack);

	int STATIC_GetStackItemDefID(const struct FItemStack& ItemStack);

	class UMordhauInventoryItem* STATIC_GetStackItem(const struct FItemStack& ItemStack);

	Mordhau_EItemRarity GetSkinRarity(const struct FEquipmentSkinEntry& Skin);

	int GetPlayerXP(const struct FString& PlayFabId);

	int GetPlayerGold(const struct FString& PlayFabId);

	void GetItemStacks(Mordhau_ECallResult* CallResult, const struct FString& PlayFabId, TArray<struct FItemStack>* ItemStacks);

	void GetItemQuantity(Mordhau_ECallResult* CallResult, const struct FString& PlayFabId, int ItemDefID, int* Quantity);

	class UMordhauInventoryItem* STATIC_GetItem(int ItemDefID);

	int STATIC_GetGoldItemDefID();

	int GetGold();

	void FakeRewardDrop(Mordhau_ECallResult* CallResult, int Gold, int XP);

	void FakeItemDrop(Mordhau_ECallResult* CallResult, int ItemDefID, int Quantity);

	bool ClearPlayerItems(const struct FString& PlayFabId);

	bool CanUnlockItems(const struct FString& PlayFabId, TArray<int> ItemDefIDs);

	bool CanUnlockItem(const struct FString& PlayFabId, int ItemDefID);

	bool AreUnlockRecipesAvailable();

	void AddItems(Mordhau_ECallResult* CallResult, TArray<int> ItemDefIDs);

	void AddItem(Mordhau_ECallResult* CallResult, int ItemDefID);

};



