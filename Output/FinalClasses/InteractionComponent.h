#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "InteractionComponent.generated.h"
// Class Mordhau.InteractionComponent
class MORDHAU_API UInteractionComponent  :  public UBoxComponent
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere, Export)
	TArray<class UMeshComponent*> VisualMeshComponents; // (Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsInteractable; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsHighlighted; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// Functions
UFUNCTION(BlueprintCallable)
	void UnHighlight();
UFUNCTION(BlueprintNativeEvent)
	void OnInteractionStart(class AAdvancedCharacter* Character);
UFUNCTION(BlueprintNativeEvent)
	void OnInteractionEnd();
UFUNCTION(BlueprintNativeEvent)
	void OnHighlightStart();
UFUNCTION(BlueprintNativeEvent)
	void OnHighlightEnd();
UFUNCTION(BlueprintCallable)
	void InteractionStart(class AAdvancedCharacter* Character);
UFUNCTION(BlueprintCallable)
	void InteractionEnd();
UFUNCTION(BlueprintCallable)
	void Highlight();
UFUNCTION(BlueprintNativeEvent)
	bool CanInteract(class AAdvancedCharacter* Character) const;
};
