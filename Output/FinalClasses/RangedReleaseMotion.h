#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "RangedReleaseMotion.generated.h"
// Class Mordhau.RangedReleaseMotion
class MORDHAU_API URangedReleaseMotion  :  public UMordhauMotion
{
GENERATED_BODY()
public:
// Variables
UPROPERTY()
	TWeakObjectPtr<class AMordhauEquipment> RangedEquipment; // (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	class UClass* RangedEquipmentClass; // (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	TWeakObjectPtr<class AMordhauProjectile> CreatedLocalProjectile; // (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	class UAnimMontage* CurrentMontage; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	class UAnimMontage* CurrentEquipmentMontage; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	class UAnimMontage* ReleaseMontage; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	class UAnimMontage* Release1PMontage; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	class UAnimMontage* ReleaseEquipmentMontage; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	class UAnimMontage* ReleaseEquipment1PMontage; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// Functions
};
