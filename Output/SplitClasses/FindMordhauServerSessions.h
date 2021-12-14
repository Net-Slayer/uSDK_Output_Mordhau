// Class Mordhau.FindMordhauServerSessions

// 0x00A0 (FullSize[0x00D0] - InheritedSize[0x0030])

class UFindMordhauServerSessions : public UBlueprintAsyncActionBase

{

public:

	struct FScriptMulticastDelegate                    onSuccess;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	struct FScriptMulticastDelegate                    onFailure;                                                 // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	class UWorld*                                      World;                                                     // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	Mordhau_EServerList                                ServerList;                                                // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	unsigned char                                      UnknownData_EI83[0x3];                                     // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	int                                                MaxResults;                                                // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	struct FFindServerSessionsFilter                   Filter;                                                    // 0x0060(0x0048) (NativeAccessSpecifierPrivate)

	unsigned char                                      UnknownData_HM3J[0x28];                                    // 0x00A8(0x0028) MISSED OFFSET (PADDING)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.FindMordhauServerSessions");

		return ptr;

	}







	bool STATIC_IsVacSecured(const struct FServerSearchResult& Result);

	bool STATIC_IsRecentServer(const struct FServerSearchResult& Result);

	bool STATIC_IsRanked(const struct FServerSearchResult& Result);

	bool STATIC_IsPasswordProtected(const struct FServerSearchResult& Result);

	bool STATIC_IsOfficial(const struct FServerSearchResult& Result);

	bool STATIC_IsModded(const struct FServerSearchResult& Result);

	bool STATIC_IsMatchmaking(const struct FServerSearchResult& Result);

	bool STATIC_IsFavoriteServer(const struct FServerSearchResult& Result);

	bool STATIC_IsDevBuild(const struct FServerSearchResult& Result);

	struct FString STATIC_GetServerName(const struct FServerSearchResult& Result);

	Mordhau_EServerList STATIC_GetServerList(const struct FServerSearchResult& Result);

	struct FString STATIC_GetServerID(const struct FServerSearchResult& Result);

	struct FString STATIC_GetServerAddress(const struct FServerSearchResult& Result);

	MordhauOnlineSubsystem_EServerRegion STATIC_GetRegion(const struct FServerSearchResult& Result);

	TArray<struct FString> STATIC_GetPlayers(const struct FServerSearchResult& Result);

	int STATIC_GetPing(const struct FServerSearchResult& Result);

	TArray<int> STATIC_GetMods(const struct FServerSearchResult& Result);

	int STATIC_GetMaxPlayers(const struct FServerSearchResult& Result);

	struct FString STATIC_GetMapName(const struct FServerSearchResult& Result);

	struct FString STATIC_GetGameMode(const struct FServerSearchResult& Result);

	int STATIC_GetCurrentPlayers(const struct FServerSearchResult& Result);

	class UFindMordhauServerSessions* STATIC_FindMordhauServerSessions(class UObject* WorldContextObject, Mordhau_EServerList ServerList, int MaxResults, const struct FFindServerSessionsFilter& Filter);

	bool STATIC_AllowsJoin(const struct FServerSearchResult& Result);

};



