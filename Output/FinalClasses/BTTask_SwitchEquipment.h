#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "BTTask_SwitchEquipment.generated.h"
// Class Mordhau.BTTask_SwitchEquipment
class MORDHAU_API UBTTask_SwitchEquipment  :  public UBTTaskNode
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bMelee; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<class UClass*> AllowedSubclasses; // (Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<class UClass*> NotAllowedSubclasses; // (Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// Functions
};
