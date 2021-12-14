// Class Mordhau.CustomizationReplicationActor

// 0x01F8 (FullSize[0x0418] - InheritedSize[0x0220])

class ACustomizationReplicationActor : public AActor

{

public:

	bool                                               bHasReplicatedAnything;                                    // 0x0220(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	unsigned char                                      LastRebuiltVersionTracker;                                 // 0x0221(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	unsigned char                                      UnknownData_S9BD[0x6];                                     // 0x0222(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	struct FCharacterProfile                           LastAssignedProfile;                                       // 0x0228(0x00B8) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

	TArray<TWeakObjectPtr<class AMordhauCharacter>>    RegisteredCharacters;                                      // 0x02E0(0x0010) (ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bWasEverAssigned;                                          // 0x02F0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bWillDestroyOnUnregister;                                  // 0x02F1(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_RKNK[0x6];                                     // 0x02F2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	class USkeletalMesh*                               Cached1PMesh;                                              // 0x02F8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class USkeletalMesh*                               Cached1PDeadMesh;                                          // 0x0300(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class USkeletalMesh*                               CachedUnifiedMesh;                                         // 0x0308(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FRepFaceArrayShortWithVersion               ReplicatedFaceBonesTranslate;                              // 0x0310(0x0018) (Net, RepNotify, NativeAccessSpecifierPublic)

	struct FRepFaceArrayShortWithVersion               ReplicatedFaceBonesRotate;                                 // 0x0328(0x0018) (Net, RepNotify, NativeAccessSpecifierPublic)

	struct FRepFaceArrayShortWithVersion               ReplicatedFaceBonesScale;                                  // 0x0340(0x0018) (Net, RepNotify, NativeAccessSpecifierPublic)

	struct FRepArrayAppearanceWithVersion              ReplicatedAppearanceCustomization;                         // 0x0358(0x0030) (Net, RepNotify, NativeAccessSpecifierPublic)

	struct FRepArraySkillsWithVersion                  ReplicatedSkillsCustomization;                             // 0x0388(0x0008) (Net, RepNotify, NoDestructor, NativeAccessSpecifierPublic)

	struct FRepArrayByteWithVersion                    ReplicatedDefaultEquipmentId;                              // 0x0390(0x0018) (Net, RepNotify, NativeAccessSpecifierPublic)

	TArray<class UClass*>                              DefaultEquipment;                                          // 0x03A8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FRepArrayByteWithVersion                    ReplicatedWearableId;                                      // 0x03B8(0x0018) (Net, RepNotify, NativeAccessSpecifierPublic)

	struct FRepArrayByteWithVersion                    ReplicatedWearableColor1;                                  // 0x03D0(0x0018) (Net, RepNotify, NativeAccessSpecifierPublic)

	struct FRepArrayByteWithVersion                    ReplicatedWearableColor2;                                  // 0x03E8(0x0018) (Net, RepNotify, NativeAccessSpecifierPublic)

	struct FRepArrayByteWithVersion                    ReplicatedWearablePattern;                                 // 0x0400(0x0018) (Net, RepNotify, NativeAccessSpecifierPublic)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.CustomizationReplicationActor");

		return ptr;

	}







	void UpdateCharacterProfile(class AMordhauCharacter* Character);

	void UnregisterCharacter(class AMordhauCharacter* Character);

	void TriggerUpdateIfUpToDate();

	void RegisterCharacter(class AMordhauCharacter* Character);

	void OnRep_ReplicatedWearablePattern();

	void OnRep_ReplicatedWearableId();

	void OnRep_ReplicatedWearableColor2();

	void OnRep_ReplicatedWearableColor1();

	void OnRep_ReplicatedSkillsCustomization();

	void OnRep_ReplicatedFaceBonesTranslate();

	void OnRep_ReplicatedFaceBonesScale();

	void OnRep_ReplicatedFaceBonesRotate();

	void OnRep_ReplicatedDefaultEquipmentId();

	void OnRep_ReplicatedAppearanceCustomization();

	bool IsUpToDate();

	void AssignDataFromProfile(const struct FCharacterProfile& Profile);

};



