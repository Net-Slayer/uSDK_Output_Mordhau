#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "RangedDrawMotion.generated.h"
// Class Mordhau.RangedDrawMotion
class MORDHAU_API URangedDrawMotion  :  public UMordhauMotion
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	uint8 RandomValue; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FRotator AimRotationOffset; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FRotator AimVisualRotationOffset; // (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY()
	TWeakObjectPtr<class AMordhauEquipment> RangedEquipmentPtr; // (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	class UAnimMontage* DrawMontage; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	class UAnimMontage* Draw1PMontage; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	class UAnimMontage* DrawEquipmentMontage; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	class UAnimMontage* DrawEquipment1PMontage; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	class UAnimMontage* CurrentMontage; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	class UAnimMontage* CurrentEquipmentMontage; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(Export, Instanced)
	class UAudioComponent* CurrentlyPlayingDraw; // (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// Functions
};
