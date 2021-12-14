#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "MordhauCameraComponent.generated.h"
// Class Mordhau.MordhauCameraComponent
class MORDHAU_API UMordhauCameraComponent  :  public UCameraComponent
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float MaxCameraCycleFrequency; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float FirstPersonLookUpOffset; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float AimingCameraActivateChangeSpeed; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float AimingCameraDisableChangeSpeed; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float CinematicCameraBlendWeight; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float MinimumCinematicCameraBlendWeight; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector FirstPersonCinematicCameraOffset; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector ThirdPersonCinematicCameraOffset; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FRotator CinematicCameraRotationOffset; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float MaxThirdPersonFOV; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FRotator ThirdPersonRotationOffset; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector ThirdPersonCameraOffset; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FRotator ThirdPersonAimingCameraRotationOffset; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector ThirdPersonAimingCameraOffset; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float ThirdPersonHipsSmoothSpeed; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector ThirdPersonHipsSmoothLimits; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float ThirdPersonTeleportThreshold; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float DeadCameraLocationSmoothSpeed; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float DeadCameraLocationSmoothMaxDistance; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float DeadCameraRotationSmoothSpeed; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector SmoothedHeadLocation; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FRotator SmoothedHeadRotation; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FTransform PreviousHeadTransform; // (BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float TurnOnFirstPersonModelDistance; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float TurnOnThirdPersonModelDistance; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UCurveFloat* ThirdToFirstBlendCurve; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UCurveFloat* FirstToThirdBlendCurve; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UCurveFloat* MapToFirstBlendCurve; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UCurveFloat* MapToThirdBlendCurve; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UCurveFloat* MapToFirstRotationBlendCurve; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UCurveFloat* MapToThirdRotationBlendCurve; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	uint8 CameraStyleBlendingFrom; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	uint8 CameraStyleBlendingTo; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FPOV LastCameraStyleChangeCameraPOV; // (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FPOV LastVehicleCameraPOV; // (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FPOV LastNonVehicleCameraPOV; // (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FPOV LastCameraPOV; // (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsBlendingCameraStyle; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float CameraStyleChangeBlendDuration; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float MapCameraStyleChangeBlendDuration; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector SmoothedHipsOffset; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector PreviousHipsLocation; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UCurveFloat* CameraFOVToLocationOffsetScaleCurve; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FVector PreviousCharacterMeshLocation; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// Functions
UFUNCTION(BlueprintNativeEvent)
	void UpdateCamera();
UFUNCTION(BlueprintCallable, BlueprintPure)
	bool IsBlendingFromMapView() const;
UFUNCTION(BlueprintNativeEvent)
	struct FPOV ComputeCameraPOV();
};