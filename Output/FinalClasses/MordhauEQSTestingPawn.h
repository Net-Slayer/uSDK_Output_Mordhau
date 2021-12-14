#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "MordhauEQSTestingPawn.generated.h"
// Class Mordhau.MordhauEQSTestingPawn
class MORDHAU_API AMordhauEQSTestingPawn  :  public AEQSTestingPawn
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(EditAnywhere)
	uint8 Team; // (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// Functions
};
