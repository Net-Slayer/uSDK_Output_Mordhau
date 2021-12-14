#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "MordhauVehicle.generated.h"
// Class Mordhau.MordhauVehicle
class MORDHAU_API AMordhauVehicle  :  public AAdvancedCharacter
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TMap<struct FString, struct FText> ActionToDescriptionMap; // (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bShowVehicleHealth; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bUseVisualPingCompensationOnAttacks; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float MaxDistanceCorrectionForLeaveSpot; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bDisableCameraDistance; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bResetLookUpWhenNoDriver; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FText VehicleName; // (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere, EditDefaultsOnly, Export, Instanced)
	class UMordhauVehicleComponent* VehicleComponent; // (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	// Functions
UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent)
	void RequestUse();
UFUNCTION(BlueprintImplementableEvent)
	void KnockOffDriver(class AMordhauCharacter* Character);
UFUNCTION(BlueprintCallable, BlueprintPure)
	class AMordhauCharacter* GetDriver() const;
};
