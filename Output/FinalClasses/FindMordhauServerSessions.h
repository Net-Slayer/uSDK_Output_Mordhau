#pragma once
#include "CoreMinimal.h"
#include "Mordhau.h"
#include "FindMordhauServerSessions.generated.h"
// Class Mordhau.FindMordhauServerSessions
class MORDHAU_API UFindMordhauServerSessions  :  public UBlueprintAsyncActionBase
{
GENERATED_BODY()
public:
// Variables
UPROPERTY(Instanced, BlueprintAssignable)
	struct FScriptMulticastDelegate onSuccess; // (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
UPROPERTY(Instanced, BlueprintAssignable)
	struct FScriptMulticastDelegate onFailure; // (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
UPROPERTY()
	class UWorld* World; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
UPROPERTY()
	Mordhau_EServerList ServerList; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
UPROPERTY()
	int MaxResults; // (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
UPROPERTY()
	struct FFindServerSessionsFilter Filter; // (NativeAccessSpecifierPrivate)
	// Functions
UFUNCTION(BlueprintCallable, BlueprintPure)
	static bool IsVacSecured(const struct FServerSearchResult& Result);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static bool IsRecentServer(const struct FServerSearchResult& Result);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static bool IsRanked(const struct FServerSearchResult& Result);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static bool IsPasswordProtected(const struct FServerSearchResult& Result);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static bool IsOfficial(const struct FServerSearchResult& Result);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static bool IsModded(const struct FServerSearchResult& Result);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static bool IsMatchmaking(const struct FServerSearchResult& Result);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static bool IsFavoriteServer(const struct FServerSearchResult& Result);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static bool IsDevBuild(const struct FServerSearchResult& Result);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static struct FString GetServerName(const struct FServerSearchResult& Result);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static Mordhau_EServerList GetServerList(const struct FServerSearchResult& Result);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static struct FString GetServerID(const struct FServerSearchResult& Result);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static struct FString GetServerAddress(const struct FServerSearchResult& Result);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static MordhauOnlineSubsystem_EServerRegion GetRegion(const struct FServerSearchResult& Result);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static TArray<struct FString> GetPlayers(const struct FServerSearchResult& Result);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static int GetPing(const struct FServerSearchResult& Result);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static TArray<int> GetMods(const struct FServerSearchResult& Result);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static int GetMaxPlayers(const struct FServerSearchResult& Result);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static struct FString GetMapName(const struct FServerSearchResult& Result);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static struct FString GetGameMode(const struct FServerSearchResult& Result);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static int GetCurrentPlayers(const struct FServerSearchResult& Result);
UFUNCTION(BlueprintCallable)
	static class UFindMordhauServerSessions* FindMordhauServerSessions(class UObject* WorldContextObject, Mordhau_EServerList ServerList, int MaxResults, const struct FFindServerSessionsFilter& Filter);
UFUNCTION(BlueprintCallable, BlueprintPure)
	static bool AllowsJoin(const struct FServerSearchResult& Result);
};
