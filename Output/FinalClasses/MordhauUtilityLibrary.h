#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "MordhauUtilityLibrary.generated.h"
// Class Mordhau.MordhauUtilityLibrary
class MORDHAU_API UMordhauUtilityLibrary  :  public UBlueprintFunctionLibrary
{
GENERATED_BODY()
public:
// Variables
	// Functions
UFUNCTION(BlueprintCallable, BlueprintPure)
	static void VSmoothDamp(struct FVector* Current, const struct FVector& Target, struct FVector* CurrentVelocity, float SmoothTime, float DeltaTime, float MaxSpeed);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static bool ValidateCharacterProfile(const struct FCharacterProfile& Profile, bool bValidateInventory);
UFUNCTION(BlueprintCallable)
	static struct FString UploadChat(const struct FString& ChatString);
UFUNCTION(BlueprintCallable)
	static void UnpossessCharacterAndHandleSpectating(class AController* Controller);
UFUNCTION(BlueprintCallable)
	static bool UnmountPak(const struct FString& PakPath);
UFUNCTION()
	static bool UncompressData(const struct FString& InData, TArray<uint8>* OutData);
UFUNCTION(BlueprintCallable)
	static bool TryExecuteHeavydutyOperation(class UWorld* WorldObject, bool bIsForced);
UFUNCTION(BlueprintCallable)
	static void TermAllChildBodiesOf(class USkeletalMeshComponent* USMC, const struct FName& BoneName);
UFUNCTION(BlueprintCallable)
	static struct FCharacterProfile StripProfile(const struct FCharacterProfile& InProfile, bool bStripEquipment, bool bStripPerks, bool bStripNonTier0Armor);
UFUNCTION(BlueprintCallable)
	static class UDecalComponent* SpawnBloodDecalAtLocation(class UObject* WorldContextObject, class UMaterialInterface* DecalMaterial, const struct FVector& DecalSize, const struct FVector& Location, const struct FRotator& Rotation, float LifeSpan);
UFUNCTION(BlueprintCallable)
	static TArray<struct FString> SortStringArray(TArray<struct FString> Array, bool bSortAscending);
UFUNCTION(BlueprintCallable)
	static TArray<struct FString> SortQueueNamesByBestMatch(TMap<struct FString, struct FPlayFabMatchmakingMatch> Matches);
UFUNCTION(BlueprintCallable)
	static TArray<class AMordhauPlayerState*> SortPlayers(TArray<class AMordhauPlayerState*> Array);
UFUNCTION(BlueprintCallable)
	static TArray<int> SortIntArray(TArray<int> Array, bool bSortAscending);
UFUNCTION(BlueprintCallable)
	static TArray<struct FServerSearchResult> SortForServerBrowserByServerName(TArray<struct FServerSearchResult> Array, bool bSortAscending);
UFUNCTION(BlueprintCallable)
	static TArray<struct FServerSearchResult> SortForServerBrowserByPing(TArray<struct FServerSearchResult> Array, bool bSortAscending);
UFUNCTION(BlueprintCallable)
	static TArray<struct FServerSearchResult> SortForServerBrowserByMapName(TArray<struct FServerSearchResult> Array, bool bSortAscending);
UFUNCTION(BlueprintCallable)
	static TArray<struct FServerSearchResult> SortForServerBrowserByGameModeName(TArray<struct FServerSearchResult> Array, bool bSortAscending);
UFUNCTION(BlueprintCallable)
	static TArray<struct FServerSearchResult> SortForServerBrowserByCount(TArray<struct FServerSearchResult> Array, bool bSortAscending);
UFUNCTION(BlueprintCallable)
	static TArray<struct FPlayFabGameServer> SortForMatchmakingByLocationPreference(TArray<struct FPlayFabGameServer> Servers, TArray<MordhauOnlineSubsystem_EServerLocation> LocationPreference);
UFUNCTION(BlueprintCallable)
	static TArray<struct FServerSearchResult> SortForMatchmaking(TArray<struct FServerSearchResult> Array);
UFUNCTION(BlueprintCallable)
	static TArray<class UObject*> SortArrayByProperty(TArray<class UObject*> Array, const struct FName& PropertyName, bool bAscending, bool* bWasTypeValid);
UFUNCTION(BlueprintCallable)
	static TArray<class UObject*> SortArrayByFunction(TArray<class UObject*> Array, const struct FScriptDelegate& FuncDel);
UFUNCTION(BlueprintCallable)
	static TArray<class UObject*> SortAndFilterArrayByFunction(TArray<class UObject*> Array, const struct FScriptDelegate& FuncDel, class UClass* Class);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static float Snap180AngleToSteps(float Angle180, float Step);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static bool SLessThan(const struct FString& StringA, const struct FString& StringB);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static bool SGreaterThan(const struct FString& StringA, const struct FString& StringB);
UFUNCTION(BlueprintCallable)
	static void SetVisibilityId(class UPrimitiveComponent* Comp, int NewId);
UFUNCTION(BlueprintCallable)
	static void SetSoundMixVolume(Mordhau_ESoundMix SoundMix, float Volume);
UFUNCTION(BlueprintCallable)
	static void SetPerBoneMotionBlur(class USkeletalMeshComponent* Component, bool bNewValue);
UFUNCTION(BlueprintCallable)
	static void SetPawnFromRep(class AController* Contr, class APawn* NewPawn);
UFUNCTION(BlueprintCallable)
	static void SetNeverDistanceCull(class UPrimitiveComponent* Comp, bool bNewValue);
UFUNCTION(BlueprintCallable)
	static void SetNavAreaClass(class UShapeComponent* ShapeComponent, class UClass* AreaClass);
UFUNCTION(BlueprintCallable)
	static void SetMousePosition(class APlayerController* Controller, float LocationX, float LocationY);
UFUNCTION(BlueprintCallable)
	static void SetLODActorDrawDistance(class ALODActor* Actor, float NewDrawDistance);
UFUNCTION(BlueprintCallable)
	static void SetLocalSpaceKinematics(class USkeletalMeshComponent* Mesh, bool bNewValue);
UFUNCTION(BlueprintCallable)
	static void SetForceMipStreaming(class USkeletalMeshComponent* SMC, bool bValue);
UFUNCTION(BlueprintCallable)
	static void SetDecalFadeScreenSize(class UDecalComponent* Decal, float NewFadeScreenSize);
UFUNCTION(BlueprintCallable)
	static void SetCustomConfigVar_Vector2D(const struct FString& SectionName, const struct FString& VariableName, const struct FVector2D& Value);
UFUNCTION(BlueprintCallable)
	static void SetCustomConfigVar_Vector(const struct FString& SectionName, const struct FString& VariableName, const struct FVector& Value);
UFUNCTION(BlueprintCallable)
	static void SetCustomConfigVar_String(const struct FString& SectionName, const struct FString& VariableName, const struct FString& Value);
UFUNCTION(BlueprintCallable)
	static void SetCustomConfigVar_Rotator(const struct FString& SectionName, const struct FString& VariableName, const struct FRotator& Value);
UFUNCTION(BlueprintCallable)
	static void SetCustomConfigVar_Int(const struct FString& SectionName, const struct FString& VariableName, int Value);
UFUNCTION(BlueprintCallable)
	static void SetCustomConfigVar_Float(const struct FString& SectionName, const struct FString& VariableName, float Value);
UFUNCTION(BlueprintCallable)
	static void SetCustomConfigVar_Color(const struct FString& SectionName, const struct FString& VariableName, const struct FLinearColor& Value);
UFUNCTION(BlueprintCallable)
	static void SetCustomConfigVar_Bool(const struct FString& SectionName, const struct FString& VariableName, bool Value);
UFUNCTION(BlueprintCallable)
	static void SetCustomConfigVar_Array(const struct FString& SectionName, const struct FString& VariableName, TArray<struct FString> Value);
UFUNCTION(BlueprintCallable)
	static void SetCanEverAffectNavigation(class UActorComponent* ActorComponent, bool bRelevant);
UFUNCTION(BlueprintCallable)
	static void SetCachedMaxDistanceAndMarkDirty(class UPrimitiveComponent* Comp, float NewMaxDistance);
UFUNCTION(BlueprintCallable)
	static bool SendMessageToRconClients(const struct FString& Message, int ClientId, bool bToAll, Mordhau_EBroadcastTypes TypeOfBroadcast);
UFUNCTION(BlueprintCallable)
	static void SendClientAdjustment(class UCharacterMovementComponent* CMC);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static int SCompare(const struct FString& StringA, const struct FString& StringB);
UFUNCTION(BlueprintCallable)
	static bool SaveStringToFile(const struct FString& Filename, const struct FString& String);
UFUNCTION(BlueprintCallable)
	static bool SaveStringArrayToFile(const struct FString& Filename, TArray<struct FString> StringArray);
UFUNCTION(BlueprintCallable)
	static bool SaveArrayToFile(const struct FString& Filename, TArray<uint8> ByteArray);
UFUNCTION()
	static struct FString SanitizePlayerName(const struct FString& InName, const struct FString& InFallback);
UFUNCTION(BlueprintCallable)
	static void ResetServerPredictionData(class UCharacterMovementComponent* CMC);
UFUNCTION(BlueprintCallable)
	static void ResetController(class AController* Controller);
UFUNCTION(BlueprintCallable)
	static void ResetClientPredictionData(class UCharacterMovementComponent* CMC);
UFUNCTION(BlueprintCallable)
	static void ReserveCharacterRagdoll(class AAdvancedCharacter* Character);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static int RandomRangeExclude(int Min, int Max, int Exclude);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static bool ProjectWorldToScreenBidirectional(class APlayerController* Player, const struct FVector& WorldPosition, struct FVector2D* ScreenPosition, bool* bTargetBehindCamera, bool bPlayerViewportRelative);
UFUNCTION(BlueprintCallable)
	static void PrintToConsoleAndLog(const struct FString& String, bool bSkipRepeatedStrings);
UFUNCTION(BlueprintCallable)
	static bool PlaneTrace(class UObject* WorldContextObject, const struct FVector& Left, const struct FVector& Right, const struct FVector& Forward, const struct FVector& Back, const struct FVector& TraceAmount, TArray<TEnumAsByte<Engine_EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, bool bConnectLeftRight, bool bConnectForwardBack, const struct FVector& ConnectOffset, struct FHitResult* LeftHit, struct FHitResult* RightHit, struct FHitResult* ForwardHit, struct FHitResult* BackHit, struct FVector* OutRight, struct FVector* OutForward, bool bIgnoreSelf);
UFUNCTION(BlueprintCallable)
	static void PerformCharacterRenderingStressTest(class UObject* WorldContextObject, class UClass* Type, int Amount, float Spread, float DistanceFromCamera);
UFUNCTION(BlueprintCallable)
	static void OpenURL(const struct FString& URL);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static bool NotEqual_PlayFabPlayer(const struct FPlayFabPlayer& A, const struct FPlayFabPlayer& B);
UFUNCTION(BlueprintCallable)
	static bool MountPak(const struct FString& PakPath);
UFUNCTION(BlueprintCallable)
	static bool MordhauApplyRadialDamageWithFalloff(class UObject* WorldContextObject, float BaseDamage, float MinimumDamage, float BaseStructureDamage, float MinimumStructureDamage, const struct FVector& Origin, float DamageInnerRadius, float DamageOuterRadius, float DamageFalloff, TArray<class AActor*> IgnoreActors, float BaseKnockback, float MinimumKnockback, float RagdollFallRadius, class AActor* DamageCauser, class AController* InstigatedByController, TEnumAsByte<Engine_ECollisionChannel> DamagePreventionChannel, bool bIgnoreFriendly);
UFUNCTION(BlueprintCallable)
	static void MarkRenderStateDirty(class UMeshComponent* MeshComp);
UFUNCTION(BlueprintCallable)
	static struct FCharacterProfile MakeEmptyProfile(class UClass* CharacterClass, bool bRandomizeVoice);
UFUNCTION(BlueprintCallable)
	static bool LoadStringFromFile(const struct FString& Filename, struct FString* LoadedString);
UFUNCTION(BlueprintCallable)
	static bool LoadStringArrayFromFile(const struct FString& Filename, TArray<struct FString>* LoadedStringArray);
UFUNCTION(BlueprintCallable)
	static bool LoadReportImageByteArray(const struct FString& ImageName, TArray<uint8>* LoadedArray);
UFUNCTION(BlueprintCallable)
	static class UObject* LoadAsset(const struct FSoftObjectPath& SoftObjectPath);
UFUNCTION(BlueprintCallable)
	static bool LoadArrayFromFile(const struct FString& Filename, TArray<uint8>* LoadedArray);
UFUNCTION(BlueprintCallable)
	static bool LineTraceMultiForObjectsReturnFace(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, TArray<TEnumAsByte<Engine_EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<Engine_EDrawDebugTrace> DrawDebugType, TArray<struct FHitResult>* OutHits, bool bIgnoreSelf);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static struct FPOV LerpPOV(const struct FPOV& A, const struct FPOV& B, float Alpha);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static bool IsValidIPAddress(const struct FString& IPAddress);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static bool IsValid_PlayFabPlayer(const struct FPlayFabPlayer& Player);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static bool IsStandalone();
UFUNCTION(BlueprintCallable, BlueprintPure)
	static bool IsServer();
UFUNCTION(BlueprintCallable, BlueprintPure)
	static bool IsReflexAvailable();
UFUNCTION(BlueprintCallable, BlueprintPure)
	static bool IsPublicIPAddress(const struct FString& IPAddress);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static bool IsPrivateIPAddress(const struct FString& IPAddress);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static bool IsPlayInEditor();
UFUNCTION(BlueprintCallable, BlueprintPure)
	static bool IsPartyMember(class AMordhauPlayerState* Player);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static bool IsOfficialServer();
UFUNCTION(BlueprintCallable, BlueprintPure)
	static bool IsListenServer();
UFUNCTION(BlueprintCallable, BlueprintPure)
	static bool IsFriendlyToLocalPlayer(class UWorld* WorldReference, class AActor* OtherActor);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static bool IsFriend(class AMordhauPlayerState* Player);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static bool IsEditor();
UFUNCTION(BlueprintCallable, BlueprintPure)
	static bool IsDLCInstalled(Mordhau_EDownloadableContent DLC);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static bool IsDevelopmentEnvironment();
UFUNCTION(BlueprintCallable, BlueprintPure)
	static bool IsDevelopmentBuild();
UFUNCTION(BlueprintCallable, BlueprintPure)
	static bool IsDevelopmentBranch();
UFUNCTION(BlueprintCallable, BlueprintPure)
	static bool IsDemoPlayback(class UWorld* World);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static bool IsDedicatedServer();
UFUNCTION(BlueprintCallable, BlueprintPure)
	static bool IsConsolePlatform();
UFUNCTION(BlueprintCallable, BlueprintPure)
	static bool IsCommunityServer();
UFUNCTION(BlueprintCallable, BlueprintPure)
	static bool IsClient();
UFUNCTION(BlueprintCallable, BlueprintPure)
	static bool HasPath(class AAIController* Controller);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static bool HasBeenReallyRecentlyRendered(class UMeshComponent* MeshComponent);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static bool HasActorBegunPlay(class AActor* Actor);
UFUNCTION(BlueprintCallable)
	static struct FBox GrowBoxToIncludePoint(const struct FBox& Box, const struct FVector& Vector);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static int GetXPFromRank(int Rank);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static class UWorld* GetWorldOf(class UObject* Object);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static TArray<struct FText> GetWearableNames(const struct FCharacterGearCustomization& CharacterGearCustomization, Mordhau_EWearableSlot Slot);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static TArray<class UClass*> GetWearableClasses(const struct FCharacterGearCustomization& CharacterGearCustomization, Mordhau_EWearableSlot Slot);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static class UClass* GetWearableClass(const struct FCharacterGearCustomization& CharacterGearCustomization, Mordhau_EWearableSlot Slot);
UFUNCTION(BlueprintCallable)
	static int GetVisibilityId(class UPrimitiveComponent* Comp);
UFUNCTION(BlueprintCallable)
	static class AMordhauCharacter* GetViewTargetCharacter(class UObject* WorldContextObject, bool bOnlyLiving);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static struct FString GetVersionString();
UFUNCTION(BlueprintCallable, BlueprintPure)
	static struct FString GetVersionName();
UFUNCTION(BlueprintCallable, BlueprintPure)
	static float GetTotalDemoTime(class UWorld* World);
UFUNCTION(BlueprintCallable)
	static float GetSyncGroupPositionBetweenMarkers(class UAnimInstance* AnimInstance, const struct FName& SyncGroup);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static bool GetSupportedScreenResolutions(TArray<struct FString>* Resolutions);
UFUNCTION(BlueprintCallable)
	static void GetSoundMixInfo(const struct FString& Name, struct FSoundMixInfo* SoundMixInfo);
UFUNCTION(BlueprintCallable)
	static struct FString GetServerConnectString(const struct FPlayFabServerDetails& ServerDetails, const struct FString& PortName);
UFUNCTION(BlueprintCallable)
	static struct FName GetSculptableBoneAtLine(const struct FVector& LineStart, const struct FVector& LineEnd, float SearchRadius, class USkeletalMeshComponent* MeshComponent, class AMordhauCharacter* Character, int Level);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static TEnumAsByte<Engine_ENetRole> GetRole(class AActor* Actor);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static int GetReleaseVersion();
UFUNCTION(BlueprintCallable, BlueprintPure)
	static struct FString GetRegionName(MordhauOnlineSubsystem_EServerRegion Region);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static struct FText GetRegionDisplayName(MordhauOnlineSubsystem_EServerRegion Region);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static MordhauOnlineSubsystem_EServerRegion GetRegion(const struct FString& RegionName);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static int GetRankFromXP(int XP);
UFUNCTION(BlueprintCallable)
	static class AMordhauEquipment* GetRandomWeapon(int* ID, const struct FSkillsCustomization& SkillsCustomization, Mordhau_EItemRarity MaxRarity);
UFUNCTION(BlueprintCallable)
	static class UUpperChestWearable* GetRandomUpperChestWearable(int* ID, const struct FSkillsCustomization& SkillsCustomization, Mordhau_EItemRarity MaxRarity);
UFUNCTION(BlueprintCallable)
	static void GetRandomSkin(int* ID, struct FEquipmentSkinEntry* Skin, class AMordhauEquipment* Equipment, Mordhau_EItemRarity MaxRarity);
UFUNCTION(BlueprintCallable)
	static class UMordhauWearable* GetRandomShouldersWearable(int* ID, class UUpperChestWearable* UpperChestWearable, const struct FSkillsCustomization& SkillsCustomization, Mordhau_EItemRarity MaxRarity);
UFUNCTION(BlueprintCallable)
	static class AMordhauEquipment* GetRandomRangedWeapon(int* ID, const struct FSkillsCustomization& SkillsCustomization, Mordhau_EItemRarity MaxRarity);
UFUNCTION(BlueprintCallable)
	static class AMordhauEquipment* GetRandomMeleeWeapon(int* ID, const struct FSkillsCustomization& SkillsCustomization, Mordhau_EItemRarity MaxRarity);
UFUNCTION(BlueprintCallable)
	static class UMordhauWearable* GetRandomLowerChestWearable(int* ID, class UUpperChestWearable* UpperChestWearable, const struct FSkillsCustomization& SkillsCustomization, Mordhau_EItemRarity MaxRarity);
UFUNCTION(BlueprintCallable)
	static class ULegsWearable* GetRandomLegsWearable(int* ID, const struct FSkillsCustomization& SkillsCustomization, Mordhau_EItemRarity MaxRarity);
UFUNCTION(BlueprintCallable)
	static class UHeadWearable* GetRandomHeadWearable(int* ID, const struct FSkillsCustomization& SkillsCustomization, Mordhau_EItemRarity MaxRarity);
UFUNCTION(BlueprintCallable)
	static class UMordhauWearable* GetRandomHandsWearable(int* ID, class UArmsWearable* ArmsWearable, const struct FSkillsCustomization& SkillsCustomization, Mordhau_EItemRarity MaxRarity);
UFUNCTION(BlueprintCallable)
	static class UMordhauWearable* GetRandomFeetWearable(int* ID, class ULegsWearable* LegsWearable, const struct FSkillsCustomization& SkillsCustomization, Mordhau_EItemRarity MaxRarity);
UFUNCTION(BlueprintCallable)
	static struct FVector GetRandomFaceCustomizationVector(float RandomExponent);
UFUNCTION(BlueprintCallable)
	static class AMordhauEquipment* GetRandomEquipment(int* ID, const struct FSkillsCustomization& SkillsCustomization, Mordhau_EItemRarity MaxRarity);
UFUNCTION(BlueprintCallable)
	static class UMordhauWearable* GetRandomCoifWearable(int* ID, class UHeadWearable* HeadWearable, const struct FSkillsCustomization& SkillsCustomization, Mordhau_EItemRarity MaxRarity);
UFUNCTION(BlueprintCallable)
	static class UArmsWearable* GetRandomArmsWearable(int* ID, class UUpperChestWearable* UpperChestWearable, const struct FSkillsCustomization& SkillsCustomization, Mordhau_EItemRarity MaxRarity);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static struct FDateTime GetPlayFabTimestamp();
UFUNCTION(BlueprintCallable, BlueprintPure)
	static struct FPlayFabPlayer GetPlayFabPlayer();
UFUNCTION(BlueprintCallable, BlueprintPure)
	static struct FString GetPlayFabId();
UFUNCTION(BlueprintCallable, BlueprintPure)
	static struct FString GetPlayFabEntityID();
UFUNCTION(BlueprintCallable, BlueprintPure)
	static class UPlayFabAPI* GetPlayFabAPI();
UFUNCTION(BlueprintCallable, BlueprintPure)
	static TArray<int> GetPlayerCountFromGameModeMetadataClass(class UClass* MetadataClass);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static class UTexture2D* GetPlayerAvatar(const struct FPlayFabPlayer& Player);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static struct FString GetPlatformName(MordhauOnlineSubsystem_EPlatform Platform);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static MordhauOnlineSubsystem_EPlatform GetPlatformByName(const struct FString& PlatformName);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static MordhauOnlineSubsystem_EPlatform GetPlatform();
UFUNCTION(BlueprintCallable, BlueprintPure)
	static float GetPing(class UObject* WorldContextObject, bool bUseMedian);
UFUNCTION(BlueprintCallable)
	static struct FTransform GetPhysicsBodyWorldTransform(class USkeletalMeshComponent* MeshComponent, const struct FName& BoneName);
UFUNCTION(BlueprintCallable)
	static struct FBox GetPhysicsBodyBounds(class USkeletalMeshComponent* MeshComponent, const struct FName& BoneName);
UFUNCTION(BlueprintCallable)
	static int GetPerksCost(const struct FCharacterProfile& Profile);
UFUNCTION(BlueprintCallable)
	static TArray<class UPerk*> GetPerks(const struct FCharacterProfile& Profile);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static int GetPerforceRevision();
UFUNCTION(BlueprintCallable, BlueprintPure)
	static int GetPacketsLost(class UObject* WorldContextObject);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static struct FString GetOSVersion();
UFUNCTION(BlueprintCallable)
	static bool GetNotifyServerReceivedClientData(class UCharacterMovementComponent* CMC);
UFUNCTION(BlueprintCallable)
	static float GetNormalizedTime(float Start, float End, float Current);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static struct FVector2D GetMousePosition(class APlayerController* Controller);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static class UMordhauStats* GetMordhauStats();
UFUNCTION(BlueprintCallable, BlueprintPure)
	static class UMordhauSingleton* GetMordhauSingleton();
UFUNCTION(BlueprintCallable, BlueprintPure)
	static class UMordhauInventory* GetMordhauInventory();
UFUNCTION(BlueprintCallable, BlueprintPure)
	static class UMordhauInput* GetMordhauInput();
UFUNCTION(BlueprintCallable, BlueprintPure)
	static class AMordhauHUD* GetMordhauHUD(class UObject* WorldContextObject);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static class UMordhauGameUserSettings* GetMordhauGameUserSettings();
UFUNCTION(BlueprintCallable, BlueprintPure)
	static class AMordhauGameSession* GetMordhauGameSession(class UObject* WorldContextObject);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static int GetMaxIndexWithDraw(TArray<int> inArray, bool* bFoundDraw);
UFUNCTION(BlueprintCallable)
	static struct FString GetMapName(class UObject* WorldContextObject);
UFUNCTION(BlueprintCallable)
	static struct FMapInfo GetMapInfo(class UObject* WorldContextObject, const struct FString& MapPath);
UFUNCTION(BlueprintCallable)
	static class UPrimitiveComponent* GetLODParentPrimitive(class UPrimitiveComponent* Comp);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static struct FString GetLocationName(MordhauOnlineSubsystem_EServerLocation Location);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static struct FText GetLocationDisplayName(MordhauOnlineSubsystem_EServerLocation Location);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static MordhauOnlineSubsystem_EServerLocation GetLocation(const struct FString& LocationName);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static int GetLocalShortID(class AMordhauPlayerState* PlayerState);
UFUNCTION()
	static uint32_t GetLocalNetworkVersion();
UFUNCTION(BlueprintCallable)
	static float GetLastReceiveTime(class UObject* WorldContextObject);
UFUNCTION(BlueprintCallable)
	static bool GetIsUsingController();
UFUNCTION(BlueprintCallable)
	static bool GetIsPeasant(const struct FCharacterProfile& Profile);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static MordhauOnlineSubsystem_EIngameEvent GetIngameEvent(class UObject* WorldContextObject);
UFUNCTION(BlueprintCallable)
	static struct FBoxSphereBounds GetImportedBounds(class USkeletalMeshComponent* SkeletalMeshComponent);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static int GetGameServerGamePort();
UFUNCTION(BlueprintCallable, BlueprintPure)
	static struct FString GetGamePortName();
UFUNCTION(BlueprintCallable)
	static int GetFaceIndex(const struct FHitResult& Hit);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static struct FText getErrorText(const struct FString& ErrorString);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static int GetEnumValue(const struct FString& EnumName, const struct FString& EnumKey);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static struct FString GetEnumKey(const struct FString& EnumName, int EnumValue);
UFUNCTION()
	static struct FText GetDurationText(int Seconds);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static class UMordhauWearable* GetDefaultWearable(class UClass* FromClass);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static void GetDefaultObjectCopy(class UClass* FromClass, class UObject** ObjectCopy);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static class UObject* GetDefaultObject(class UClass* FromClass);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static class UBadge* GetDefaultBadge(class UClass* BadgeClass);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static void GetDefaultActorCopy(class UClass* FromClass, class AActor** ActorCopy);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static class AActor* GetDefaultActor(class UClass* FromClass);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static struct FDateTime GetDateTimeFromUnixTimestamp(int Timestamp);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static struct FVector2D GetCustomConfigVar_Vector2D(const struct FString& SectionName, const struct FString& VariableName, bool* IsValid);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static struct FVector GetCustomConfigVar_Vector(const struct FString& SectionName, const struct FString& VariableName, bool* IsValid);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static struct FString GetCustomConfigVar_String(const struct FString& SectionName, const struct FString& VariableName, bool* IsValid);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static struct FRotator GetCustomConfigVar_Rotator(const struct FString& SectionName, const struct FString& VariableName, bool* IsValid);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static int GetCustomConfigVar_Int(const struct FString& SectionName, const struct FString& VariableName, bool* IsValid);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static float GetCustomConfigVar_Float(const struct FString& SectionName, const struct FString& VariableName, bool* IsValid);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static struct FLinearColor GetCustomConfigVar_Color(const struct FString& SectionName, const struct FString& VariableName, bool* IsValid);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static bool GetCustomConfigVar_Bool(const struct FString& SectionName, const struct FString& VariableName, bool* IsValid);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static TArray<struct FString> GetCustomConfigVar_Array(const struct FString& SectionName, const struct FString& VariableName, int* ArraySize);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static struct FString GetCurrentPlatformName();
UFUNCTION(BlueprintCallable, BlueprintPure)
	static int GetCurrentFrameBP(class UObject* WorldContextObject);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static int GetCurrentFrame(class UWorld* World);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static float GetCurrentDemoTime(class UWorld* World);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static struct FString GetConsoleVariableString(const struct FString& VariableName);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static int GetConsoleVariableInt(const struct FString& VariableName);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static float GetConsoleVariableFloat(const struct FString& VariableName);
UFUNCTION(BlueprintCallable)
	static struct FVector GetComponentsBoundingBoxInActorSpace(class AActor* Actor);
UFUNCTION(BlueprintCallable)
	static struct FVector GetCentroid(TArray<struct FVector> Points);
UFUNCTION(BlueprintCallable)
	static bool GetCanEverAffectNavigation(class USceneComponent* SceneComp);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static int GetBuildVersion();
UFUNCTION(BlueprintCallable)
	static struct FVector GetBoxCenter(const struct FBox& Box);
UFUNCTION(BlueprintCallable)
	static struct FBox GetBoundingBoxOfBoneInfluence(class USkeletalMeshComponent* MeshComponent, TArray<struct FName> Bones, float WeightThreshold);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static struct FString GetBeaconPortName();
UFUNCTION(BlueprintCallable, BlueprintPure)
	static struct FString GetBaseFilename(const struct FString& InPath, bool bRemovePath);
UFUNCTION(BlueprintCallable)
	static struct FString GetBannedPerkNames(const struct FCharacterProfile& Profile, class AGameStateBase* GameState);
UFUNCTION(BlueprintCallable)
	static struct FString GetBannedEquipmentNames(const struct FCharacterProfile& Profile, class AGameStateBase* GameState);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static struct FVector GetAxisAngleFromRotator(const struct FRotator& Rot, float* OutAngle);
UFUNCTION(BlueprintCallable)
	static class AActor* GetAttachParentActor(class AActor* Actor);
UFUNCTION(BlueprintCallable)
	static class UArchetype* GetArchetypeObject(const struct FCharacterProfile& Profile);
UFUNCTION(BlueprintCallable)
	static TArray<class UClass*> GetAllWearableClassesForSlotExhaustive(Mordhau_EWearableSlot Slot);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static void FSmoothDamp(float* Current, float Target, float* CurrentVelocity, float SmoothTime, float DeltaTime, float MaxSpeed);
UFUNCTION(BlueprintCallable)
	static struct FText FormatText(const struct FText& Text);
UFUNCTION(BlueprintCallable)
	static bool ForceValidCharacterProfile(const struct FCharacterProfile& Profile, struct FCharacterProfile* ForceValidatedProfile, bool bValidateInventory);
UFUNCTION(BlueprintCallable)
	static void ForceReplicationUpdate(class UCharacterMovementComponent* CMC);
UFUNCTION(BlueprintCallable)
	static void FlushPlayerControllerPressedKeys(class APlayerController* Controller);
UFUNCTION(BlueprintCallable)
	static void FlashWindow();
UFUNCTION(BlueprintCallable, BlueprintPure)
	static float FInterpToSeparate(float Current, float Target, float DeltaTime, float IncreaseSpeed, float DecreaseSpeed);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static float FInterpConstantToSeparate(float Current, float Target, float DeltaTime, float IncreaseSpeed, float DecreaseSpeed);
UFUNCTION(BlueprintCallable)
	static bool FindTeleportSpot(class AActor* Actor, const struct FVector& InLocation, const struct FRotator& InRotation, struct FVector* OutLocation);
UFUNCTION(BlueprintCallable)
	static struct FPlayFabPlayer FindPlayFabPlayer(const struct FString& PlayerNameOrPlayFabID);
UFUNCTION(BlueprintCallable)
	static class AMordhauPlayerState* FindPlayerStateWithoutLocalID(const struct FString& PlayerNameOrPlayFabID);
UFUNCTION(BlueprintCallable)
	static class AMordhauPlayerState* FindPlayerState(const struct FString& PlayerNameOrPlayFabID);
UFUNCTION(BlueprintCallable)
	static bool FindCircleIntersectionPoints(const struct FVector2D& CenterA, float RadiusA, const struct FVector2D& CenterB, float RadiusB, struct FVector2D* PointA, struct FVector2D* PointB);
UFUNCTION(BlueprintCallable)
	static class UObject* FindByFunctionTyped(TArray<class UObject*> Array, const struct FScriptDelegate& FuncDel, class UClass* Class);
UFUNCTION(BlueprintCallable)
	static class UObject* FindByFunction(TArray<class UObject*> Array, const struct FScriptDelegate& FuncDel);
UFUNCTION(BlueprintCallable)
	static struct FRotator FindBetween(const struct FVector& A, const struct FVector& B);
UFUNCTION(BlueprintCallable)
	static TArray<class UObject*> FilterArrayByFunction(TArray<class UObject*> Array, const struct FScriptDelegate& FuncDel, class UClass* Class);
UFUNCTION(BlueprintCallable)
	static void FakeTickComponent(class USceneComponent* Component, float DeltaTime);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static bool Equal_PlayFabPlayer(const struct FPlayFabPlayer& A, const struct FPlayFabPlayer& B);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static struct FString EncodeByteArrayToBase64String(TArray<uint8> Array);
UFUNCTION(BlueprintCallable)
	static void DrawText(class UCanvas* Canvas, class UFont* Font, int Size, const struct FString& Text, const struct FVector2D& Position, const struct FLinearColor& TextColor, float Kerning, const struct FLinearColor& ShadowColor, const struct FVector2D& ShadowOffset, bool bCentreX, bool bCentreY, bool bOutlined, const struct FLinearColor& OutlineColor);
UFUNCTION(BlueprintCallable)
	static bool DoesProfileContainBannedPerks(const struct FCharacterProfile& Profile, class AGameStateBase* GameState);
UFUNCTION(BlueprintCallable)
	static bool DoesProfileContainBannedEquipment(const struct FCharacterProfile& Profile, class AGameStateBase* GameState);
UFUNCTION(BlueprintCallable)
	static void CopyToClipboard(const struct FString& MessageToCopy);
UFUNCTION(BlueprintCallable)
	static void ConvertStringSteamIDsToPlayFabIDs(TArray<struct FString> InSteamIDArray, const struct FString& Filename, const struct FScriptDelegate& Delegate);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static struct FString ConvertRelativePathToFull(const struct FString& Path);
UFUNCTION(BlueprintCallable)
	static void ConvertColorArrayToJPEG(int InSizeX, int InSizeY, TArray<struct FColor> InImageData, TArray<uint8>* CompressedData, bool* bSuccess, int ImageQuality);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static struct FString Conv_SoftObjectPathToString(const struct FSoftObjectPath& SoftObjectPath);
UFUNCTION(BlueprintCallable)
	static bool ConsumeBudget(class AAdvancedCharacter* Character, Mordhau_EBudgetType BudgetType, bool bSkipInvisible, float Duration, float DistanceCutoff, bool bForce);
UFUNCTION(BlueprintCallable)
	static int ComputePointsLeft(const struct FCharacterProfile& Profile);
UFUNCTION()
	static bool CompressData(TArray<uint8> InData, struct FString* OutData);
UFUNCTION(BlueprintCallable)
	static bool CompareGearCustomization(const struct FCharacterGearCustomization& First, const struct FCharacterGearCustomization& Second);
UFUNCTION(BlueprintCallable)
	static bool CompareFaceCustomization(const struct FFaceCustomization& First, const struct FFaceCustomization& Second);
UFUNCTION(BlueprintCallable)
	static bool CompareEquipmentCustomization(const struct FEquipmentCustomization& First, const struct FEquipmentCustomization& Second);
UFUNCTION(BlueprintCallable)
	static bool CompareAppearanceCustomization(const struct FAppearanceCustomization& First, const struct FAppearanceCustomization& Second);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static struct FVector ClosestPointOnLine(const struct FVector& LineStart, const struct FVector& LineEnd, const struct FVector& Point);
UFUNCTION(BlueprintCallable)
	static struct FString Capitalize(const struct FString& String);
UFUNCTION(BlueprintCallable)
	static bool CallFunctionByNameWithArgs(const struct FString& Str, class UObject* Executor);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static int CalculateGCD(int ValueA, int ValueB);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static float CalculateAngle2D(const struct FVector& Direction, float Yaw);
UFUNCTION(BlueprintCallable)
	static void AwardTeamfightMMR(bool bIsWin, const struct FString& PlayFabId, int OtherTeamMMR, int* NewMMR);
UFUNCTION(BlueprintCallable)
	static void AwardDuelMMR(const struct FString& WinnerID, const struct FString& LoserID, int* NewWinnerMMR, int* NewLoserMMR);
UFUNCTION(BlueprintCallable)
	static bool AreProfilesEqual(const struct FCharacterProfile& First, const struct FCharacterProfile& Second);
UFUNCTION(BlueprintCallable)
	static bool AreActorsFromSameLevel(class AActor* ActorA, class AActor* ActorB);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static float AngularDistance(const struct FRotator& A, const struct FRotator& B);
UFUNCTION(BlueprintCallable)
	static float ActorGetDistanceToCollision(class AActor* Actor, const struct FVector& Point, struct FVector* PointOnCollision, TEnumAsByte<Engine_ECollisionChannel> TraceChannel);
};
