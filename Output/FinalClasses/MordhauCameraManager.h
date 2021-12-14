#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "MordhauCameraManager.generated.h"
// Class Mordhau.MordhauCameraManager
class MORDHAU_API AMordhauCameraManager  :  public APlayerCameraManager
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(BlueprintReadOnly, Export, Instanced)
	class UTagSystemComponent* TagSystemComponent; // (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	TArray<float> ClosestWidgetVisibilityQueueDistances; // (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	float ClosestWidgetVisibilityQueueMaxDistance; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	class AAtmosphericFog* AtmosphericFog; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float AtmosphericFogMultiplierChangeSpeed; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsInMainMenu; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FMinimalViewInfo LastViewInfo; // (NativeAccessSpecifierPublic)
UPROPERTY()
	TWeakObjectPtr<class AActor> QueuedViewTarget; // (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(Export)
	TArray<TWeakObjectPtr<class UMordhauWidgetComponent>> LateTickRequests; // (ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float HitFlashFadeInDuration; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float HitFlashStayDuration; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float HitFlashFadeOutDuration; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float HitFlashValue; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsHitFlashDirectional; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	TWeakObjectPtr<class AActor> HitFlashSource; // (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float HitFlashDegrees; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// Functions
UFUNCTION(BlueprintCallable)
	void SetViewTargetBP(class AActor* NewTarget);
UFUNCTION(BlueprintCallable)
	void SetCameraStyleBP(const struct FName& NewCameraStyle);
UFUNCTION(BlueprintImplementableEvent)
	void OnHitFlash(bool bIsDirectional, class AActor* Source);
UFUNCTION(BlueprintCallable)
	void LeaveMapView();
UFUNCTION(BlueprintCallable)
	void LeaveCustomization();
UFUNCTION(BlueprintCallable)
	class AActor* GetViewTargetBP();
UFUNCTION(BlueprintCallable, BlueprintPure)
	bool GetIsInMapView() const;
UFUNCTION(BlueprintCallable, BlueprintPure)
	bool GetIsInCustomization() const;
UFUNCTION(BlueprintCallable)
	struct FName GetCameraStyleBP();
UFUNCTION(BlueprintCallable)
	struct FMinimalViewInfo GetCameraCache();
UFUNCTION(BlueprintCallable)
	void EnterMapView();
UFUNCTION(BlueprintCallable)
	void EnterCustomization(class AActor* CustomizationTarget);
};
