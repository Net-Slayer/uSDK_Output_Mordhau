#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "CapturePointBanner.generated.h"
// Class Mordhau.CapturePointBanner
class MORDHAU_API ACapturePointBanner  :  public AActor
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(BlueprintReadOnly)
	class AControlPoint* ControlPoint; // (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	float CaptureProgress; // (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int RopeMaterialIndex; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int FlagMaterialIndex; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float RopeSpeed; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UMaterialInstanceDynamic* RopeMaterialInstance; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UMaterialInstanceDynamic* FlagMaterialInstance; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// Functions
UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void UpdateVisuals();
UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void InitializeBanner(class AControlPoint* OwningPoint);
};
