#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "CustomizationReplicationActor.generated.h"
// Class Mordhau.CustomizationReplicationActor
class MORDHAU_API ACustomizationReplicationActor  :  public AActor
{
GENERATED_BODY()
public:
// Variables
UPROPERTY()
	bool bHasReplicatedAnything; // (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	uint8 LastRebuiltVersionTracker; // (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY(BlueprintReadOnly)
	struct FCharacterProfile LastAssignedProfile; // (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
UPROPERTY()
	TArray<TWeakObjectPtr<class AMordhauCharacter>> RegisteredCharacters; // (ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	bool bWasEverAssigned; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	bool bWillDestroyOnUnregister; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	class USkeletalMesh* Cached1PMesh; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	class USkeletalMesh* Cached1PDeadMesh; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	class USkeletalMesh* CachedUnifiedMesh; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(Replicated, ReplicatedUsing="OnRep_ReplicatedFaceBonesTranslate")
	struct FRepFaceArrayShortWithVersion ReplicatedFaceBonesTranslate; // (Net, RepNotify, NativeAccessSpecifierPublic)
UPROPERTY(Replicated, ReplicatedUsing="OnRep_ReplicatedFaceBonesRotate")
	struct FRepFaceArrayShortWithVersion ReplicatedFaceBonesRotate; // (Net, RepNotify, NativeAccessSpecifierPublic)
UPROPERTY(Replicated, ReplicatedUsing="OnRep_ReplicatedFaceBonesScale")
	struct FRepFaceArrayShortWithVersion ReplicatedFaceBonesScale; // (Net, RepNotify, NativeAccessSpecifierPublic)
UPROPERTY(Replicated, ReplicatedUsing="OnRep_ReplicatedAppearanceCustomization")
	struct FRepArrayAppearanceWithVersion ReplicatedAppearanceCustomization; // (Net, RepNotify, NativeAccessSpecifierPublic)
UPROPERTY(Replicated, ReplicatedUsing="OnRep_ReplicatedSkillsCustomization")
	struct FRepArraySkillsWithVersion ReplicatedSkillsCustomization; // (Net, RepNotify, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(Replicated, ReplicatedUsing="OnRep_ReplicatedDefaultEquipmentId")
	struct FRepArrayByteWithVersion ReplicatedDefaultEquipmentId; // (Net, RepNotify, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	TArray<class UClass*> DefaultEquipment; // (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(Replicated, ReplicatedUsing="OnRep_ReplicatedWearableId")
	struct FRepArrayByteWithVersion ReplicatedWearableId; // (Net, RepNotify, NativeAccessSpecifierPublic)
UPROPERTY(Replicated, ReplicatedUsing="OnRep_ReplicatedWearableColor1")
	struct FRepArrayByteWithVersion ReplicatedWearableColor1; // (Net, RepNotify, NativeAccessSpecifierPublic)
UPROPERTY(Replicated, ReplicatedUsing="OnRep_ReplicatedWearableColor2")
	struct FRepArrayByteWithVersion ReplicatedWearableColor2; // (Net, RepNotify, NativeAccessSpecifierPublic)
UPROPERTY(Replicated, ReplicatedUsing="OnRep_ReplicatedWearablePattern")
	struct FRepArrayByteWithVersion ReplicatedWearablePattern; // (Net, RepNotify, NativeAccessSpecifierPublic)
	// Functions
UFUNCTION()
	void UpdateCharacterProfile(class AMordhauCharacter* Character);
UFUNCTION()
	void UnregisterCharacter(class AMordhauCharacter* Character);
UFUNCTION()
	void TriggerUpdateIfUpToDate();
UFUNCTION()
	void RegisterCharacter(class AMordhauCharacter* Character);
UFUNCTION(BlueprintCallable)
	void OnRep_ReplicatedWearablePattern();
UFUNCTION(BlueprintCallable)
	void OnRep_ReplicatedWearableId();
UFUNCTION(BlueprintCallable)
	void OnRep_ReplicatedWearableColor2();
UFUNCTION(BlueprintCallable)
	void OnRep_ReplicatedWearableColor1();
UFUNCTION(BlueprintCallable)
	void OnRep_ReplicatedSkillsCustomization();
UFUNCTION(BlueprintCallable)
	void OnRep_ReplicatedFaceBonesTranslate();
UFUNCTION(BlueprintCallable)
	void OnRep_ReplicatedFaceBonesScale();
UFUNCTION(BlueprintCallable)
	void OnRep_ReplicatedFaceBonesRotate();
UFUNCTION(BlueprintCallable)
	void OnRep_ReplicatedDefaultEquipmentId();
UFUNCTION(BlueprintCallable)
	void OnRep_ReplicatedAppearanceCustomization();
UFUNCTION()
	bool IsUpToDate();
UFUNCTION(BlueprintCallable)
	void AssignDataFromProfile(const struct FCharacterProfile& Profile);
};
