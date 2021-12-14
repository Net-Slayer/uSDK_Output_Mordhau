#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "SpawnGroup.generated.h"
// Class Mordhau.SpawnGroup
class MORDHAU_API ASpawnGroup  :  public AActor
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<class AMordhauPlayerStart*> Spawns; // (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// Functions
UFUNCTION(BlueprintCallable)
	void SetSpawnsTeam(int NewTeam);
UFUNCTION(BlueprintCallable)
	void SetAreSpawnsEnabled(bool bValue);
UFUNCTION(BlueprintCallable, BlueprintPure)
	bool GetAreSpawnsEnabled() const;
};
