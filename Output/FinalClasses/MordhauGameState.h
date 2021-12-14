#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "MordhauGameState.generated.h"
// Class Mordhau.MordhauGameState
class MORDHAU_API AMordhauGameState  :  public AGameState
{
GENERATED_BODY()
public:
// Variables
UPROPERTY()
	struct FGameStateLastDemotableTickFunction LastDemotableTickFunction; // (NativeAccessSpecifierPrivate)
UPROPERTY()
	struct FGameStatePostPhysicsTickFunction PostPhysicsTickFunction; // (NativeAccessSpecifierPrivate)
UPROPERTY()
	TArray<TWeakObjectPtr<class AAdvancedCharacter>> CharacterTemporaryArrayCached; // (ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
UPROPERTY()
	TArray<float> NextBudgetTime; // (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
UPROPERTY()
	TArray<class AParticleSystemActor*> ParticleSystemActors; // (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
UPROPERTY()
	TArray<class AAdvancedCharacter*> CharacterDistanceArray; // (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
UPROPERTY()
	TMap<class AAdvancedCharacter*, int> CharacterToDistanceArray; // (NativeAccessSpecifierPrivate)
	uint8 CharacterPendingForDistanceArray[0x50]; // UNKNOWN PROPERTY: SetProperty
UPROPERTY()
	TArray<TWeakObjectPtr<class AAdvancedCharacter>> RagdollDistanceArray; // (ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
UPROPERTY()
	TMap<int64_t, class USkeletalMesh*> EquipmentMeshCacheMap; // (NativeAccessSpecifierPrivate)
UPROPERTY()
	class APreSkinnedPoseOracle* PreSkinnedPoseOracle; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
UPROPERTY()
	double NextLoginTime; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
UPROPERTY()
	double LoginAttemptInterval; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
UPROPERTY()
	int LoginAttempts; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
UPROPERTY()
	int MaxLoginAttempts; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
UPROPERTY()
	double NextTokenRefreshTime; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
UPROPERTY()
	double TokenRefreshInterval; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
UPROPERTY()
	struct FString MatchmakingTicketID; // (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
UPROPERTY()
	struct FString MatchmakingMatchID; // (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
UPROPERTY()
	bool bAreStatsAvailable; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
UPROPERTY()
	bool bIsInventoryAvailable; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
UPROPERTY()
	TArray<class AAdvancedCharacter*> ImmutableLivingCharacterArray; // (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY()
	TArray<struct FLineTraceMemoryEntry> AttackTracesMemory; // (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UClass* MetaData; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bDisableClientStats; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bDisableChat; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bDisableScoreboard; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bAllowHealthRegen; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bDoNotLimitPlaceables; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bOverrideArmorSpeedAndAccelerationFactor; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float OverrideArmorSpeedFactor; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float OverrideArmorAccelerationFactor; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bAllPlayersHaveMarkers; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8 BannedEquipment[0x50]; // UNKNOWN PROPERTY: SetProperty
	uint8 BannedPerks[0x50]; // UNKNOWN PROPERTY: SetProperty
UPROPERTY(BlueprintReadOnly, Replicated, ReplicatedUsing="OnRep_MOTDURL")
	struct FString MOTDURL; // (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, RepNotify, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
	bool bIsThirdPersonCameraDisabled; // (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
	float ConstrainAspectRatio; // (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
	bool bDisableClientMods; // (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int MatchDurationMax; // (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(Replicated, ReplicatedUsing="OnRep_ReplicatedMatchDurationMax")
	int ReplicatedMatchDurationMax; // (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TMap<int, class AMapCameraActor*> MapCameraActors; // (BlueprintVisible, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float DefaultEndMatchMapChangeTime; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
	float EndMatchMapChangeEnd; // (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float PostMatchScreenDelay; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float DefaultWarmupTime; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bSkipWarmupInDevBuild; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bBlockInputInWarmup; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int MinPlayersToStart; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
	float WarmupEnd; // (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bDoNotGoToNextMapOnMatchEnd; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bDoNotShowPostMatchScreen; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
	bool bAllowSpawning; // (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	uint8 TeamCount; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
	TArray<float> TeamScores; // (Edit, BlueprintVisible, Net, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsTeamMode; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bEnforceTeamColors; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<struct FLinearColor> TeamColors; // (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<struct FString> TeamNames; // (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<struct FLinearColor> SecondaryTeamColors; // (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<class AControlPoint*> AllCapturePoints; // (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int Team1CapturePoints; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int Team2CapturePoints; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bUsePushTopologicalProgress; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	uint8 PushTopologicalProgressAttackingTeam; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float Team1TopologicalProgress; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float Team2TopologicalProgress; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<struct FCapturePointGroup> CapturePointTopologicalOrdering; // (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TMap<struct FName, struct FGroupSoundGroup> SoundGroups; // (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float LastBotVoiceCommandTime; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float LastBotEmoteTime; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float LastBotClimbTime; // (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UPROPERTY(Export)
	TArray<TWeakObjectPtr<class UDecalComponent>> BloodDecalsArray; // (ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	// Functions
UFUNCTION()
	void UpdateSoundGroups();
UFUNCTION(BlueprintCallable)
	void UpdateCapturePointData();
UFUNCTION()
	void UnregisterParticleSystemActor(class AParticleSystemActor* ParticleActor);
UFUNCTION()
	void StoreEquipmentMeshInCache(class USkeletalMesh* Mesh, int ID, uint8 Skin, uint8 Part1, uint8 Part2, uint8 Part3, bool bUseAuxiliaryMesh);
UFUNCTION()
	bool ShouldTickThisFrame(class AAdvancedCharacter* Character);
UFUNCTION()
	bool ShouldTickAnimationThisFrame(class AAdvancedCharacter* Character);
UFUNCTION(BlueprintCallable, BlueprintPure)
	bool ShouldPaintGearWithTeamColors() const;
UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	bool ShouldBlockPawnInput();
UFUNCTION(BlueprintCallable)
	void ReserveCharacterRagdoll(class AAdvancedCharacter* Character);
UFUNCTION()
	void RemoveCharacterFromDistanceArray(class AAdvancedCharacter* Character);
UFUNCTION()
	void RegisterParticleSystemActor(class AParticleSystemActor* ParticleActor);
UFUNCTION()
	void PostPhysicsTick(float DeltaTime);
UFUNCTION(BlueprintImplementableEvent)
	void OnReplicatedMOTD();
UFUNCTION(BlueprintCallable)
	void OnRep_ReplicatedMatchDurationMax();
UFUNCTION(BlueprintCallable)
	void OnRep_MOTDURL();
UFUNCTION(BlueprintImplementableEvent)
	void LocalPlayerChangedTeam();
UFUNCTION()
	bool LineTraceCharacters(const struct FVector& LineStart, const struct FVector& LineEnd, TArray<struct FHitResult>* Results);
UFUNCTION()
	void LastDemotableTick(float DeltaTime);
UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	bool IsFriendly(class AActor* ActorA, class AActor* ActorB, bool bIsFriendlyIfSelf);
UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	struct FString GetTeamName(int Team);
UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	struct FLinearColor GetTeamColor(int Team);
UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	struct FLinearColor GetSecondaryTeamColor(int Team);
UFUNCTION(BlueprintCallable)
	TArray<int> GetPlayerCountsPerTeam(bool bOnlyLiving, bool bOnlyWithValidProfiles);
UFUNCTION()
	class USkeletalMesh* GetEquipmentMeshFromCache(int ID, uint8 Skin, uint8 Part1, uint8 Part2, uint8 Part3, bool bUseAuxiliaryMesh);
UFUNCTION()
	int64_t GetEquipmentCacheHash(int ID, uint8 Skin, uint8 Part1, uint8 Part2, uint8 Part3, bool bUseAuxiliaryMesh);
UFUNCTION(BlueprintCallable)
	int GetCurrentFrame();
UFUNCTION()
	class AAdvancedCharacter* GetCharacterByDistanceRank(int DistanceRank);
UFUNCTION()
	struct FTransform GetBindPoseTransform(class USkeletalMesh* Mesh, const struct FName& SocketName);
UFUNCTION(BlueprintCallable)
	class AMapCameraActor* GetAppropriateMapCameraActor(class APlayerController* Controller);
UFUNCTION(BlueprintCallable)
	bool CanPlayerJoinTeam(class AMordhauPlayerState* Player, int Team);
UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	bool CanImmediatelyChangeProfile(class AController* Controller);
};
