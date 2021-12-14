#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "BaseAttackMotion.generated.h"
// Class Mordhau.BaseAttackMotion
class MORDHAU_API UBaseAttackMotion  :  public UMordhauMotion
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bBlendInMultiplicative; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FPerspectiveFloat BlendIn; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FPerspectiveCurveFloat BlendInCurve; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FPerspectiveFloat SlowBlendIn; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FPerspectiveFloat ParrySlowBlendIn; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FPerspectiveFloat RiposteBlendInWithShield; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TMap<class UAnimSequence*, struct FPerspectiveAnimSequenceBaseArray> AnimationMap; // (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FRotator CueAmount; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UCurveFloat* CueCurve; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FHighMidLowSpineSpaceAdditive AngleAdditive; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FPerspectiveHighMidLowSpineSpaceAdditive AngleAdditiveWindUp; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UCurveFloat* ReleaseCurve; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FPerspectiveFloat FeintAnimRate; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FPerspectiveFloat FeintAnimDurationOffset; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FPerspectiveFloat MinimumFeintAnimDuration; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FPerspectiveCurveFloat WorldBounceCurve; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FPerspectiveCurveFloat WorldBounceScaleCurve; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FPerspectiveCurveFloat ParryBounceCurve; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FPerspectiveCurveFloat ParryLateBounceCurve; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FPerspectiveCurveFloat ParryBounceScaleCurve; // (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	// Functions
};
