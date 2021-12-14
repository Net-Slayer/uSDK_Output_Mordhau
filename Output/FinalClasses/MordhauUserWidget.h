#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "MordhauUserWidget.generated.h"
// Class Mordhau.MordhauUserWidget
class MORDHAU_API UMordhauUserWidget  :  public UUserWidget
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(BlueprintReadOnly, Export, Instanced)
	class UMordhauWidgetComponent* ParentWidgetComponent; // (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// Functions
};
