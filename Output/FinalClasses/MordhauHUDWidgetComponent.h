#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "MordhauHUDWidgetComponent.generated.h"
// Class Mordhau.MordhauHUDWidgetComponent
class MORDHAU_API UMordhauHUDWidgetComponent  :  public UActorComponent
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(EditAnywhere)
	bool bCreateOnBeginPlay; // (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(EditAnywhere)
	bool bShowOnBeginPlay; // (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(EditAnywhere)
	class UClass* WidgetBPReference; // (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(EditAnywhere, EditDefaultsOnly, Export, Instanced)
	class UUserWidget* Widget; // (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
UPROPERTY(EditAnywhere, EditDefaultsOnly)
	bool bIsPendingToShow; // (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	// Functions
UFUNCTION(BlueprintCallable)
	bool ShowWidget();
UFUNCTION(BlueprintCallable)
	void RemoveWidget();
UFUNCTION()
	void OnCharacterOwnerEndViewTarget(class AAdvancedCharacter* CharacterOwner);
UFUNCTION()
	void OnCharacterOwnerBecomeViewTarget(class AAdvancedCharacter* CharacterOwner);
UFUNCTION(BlueprintCallable)
	void InstantiateWidget();
UFUNCTION(BlueprintCallable)
	void HideWidget();
UFUNCTION(BlueprintCallable)
	class UUserWidget* GetHUDWidget();
};
