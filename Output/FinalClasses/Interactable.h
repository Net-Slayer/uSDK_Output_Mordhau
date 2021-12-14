#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "Interactable.generated.h"
// Class Mordhau.Interactable
class MORDHAU_API UInteractable  :  public UInterface
{
GENERATED_BODY()
public:
// Variables
	// Functions
UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void UnHighlight();
UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void OnInteractPassively(class AMordhauCharacter* Character);
UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void OnInteractionStart(class AMordhauCharacter* Character);
UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void OnInteractionMaintained(class AMordhauCharacter* Character);
UFUNCTION(BlueprintNativeEvent)
	void OnInteractionEnd();
UFUNCTION(BlueprintNativeEvent)
	void OnHighlightStart();
UFUNCTION(BlueprintNativeEvent)
	void OnHighlightMaintained(class AMordhauCharacter* Character);
UFUNCTION(BlueprintNativeEvent)
	void OnHighlightEnd();
UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void OnHeldInteractionStart(class AMordhauCharacter* Character);
UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void InteractPassively(class AMordhauCharacter* Character);
UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void InteractionStart(class AMordhauCharacter* Character);
UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void InteractionMaintained(class AMordhauCharacter* Character);
UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void InteractionEnd();
UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void Highlight();
UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void HeldInteractionStart(class AMordhauCharacter* Character);
UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintNativeEvent)
	float GetMaxInteractionHoldTime() const;
UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintNativeEvent)
	bool CanInteractPassively(class AMordhauCharacter* Character) const;
UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintNativeEvent)
	bool CanInteract(class AMordhauCharacter* Character) const;
UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintNativeEvent)
	bool CanHeldInteract(class AMordhauCharacter* Character) const;
};
