#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "Bounds.generated.h"
// Class Mordhau.Bounds
class MORDHAU_API UBounds  :  public UInterface
{
GENERATED_BODY()
public:
// Variables
	// Functions
UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void OnExceededTimeOutOfBounds();
UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void LeftOutOfBoundsArea();
UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintNativeEvent)
	bool IsOutOfBounds() const;
UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintNativeEvent)
	bool IsAllowedOutOfBounds() const;
UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintNativeEvent)
	float GetOutOfBoundsTimeUntilDeath() const;
UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void EnteredOutOfBoundsArea(class UObject* WCO);
};
