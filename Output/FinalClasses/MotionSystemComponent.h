#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "MotionSystemComponent.generated.h"
// Class Mordhau.MotionSystemComponent
class MORDHAU_API UMotionSystemComponent  :  public UActorComponent
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float MotionFOVOffsetZeroSpeed; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FNetMotion NetMotion; // (NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY()
	TArray<struct FNetMotion> UnconfirmedMotionsBacklog; // (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	struct FNetMotion LocallyPredictedNetMotion; // (NoDestructor, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	class UMordhauMotion* Motion; // (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	class UParryMotion* LastParryMotion; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	class UFlinchMotion* LastFlinchMotion; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	class UFeintedMotion* LastFeintedMotion; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadOnly)
	class UAttackMotion* LastAttackMotion; // (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	class UEmoteMotion* LastEmoteMotion; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TMap<Mordhau_EAttackMove, class UClass*> AttackMotions; // (Edit, BlueprintVisible, UObjectWrapper, NativeAccessSpecifierPublic)
	// Functions
UFUNCTION()
	void OnServerAssignNetMotion(const struct FNetMotion& NewNetMotion, uint8 LastAuthObserved);
UFUNCTION()
	void OnPreBeginPlay(class AMordhauCharacter* Character);
UFUNCTION()
	void OnLODTick(float DeltaTime);
UFUNCTION()
	void OnLateTick(float DeltaTime);
UFUNCTION()
	void OnClientSetNetMotion(const struct FNetMotion& NewMotion, float ServerStartTime);
};
