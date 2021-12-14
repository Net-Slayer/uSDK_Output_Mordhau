#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "Mods.generated.h"
// Class Mordhau.Mods
class MORDHAU_API UMods  :  public UObject
{
GENERATED_BODY()
public:
// Variables
	// Functions
UFUNCTION(BlueprintCallable)
	static bool UnmountMod(int ModId);
UFUNCTION(BlueprintCallable)
	static bool UninstallMod(int ModId);
UFUNCTION(BlueprintCallable)
	static void Process();
UFUNCTION(BlueprintCallable)
	static void MountMods(TArray<int> ModIds);
UFUNCTION(BlueprintCallable)
	static bool MountMod(int ModId);
UFUNCTION(BlueprintCallable)
	static int MountAllPaksInCustomPakFolder();
UFUNCTION(BlueprintCallable)
	static void MountAllInstalledMods();
UFUNCTION(BlueprintCallable, BlueprintPure)
	static bool IsModMounted(int ModId);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static TArray<struct FQueuedModDownload> GetModDownloadQueue();
UFUNCTION(BlueprintCallable, BlueprintPure)
	static struct FInstalledMod GetInstalledMod(int ModId);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static TArray<struct FInstalledMod> GetAllInstalledMods();
UFUNCTION(BlueprintCallable)
	static void CancelModDownload(int ModId);
};
