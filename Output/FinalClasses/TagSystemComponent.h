#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "TagSystemComponent.generated.h"
// Class Mordhau.TagSystemComponent
class MORDHAU_API UTagSystemComponent  :  public UActorComponent
{
GENERATED_BODY()
public:
// Variables
UPROPERTY()
	struct FGameplayTagContainer OwnTags; // (NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly, Transient)
	struct FGameplayTagContainer Tags; // (BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
UPROPERTY(Export)
	TArray<class UTagSystemComponent*> ParentTagSystemComponents; // (ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(Export)
	TArray<class UTagSystemComponent*> ChildrenTagSystemComponents; // (ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	TArray<struct FGameplayTagConditionDelegate> ConditionDelegates; // (ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// Functions
UFUNCTION(BlueprintCallable)
	void SetTags(const struct FGameplayTagContainer& TagContainer);
UFUNCTION(BlueprintCallable)
	void RemoveTags(const struct FGameplayTagContainer& TagContainer);
UFUNCTION(BlueprintCallable)
	void RemoveTag(const struct FGameplayTag& Tag);
UFUNCTION(BlueprintCallable)
	void RegisterTagConditionDelegate(const struct FGameplayTagCondition& Condition, class UObject* Object, const struct FName& Function);
UFUNCTION(BlueprintCallable)
	void FlashTags(const struct FGameplayTagContainer& TagContainer);
UFUNCTION(BlueprintCallable)
	void FlashTag(const struct FGameplayTag& Tag);
UFUNCTION(BlueprintCallable)
	void AddTags(const struct FGameplayTagContainer& TagContainer);
UFUNCTION(BlueprintCallable)
	void AddTag(const struct FGameplayTag& Tag);
UFUNCTION(BlueprintCallable)
	void AddAndRemoveTags(const struct FGameplayTagContainer& TagsToAdd, const struct FGameplayTagContainer& TagsToRemove);
UFUNCTION(BlueprintCallable)
	void AddAndRemoveTag(const struct FGameplayTag& TagToAdd, const struct FGameplayTag& TagToRemove);
};
