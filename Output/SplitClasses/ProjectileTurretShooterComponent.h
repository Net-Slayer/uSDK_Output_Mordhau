// Class Mordhau.ProjectileTurretShooterComponent

// 0x0030 (FullSize[0x02C0] - InheritedSize[0x0290])

class UProjectileTurretShooterComponent : public UProjectileShooterComponent

{

public:

	float                                              LoadingSoundFadeOutDuration;                               // 0x0290(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              WeaponKickBackLookUp;                                      // 0x0294(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              RotationVelocity;                                          // 0x0298(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              RotationInterpolationSpeed;                                // 0x029C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              ReplicatedTurnCap;                                         // 0x02A0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              ReplicatedLookUpCap;                                       // 0x02A4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              PreviousActorYaw;                                          // 0x02A8(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	float                                              PreviousPitch;                                             // 0x02AC(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	TWeakObjectPtr<class UAudioComponent>              LastLoadingSound;                                          // 0x02B0(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	unsigned char                                      UnknownData_Q1IM[0x8];                                     // 0x02B8(0x0008) MISSED OFFSET (PADDING)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.ProjectileTurretShooterComponent");

		return ptr;

	}







	void OnRep_TurnCapChanged();

	void OnRep_LookUpCapChanged();

};



