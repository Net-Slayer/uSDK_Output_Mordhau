#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "ProjectileTurretShooterComponent.generated.h"
// Class Mordhau.ProjectileTurretShooterComponent
class MORDHAU_API UProjectileTurretShooterComponent  :  public UProjectileShooterComponent
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float LoadingSoundFadeOutDuration; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float WeaponKickBackLookUp; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly, EditAnywhere, EditDefaultsOnly)
	float RotationVelocity; // (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float RotationInterpolationSpeed; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, ReplicatedUsing="OnRep_ReplicatedTurnCap")
	float ReplicatedTurnCap; // (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, ReplicatedUsing="OnRep_ReplicatedLookUpCap")
	float ReplicatedLookUpCap; // (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(EditAnywhere, EditDefaultsOnly)
	float PreviousActorYaw; // (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
UPROPERTY(EditAnywhere, EditDefaultsOnly)
	float PreviousPitch; // (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
UPROPERTY(EditAnywhere, EditDefaultsOnly, Export, Instanced)
	TWeakObjectPtr<class UAudioComponent> LastLoadingSound; // (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	// Functions
UFUNCTION(BlueprintCallable)
	void OnRep_TurnCapChanged();
UFUNCTION(BlueprintCallable)
	void OnRep_LookUpCapChanged();
};
