#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "MordhauWeapon.generated.h"
// Class Mordhau.MordhauWeapon
class MORDHAU_API AMordhauWeapon  :  public AMordhauEquipment
{
GENERATED_BODY()
public:
// Variables
UPROPERTY()
	TArray<struct FHitResult> SingleTraceHitsCache; // (ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY(Export, Instanced)
	TWeakObjectPtr<class UAudioComponent> LastWoosh; // (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	bool bAreCurrentTracersValid; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	bool bArePreviousTracersValid; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	bool bAreCurrentTracersInvalidated; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	bool bHasAdditionalTracers; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	bool bSecondHasAdditionalTracers; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FVector CurrentTraceStart; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FVector CurrentTraceEnd; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FVector PreviousTraceStart; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FVector PreviousTraceEnd; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FVector CurrentAdditionalTraceStart; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FVector CurrentAdditionalTraceEnd; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FVector PreviousAdditionalTraceStart; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FVector PreviousAdditionalTraceEnd; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	Mordhau_EAttackMove LastObservedMove; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	TArray<struct FVector> LastTraceStarts; // (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FActorSetAndArray CosmeticIgnoreActors; // (NativeAccessSpecifierPublic)
UPROPERTY()
	struct FActorTraceData CosmeticActorTraceData; // (NativeAccessSpecifierPublic)
UPROPERTY()
	TArray<class AActor*> ActorIgnoreCache; // (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8 ActorSetCache[0x50]; // UNKNOWN PROPERTY: SetProperty
UPROPERTY()
	TArray<struct FHitResult> HitResultCache; // (ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bCanBlock; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bCanBlockOnFoot; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bCanBlockOnHorseback; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bCanCouchOnHorseback; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UAnimMontage* CouchWindUpAnim; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UAnimMontage* CouchWindUpAnim1P; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UAnimMontage* CouchLoopAnim; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UAnimMontage* CouchReleaseAnim; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UAnimMontage* CouchReleaseAnim1P; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	Mordhau_EDismembermentType StrikeDismembermentType; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	Mordhau_EDismembermentType SecondStrikeDismembermentType; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	Mordhau_EDismembermentType StabDismembermentType; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	Mordhau_EDismembermentType SecondStabDismembermentType; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float SlideRadius; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float AttackSupersprintDuration; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float SecondAttackSupersprintDuration; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float StabReleaseModifier; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FAttackInfo StabAttack; // (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FAttackInfo SecondStabAttack; // (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FAttackInfo CouchAttack; // (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FAttackInfo SecondCouchAttack; // (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FAttackInfo StrikeAttack; // (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FAttackInfo SecondStrikeAttack; // (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FAttackInfo KickAttack; // (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FAttackInfo SecondKickAttack; // (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FAttackInfo BashAttack; // (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int AttackMask; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int ParryMask; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float ParryWindowOffset; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FTransform ParryBoxTransform; // (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector2D ParryTurnCap; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector2D ShieldWallTurnCap; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector2D ParrySuccessTurnCap; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float ParryBackpedalSpeedFactor; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsParryHeld; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float BoostCosmeticTracersBy; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bUsesExtraEnvironmentTracers; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bHitKnockbackOnTeammates; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector ClashNormal; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector SecondClashNormal; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	Mordhau_EMovementRestriction BlockMovementRestriction; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float BlockStaminaNegation; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector2D BlockStaminaClamp; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float SecondBlockStaminaNegation; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector2D SecondBlockStaminaClamp; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Instanced)
	class UPrimitiveComponent* ClashCollider; // (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Instanced)
	class UPrimitiveComponent* BlockCollider; // (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere, EditDefaultsOnly)
	class UClass* WeaponAnimationProfileClass; // (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere, EditDefaultsOnly)
	class UClass* SecondWeaponAnimationProfileClass; // (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere, EditDefaultsOnly)
	class UClass* HorseWeaponAnimationProfileClass; // (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere, EditDefaultsOnly)
	class UClass* LadderWeaponAnimationProfileClass; // (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UMeleeWeaponAnimationProfile* HorseWeaponAnimationProfile; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UMeleeWeaponAnimationProfile* LadderWeaponAnimationProfile; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UMeleeWeaponAnimationProfile* WeaponAnimationProfile; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UMeleeWeaponAnimationProfile* SecondWeaponAnimationProfile; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class USoundCue* BlockedSound; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class USoundCue* BlockedViewTargetSweetener; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class USoundCue* HitCancelSound; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class USoundCue* WasBlockedSound; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector2D EnvironmentPitchScaleByDamageIn; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector2D EnvironmentPitchScaleByDamageOut; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector2D EnvironmentVolumeScaleByDamageIn; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector2D EnvironmentVolumeScaleByDamageOut; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float WooshVolumeMultiplierViewTarget; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class USoundCue* StrikeHitSound; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class USoundCue* StabHitSound; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class USoundCue* EnvironmentHitSound; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class USoundCue* SecondStrikeHitSound; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class USoundCue* SecondStabHitSound; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class USoundCue* SecondEnvironmentHitSound; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class USoundCue* StrikeWooshSound; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class USoundCue* StabWooshSound; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class USoundCue* SlideStartSound; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class USoundCue* SlideEndSound; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bDeriveHandGripFromTracers; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bSecondDeriveHandGripFromTracers; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bHasWoodenHandle; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float TrailLifeTimeFactor; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float TrailExtraTime; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float BloodTrailMaxDuration; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float SwingTrailFadeOutDuration; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UParticleSystem* SwingTrailParticles; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UParticleSystem* BloodTrailParticles; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UParticleSystem* BlockParticles; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UParticleSystem* HitCancelParticles; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<class UParticleSystem*> ImpactParticlesBySurface; // (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UParticleSystem* SlideParticles; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	TWeakObjectPtr<class AMordhauWeapon> SlidingWith; // (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	class USoundCue* EndCurrentSlideWithSound; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	float SlidingStartTime; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(Export, Instanced)
	TWeakObjectPtr<class UAudioComponent> CurrentSlideStartSound; // (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(Export, Instanced)
	TWeakObjectPtr<class UAudioComponent> LastHitSoundA; // (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(Export, Instanced)
	TWeakObjectPtr<class UAudioComponent> LastHitSoundB; // (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(Export, Instanced)
	TWeakObjectPtr<class UParticleSystemComponent> CurrentSlideParticles; // (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(Export, Instanced)
	TWeakObjectPtr<class UParticleSystemComponent> CurrentSwingTrailParticles; // (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(Export, Instanced)
	TWeakObjectPtr<class UParticleSystemComponent> CurrentBloodTrailParticles; // (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	float TrailTimeBeforeStop; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	float SwingTrailOriginalLifeTime; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	float SwingTrailEndTime; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	float BloodTrailEndTime; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	float Length; // (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	float SecondLength; // (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float BloodLevel1; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float BloodLevel2; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	bool bPlayedHitEffect; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector TrailUp; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector SecondTrailUp; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector TrailRight; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector SecondTrailRight; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float DefaultTrailFactor; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float SecondDefaultTrailFactor; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bRegularAttacksUseBlood2; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bSecondRegularAttacksUseBlood2; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	float TrailFactor; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	float SecondTrailFactor; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	float TrailWeight; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FTransform LastTrailTransform; // (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector LastObservedTraceDirection; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// Functions
UFUNCTION(BlueprintNativeEvent)
	void UpdateTrail(float Weight);
UFUNCTION(BlueprintCallable)
	void SetIsAllowedToAddForce(bool bIsAllowed);
UFUNCTION(BlueprintNativeEvent)
	bool RequestBlock(Mordhau_EBlockType BlockType, bool bAllowFTP);
UFUNCTION(BlueprintNativeEvent)
	void OnWasBlocked(const struct FBlockResult& Result, Mordhau_EAttackMove Move);
UFUNCTION(BlueprintNativeEvent)
	void OnHit(class AActor* Actor, Mordhau_EAttackMove Move, const struct FName& bone, const struct FVector& WorldLocation, uint8 Tier, uint8 SurfaceType);
UFUNCTION(BlueprintNativeEvent)
	void OnCosmeticHit(Mordhau_EAttackMove Move, const struct FHitResult& Hit);
UFUNCTION(BlueprintNativeEvent)
	void OnBlockStarted(Mordhau_EBlockType Type);
UFUNCTION(BlueprintNativeEvent)
	void OnBlocked(const struct FBlockResult& Result, Mordhau_EAttackMove Move);
UFUNCTION(BlueprintNativeEvent)
	void OnAttackStopped();
UFUNCTION(BlueprintNativeEvent)
	void OnAttackStarted(Mordhau_EAttackMove Move, float Angle);
UFUNCTION(BlueprintCallable)
	bool IsAllowedToAddForce();
UFUNCTION(BlueprintCallable)
	void IncreaseBloodLevel(float Amount);
UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void GetTrace(struct FVector* TraceStart, struct FVector* TraceEnd);
UFUNCTION(BlueprintCallable)
	struct FAttackInfo GetBaseAttackInfo(Mordhau_EAttackMove Move);
UFUNCTION(BlueprintNativeEvent)
	void GetAdditionalTrace(struct FVector* TraceStart, struct FVector* TraceEnd);
UFUNCTION(BlueprintCallable)
	void AddTraceEntryData(class AActor* Actor, const struct FName& bone);
};
