#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "MordhauAIController.generated.h"
// Class Mordhau.MordhauAIController
class MORDHAU_API AMordhauAIController  :  public AAIController
{
GENERATED_BODY()
public:
// Variables
UPROPERTY()
	TWeakObjectPtr<class AActor> FacingActor; // (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY(Export, Instanced)
	TWeakObjectPtr<class USkeletalMeshComponent> FacingSkelMesh; // (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	struct FName FacingBone; // (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	class UAISenseConfig_Sight* SightConfig; // (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	class UAISenseConfig_Hearing* HearingConfig; // (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	class UAISenseConfig_Damage* DamageConfig; // (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	struct FRotator DesiredControlRotationOverride; // (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY()
	TWeakObjectPtr<class AMordhauCharacter> ReallyCloseEnemyCached; // (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	TWeakObjectPtr<class AMordhauCharacter> LastClosestEnemy; // (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	bool bIsClosestEnemySaturated; // (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	TWeakObjectPtr<class AMordhauCharacter> ClosestEnemyOverride; // (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8 ClosestEnemyIgnoreSet[0x50]; // UNKNOWN PROPERTY: SetProperty
UPROPERTY()
	bool bFirstRun; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	float LODDeltaTime; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	float RandomFloat; // (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UBotProfile* BotProfile; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UBotBehaviorProfile* BehaviorProfile; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float RotationInterpolationTime; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FCharacterProfile CharacterProfile; // (NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class ACustomizationReplicationActor* CustomizationReplicationActor; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bUsePassedCustomizationReplicationActor; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float EnemyScanInterval; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float EnemyScanIntervalVariance; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bAutoRespawn; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bWantsRespawn; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float NextRespawnTime; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bWants1DMovementBackwards; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector DesiredClimbTarget; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bEnableAnticipateTurns; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bEnableObstacleAvoidance; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bEnableSeparation; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bEnableOptimizeVisibility; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bEnableOptimizeTopology; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bEnablePathOffset; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bEnableSlowdownAtGoal; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float SeparationWeight; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float CollisionQueryRange; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float PathOptimizationRange; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float AvoidanceRangeMultiplier; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TEnumAsByte<AIModule_ECrowdAvoidanceQuality> AvoidanceQuality; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	AIModule_ECrowdSimulationState SimulationState; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UClass* DefaultNavQueryFilter; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UClass* Team1NavQueryFilter; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UClass* Team2NavQueryFilter; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UClass* NoLadderNavQueryFilter; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(EditAnywhere, EditDefaultsOnly)
	float MidPointAcceptanceRadius; // (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	// Functions
UFUNCTION(BlueprintCallable)
	void UpdatePerceptionInfo(class AAdvancedCharacter* InCharacter, struct FPerceptionInfo* PerceptionInfo);
UFUNCTION(BlueprintCallable)
	void StopInteract();
UFUNCTION(BlueprintCallable)
	void StartInteract(class AActor* Target);
UFUNCTION(BlueprintCallable)
	void StartFacingMovement(float LocationUpOffset);
UFUNCTION(BlueprintCallable)
	void StartFacingLocation(const struct FVector& WorldLocation);
UFUNCTION(BlueprintCallable)
	void StartFacingBone(class USkeletalMeshComponent* SkelMesh, const struct FName& BoneToFace, float LocationUpOffset, const struct FVector2D& DegreeOffset);
UFUNCTION(BlueprintCallable)
	void StartFacingActor2D(class AActor* Actor, float LocationUpOffset);
UFUNCTION(BlueprintCallable)
	void StartFacingActor(class AActor* Actor, float LocationUpOffset, const struct FVector2D& DegreeOffset);
UFUNCTION(BlueprintCallable)
	void SetClosestEnemyOverride(class AMordhauCharacter* Override);
UFUNCTION(BlueprintCallable)
	void ResumeLogic(const struct FString& Reason);
UFUNCTION(BlueprintCallable)
	void RequestVoiceCommand(uint8 Command);
UFUNCTION()
	void RefreshCharacterProfile();
UFUNCTION(BlueprintCallable)
	bool PerceivesEnemy();
UFUNCTION(BlueprintCallable)
	bool PerceivesAlly();
UFUNCTION(BlueprintCallable)
	void PauseLogic(const struct FString& Reason);
UFUNCTION(BlueprintNativeEvent)
	void OnStoppedPerceivingCharacter(class AAdvancedCharacter* PerceivedCharacter, const struct FPerceptionInfo& PerceptionInfo);
UFUNCTION(BlueprintNativeEvent)
	void OnStartedPerceivingCharacter(class AAdvancedCharacter* PerceivedCharacter, const struct FPerceptionInfo& PerceptionInfo);
UFUNCTION()
	void OnPerceptionUpdated(TArray<class AActor*> InUpdatedActors);
UFUNCTION()
	void OnCharacterDiedOrDestroyed(class AAdvancedCharacter* AdvancedCharacter);
UFUNCTION(BlueprintNativeEvent)
	void OnAfterUnPossess();
UFUNCTION(BlueprintCallable)
	TEnumAsByte<AIModule_EPathFollowingRequestResult> MoveToLocationWithRandomMidpoint(const struct FVector& Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, class UClass* FilterClass, bool bAllowPartialPath);
UFUNCTION(BlueprintCallable, BlueprintPure)
	bool IsMovePending() const;
UFUNCTION(BlueprintCallable)
	int GetTeam();
UFUNCTION(BlueprintCallable)
	TArray<class AMordhauCharacter*> GetPerceivedEnemies();
UFUNCTION(BlueprintCallable)
	TArray<class AMordhauCharacter*> GetPerceivedAllies();
UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintNativeEvent)
	struct FVector GetMoveMidpoint(const struct FVector& Goal, class ANavigationData* NavData, class UClass* FilterClass) const;
UFUNCTION(BlueprintCallable)
	float GetMotionBasedRandom();
UFUNCTION(BlueprintCallable)
	class AMordhauCharacter* GetKthClosestOfThree(int Idx);
UFUNCTION(BlueprintCallable)
	class AActor* GetCurrentlyFacingActor();
UFUNCTION(BlueprintCallable, BlueprintPure)
	Mordhau_EAIFacingMode GetCurrentFacingMode() const;
UFUNCTION(BlueprintCallable)
	class AMordhauCharacter* GetClosestEnemyOverride();
UFUNCTION(BlueprintCallable)
	class AMordhauCharacter* GetClosestEnemy();
UFUNCTION(BlueprintCallable)
	class AMordhauCharacter* GetClosestAlly();
UFUNCTION(BlueprintCallable)
	int GetAllyClearanceSides();
UFUNCTION(BlueprintCallable)
	void DestroyController();
UFUNCTION(BlueprintCallable, BlueprintPure)
	bool CanSee(class AActor* Target, float Distance) const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	bool CanInteract(class AActor* Target) const;
};
