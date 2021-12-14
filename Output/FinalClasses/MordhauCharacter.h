#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "MordhauCharacter.generated.h"
// Class Mordhau.MordhauCharacter
class MORDHAU_API AMordhauCharacter  :  public AAdvancedCharacter
{
GENERATED_BODY()
public:
// Variables
UPROPERTY()
	class UMordhauMotion* Motion; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
UPROPERTY()
	TMap<struct FName, class UMordhauWearable*> WearableProtectionCoverageMap; // (NativeAccessSpecifierPrivate)
UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Instanced)
	class UMordhauCameraComponent* MordhauCamera; // (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Instanced)
	class UFaceCustomizationComponent* FaceCustomizationComponent; // (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float NextAllowedVoiceCommandTime; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bWantsClimb; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bAllowDrop; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bAllowClimbing; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bAllowVehicles; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bAllowEquipmentRotate; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float InTeamAreaSince; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bOverrideIsInEnemyTeamArea; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsHoldingBlock; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsHoldingModeSwitch; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float HoldingModeSwitchTime; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float TimeToHoldModeSwitchForOtherHand; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FSpineSpaceAdditive OverrideSpineSpaceAdditive; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bUseOverrideSpineSpaceAdditive; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FSpineSpaceAdditive SpineSpaceAdditiveTarget; // (NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FSpineSpaceAdditive SpineSpaceAdditiveFrom; // (NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsLeftArmDisabled; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsRightArmDisabled; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsLeftLegDisabled; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsRightLegDisabled; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere, EditDefaultsOnly)
	TArray<struct FFacialBoneSetup> FaceCustomizationSetup; // (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bDoNotAnimateBreathing; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bDoNotUseGrounding; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsSoundDisabled; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bDoNotLookAtOthers; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(Replicated, ReplicatedUsing="OnRep_ReplicatedDodge")
	uint8 ReplicatedDodge; // (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(Replicated, ReplicatedUsing="OnRep_ReplicatedKnockback")
	uint8 ReplicatedKnockback; // (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(Replicated, ReplicatedUsing="OnRep_ReplicatedVoiceCommand")
	uint8 ReplicatedVoiceCommand; // (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(Replicated, ReplicatedUsing="OnRep_ReplicatedCustomizationReplicationActor")
	TWeakObjectPtr<class ACustomizationReplicationActor> ReplicatedCustomizationReplicationActor; // (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<struct FTransform> FaceCustomizationBonesTransforms; // (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	class AControlPoint* CurrentCapturePoint; // (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	float CurrentCapturePointTime; // (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bForceColorOverrides; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FLinearColor ColorAOverride; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FLinearColor ColorBOverride; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int CurrentForcedLOD; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	TArray<TWeakObjectPtr<class AActor>> ActorsThatDestroyWithUs; // (ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(Export, Instanced)
	TWeakObjectPtr<class UParticleSystemComponent> CurrentBleedOutParticles; // (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	TWeakObjectPtr<class AActor> LastMovementFrontalHitActor; // (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	bool bWantsCrouch; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float CrouchCooldown; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float SprintingMoveBlockedByFractionToTrigger; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float MoveBlockedBySlowMinInterval; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector ClimbTargetLocation; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float LastNoticeableLookChange; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector2D PreviousLookValues; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float NoticeableLookChangeMinRate; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	TArray<struct FDamageRecord> DamageHistory; // (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float StructureDamageModifier; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float StructureRepairModifier; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int ExtraStaminaOnHit; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float StaminaCostModifier; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float MeleeWindupModifier; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float MeleeComboExtraWindupModifier; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float MeleeReleaseModifier; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float MeleeMissRecoveryModifier; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float LegDamageBonusModifierAirborne; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsUnflinchable; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float UnflinchableDamageThreshold; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsHitStopOnTeamHitsDisabled; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bCanDodge; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	uint8 Stamina; // (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly, Replicated, ReplicatedUsing="OnRep_ReplicatedStamina")
	uint8 ReplicatedStamina; // (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	uint8 StaminaRegenPerTick; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float StaminaRegenDelay; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int StaminaOnKill; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int HealthOnKill; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float StaminaRegenTickRate; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float JumpStaminaCost; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float LastEnemyKilledTimeWithMeleeOrRanged; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float KnockbackParry; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float KnockbackWorld; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float KnockbackClash; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float EasyParryUntilTime; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	float FallingTime; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float FallingTimeToRagdoll; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float LastDodgeTime; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float DodgeDuration; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float DodgeCooldown; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int DodgeStaminaCost; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bWasDodgeCanceled; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector DodgeDirection; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector DodgeDirectionLocal; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float TotalChaseTime; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float LastChaseTime; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float TotalChasedTime; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float LastChasedTime; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UAnimSequence* SkinnyPose; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UAnimSequence* FatPose; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UAnimSequence* StrongPose; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIgnoresTeamColors; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bWasHitAfterDeath; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	TWeakObjectPtr<class AActor> CurrentlyTracking; // (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float LastTrackingUpdate; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	bool bIsFirstPerson; // (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	uint8 CameraStyle; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float CurrentSpeedFOVOffset; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float MaxSprintFOVOffset; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float MaxSprintFOVOffsetInterpSpeed; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector CameraLocation1P; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector CameraLocation1PCosmeticOffset; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FRotator CameraRotation1P; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FRotator CameraRotation1PMeshSpace; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TWeakObjectPtr<class AActor> InteractionTarget; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float UseHoldTime; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float EllipseBubbleLength; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float EllipseBubbleRadius; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float EllipseBubbleMaxHeightDiff; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector2D BlockColliderForwardParryDistance; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Instanced)
	class UBoxComponent* BlockCollider; // (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FTransform LowBlockColliderRelativeOffset; // (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FTransform HighBlockColliderRelativeOffset; // (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FTransform OriginalBlockColliderRelativeOffset; // (BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector LastRequestedFireOrigin; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FRotator LastRequestedFireRotation; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bWantsFire; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bWantsBlock; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bWantsFeintOrBlock; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<class UParticleSystem*> SprintFootstepParticles; // (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UClass* BloodHitEffect; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UClass* BloodMetalHitEffect; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UParticleSystem* BleedingOutParticleEffect; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UParticleSystem* DodgeParticleEffect; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UClass* DodgeCameraShake; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UClass* FallDamageCameraShake; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UClass* RunLeftHeadBobShake; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UClass* RunRightHeadBobShake; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UClass* WalkLeftHeadBobShake; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UClass* WalkRightHeadBobShake; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UClass* BlockShakeEffect; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UClass* BlockedShakeEffect; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UClass* FlinchShakeEffect; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(Replicated, ReplicatedUsing="OnRep_NetBlock")
	struct FNetBlock NetBlock; // (Net, RepNotify, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly, Export, Instanced)
	class UMordhauVehicleComponent* CurrentVehicle; // (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	uint8 DeathSyncedRandom; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(Replicated, ReplicatedUsing="OnRep_ReplicatedNetMotion")
	struct FNetMotion ReplicatedNetMotion; // (Net, RepNotify, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<class UClass*> Motions; // (Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<class UClass*> EmoteMotions; // (Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<struct FEmoteEntry> CharacterEmotes; // (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<struct FEmoteEntry> UnarmedEmotes; // (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bWantsCharacterRebuild; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<class UMordhauWearable*> WearableObjectInstances; // (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FCharacterProfile Profile; // (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bDestroyEquipmentOnDeath; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere, EditDefaultsOnly)
	uint8 EquipmentInventorySize; // (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, ReplicatedUsing="OnRep_Equipment")
	TArray<class AMordhauEquipment*> Equipment; // (BlueprintVisible, Net, ZeroConstructor, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, ReplicatedUsing="OnRep_RightHandEquipment")
	class AMordhauEquipment* RightHandEquipment; // (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, ReplicatedUsing="OnRep_LeftHandEquipment")
	class AMordhauEquipment* LeftHandEquipment; // (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, ReplicatedUsing="OnRep_Quiver")
	class UClass* Quiver; // (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class AKickWeapon* KickWeapon; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bCanJumpKick; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float FallingTimeToScream; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class USoundCue* DodgeSound; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class USoundCue* DodgeSoundLocalPlayer; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class USoundCue* SnappyArmorFoley; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class USoundCue* NonSnappyArmorFoley; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class USoundCue* CrouchStartSound; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class USoundCue* CrouchEndSound; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class USoundCue* ReleaseFoley; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(Export, Instanced)
	TWeakObjectPtr<class UAudioComponent> LastArmorFoley; // (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(Instanced, BlueprintAssignable)
	struct FScriptMulticastDelegate OnPreBeginPlay; // (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
UPROPERTY(Instanced, BlueprintAssignable)
	struct FScriptMulticastDelegate OnVehicleChanged; // (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
UPROPERTY(Instanced, BlueprintAssignable)
	struct FScriptMulticastDelegate OnCameraStyleChanged; // (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
UPROPERTY(Instanced, BlueprintAssignable)
	struct FScriptMulticastDelegate OnCharacterBuilt; // (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	// Functions
UFUNCTION(BlueprintCallable)
	bool ValidateInteractionTarget(class AActor* TargetActor);
UFUNCTION()
	void UseReleased();
UFUNCTION()
	void UsePressed();
UFUNCTION(BlueprintCallable)
	void UpdateWearableInstanceColorsAndPatterns();
UFUNCTION(BlueprintCallable)
	void UpdateLOD(float DeltaTime);
UFUNCTION(BlueprintCallable)
	void UpdateFPCamera(float DeltaSeconds, float InLookUpValue, bool bOnlyUpdateRotation, const struct FRotator& Offset);
UFUNCTION(BlueprintCallable)
	void UpdateAllSkeletalMeshComponentMaterials();
UFUNCTION()
	bool TryDismember(const struct FName& bone, const struct FVector& Point, class AMordhauWeapon* Weapon, Mordhau_EAttackMove Move, bool bIsRagdollDismember);
UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	bool TryClimbing();
UFUNCTION(BlueprintCallable)
	void ToggleWeaponModeReleased();
UFUNCTION(BlueprintCallable)
	void ToggleWeaponModePressed();
UFUNCTION(BlueprintCallable)
	void SwitchToFists();
UFUNCTION(BlueprintCallable)
	void SwitchModeAndReAttach(class AMordhauEquipment* ToSwitch);
UFUNCTION(BlueprintCallable)
	void SwitchEquipmentByIndex(uint8 Index);
UFUNCTION(BlueprintCallable)
	void SwitchEquipment(class AMordhauEquipment* ToSwitch);
UFUNCTION(BlueprintCallable)
	void StopSupersprint();
UFUNCTION(BlueprintCallable)
	void StopStaminaRegen(float ExtraTime);
UFUNCTION(BlueprintCallable)
	void StopSprinting();
UFUNCTION(BlueprintCallable)
	void StopScreaming();
UFUNCTION(BlueprintCallable)
	void StopListenForStrike360();
UFUNCTION(BlueprintCallable)
	void StopListenForStab360();
UFUNCTION(BlueprintCallable)
	void StopCurrentVoiceCommand();
UFUNCTION(BlueprintCallable)
	void StopCrouching();
UFUNCTION(BlueprintCallable)
	void StopAttackYell();
UFUNCTION(BlueprintCallable)
	void StartSupersprint();
UFUNCTION(BlueprintCallable)
	void StartSprinting();
UFUNCTION(BlueprintCallable)
	void StartScreaming();
UFUNCTION(BlueprintCallable)
	void StartCrouching();
UFUNCTION(BlueprintCallable)
	void SprintReleased();
UFUNCTION(BlueprintCallable)
	void SprintPressed();
UFUNCTION(BlueprintImplementableEvent)
	void SprintingMoveBlockedBy(class AActor* BlockedBy);
UFUNCTION(BlueprintCallable)
	void ShowEquipmentIfViewTarget();
UFUNCTION(BlueprintCallable)
	void SetQuiver(class UClass* NewQuiver);
UFUNCTION(BlueprintCallable)
	void SetFaceCustomizationTranslate(const struct FName& BoneName, const struct FVector& Vector);
UFUNCTION(BlueprintCallable)
	void SetFaceCustomizationScale(const struct FName& BoneName, const struct FVector& Vector);
UFUNCTION(BlueprintCallable)
	void SetFaceCustomizationRotate(const struct FName& BoneName, const struct FVector& Vector);
UFUNCTION(BlueprintCallable)
	void SetCustomizationReplicationActor(class ACustomizationReplicationActor* CRA);
UFUNCTION(BlueprintCallable)
	void SetCurrentlyTracking(class AActor* NewTrackingTarget);
UFUNCTION(BlueprintCallable)
	void SetCameraStyle(uint8 NewStyle, bool bBlendCamera);
UFUNCTION(Server, Reliable, BlueprintNativeEvent)
	void ServerSuggestHitDetection(class AAdvancedCharacter* OtherCharacter, const struct FVector_NetQuantize& HitLocation, uint8 BoneId);
UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent)
	void ServerSetInteractionTarget(class AActor* Target);
UFUNCTION(Server, Reliable, BlueprintNativeEvent)
	void ServerRequestVoiceCommand(uint8 VoiceRequest);
UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent)
	void ServerRequestPassiveInteraction(class AActor* Target);
UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent)
	void ServerRequestDodge(uint8 PackedWorldYaw);
UFUNCTION(Server, Reliable, BlueprintNativeEvent)
	void ServerQueueAttack(Mordhau_EAttackMove Move, uint8 Angle, uint8 MotionID);
UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent)
	void ServerFinishInteraction(uint8 Result);
UFUNCTION(Server, Reliable, BlueprintNativeEvent)
	void ServerDropParry(uint8 MotionID);
UFUNCTION(Server, Reliable, BlueprintNativeEvent)
	void ServerAssignNetMotion(const struct FNetMotion& NewNetMotion, uint8 LastAuthObserved);
UFUNCTION(Server, Reliable, BlueprintNativeEvent)
	void ServerAssignFireAim(const struct FVector& Orig, const struct FRotator& Rot);
UFUNCTION(BlueprintCallable)
	bool RestockEquipmentFromAmmoBox();
UFUNCTION(BlueprintCallable)
	TArray<class AMordhauEquipment*> RestockDefaultEquipment(int MaxSlotsToRestock);
UFUNCTION(BlueprintCallable)
	void RequestVoiceCommand(uint8 CommandType, bool bAllowQueue);
UFUNCTION(BlueprintCallable)
	void RequestUse();
UFUNCTION(BlueprintCallable)
	void RequestToggleWeaponMode();
UFUNCTION(BlueprintCallable)
	void RequestStrike360();
UFUNCTION(BlueprintCallable)
	void RequestStab360();
UFUNCTION(BlueprintCallable)
	void RequestRightUpperStrike();
UFUNCTION(BlueprintCallable)
	void RequestRightStrike();
UFUNCTION(BlueprintCallable)
	void RequestRightStab();
UFUNCTION(BlueprintCallable)
	void RequestRightLowerStrike();
UFUNCTION(BlueprintCallable)
	void RequestRangedCancel();
UFUNCTION(BlueprintCallable)
	bool RequestParry(Mordhau_EBlockType BlockType, bool bAllowFTP);
UFUNCTION(BlueprintCallable)
	void RequestLeftUpperStrike();
UFUNCTION(BlueprintCallable)
	void RequestLeftStrike();
UFUNCTION(BlueprintCallable)
	void RequestLeftStab();
UFUNCTION(BlueprintCallable)
	void RequestLeftLowerStrike();
UFUNCTION(BlueprintCallable)
	void RequestKick();
UFUNCTION(BlueprintCallable)
	void RequestJump();
UFUNCTION(BlueprintCallable)
	void RequestHolster(uint8 Mode);
UFUNCTION(BlueprintCallable)
	void RequestFire();
UFUNCTION(BlueprintCallable)
	void RequestFeint();
UFUNCTION(BlueprintCallable)
	void RequestEmote(uint8 EmoteId);
UFUNCTION(BlueprintCallable)
	void RequestDrop();
UFUNCTION(BlueprintCallable)
	void RequestCouchedAttack();
UFUNCTION(BlueprintCallable)
	void RequestClimb(const struct FVector& TargetLocation, bool bIsSlowClimb);
UFUNCTION(BlueprintCallable)
	void RequestBash();
UFUNCTION(BlueprintCallable)
	void RequestAttack(Mordhau_EAttackMove Move, float Angle);
UFUNCTION(BlueprintCallable)
	bool QueueDismember(const struct FName& bone, bool bIsDismemberPartial, bool bIsBluntForce, const struct FVector& Force, class AActor* Agent);
UFUNCTION(BlueprintCallable)
	void PreviousShieldEquipment();
UFUNCTION(BlueprintCallable)
	void PreviousEquipmentReleased();
UFUNCTION(BlueprintCallable)
	void PreviousEquipmentPressed();
UFUNCTION(BlueprintCallable)
	void PreviousEquipment();
UFUNCTION(BlueprintCallable)
	class UAudioComponent* PlaySnappyArmorFoley();
UFUNCTION(BlueprintCallable)
	class UAudioComponent* PlayNonSnappyArmorFoley();
UFUNCTION(BlueprintCallable)
	class UAudioComponent* PlayMouthSound(class USoundBase* Sound, float VolumeMultiplier);
UFUNCTION(BlueprintCallable)
	void PlayHurtYell();
UFUNCTION(BlueprintCallable)
	void PlayDeathYell(bool bIsLongYell);
UFUNCTION(BlueprintCallable)
	void PlayAttackYell();
UFUNCTION(BlueprintCallable)
	bool PickUpToSlot(class AMordhauEquipment* ToEquip, uint8 Slot);
UFUNCTION(BlueprintCallable)
	bool PickUp(class AMordhauEquipment* ToEquip, int PreferredSlot);
UFUNCTION(BlueprintCallable)
	bool PerformVoiceCommand(uint8 PackedVoiceCommand);
UFUNCTION(BlueprintCallable)
	void OnRep_RightHandEquipment();
UFUNCTION(BlueprintCallable)
	void OnRep_ReplicatedVoiceCommand();
UFUNCTION(BlueprintCallable)
	void OnRep_ReplicatedStamina();
UFUNCTION(BlueprintCallable)
	void OnRep_ReplicatedNetMotion();
UFUNCTION(BlueprintCallable)
	void OnRep_ReplicatedKnockback();
UFUNCTION(BlueprintCallable)
	void OnRep_ReplicatedDodge();
UFUNCTION(BlueprintCallable)
	void OnRep_ReplicatedCustomizationReplicationActor();
UFUNCTION(BlueprintCallable)
	void OnRep_Quiver();
UFUNCTION(BlueprintCallable)
	void OnRep_NetBlock();
UFUNCTION(BlueprintCallable)
	void OnRep_LeftHandEquipment();
UFUNCTION(BlueprintCallable)
	void OnRep_Equipment();
UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void OnPostProfileAssigned();
UFUNCTION(BlueprintNativeEvent)
	void OnPostDismember(const struct FName& bone, class ASeparatedBodyPart* SeparatedPart, class AActor* Agent);
UFUNCTION(BlueprintNativeEvent)
	void OnPickedUp(class AMordhauEquipment* Eq);
UFUNCTION(BlueprintNativeEvent)
	void OnDropped(class AMordhauEquipment* Eq);
UFUNCTION(BlueprintImplementableEvent)
	void OnBlockedMelee(const struct FHitResult& HitResult, class AMordhauCharacter* Attacker);
UFUNCTION(BlueprintImplementableEvent)
	void OnAttackStarted();
UFUNCTION(BlueprintCallable)
	void OnActionFailed(const struct FName& Reason);
UFUNCTION(BlueprintCallable)
	void OffsetStamina(int Amount, bool bReplicate);
UFUNCTION(BlueprintCallable)
	void NextShieldEquipment();
UFUNCTION(BlueprintCallable)
	void NextEquipmentReleased();
UFUNCTION(BlueprintCallable)
	void NextEquipmentPressed();
UFUNCTION(BlueprintCallable)
	void NextEquipment();
UFUNCTION(BlueprintImplementableEvent)
	void MoveBlockedBySlow(const struct FHitResult& Impact);
UFUNCTION(BlueprintNativeEvent)
	bool ModifyParryResult(bool InResult, const struct FHitResult& HitResult, class AMordhauCharacter* Attacker);
UFUNCTION(BlueprintCallable)
	void ListenForStrike360();
UFUNCTION(BlueprintCallable)
	void ListenForStab360();
UFUNCTION(BlueprintCallable)
	void LeftTeamArea(int OwningTeam);
UFUNCTION(BlueprintCallable)
	void JumpReleased();
UFUNCTION(BlueprintCallable)
	void JumpPressed();
UFUNCTION(BlueprintCallable, BlueprintPure)
	static bool IsRightLeg(const struct FName& bone);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static bool IsRightArm(const struct FName& bone);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static bool IsLeg(const struct FName& bone);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static bool IsLeftLeg(const struct FName& bone);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static bool IsLeftArm(const struct FName& bone);
UFUNCTION(BlueprintCallable)
	bool IsInKnockback();
UFUNCTION(BlueprintCallable, BlueprintPure)
	bool IsInEnemyTeamArea() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	bool IsInAnyTeamArea() const;
UFUNCTION(BlueprintCallable)
	bool IsHoldingBlock();
UFUNCTION(BlueprintCallable, BlueprintPure)
	static bool IsHead(const struct FName& bone);
UFUNCTION(BlueprintCallable)
	bool IsBoneDismembered(const struct FName& bone);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static bool IsBody(const struct FName& bone);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static bool IsArm(const struct FName& bone);
UFUNCTION(BlueprintCallable)
	void Holster(class AMordhauEquipment* ToHolster);
UFUNCTION(BlueprintCallable, BlueprintPure)
	bool HasPerk(uint8 PerkId) const;
UFUNCTION(BlueprintCallable)
	bool HasEquipmentHeSpawnedWith();
UFUNCTION(BlueprintCallable, BlueprintPure)
	Mordhau_EMovementRestriction GetMovementRestriction() const;
UFUNCTION(BlueprintCallable)
	class UAudioComponent* GetLastVoiceCommand();
UFUNCTION(BlueprintCallable, BlueprintPure)
	float GetLastVehicleTime();
UFUNCTION(BlueprintCallable, BlueprintPure)
	class UMordhauVehicleComponent* GetLastUsedVehicle(float MaximumTimeDiscrepancy) const;
UFUNCTION(BlueprintCallable)
	class AActor* GetLastMovementFrontalHitActor(float MaxAgeSeconds);
UFUNCTION(BlueprintCallable)
	struct FVector GetFaceCustomizationTranslate(const struct FName& BoneName);
UFUNCTION(BlueprintCallable)
	struct FTransform GetFaceCustomizationTransform(const struct FName& BoneName);
UFUNCTION(BlueprintCallable)
	struct FVector GetFaceCustomizationScale(const struct FName& BoneName);
UFUNCTION(BlueprintCallable)
	struct FVector GetFaceCustomizationRotate(const struct FName& BoneName);
UFUNCTION(BlueprintCallable)
	int GetFaceCustomizationBoneIdx(const struct FName& BoneName);
UFUNCTION(BlueprintCallable, BlueprintPure)
	bool GetEquipmentIndex(class AMordhauEquipment* Equip, uint8* OutIndex) const;
UFUNCTION(BlueprintCallable)
	class ACustomizationReplicationActor* GetCustomizationReplicationActor();
UFUNCTION(BlueprintCallable, BlueprintPure)
	struct FNetMotion GetCurrentNetMotion() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	class ULODSkeletalMeshComponent* GetClothMesh() const;
UFUNCTION(BlueprintCallable)
	TArray<struct FName> GetAllFaceSelectionChildBonesRecursive(const struct FName& ParentBone);
UFUNCTION(BlueprintCallable)
	void FreeHandsForEquipment(class AMordhauEquipment* EquipmentInstigator);
UFUNCTION(BlueprintCallable)
	void ForceUpdateMeshVisibility();
UFUNCTION(BlueprintCallable)
	void FlipAttackSideReleased();
UFUNCTION(BlueprintCallable)
	void FlipAttackSidePressed();
UFUNCTION(BlueprintCallable)
	void FireReleased();
UFUNCTION(BlueprintCallable)
	void FirePressed();
UFUNCTION(BlueprintCallable)
	class AMordhauEquipment* FindEquipmentToRestock(TArray<class UClass*> ValidEquipment);
UFUNCTION(BlueprintCallable)
	class AController* FindBestKiller(float CutOffTime);
UFUNCTION(BlueprintCallable)
	void FeintOrBlockReleased();
UFUNCTION(BlueprintCallable)
	void FeintOrBlockPressed();
UFUNCTION(BlueprintCallable)
	void ExplodeLimbs(const struct FVector& Force, class AActor* DamageCauser, class AController* InstigatedByController);
UFUNCTION(BlueprintCallable)
	void EquipSlot9();
UFUNCTION(BlueprintCallable)
	void EquipSlot8();
UFUNCTION(BlueprintCallable)
	void EquipSlot7();
UFUNCTION(BlueprintCallable)
	void EquipSlot6();
UFUNCTION(BlueprintCallable)
	void EquipSlot5();
UFUNCTION(BlueprintCallable)
	void EquipSlot4();
UFUNCTION(BlueprintCallable)
	void EquipSlot3();
UFUNCTION(BlueprintCallable)
	void EquipSlot2();
UFUNCTION(BlueprintCallable)
	void EquipSlot1();
UFUNCTION(BlueprintCallable)
	bool EquipSlot(uint8 Index, bool bDisplayEquipmentList);
UFUNCTION(BlueprintCallable)
	void EnteredTeamArea(int OwningTeam);
UFUNCTION(BlueprintCallable)
	void EnableBlockCollider();
UFUNCTION(BlueprintCallable)
	void EmptyHands();
UFUNCTION(BlueprintCallable)
	class AMordhauEquipment* DropSlot(uint8 Index, bool bForce);
UFUNCTION(BlueprintCallable)
	class AMordhauEquipment* DropEquipment(class AMordhauEquipment* ToDrop, bool bForce);
UFUNCTION(BlueprintCallable)
	void DoCameraShakeIfViewTarget(class UClass* Shake, float Scale, TEnumAsByte<Engine_ECameraAnimPlaySpace> PlaySpace, const struct FRotator& UserPlaySpaceRot, Mordhau_ECameraShakeType ShakeType);
UFUNCTION(BlueprintCallable)
	class ASeparatedBodyPart* Dismember(struct FDismemberedBoneData* InDismemberedBoneData);
UFUNCTION(BlueprintCallable)
	void DisableLimb(const struct FName& BoneName);
UFUNCTION(BlueprintCallable)
	void DisableBlockCollider();
UFUNCTION(BlueprintCallable)
	void CycleCamera();
UFUNCTION(BlueprintCallable)
	void CrouchReleased();
UFUNCTION(BlueprintCallable)
	void CrouchPressed();
UFUNCTION(Client, Reliable, BlueprintNativeEvent)
	void ClientSetNetMotion(const struct FNetMotion& NewMotion, float ServerStartTime);
UFUNCTION(BlueprintCallable, BlueprintPure)
	bool CheckCanEquipAlt(class AMordhauEquipment* Equip) const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	bool CheckCanEquip(class AMordhauEquipment* Equip) const;
UFUNCTION(BlueprintCallable)
	bool CanPerformAttack(Mordhau_EAttackMove Move);
UFUNCTION(BlueprintCallable)
	bool CanInitiateMotion(class UClass* NewMotion, bool bAttemptCancel);
UFUNCTION(BlueprintCallable, BlueprintPure)
	bool CanEmote() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	bool CanEasyParry() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	bool CanDismember(const struct FName& bone);
UFUNCTION(BlueprintCallable)
	bool CanAccomodate(class UClass* EquipmentToTest);
UFUNCTION(BlueprintImplementableEvent)
	void CalculateLedgeOffsetAndNormal(class UClimbingMotion* ClimbingMotion, struct FVector* OutOffset, struct FVector* OutNormal);
UFUNCTION(BlueprintCallable)
	void BlockReleased();
UFUNCTION(BlueprintCallable)
	void BlockPressed();
UFUNCTION(BlueprintCallable)
	void BakeFaceCustomizationTransforms(bool bDeferBake);
UFUNCTION(BlueprintCallable)
	void AssignProfile(const struct FCharacterProfile& NewProfile);
UFUNCTION(BlueprintCallable)
	void AssignNetMotionSimple(uint8 MotionType, uint8 Param0, uint8 Param1, uint8 Param2);
UFUNCTION()
	void AssignNetBlock(const struct FBlockResult& BlockResult, Mordhau_EAttackMove BlockedMove, class AActor* Weapon);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static void AppendRightLegSet();
UFUNCTION(BlueprintCallable, BlueprintPure)
	static void AppendRightArmSet();
UFUNCTION(BlueprintCallable, BlueprintPure)
	static void AppendLeftLegSet();
UFUNCTION(BlueprintCallable, BlueprintPure)
	static void AppendLeftArmSet();
UFUNCTION(BlueprintCallable, BlueprintPure)
	static void AppendHeadSet();
UFUNCTION(BlueprintCallable, BlueprintPure)
	static void AppendBodySet();
};
