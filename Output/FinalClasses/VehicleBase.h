#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "VehicleBase.generated.h"
// Class Mordhau.VehicleBase
class MORDHAU_API AVehicleBase  :  public AWheeledVehicle
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FText VehicleName; // (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly, EditAnywhere, EditDefaultsOnly, Export, Instanced)
	class UMordhauVehicleComponent* VehicleComponent; // (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly, EditAnywhere, EditDefaultsOnly, Export, Instanced)
	class UDamageableComponent* DamageableComponent; // (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly, EditAnywhere, EditDefaultsOnly, Export, Instanced)
	class UHealthStatComponent* HealthStatComponent; // (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly, EditAnywhere, EditDefaultsOnly, Export, Instanced)
	class UBurnableComponent* BurnableComponent; // (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(EditAnywhere, EditDefaultsOnly)
	class UPhysicsAsset* RagdollPhysicsAsset; // (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY(BlueprintReadOnly)
	bool bIsDead; // (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY(BlueprintReadOnly)
	bool bIsHighlighted; // (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bPerformCustomDepthHighlight; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Instanced)
	class UMordhauWidgetComponent* InteractionWidgetComponent; // (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UClass* InteractionWidgetComponentClass; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UClass* InteractionWidgetClass; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FTransform InteractionWidgetRelativeTransform; // (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bAutoDetermineWidgetTransform; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float OutOfBoundsKillTime; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bResetLookUpWhenNoDriver; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float MaxDistanceCorrectionForLeaveSpot; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, ReplicatedUsing="OnRep_ReplicatedVehicleFlags")
	uint8 ReplicatedVehicleFlags; // (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY(EditAnywhere, EditDefaultsOnly)
	float NetworkSimulatedSmoothRotationTime; // (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float LookUpLimit; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float LookDownLimit; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly, Replicated, ReplicatedUsing="OnRep_ReplicatedLookUpValue")
	uint8 ReplicatedLookUpValue; // (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector AccumulatedLookLag; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	float LookUpValueSmoothingTarget; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	float LookUpValueSmoothingFrom; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	float LookUpValueSmoothingStartTime; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	float LookUpValueSmoothingEndTime; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	float LookSmoothingSlowAlpha; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float LookUpRateCap; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	float LookUpRateCapTarget; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	float LookUpCapRemaining; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	float LookUpValue; // (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	float MouseSmoothedLookUpValue; // (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY()
	float MouseSmoothingLookUpVelocity; // (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY(Replicated, ReplicatedUsing="OnRep_LatestState")
	struct FNetState LatestState; // (Net, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float NetTimeBehind; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float NetSendRate; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	// Functions
UFUNCTION(BlueprintCallable)
	class UParticleSystemComponent* SpawnParticlesAttached(class UParticleSystem* Particle, const struct FVector& Location, const struct FRotator& Rotation, TEnumAsByte<Engine_EAttachLocation> AttachType, const struct FName& Socket);
UFUNCTION(Server, BlueprintNativeEvent)
	void Server_Unreliable_LookUp(float NewLookUp);
UFUNCTION(Server, Reliable, BlueprintNativeEvent)
	void Server_SetRight(float InRight);
UFUNCTION(Server, Reliable, BlueprintNativeEvent)
	void Server_SetForward(float InForward);
UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent)
	void Server_Reliable_RequestUse();
UFUNCTION(BlueprintImplementableEvent)
	void PostInteractionWidgetCreated();
UFUNCTION(BlueprintCallable)
	class UAudioComponent* PlaySound(class USoundBase* Sound, const struct FName& bone, const struct FVector& InLocation, TEnumAsByte<Engine_EAttachLocation> AttachLocation, bool bAttach, class USoundAttenuation* Override, float VolumeMultiplier, float PitchMultiplier);
UFUNCTION(BlueprintNativeEvent)
	void OnTookDamage(bool bWillKill, Mordhau_EMordhauDamageType Type, uint8 SubType, const struct FName& bone, const struct FVector& Point, class AActor* Source, class AActor* Agent);
UFUNCTION(BlueprintCallable)
	void OnRep_ReplicatedVehicleFlags();
UFUNCTION(BlueprintCallable)
	void OnRep_ReplicatedLookUpValue();
UFUNCTION(BlueprintCallable)
	void OnRep_LatestState();
UFUNCTION(BlueprintNativeEvent)
	void OnDied(float Angle, Mordhau_EMordhauDamageType Type, uint8 SubType, const struct FName& bone, const struct FVector& Point, class AActor* Source, class AActor* Agent);
UFUNCTION()
	void OnDeath();
UFUNCTION()
	void NetStateSend();
UFUNCTION()
	void LookUpNotAbsolute(float Value);
UFUNCTION(BlueprintCallable)
	void LookUpAtRate(float Value);
UFUNCTION()
	void LookUp(float Value, bool bIsAbsolute);
UFUNCTION(BlueprintCallable, BlueprintPure)
	float GetRawLookUpValue() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	float GetLookUpValue() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	class AMordhauCharacter* GetDriver() const;
};
