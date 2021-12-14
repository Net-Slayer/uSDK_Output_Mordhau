#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "FaceCustomizationComponent.generated.h"
// Class Mordhau.FaceCustomizationComponent
class MORDHAU_API UFaceCustomizationComponent  :  public UActorComponent
{
GENERATED_BODY()
public:
// Variables
UPROPERTY()
	TMap<struct FName, int> BoneToParentGroupIdx; // (NativeAccessSpecifierPublic)
UPROPERTY()
	TMap<int, int> BoneIdxToSculptableFaceBoneIdx; // (NativeAccessSpecifierPublic)
UPROPERTY()
	TMap<int, int> SelectionBoneIdxToSculptableFaceBoneIdx; // (NativeAccessSpecifierPublic)
UPROPERTY()
	TMap<struct FName, int> BoneNameToSculptableFaceBoneIdx; // (NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<int> BakedDefaultFaceValuesTranslate; // (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<int> BakedDefaultFaceValuesRotate; // (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<int> BakedDefaultFaceValuesScale; // (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float HideEarsAmount; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float HideNoseAmount; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere, EditDefaultsOnly)
	bool bRegenerateBakedDefaultFaceValues; // (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere, EditDefaultsOnly)
	bool bHasScaryFace; // (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere, EditDefaultsOnly)
	struct FVector ScaryFaceRotationMultipliers; // (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere, EditDefaultsOnly)
	struct FVector ScaryFaceTranslationMultipliers; // (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere, EditDefaultsOnly)
	struct FVector ScaryFaceScaleMultipliers; // (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// Functions
UFUNCTION()
	void OnCharacterBuilt(class AMordhauCharacter* Character);
};
