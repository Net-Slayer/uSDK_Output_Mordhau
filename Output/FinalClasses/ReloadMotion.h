#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "ReloadMotion.generated.h"
// Class Mordhau.ReloadMotion
class MORDHAU_API UReloadMotion  :  public UMordhauMotion
{
GENERATED_BODY()
public:
// Variables
UPROPERTY()
	TWeakObjectPtr<class AMordhauEquipment> RangedEquipment; // (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	class UAnimMontage* CurrentMontage; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	class UAnimMontage* CurrentEquipmentMontage; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	class UAnimMontage* ReloadMontage; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	class UAnimMontage* Reload1PMontage; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	class UAnimMontage* ReloadEquipmentMontage; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	class UAnimMontage* Reload1PEquipmentMontage; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(Export, Instanced)
	TWeakObjectPtr<class UAudioComponent> CurrentReloadSound; // (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	float ReachTime; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	float ReloadTime; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// Functions
};
