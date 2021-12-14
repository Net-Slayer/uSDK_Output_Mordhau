#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "QuickthrowDrawMotion.generated.h"
// Class Mordhau.QuickthrowDrawMotion
class MORDHAU_API UQuickthrowDrawMotion  :  public UMordhauMotion
{
GENERATED_BODY()
public:
// Variables
UPROPERTY()
	class AMordhauEquipment* RangedEquipment; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	uint8 Slot; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	uint8 Stage; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	float FirstStageEnd; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	float SecondStageEnd; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	float ThirdStageEnd; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	bool bHasFiredLocally; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// Functions
};
