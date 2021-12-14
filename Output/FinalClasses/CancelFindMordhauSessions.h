#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "CancelFindMordhauSessions.generated.h"
// Class Mordhau.CancelFindMordhauSessions
class MORDHAU_API UCancelFindMordhauSessions  :  public UObject
{
GENERATED_BODY()
public:
// Variables
	// Functions
UFUNCTION(BlueprintCallable)
	static bool CancelFindMordhauSessions();
};
