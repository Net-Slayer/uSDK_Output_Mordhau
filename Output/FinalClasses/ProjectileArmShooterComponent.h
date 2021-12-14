#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "ProjectileArmShooterComponent.generated.h"
// Class Mordhau.ProjectileArmShooterComponent
class MORDHAU_API UProjectileArmShooterComponent  :  public UProjectileShooterComponent
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float LoadedArmMin; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int ArmAdjustmentMin; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int ArmAdjustmentMax; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int ArmAdjustmentStep; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FName ArmPullSoundAttachSocket; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class USoundCue* ArmPullSoundCue; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FName SecondaryReleaseSoundAttachSocket; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class USoundCue* SecondaryReleaseSoundCue; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FName RecoverySoundAttachSocket; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class USoundCue* RecoveryReleaseSoundCue; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float ArmPullSoundFadeOutDuration; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly, Replicated)
	uint8 ReplicatedArm; // (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere, EditDefaultsOnly)
	float ArmFrom; // (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly, EditAnywhere, EditDefaultsOnly)
	float ArmTarget; // (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(EditAnywhere, EditDefaultsOnly)
	float ArmRaisedTimestamp; // (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(EditAnywhere, EditDefaultsOnly)
	float ArmLoweredTimestamp; // (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(EditAnywhere, EditDefaultsOnly)
	float LastArmTarget; // (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(EditAnywhere, EditDefaultsOnly)
	class AController* FiredController; // (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(EditAnywhere, EditDefaultsOnly)
	float ArmTargetInterpolationSpeed; // (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(EditAnywhere, EditDefaultsOnly, Export, Instanced)
	TWeakObjectPtr<class UAudioComponent> LastArmPullSound; // (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// Functions
UFUNCTION()
	void UpdateArmTarget(class AActor* Owner, float DeltaTime);
UFUNCTION()
	void UpdateArmPullSound(class AActor* CharacterOwner, float DeltaTime);
UFUNCTION(Server, Reliable, BlueprintNativeEvent)
	void RaiseArm();
UFUNCTION(BlueprintCallable)
	void OnRaiseArmPressed();
UFUNCTION(BlueprintCallable)
	void OnLowerArmPressed();
UFUNCTION(Server, Reliable, BlueprintNativeEvent)
	void LowerArm();
UFUNCTION()
	void AdjustArm(int Delta);
};
