// Class Mordhau.VehicleBase

// 0x01C8 (FullSize[0x0458] - InheritedSize[0x0290])

class AVehicleBase : public AWheeledVehicle

{

public:

	unsigned char                                      UnknownData_PG96[0x18];                                    // 0x0290(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	struct FText                                       VehicleName;                                               // 0x02A8(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_MJ7R[0x20];                                    // 0x02C0(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	class UMordhauVehicleComponent*                    VehicleComponent;                                          // 0x02E0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UDamageableComponent*                        DamageableComponent;                                       // 0x02E8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UHealthStatComponent*                        HealthStatComponent;                                       // 0x02F0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UBurnableComponent*                          BurnableComponent;                                         // 0x02F8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UPhysicsAsset*                               RagdollPhysicsAsset;                                       // 0x0300(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	bool                                               bIsDead;                                                   // 0x0308(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	bool                                               bIsHighlighted;                                            // 0x0309(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	bool                                               bPerformCustomDepthHighlight;                              // 0x030A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	unsigned char                                      UnknownData_WFGZ[0x5];                                     // 0x030B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	class UMordhauWidgetComponent*                     InteractionWidgetComponent;                                // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	class UClass*                                      InteractionWidgetComponentClass;                           // 0x0318(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	class UClass*                                      InteractionWidgetClass;                                    // 0x0320(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	unsigned char                                      UnknownData_P31E[0x8];                                     // 0x0328(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	struct FTransform                                  InteractionWidgetRelativeTransform;                        // 0x0330(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)

	bool                                               bAutoDetermineWidgetTransform;                             // 0x0360(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	unsigned char                                      UnknownData_W57O[0x3];                                     // 0x0361(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              OutOfBoundsKillTime;                                       // 0x0364(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	bool                                               bResetLookUpWhenNoDriver;                                  // 0x0368(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	unsigned char                                      UnknownData_L44X[0x3];                                     // 0x0369(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              MaxDistanceCorrectionForLeaveSpot;                         // 0x036C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	unsigned char                                      ReplicatedVehicleFlags;                                    // 0x0370(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	unsigned char                                      UnknownData_6IUK[0x3];                                     // 0x0371(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              NetworkSimulatedSmoothRotationTime;                        // 0x0374(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	float                                              LookUpLimit;                                               // 0x0378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              LookDownLimit;                                             // 0x037C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      ReplicatedLookUpValue;                                     // 0x0380(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_SN56[0x3];                                     // 0x0381(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	struct FVector                                     AccumulatedLookLag;                                        // 0x0384(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              LookUpValueSmoothingTarget;                                // 0x0390(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              LookUpValueSmoothingFrom;                                  // 0x0394(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              LookUpValueSmoothingStartTime;                             // 0x0398(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              LookUpValueSmoothingEndTime;                               // 0x039C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              LookSmoothingSlowAlpha;                                    // 0x03A0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              LookUpRateCap;                                             // 0x03A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              LookUpRateCapTarget;                                       // 0x03A8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              LookUpCapRemaining;                                        // 0x03AC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              LookUpValue;                                               // 0x03B0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	float                                              MouseSmoothedLookUpValue;                                  // 0x03B4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	float                                              MouseSmoothingLookUpVelocity;                              // 0x03B8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	unsigned char                                      UnknownData_SLH3[0x3C];                                    // 0x03BC(0x003C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	struct FNetState                                   LatestState;                                               // 0x03F8(0x0028) (Net, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected)

	float                                              NetTimeBehind;                                             // 0x0420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	float                                              NetSendRate;                                               // 0x0424(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	unsigned char                                      UnknownData_QP4Q[0x30];                                    // 0x0428(0x0030) Fix Super Size





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.VehicleBase");

		return ptr;

	}







	class UParticleSystemComponent* SpawnParticlesAttached(class UParticleSystem* Particle, const struct FVector& Location, const struct FRotator& Rotation, TEnumAsByte<Engine_EAttachLocation> AttachType, const struct FName& Socket);

	void Server_Unreliable_LookUp(float NewLookUp);

	void Server_SetRight(float InRight);

	void Server_SetForward(float InForward);

	void Server_Reliable_RequestUse();

	void PostInteractionWidgetCreated();

	class UAudioComponent* PlaySound(class USoundBase* Sound, const struct FName& bone, const struct FVector& InLocation, TEnumAsByte<Engine_EAttachLocation> AttachLocation, bool bAttach, class USoundAttenuation* Override, float VolumeMultiplier, float PitchMultiplier);

	void OnTookDamage(bool bWillKill, Mordhau_EMordhauDamageType Type, unsigned char SubType, const struct FName& bone, const struct FVector& Point, class AActor* Source, class AActor* Agent);

	void OnRep_ReplicatedVehicleFlags();

	void OnRep_ReplicatedLookUpValue();

	void OnRep_LatestState();

	void OnDied(float Angle, Mordhau_EMordhauDamageType Type, unsigned char SubType, const struct FName& bone, const struct FVector& Point, class AActor* Source, class AActor* Agent);

	void OnDeath();

	void NetStateSend();

	void LookUpNotAbsolute(float Value);

	void LookUpAtRate(float Value);

	void LookUp(float Value, bool bIsAbsolute);

	float GetRawLookUpValue();

	float GetLookUpValue();

	class AMordhauCharacter* GetDriver();

};



