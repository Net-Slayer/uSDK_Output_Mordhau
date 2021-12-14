#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "InteractionSystemComponent.generated.h"
// Class Mordhau.InteractionSystemComponent
class MORDHAU_API UInteractionSystemComponent  :  public UActorComponent
{
GENERATED_BODY()
public:
// Variables
UPROPERTY()
	TWeakObjectPtr<class AActor> RequestedInteractionTarget; // (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int NumberOfSweeps; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int SweepSphereRadius; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int SweepRadius; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bDrawAllSections; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// Functions
UFUNCTION()
	void OnUnPossessed(class AAdvancedCharacter* Character);
UFUNCTION()
	void OnLODTick(float DeltaTime);
UFUNCTION()
	void OnLateTick(float DeltaTime);
UFUNCTION()
	void OnCharacterDestroyed(class AAdvancedCharacter* Character);
};
