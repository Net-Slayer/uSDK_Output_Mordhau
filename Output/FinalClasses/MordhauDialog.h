#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "MordhauDialog.generated.h"
// Class Mordhau.MordhauDialog
class MORDHAU_API UMordhauDialog  :  public UUserWidget
{
GENERATED_BODY()
public:
// Variables
	// Functions
UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void Show();
UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void Hide();
};
