#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "MordhauPlayerStart.generated.h"
// Class Mordhau.MordhauPlayerStart
class MORDHAU_API AMordhauPlayerStart  :  public APlayerStart
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsSpawnDisabled; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int Team; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int Token; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// Functions
UFUNCTION(BlueprintNativeEvent)
	void OnSpawnChosen(class AController* Player);
UFUNCTION(BlueprintNativeEvent)
	bool IsAllowedSpawnFor(class AController* Player);
UFUNCTION(BlueprintNativeEvent)
	float GetSpawnPreferenceFor(class AController* Player);
};
