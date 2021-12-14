#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "StunMotion.generated.h"
// Class Mordhau.StunMotion
class MORDHAU_API UStunMotion  :  public UMordhauMotion
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(BlueprintReadOnly)
	bool bWillDisarm; // (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float StunGracePeriodExtraTime; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float StunDuration; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UClass* StunShakeEffect; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FPerspectiveAnimMontage Animation; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	// Functions
};
