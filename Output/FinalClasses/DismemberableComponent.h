#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "DismemberableComponent.generated.h"
// Class Mordhau.DismemberableComponent
class MORDHAU_API UDismemberableComponent  :  public UActorComponent
{
GENERATED_BODY()
public:
// Variables
UPROPERTY()
	TWeakObjectPtr<class AActor> QueuedDismemberAgent; // (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	TWeakObjectPtr<class ASeparatedBodyPart> SeparatedHead; // (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	TArray<TWeakObjectPtr<class ASeparatedBodyPart>> SeparatedBodyParts; // (ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	TMap<struct FName, TWeakObjectPtr<class AActor>> AttachedGoreMeshes; // (UObjectWrapper, NativeAccessSpecifierPublic)
	uint8 DismemberedBones[0x50]; // UNKNOWN PROPERTY: SetProperty
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FWoundInfo DismemberWoundInfo; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UClass* BodyPart; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class USoundCue* DismembermentGore; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class USoundCue* BluntDismembermentGore; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UClass* OutGoreMeshBlunt; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UClass* OutGoreMesh; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UClass* OutGoreMeshNeck; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UParticleSystem* LimbExplosionParticle; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere, EditDefaultsOnly)
	float MaxDistFromBoneForAnyDismember; // (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere, EditDefaultsOnly)
	float MaxAngleDistFromBoneForAnyDismember; // (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere, EditDefaultsOnly)
	float MaxDistFromBoneForFullDismember; // (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere, EditDefaultsOnly)
	float MaxAngleDistFromBoneForFullDismember; // (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere, EditDefaultsOnly)
	float RagdollMaxDistFromBoneForAnyDismember; // (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere, EditDefaultsOnly)
	float RagdollMaxDistFromBoneForFullDismember; // (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TMap<struct FName, float> MinimumDamageToExplode; // (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TMap<struct FName, float> MinimumDamageToDismember; // (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TMap<struct FName, float> MinimumDamageToPartialDismember; // (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector2D DismemberArmsSpineYawPitchLimit; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8 DismemberableBones[0x50]; // UNKNOWN PROPERTY: SetProperty
	// Functions
UFUNCTION()
	bool TryDismember(const struct FName& bone, const struct FVector& Point, class AMordhauWeapon* Weapon, Mordhau_EAttackMove Move, bool bIsRagdollDismember);
UFUNCTION()
	bool QueueDismember(const struct FName& bone, bool bIsDismemberPartial, bool bIsBluntForce, const struct FVector& Force, class AActor* Agent);
UFUNCTION()
	bool ProcessQueuedDismemberment();
UFUNCTION()
	void OnCharacterCameraStyleChanged(class AMordhauCharacter* Character);
UFUNCTION(BlueprintCallable, BlueprintPure)
	bool IsBoneDismembered(const struct FName& bone) const;
UFUNCTION(BlueprintCallable)
	class ASeparatedBodyPart* Dismember(struct FDismemberedBoneData* InDismemberedBoneData);
UFUNCTION(BlueprintCallable, BlueprintPure)
	bool CanDismember(const struct FName& bone) const;
};
