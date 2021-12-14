// Class Mordhau.PenalizeForLeavingActiveMatch

// 0x0088 (FullSize[0x00B8] - InheritedSize[0x0030])

class UPenalizeForLeavingActiveMatch : public UBlueprintAsyncActionBase

{

public:

	struct FScriptMulticastDelegate                    onSuccess;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	struct FScriptMulticastDelegate                    onFailure;                                                 // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_M8HU[0x8];                                     // 0x0050(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	struct FPlayFabPlayerEntity                        PlayerEntity;                                              // 0x0058(0x0020) (HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	class UGetMatchmakingPenalty*                      GetMatchmakingPenalty;                                     // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	struct FString                                     GroupName;                                                 // 0x0080(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	struct FString                                     GroupID;                                                   // 0x0090(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	int                                                LeaveCount;                                                // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	unsigned char                                      UnknownData_AS1J[0x4];                                     // 0x00A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	int64_t                                            LeaveTimestamp;                                            // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	int64_t                                            BanEndTimestamp;                                           // 0x00B0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.PenalizeForLeavingActiveMatch");

		return ptr;

	}







	class UPenalizeForLeavingActiveMatch* STATIC_PenalizeForLeavingActiveMatch(const struct FPlayFabPlayerEntity& PlayerEntity);

	void OnGetMatchmakingPenaltySuccess(const struct FPlayFabPlayerEntity& InPlayerEntity, int InLeaveCount, const struct FDateTime& InLeaveTime, const struct FDateTime& InBanEndTime);

	void OnGetMatchmakingPenaltyFailure(const struct FPlayFabPlayerEntity& InPlayerEntity, int InLeaveCount, const struct FDateTime& InLeaveTime, const struct FDateTime& InBanEndTime);

};



