// Class Mordhau.DismemberableComponent

// 0x0270 (FullSize[0x0320] - InheritedSize[0x00B0])

class UDismemberableComponent : public UActorComponent

{

public:

	TWeakObjectPtr<class AActor>                       QueuedDismemberAgent;                                      // 0x00B0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TWeakObjectPtr<class ASeparatedBodyPart>           SeparatedHead;                                             // 0x00B8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TArray<TWeakObjectPtr<class ASeparatedBodyPart>>   SeparatedBodyParts;                                        // 0x00C0(0x0010) (ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TMap<struct FName, TWeakObjectPtr<class AActor>>   AttachedGoreMeshes;                                        // 0x00D0(0x0050) (UObjectWrapper, NativeAccessSpecifierPublic)

	unsigned char                                      DismemberedBones[0x50];                                    // 0x0120(0x0050) UNKNOWN PROPERTY: SetProperty

	struct FWoundInfo                                  DismemberWoundInfo;                                        // 0x0170(0x0014) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_EAK0[0x4];                                     // 0x0184(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	class UClass*                                      BodyPart;                                                  // 0x0188(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class USoundCue*                                   DismembermentGore;                                         // 0x0190(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class USoundCue*                                   BluntDismembermentGore;                                    // 0x0198(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UClass*                                      OutGoreMeshBlunt;                                          // 0x01A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UClass*                                      OutGoreMesh;                                               // 0x01A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UClass*                                      OutGoreMeshNeck;                                           // 0x01B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UParticleSystem*                             LimbExplosionParticle;                                     // 0x01B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              MaxDistFromBoneForAnyDismember;                            // 0x01C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              MaxAngleDistFromBoneForAnyDismember;                       // 0x01C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              MaxDistFromBoneForFullDismember;                           // 0x01C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              MaxAngleDistFromBoneForFullDismember;                      // 0x01CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              RagdollMaxDistFromBoneForAnyDismember;                     // 0x01D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              RagdollMaxDistFromBoneForFullDismember;                    // 0x01D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TMap<struct FName, float>                          MinimumDamageToExplode;                                    // 0x01D8(0x0050) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	TMap<struct FName, float>                          MinimumDamageToDismember;                                  // 0x0228(0x0050) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	TMap<struct FName, float>                          MinimumDamageToPartialDismember;                           // 0x0278(0x0050) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	struct FVector2D                                   DismemberArmsSpineYawPitchLimit;                           // 0x02C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      DismemberableBones[0x50];                                  // 0x02D0(0x0050) UNKNOWN PROPERTY: SetProperty





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.DismemberableComponent");

		return ptr;

	}







	bool TryDismember(const struct FName& bone, const struct FVector& Point, class AMordhauWeapon* Weapon, Mordhau_EAttackMove Move, bool bIsRagdollDismember);

	bool QueueDismember(const struct FName& bone, bool bIsDismemberPartial, bool bIsBluntForce, const struct FVector& Force, class AActor* Agent);

	bool ProcessQueuedDismemberment();

	void OnCharacterCameraStyleChanged(class AMordhauCharacter* Character);

	bool IsBoneDismembered(const struct FName& bone);

	class ASeparatedBodyPart* Dismember(struct FDismemberedBoneData* InDismemberedBoneData);

	bool CanDismember(const struct FName& bone);

};



