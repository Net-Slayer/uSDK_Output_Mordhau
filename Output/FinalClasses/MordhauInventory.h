#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "MordhauInventory.generated.h"
// Class Mordhau.MordhauInventory
class MORDHAU_API UMordhauInventory  :  public UObject
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(Instanced, BlueprintAssignable)
	struct FScriptMulticastDelegate OnItemsRefreshed; // (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
UPROPERTY(Instanced, BlueprintAssignable)
	struct FScriptMulticastDelegate OnItemsDropped; // (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
UPROPERTY(Instanced, BlueprintAssignable)
	struct FScriptMulticastDelegate OnRewardsDropped; // (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
UPROPERTY(Instanced, BlueprintAssignable)
	struct FScriptMulticastDelegate OnItemsUnlocked; // (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	// Functions
UFUNCTION(BlueprintCallable)
	void UnlockLevelUnlocks(Mordhau_ECallResult* CallResult, const struct FString& PlayFabId);
UFUNCTION(BlueprintCallable)
	void UnlockItems(Mordhau_ECallResult* CallResult, const struct FString& PlayFabId, TArray<int> ItemDefIDs);
UFUNCTION(BlueprintCallable)
	void UnlockItem(Mordhau_ECallResult* CallResult, const struct FString& PlayFabId, int ItemDefID);
UFUNCTION(BlueprintCallable)
	void TriggerItemDrop(Mordhau_ECallResult* CallResult, int ItemDefID);
UFUNCTION(BlueprintCallable)
	bool SetPlayerXP(const struct FString& PlayFabId, int XP);
UFUNCTION(BlueprintCallable)
	bool SetPlayerGold(const struct FString& PlayFabId, int Gold);
UFUNCTION(BlueprintCallable)
	void SetItemQuantity(Mordhau_ECallResult* CallResult, const struct FString& PlayFabId, int ItemDefID, int Quantity);
UFUNCTION(BlueprintCallable)
	void ResetInventory(Mordhau_ECallResult* CallResult);
UFUNCTION()
	void RequestUnlockRecipes();
UFUNCTION(BlueprintCallable)
	void RefreshPlayerItems(Mordhau_ECallResult* CallResult, const struct FString& PlayFabId);
UFUNCTION(BlueprintCallable)
	void RefreshItems(Mordhau_ECallResult* CallResult);
UFUNCTION(BlueprintCallable)
	bool IsSkinAvailable(const struct FString& PlayFabId, const struct FEquipmentSkinEntry& Skin);
UFUNCTION(BlueprintCallable)
	bool IsInventoryAvailable(const struct FString& PlayFabId);
UFUNCTION(BlueprintCallable)
	bool HasSkin(const struct FString& PlayFabId, const struct FEquipmentSkinEntry& Skin);
UFUNCTION(BlueprintCallable)
	bool HasItem(const struct FString& PlayFabId, int ItemDefID);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static int GetXPItemDefID();
UFUNCTION(BlueprintCallable, BlueprintPure)
	int GetXP();
UFUNCTION(BlueprintCallable)
	void GetUnlockRecipe(Mordhau_ECallResult* CallResult, int ItemDefID, struct FUnlockRecipe* Recipe);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static int GetTutorialPackageItemDefID();
UFUNCTION(BlueprintCallable, BlueprintPure)
	static int GetSupporterPackageItemDefID();
UFUNCTION(BlueprintCallable, BlueprintPure)
	static int GetStackQuantity(const struct FItemStack& ItemStack);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static int GetStackItemDefID(const struct FItemStack& ItemStack);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static class UMordhauInventoryItem* GetStackItem(const struct FItemStack& ItemStack);
UFUNCTION(BlueprintCallable)
	Mordhau_EItemRarity GetSkinRarity(const struct FEquipmentSkinEntry& Skin);
UFUNCTION(BlueprintCallable, BlueprintPure)
	int GetPlayerXP(const struct FString& PlayFabId);
UFUNCTION(BlueprintCallable, BlueprintPure)
	int GetPlayerGold(const struct FString& PlayFabId);
UFUNCTION(BlueprintCallable)
	void GetItemStacks(Mordhau_ECallResult* CallResult, const struct FString& PlayFabId, TArray<struct FItemStack>* ItemStacks);
UFUNCTION(BlueprintCallable)
	void GetItemQuantity(Mordhau_ECallResult* CallResult, const struct FString& PlayFabId, int ItemDefID, int* Quantity);
UFUNCTION(BlueprintCallable)
	static class UMordhauInventoryItem* GetItem(int ItemDefID);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static int GetGoldItemDefID();
UFUNCTION(BlueprintCallable, BlueprintPure)
	int GetGold();
UFUNCTION(BlueprintCallable)
	void FakeRewardDrop(Mordhau_ECallResult* CallResult, int Gold, int XP);
UFUNCTION(BlueprintCallable)
	void FakeItemDrop(Mordhau_ECallResult* CallResult, int ItemDefID, int Quantity);
UFUNCTION()
	bool ClearPlayerItems(const struct FString& PlayFabId);
UFUNCTION(BlueprintCallable)
	bool CanUnlockItems(const struct FString& PlayFabId, TArray<int> ItemDefIDs);
UFUNCTION(BlueprintCallable)
	bool CanUnlockItem(const struct FString& PlayFabId, int ItemDefID);
UFUNCTION(BlueprintCallable)
	bool AreUnlockRecipesAvailable();
UFUNCTION(BlueprintCallable)
	void AddItems(Mordhau_ECallResult* CallResult, TArray<int> ItemDefIDs);
UFUNCTION(BlueprintCallable)
	void AddItem(Mordhau_ECallResult* CallResult, int ItemDefID);
};
