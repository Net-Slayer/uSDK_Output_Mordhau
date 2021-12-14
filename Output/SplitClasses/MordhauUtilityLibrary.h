// Class Mordhau.MordhauUtilityLibrary

// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])

class UMordhauUtilityLibrary : public UBlueprintFunctionLibrary

{

public:





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.MordhauUtilityLibrary");

		return ptr;

	}







	void STATIC_VSmoothDamp(struct FVector* Current, const struct FVector& Target, struct FVector* CurrentVelocity, float SmoothTime, float DeltaTime, float MaxSpeed);

	bool STATIC_ValidateCharacterProfile(const struct FCharacterProfile& Profile, bool bValidateInventory);

	struct FString STATIC_UploadChat(const struct FString& ChatString);

	void STATIC_UnpossessCharacterAndHandleSpectating(class AController* Controller);

	bool STATIC_UnmountPak(const struct FString& PakPath);

	bool STATIC_UncompressData(const struct FString& InData, TArray<unsigned char>* OutData);

	bool STATIC_TryExecuteHeavydutyOperation(class UWorld* WorldObject, bool bIsForced);

	void STATIC_TermAllChildBodiesOf(class USkeletalMeshComponent* USMC, const struct FName& BoneName);

	struct FCharacterProfile STATIC_StripProfile(const struct FCharacterProfile& InProfile, bool bStripEquipment, bool bStripPerks, bool bStripNonTier0Armor);

	class UDecalComponent* STATIC_SpawnBloodDecalAtLocation(class UObject* WorldContextObject, class UMaterialInterface* DecalMaterial, const struct FVector& DecalSize, const struct FVector& Location, const struct FRotator& Rotation, float LifeSpan);

	TArray<struct FString> STATIC_SortStringArray(TArray<struct FString> Array, bool bSortAscending);

	TArray<struct FString> STATIC_SortQueueNamesByBestMatch(TMap<struct FString, struct FPlayFabMatchmakingMatch> Matches);

	TArray<class AMordhauPlayerState*> STATIC_SortPlayers(TArray<class AMordhauPlayerState*> Array);

	TArray<int> STATIC_SortIntArray(TArray<int> Array, bool bSortAscending);

	TArray<struct FServerSearchResult> STATIC_SortForServerBrowserByServerName(TArray<struct FServerSearchResult> Array, bool bSortAscending);

	TArray<struct FServerSearchResult> STATIC_SortForServerBrowserByPing(TArray<struct FServerSearchResult> Array, bool bSortAscending);

	TArray<struct FServerSearchResult> STATIC_SortForServerBrowserByMapName(TArray<struct FServerSearchResult> Array, bool bSortAscending);

	TArray<struct FServerSearchResult> STATIC_SortForServerBrowserByGameModeName(TArray<struct FServerSearchResult> Array, bool bSortAscending);

	TArray<struct FServerSearchResult> STATIC_SortForServerBrowserByCount(TArray<struct FServerSearchResult> Array, bool bSortAscending);

	TArray<struct FPlayFabGameServer> STATIC_SortForMatchmakingByLocationPreference(TArray<struct FPlayFabGameServer> Servers, TArray<MordhauOnlineSubsystem_EServerLocation> LocationPreference);

	TArray<struct FServerSearchResult> STATIC_SortForMatchmaking(TArray<struct FServerSearchResult> Array);

	TArray<class UObject*> STATIC_SortArrayByProperty(TArray<class UObject*> Array, const struct FName& PropertyName, bool bAscending, bool* bWasTypeValid);

	TArray<class UObject*> STATIC_SortArrayByFunction(TArray<class UObject*> Array, const struct FScriptDelegate& FuncDel);

	TArray<class UObject*> STATIC_SortAndFilterArrayByFunction(TArray<class UObject*> Array, const struct FScriptDelegate& FuncDel, class UClass* Class);

	float STATIC_Snap180AngleToSteps(float Angle180, float Step);

	bool STATIC_SLessThan(const struct FString& StringA, const struct FString& StringB);

	bool STATIC_SGreaterThan(const struct FString& StringA, const struct FString& StringB);

	void STATIC_SetVisibilityId(class UPrimitiveComponent* Comp, int NewId);

	void STATIC_SetSoundMixVolume(Mordhau_ESoundMix SoundMix, float Volume);

	void STATIC_SetPerBoneMotionBlur(class USkeletalMeshComponent* Component, bool bNewValue);

	void STATIC_SetPawnFromRep(class AController* Contr, class APawn* NewPawn);

	void STATIC_SetNeverDistanceCull(class UPrimitiveComponent* Comp, bool bNewValue);

	void STATIC_SetNavAreaClass(class UShapeComponent* ShapeComponent, class UClass* AreaClass);

	void STATIC_SetMousePosition(class APlayerController* Controller, float LocationX, float LocationY);

	void STATIC_SetLODActorDrawDistance(class ALODActor* Actor, float NewDrawDistance);

	void STATIC_SetLocalSpaceKinematics(class USkeletalMeshComponent* Mesh, bool bNewValue);

	void STATIC_SetForceMipStreaming(class USkeletalMeshComponent* SMC, bool bValue);

	void STATIC_SetDecalFadeScreenSize(class UDecalComponent* Decal, float NewFadeScreenSize);

	void STATIC_SetCustomConfigVar_Vector2D(const struct FString& SectionName, const struct FString& VariableName, const struct FVector2D& Value);

	void STATIC_SetCustomConfigVar_Vector(const struct FString& SectionName, const struct FString& VariableName, const struct FVector& Value);

	void STATIC_SetCustomConfigVar_String(const struct FString& SectionName, const struct FString& VariableName, const struct FString& Value);

	void STATIC_SetCustomConfigVar_Rotator(const struct FString& SectionName, const struct FString& VariableName, const struct FRotator& Value);

	void STATIC_SetCustomConfigVar_Int(const struct FString& SectionName, const struct FString& VariableName, int Value);

	void STATIC_SetCustomConfigVar_Float(const struct FString& SectionName, const struct FString& VariableName, float Value);

	void STATIC_SetCustomConfigVar_Color(const struct FString& SectionName, const struct FString& VariableName, const struct FLinearColor& Value);

	void STATIC_SetCustomConfigVar_Bool(const struct FString& SectionName, const struct FString& VariableName, bool Value);

	void STATIC_SetCustomConfigVar_Array(const struct FString& SectionName, const struct FString& VariableName, TArray<struct FString> Value);

	void STATIC_SetCanEverAffectNavigation(class UActorComponent* ActorComponent, bool bRelevant);

	void STATIC_SetCachedMaxDistanceAndMarkDirty(class UPrimitiveComponent* Comp, float NewMaxDistance);

	bool STATIC_SendMessageToRconClients(const struct FString& Message, int ClientId, bool bToAll, Mordhau_EBroadcastTypes TypeOfBroadcast);

	void STATIC_SendClientAdjustment(class UCharacterMovementComponent* CMC);

	int STATIC_SCompare(const struct FString& StringA, const struct FString& StringB);

	bool STATIC_SaveStringToFile(const struct FString& Filename, const struct FString& String);

	bool STATIC_SaveStringArrayToFile(const struct FString& Filename, TArray<struct FString> StringArray);

	bool STATIC_SaveArrayToFile(const struct FString& Filename, TArray<unsigned char> ByteArray);

	struct FString STATIC_SanitizePlayerName(const struct FString& InName, const struct FString& InFallback);

	void STATIC_ResetServerPredictionData(class UCharacterMovementComponent* CMC);

	void STATIC_ResetController(class AController* Controller);

	void STATIC_ResetClientPredictionData(class UCharacterMovementComponent* CMC);

	void STATIC_ReserveCharacterRagdoll(class AAdvancedCharacter* Character);

	int STATIC_RandomRangeExclude(int Min, int Max, int Exclude);

	bool STATIC_ProjectWorldToScreenBidirectional(class APlayerController* Player, const struct FVector& WorldPosition, struct FVector2D* ScreenPosition, bool* bTargetBehindCamera, bool bPlayerViewportRelative);

	void STATIC_PrintToConsoleAndLog(const struct FString& String, bool bSkipRepeatedStrings);

	bool STATIC_PlaneTrace(class UObject* WorldContextObject, const struct FVector& Left, const struct FVector& Right, const struct FVector& Forward, const struct FVector& Back, const struct FVector& TraceAmount, TArray<TEnumAsByte<Engine_EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, bool bConnectLeftRight, bool bConnectForwardBack, const struct FVector& ConnectOffset, struct FHitResult* LeftHit, struct FHitResult* RightHit, struct FHitResult* ForwardHit, struct FHitResult* BackHit, struct FVector* OutRight, struct FVector* OutForward, bool bIgnoreSelf);

	void STATIC_PerformCharacterRenderingStressTest(class UObject* WorldContextObject, class UClass* Type, int Amount, float Spread, float DistanceFromCamera);

	void STATIC_OpenURL(const struct FString& URL);

	bool STATIC_NotEqual_PlayFabPlayer(const struct FPlayFabPlayer& A, const struct FPlayFabPlayer& B);

	bool STATIC_MountPak(const struct FString& PakPath);

	bool STATIC_MordhauApplyRadialDamageWithFalloff(class UObject* WorldContextObject, float BaseDamage, float MinimumDamage, float BaseStructureDamage, float MinimumStructureDamage, const struct FVector& Origin, float DamageInnerRadius, float DamageOuterRadius, float DamageFalloff, TArray<class AActor*> IgnoreActors, float BaseKnockback, float MinimumKnockback, float RagdollFallRadius, class AActor* DamageCauser, class AController* InstigatedByController, TEnumAsByte<Engine_ECollisionChannel> DamagePreventionChannel, bool bIgnoreFriendly);

	void STATIC_MarkRenderStateDirty(class UMeshComponent* MeshComp);

	struct FCharacterProfile STATIC_MakeEmptyProfile(class UClass* CharacterClass, bool bRandomizeVoice);

	bool STATIC_LoadStringFromFile(const struct FString& Filename, struct FString* LoadedString);

	bool STATIC_LoadStringArrayFromFile(const struct FString& Filename, TArray<struct FString>* LoadedStringArray);

	bool STATIC_LoadReportImageByteArray(const struct FString& ImageName, TArray<unsigned char>* LoadedArray);

	class UObject* STATIC_LoadAsset(const struct FSoftObjectPath& SoftObjectPath);

	bool STATIC_LoadArrayFromFile(const struct FString& Filename, TArray<unsigned char>* LoadedArray);

	bool STATIC_LineTraceMultiForObjectsReturnFace(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, TArray<TEnumAsByte<Engine_EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<Engine_EDrawDebugTrace> DrawDebugType, TArray<struct FHitResult>* OutHits, bool bIgnoreSelf);

	struct FPOV STATIC_LerpPOV(const struct FPOV& A, const struct FPOV& B, float Alpha);

	bool STATIC_IsValidIPAddress(const struct FString& IPAddress);

	bool STATIC_IsValid_PlayFabPlayer(const struct FPlayFabPlayer& Player);

	bool STATIC_IsStandalone();

	bool STATIC_IsServer();

	bool STATIC_IsReflexAvailable();

	bool STATIC_IsPublicIPAddress(const struct FString& IPAddress);

	bool STATIC_IsPrivateIPAddress(const struct FString& IPAddress);

	bool STATIC_IsPlayInEditor();

	bool STATIC_IsPartyMember(class AMordhauPlayerState* Player);

	bool STATIC_IsOfficialServer();

	bool STATIC_IsListenServer();

	bool STATIC_IsFriendlyToLocalPlayer(class UWorld* WorldReference, class AActor* OtherActor);

	bool STATIC_IsFriend(class AMordhauPlayerState* Player);

	bool STATIC_IsEditor();

	bool STATIC_IsDLCInstalled(Mordhau_EDownloadableContent DLC);

	bool STATIC_IsDevelopmentEnvironment();

	bool STATIC_IsDevelopmentBuild();

	bool STATIC_IsDevelopmentBranch();

	bool STATIC_IsDemoPlayback(class UWorld* World);

	bool STATIC_IsDedicatedServer();

	bool STATIC_IsConsolePlatform();

	bool STATIC_IsCommunityServer();

	bool STATIC_IsClient();

	bool STATIC_HasPath(class AAIController* Controller);

	bool STATIC_HasBeenReallyRecentlyRendered(class UMeshComponent* MeshComponent);

	bool STATIC_HasActorBegunPlay(class AActor* Actor);

	struct FBox STATIC_GrowBoxToIncludePoint(const struct FBox& Box, const struct FVector& Vector);

	int STATIC_GetXPFromRank(int Rank);

	class UWorld* STATIC_GetWorldOf(class UObject* Object);

	TArray<struct FText> STATIC_GetWearableNames(const struct FCharacterGearCustomization& CharacterGearCustomization, Mordhau_EWearableSlot Slot);

	TArray<class UClass*> STATIC_GetWearableClasses(const struct FCharacterGearCustomization& CharacterGearCustomization, Mordhau_EWearableSlot Slot);

	class UClass* STATIC_GetWearableClass(const struct FCharacterGearCustomization& CharacterGearCustomization, Mordhau_EWearableSlot Slot);

	int STATIC_GetVisibilityId(class UPrimitiveComponent* Comp);

	class AMordhauCharacter* STATIC_GetViewTargetCharacter(class UObject* WorldContextObject, bool bOnlyLiving);

	struct FString STATIC_GetVersionString();

	struct FString STATIC_GetVersionName();

	float STATIC_GetTotalDemoTime(class UWorld* World);

	float STATIC_GetSyncGroupPositionBetweenMarkers(class UAnimInstance* AnimInstance, const struct FName& SyncGroup);

	bool STATIC_GetSupportedScreenResolutions(TArray<struct FString>* Resolutions);

	void STATIC_GetSoundMixInfo(const struct FString& Name, struct FSoundMixInfo* SoundMixInfo);

	struct FString STATIC_GetServerConnectString(const struct FPlayFabServerDetails& ServerDetails, const struct FString& PortName);

	struct FName STATIC_GetSculptableBoneAtLine(const struct FVector& LineStart, const struct FVector& LineEnd, float SearchRadius, class USkeletalMeshComponent* MeshComponent, class AMordhauCharacter* Character, int Level);

	TEnumAsByte<Engine_ENetRole> STATIC_GetRole(class AActor* Actor);

	int STATIC_GetReleaseVersion();

	struct FString STATIC_GetRegionName(MordhauOnlineSubsystem_EServerRegion Region);

	struct FText STATIC_GetRegionDisplayName(MordhauOnlineSubsystem_EServerRegion Region);

	MordhauOnlineSubsystem_EServerRegion STATIC_GetRegion(const struct FString& RegionName);

	int STATIC_GetRankFromXP(int XP);

	class AMordhauEquipment* STATIC_GetRandomWeapon(int* ID, const struct FSkillsCustomization& SkillsCustomization, Mordhau_EItemRarity MaxRarity);

	class UUpperChestWearable* STATIC_GetRandomUpperChestWearable(int* ID, const struct FSkillsCustomization& SkillsCustomization, Mordhau_EItemRarity MaxRarity);

	void STATIC_GetRandomSkin(int* ID, struct FEquipmentSkinEntry* Skin, class AMordhauEquipment* Equipment, Mordhau_EItemRarity MaxRarity);

	class UMordhauWearable* STATIC_GetRandomShouldersWearable(int* ID, class UUpperChestWearable* UpperChestWearable, const struct FSkillsCustomization& SkillsCustomization, Mordhau_EItemRarity MaxRarity);

	class AMordhauEquipment* STATIC_GetRandomRangedWeapon(int* ID, const struct FSkillsCustomization& SkillsCustomization, Mordhau_EItemRarity MaxRarity);

	class AMordhauEquipment* STATIC_GetRandomMeleeWeapon(int* ID, const struct FSkillsCustomization& SkillsCustomization, Mordhau_EItemRarity MaxRarity);

	class UMordhauWearable* STATIC_GetRandomLowerChestWearable(int* ID, class UUpperChestWearable* UpperChestWearable, const struct FSkillsCustomization& SkillsCustomization, Mordhau_EItemRarity MaxRarity);

	class ULegsWearable* STATIC_GetRandomLegsWearable(int* ID, const struct FSkillsCustomization& SkillsCustomization, Mordhau_EItemRarity MaxRarity);

	class UHeadWearable* STATIC_GetRandomHeadWearable(int* ID, const struct FSkillsCustomization& SkillsCustomization, Mordhau_EItemRarity MaxRarity);

	class UMordhauWearable* STATIC_GetRandomHandsWearable(int* ID, class UArmsWearable* ArmsWearable, const struct FSkillsCustomization& SkillsCustomization, Mordhau_EItemRarity MaxRarity);

	class UMordhauWearable* STATIC_GetRandomFeetWearable(int* ID, class ULegsWearable* LegsWearable, const struct FSkillsCustomization& SkillsCustomization, Mordhau_EItemRarity MaxRarity);

	struct FVector STATIC_GetRandomFaceCustomizationVector(float RandomExponent);

	class AMordhauEquipment* STATIC_GetRandomEquipment(int* ID, const struct FSkillsCustomization& SkillsCustomization, Mordhau_EItemRarity MaxRarity);

	class UMordhauWearable* STATIC_GetRandomCoifWearable(int* ID, class UHeadWearable* HeadWearable, const struct FSkillsCustomization& SkillsCustomization, Mordhau_EItemRarity MaxRarity);

	class UArmsWearable* STATIC_GetRandomArmsWearable(int* ID, class UUpperChestWearable* UpperChestWearable, const struct FSkillsCustomization& SkillsCustomization, Mordhau_EItemRarity MaxRarity);

	struct FDateTime STATIC_GetPlayFabTimestamp();

	struct FPlayFabPlayer STATIC_GetPlayFabPlayer();

	struct FString STATIC_GetPlayFabId();

	struct FString STATIC_GetPlayFabEntityID();

	class UPlayFabAPI* STATIC_GetPlayFabAPI();

	TArray<int> STATIC_GetPlayerCountFromGameModeMetadataClass(class UClass* MetadataClass);

	class UTexture2D* STATIC_GetPlayerAvatar(const struct FPlayFabPlayer& Player);

	struct FString STATIC_GetPlatformName(MordhauOnlineSubsystem_EPlatform Platform);

	MordhauOnlineSubsystem_EPlatform STATIC_GetPlatformByName(const struct FString& PlatformName);

	MordhauOnlineSubsystem_EPlatform STATIC_GetPlatform();

	float STATIC_GetPing(class UObject* WorldContextObject, bool bUseMedian);

	struct FTransform STATIC_GetPhysicsBodyWorldTransform(class USkeletalMeshComponent* MeshComponent, const struct FName& BoneName);

	struct FBox STATIC_GetPhysicsBodyBounds(class USkeletalMeshComponent* MeshComponent, const struct FName& BoneName);

	int STATIC_GetPerksCost(const struct FCharacterProfile& Profile);

	TArray<class UPerk*> STATIC_GetPerks(const struct FCharacterProfile& Profile);

	int STATIC_GetPerforceRevision();

	int STATIC_GetPacketsLost(class UObject* WorldContextObject);

	struct FString STATIC_GetOSVersion();

	bool STATIC_GetNotifyServerReceivedClientData(class UCharacterMovementComponent* CMC);

	float STATIC_GetNormalizedTime(float Start, float End, float Current);

	struct FVector2D STATIC_GetMousePosition(class APlayerController* Controller);

	class UMordhauStats* STATIC_GetMordhauStats();

	class UMordhauSingleton* STATIC_GetMordhauSingleton();

	class UMordhauInventory* STATIC_GetMordhauInventory();

	class UMordhauInput* STATIC_GetMordhauInput();

	class AMordhauHUD* STATIC_GetMordhauHUD(class UObject* WorldContextObject);

	class UMordhauGameUserSettings* STATIC_GetMordhauGameUserSettings();

	class AMordhauGameSession* STATIC_GetMordhauGameSession(class UObject* WorldContextObject);

	int STATIC_GetMaxIndexWithDraw(TArray<int> inArray, bool* bFoundDraw);

	struct FString STATIC_GetMapName(class UObject* WorldContextObject);

	struct FMapInfo STATIC_GetMapInfo(class UObject* WorldContextObject, const struct FString& MapPath);

	class UPrimitiveComponent* STATIC_GetLODParentPrimitive(class UPrimitiveComponent* Comp);

	struct FString STATIC_GetLocationName(MordhauOnlineSubsystem_EServerLocation Location);

	struct FText STATIC_GetLocationDisplayName(MordhauOnlineSubsystem_EServerLocation Location);

	MordhauOnlineSubsystem_EServerLocation STATIC_GetLocation(const struct FString& LocationName);

	int STATIC_GetLocalShortID(class AMordhauPlayerState* PlayerState);

	uint32_t STATIC_GetLocalNetworkVersion();

	float STATIC_GetLastReceiveTime(class UObject* WorldContextObject);

	bool STATIC_GetIsUsingController();

	bool STATIC_GetIsPeasant(const struct FCharacterProfile& Profile);

	MordhauOnlineSubsystem_EIngameEvent STATIC_GetIngameEvent(class UObject* WorldContextObject);

	struct FBoxSphereBounds STATIC_GetImportedBounds(class USkeletalMeshComponent* SkeletalMeshComponent);

	int STATIC_GetGameServerGamePort();

	struct FString STATIC_GetGamePortName();

	int STATIC_GetFaceIndex(const struct FHitResult& Hit);

	struct FText STATIC_getErrorText(const struct FString& ErrorString);

	int STATIC_GetEnumValue(const struct FString& EnumName, const struct FString& EnumKey);

	struct FString STATIC_GetEnumKey(const struct FString& EnumName, int EnumValue);

	struct FText STATIC_GetDurationText(int Seconds);

	class UMordhauWearable* STATIC_GetDefaultWearable(class UClass* FromClass);

	void STATIC_GetDefaultObjectCopy(class UClass* FromClass, class UObject** ObjectCopy);

	class UObject* STATIC_GetDefaultObject(class UClass* FromClass);

	class UBadge* STATIC_GetDefaultBadge(class UClass* BadgeClass);

	void STATIC_GetDefaultActorCopy(class UClass* FromClass, class AActor** ActorCopy);

	class AActor* STATIC_GetDefaultActor(class UClass* FromClass);

	struct FDateTime STATIC_GetDateTimeFromUnixTimestamp(int Timestamp);

	struct FVector2D STATIC_GetCustomConfigVar_Vector2D(const struct FString& SectionName, const struct FString& VariableName, bool* IsValid);

	struct FVector STATIC_GetCustomConfigVar_Vector(const struct FString& SectionName, const struct FString& VariableName, bool* IsValid);

	struct FString STATIC_GetCustomConfigVar_String(const struct FString& SectionName, const struct FString& VariableName, bool* IsValid);

	struct FRotator STATIC_GetCustomConfigVar_Rotator(const struct FString& SectionName, const struct FString& VariableName, bool* IsValid);

	int STATIC_GetCustomConfigVar_Int(const struct FString& SectionName, const struct FString& VariableName, bool* IsValid);

	float STATIC_GetCustomConfigVar_Float(const struct FString& SectionName, const struct FString& VariableName, bool* IsValid);

	struct FLinearColor STATIC_GetCustomConfigVar_Color(const struct FString& SectionName, const struct FString& VariableName, bool* IsValid);

	bool STATIC_GetCustomConfigVar_Bool(const struct FString& SectionName, const struct FString& VariableName, bool* IsValid);

	TArray<struct FString> STATIC_GetCustomConfigVar_Array(const struct FString& SectionName, const struct FString& VariableName, int* ArraySize);

	struct FString STATIC_GetCurrentPlatformName();

	int STATIC_GetCurrentFrameBP(class UObject* WorldContextObject);

	int STATIC_GetCurrentFrame(class UWorld* World);

	float STATIC_GetCurrentDemoTime(class UWorld* World);

	struct FString STATIC_GetConsoleVariableString(const struct FString& VariableName);

	int STATIC_GetConsoleVariableInt(const struct FString& VariableName);

	float STATIC_GetConsoleVariableFloat(const struct FString& VariableName);

	struct FVector STATIC_GetComponentsBoundingBoxInActorSpace(class AActor* Actor);

	struct FVector STATIC_GetCentroid(TArray<struct FVector> Points);

	bool STATIC_GetCanEverAffectNavigation(class USceneComponent* SceneComp);

	int STATIC_GetBuildVersion();

	struct FVector STATIC_GetBoxCenter(const struct FBox& Box);

	struct FBox STATIC_GetBoundingBoxOfBoneInfluence(class USkeletalMeshComponent* MeshComponent, TArray<struct FName> Bones, float WeightThreshold);

	struct FString STATIC_GetBeaconPortName();

	struct FString STATIC_GetBaseFilename(const struct FString& InPath, bool bRemovePath);

	struct FString STATIC_GetBannedPerkNames(const struct FCharacterProfile& Profile, class AGameStateBase* GameState);

	struct FString STATIC_GetBannedEquipmentNames(const struct FCharacterProfile& Profile, class AGameStateBase* GameState);

	struct FVector STATIC_GetAxisAngleFromRotator(const struct FRotator& Rot, float* OutAngle);

	class AActor* STATIC_GetAttachParentActor(class AActor* Actor);

	class UArchetype* STATIC_GetArchetypeObject(const struct FCharacterProfile& Profile);

	TArray<class UClass*> STATIC_GetAllWearableClassesForSlotExhaustive(Mordhau_EWearableSlot Slot);

	void STATIC_FSmoothDamp(float* Current, float Target, float* CurrentVelocity, float SmoothTime, float DeltaTime, float MaxSpeed);

	struct FText STATIC_FormatText(const struct FText& Text);

	bool STATIC_ForceValidCharacterProfile(const struct FCharacterProfile& Profile, struct FCharacterProfile* ForceValidatedProfile, bool bValidateInventory);

	void STATIC_ForceReplicationUpdate(class UCharacterMovementComponent* CMC);

	void STATIC_FlushPlayerControllerPressedKeys(class APlayerController* Controller);

	void STATIC_FlashWindow();

	float STATIC_FInterpToSeparate(float Current, float Target, float DeltaTime, float IncreaseSpeed, float DecreaseSpeed);

	float STATIC_FInterpConstantToSeparate(float Current, float Target, float DeltaTime, float IncreaseSpeed, float DecreaseSpeed);

	bool STATIC_FindTeleportSpot(class AActor* Actor, const struct FVector& InLocation, const struct FRotator& InRotation, struct FVector* OutLocation);

	struct FPlayFabPlayer STATIC_FindPlayFabPlayer(const struct FString& PlayerNameOrPlayFabID);

	class AMordhauPlayerState* STATIC_FindPlayerStateWithoutLocalID(const struct FString& PlayerNameOrPlayFabID);

	class AMordhauPlayerState* STATIC_FindPlayerState(const struct FString& PlayerNameOrPlayFabID);

	bool STATIC_FindCircleIntersectionPoints(const struct FVector2D& CenterA, float RadiusA, const struct FVector2D& CenterB, float RadiusB, struct FVector2D* PointA, struct FVector2D* PointB);

	class UObject* STATIC_FindByFunctionTyped(TArray<class UObject*> Array, const struct FScriptDelegate& FuncDel, class UClass* Class);

	class UObject* STATIC_FindByFunction(TArray<class UObject*> Array, const struct FScriptDelegate& FuncDel);

	struct FRotator STATIC_FindBetween(const struct FVector& A, const struct FVector& B);

	TArray<class UObject*> STATIC_FilterArrayByFunction(TArray<class UObject*> Array, const struct FScriptDelegate& FuncDel, class UClass* Class);

	void STATIC_FakeTickComponent(class USceneComponent* Component, float DeltaTime);

	bool STATIC_Equal_PlayFabPlayer(const struct FPlayFabPlayer& A, const struct FPlayFabPlayer& B);

	struct FString STATIC_EncodeByteArrayToBase64String(TArray<unsigned char> Array);

	void STATIC_DrawText(class UCanvas* Canvas, class UFont* Font, int Size, const struct FString& Text, const struct FVector2D& Position, const struct FLinearColor& TextColor, float Kerning, const struct FLinearColor& ShadowColor, const struct FVector2D& ShadowOffset, bool bCentreX, bool bCentreY, bool bOutlined, const struct FLinearColor& OutlineColor);

	bool STATIC_DoesProfileContainBannedPerks(const struct FCharacterProfile& Profile, class AGameStateBase* GameState);

	bool STATIC_DoesProfileContainBannedEquipment(const struct FCharacterProfile& Profile, class AGameStateBase* GameState);

	void STATIC_CopyToClipboard(const struct FString& MessageToCopy);

	void STATIC_ConvertStringSteamIDsToPlayFabIDs(TArray<struct FString> InSteamIDArray, const struct FString& Filename, const struct FScriptDelegate& Delegate);

	struct FString STATIC_ConvertRelativePathToFull(const struct FString& Path);

	void STATIC_ConvertColorArrayToJPEG(int InSizeX, int InSizeY, TArray<struct FColor> InImageData, TArray<unsigned char>* CompressedData, bool* bSuccess, int ImageQuality);

	struct FString STATIC_Conv_SoftObjectPathToString(const struct FSoftObjectPath& SoftObjectPath);

	bool STATIC_ConsumeBudget(class AAdvancedCharacter* Character, Mordhau_EBudgetType BudgetType, bool bSkipInvisible, float Duration, float DistanceCutoff, bool bForce);

	int STATIC_ComputePointsLeft(const struct FCharacterProfile& Profile);

	bool STATIC_CompressData(TArray<unsigned char> InData, struct FString* OutData);

	bool STATIC_CompareGearCustomization(const struct FCharacterGearCustomization& First, const struct FCharacterGearCustomization& Second);

	bool STATIC_CompareFaceCustomization(const struct FFaceCustomization& First, const struct FFaceCustomization& Second);

	bool STATIC_CompareEquipmentCustomization(const struct FEquipmentCustomization& First, const struct FEquipmentCustomization& Second);

	bool STATIC_CompareAppearanceCustomization(const struct FAppearanceCustomization& First, const struct FAppearanceCustomization& Second);

	struct FVector STATIC_ClosestPointOnLine(const struct FVector& LineStart, const struct FVector& LineEnd, const struct FVector& Point);

	struct FString STATIC_Capitalize(const struct FString& String);

	bool STATIC_CallFunctionByNameWithArgs(const struct FString& Str, class UObject* Executor);

	int STATIC_CalculateGCD(int ValueA, int ValueB);

	float STATIC_CalculateAngle2D(const struct FVector& Direction, float Yaw);

	void STATIC_AwardTeamfightMMR(bool bIsWin, const struct FString& PlayFabId, int OtherTeamMMR, int* NewMMR);

	void STATIC_AwardDuelMMR(const struct FString& WinnerID, const struct FString& LoserID, int* NewWinnerMMR, int* NewLoserMMR);

	bool STATIC_AreProfilesEqual(const struct FCharacterProfile& First, const struct FCharacterProfile& Second);

	bool STATIC_AreActorsFromSameLevel(class AActor* ActorA, class AActor* ActorB);

	float STATIC_AngularDistance(const struct FRotator& A, const struct FRotator& B);

	float STATIC_ActorGetDistanceToCollision(class AActor* Actor, const struct FVector& Point, struct FVector* PointOnCollision, TEnumAsByte<Engine_ECollisionChannel> TraceChannel);

};



