#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "MordhauHUD.generated.h"
// Class Mordhau.MordhauHUD
class MORDHAU_API AMordhauHUD  :  public AHUD
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<class AControlPoint*> CapturePointsOfInterest; // (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// Functions
UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnGameStateReplicated();
UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void EnqueueMordhauDialog(class UMordhauDialog* Dialog);
};
