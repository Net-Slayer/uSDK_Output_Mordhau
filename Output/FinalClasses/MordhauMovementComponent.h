#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "MordhauMovementComponent.generated.h"
// Class Mordhau.MordhauMovementComponent
class MORDHAU_API UMordhauMovementComponent  :  public UAdvancedCharacterMovement
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float SpawnMaxSprintDuration; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UCurveFloat* TurnSprintPreventionDecayCurve; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UCurveFloat* TurnSprintPreventionSlowdownCurve; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float TurnSprintPreventionMaxAccumulatedAngle; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float RushSprintTimeStart; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float ChasingSprintTimeStart; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float BeingChasedSlowdownTimeFactor; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float MaxAngleToChase; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float MaxAngleToStopChasing; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector ChasingMaxDistance; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector StopChasingMaxDistance; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector ChasedMaxDistance; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float TimeToBreakUsChasing; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float TimeToBreakUsBeingChased; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float MinTimeToStartChasing; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float MinTimeToStartBeingChased; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float MaxWalkSpeedCrouchedWithRatPerk; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float SprintModifier; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float ChasingModifier; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float PartialSprintModifier; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float SupersprintModifier; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float BackpedalModifier; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float StrafeModifier; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float WalkAcceleration; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float PartialSprintAcceleration; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float SprintAcceleration; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float SprintTimeToReachMaxSprint; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	float SprintTime; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float SupersprintAcceleration; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float MotionSpeedFactor; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float MotionBackpedalSpeedFactor; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float EquipmentBackpedalSpeedFactor; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float EquipmentSpeedFactorOverride; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float ArmorSpeedFactor; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float ArmorAccelerationFactor; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float EquipmentSpeedBonusPercentage; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float EquipmentSubSprintSpeedBonus; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float EquipmentAccelerationBonusPercentage; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	Mordhau_EMovementModifier MovementModifier; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bWantsSprint; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bSprintIsAllowed; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bOnlyPartialSprint; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bWantsSupersprint; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float KnockbackGroundFriction; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float KnockbackFallingLateralFriction; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float KnockbackUpImpulse; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float MaxSpeedFalling; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	float BaseGroundFriction; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	float BaseFallingLateralFriction; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float KnockbackDuration; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float BrakingDecelerationFallingTooFast; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// Functions
UFUNCTION()
	void OnInputTypeChange(bool bUsingGamepad);
UFUNCTION()
	void OnCharacterLODTick(float DeltaTime);
UFUNCTION(BlueprintCallable)
	void Knockback(const struct FVector& Amount);
UFUNCTION(BlueprintCallable, BlueprintPure)
	bool IsInKnockback() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	float GetSpeedFactor(float PartialSprintToSprintWeight) const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	float GetAccelerationFactor() const;
};
