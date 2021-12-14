// Class Mordhau.EquipmentSystemComponent

// 0x0040 (FullSize[0x00F0] - InheritedSize[0x00B0])

class UEquipmentSystemComponent : public UActorComponent

{

public:

	unsigned char                                      UnknownData_C912[0x10];                                    // 0x00B0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	TArray<TWeakObjectPtr<class AMordhauEquipment>>    PrevReplicatedEquipment;                                   // 0x00C0(0x0010) (ZeroConstructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TWeakObjectPtr<class AMordhauEquipment>            PrevReplicatedLeftHandEquipment;                           // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TWeakObjectPtr<class AMordhauEquipment>            PrevReplicatedRightHandEquipment;                          // 0x00D8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UStaticMeshComponent*                        QuiverStaticMeshComponent;                                 // 0x00E0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              DeathEquipmentRagdollAngularFactor;                        // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              DeathEquipmentRagdollTranslationalFactor;                  // 0x00EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.EquipmentSystemComponent");

		return ptr;

	}







	void OnUnPossessed(class AAdvancedCharacter* Character);

	void OnPreBeginPlay(class AMordhauCharacter* Character);

	void OnLODTick(float DeltaTime);

	void OnLateTick(float DeltaTime);

	void OnCharacterVehicleChanged(class AMordhauCharacter* Character);

	void OnCharacterCameraStyleChanged(class AMordhauCharacter* Character);

	void OnAnyEquipmentStateChanged();

};



