#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "MordhauSpectator.generated.h"
// Class Mordhau.MordhauSpectator
class MORDHAU_API AMordhauSpectator  :  public ASpectatorPawn
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float BlockInputAfterDeathTime; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bAutomaticallyAsksForSpawn; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bCanOnlyViewOwnTeam; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	float CreatedTime; // (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	float LastSentCameraUpdate; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	float MouseSmoothedTurnValue; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	float MouseSmoothingTurnVelocity; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	float MouseSmoothedLookUpValue; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	float MouseSmoothingLookUpVelocity; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	bool bIsFirstTick; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// Functions
UFUNCTION(BlueprintCallable)
	void TertiarySpectatorAction();
UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SwitchToFreeCam();
UFUNCTION(BlueprintCallable)
	void SecondarySpectatorAction();
UFUNCTION(BlueprintCallable)
	void PrimarySpectatorAction();
UFUNCTION(BlueprintCallable)
	bool IsWatchingOwnDeath();
};
