// Class Mordhau.MordhauVehicle

// 0x0080 (FullSize[0x0B68] - InheritedSize[0x0AE8])

class AMordhauVehicle : public AAdvancedCharacter

{

public:

	TMap<struct FString, struct FText>                 ActionToDescriptionMap;                                    // 0x0AE8(0x0050) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	bool                                               bShowVehicleHealth;                                        // 0x0B38(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bUseVisualPingCompensationOnAttacks;                       // 0x0B39(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_53UB[0x2];                                     // 0x0B3A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              MaxDistanceCorrectionForLeaveSpot;                         // 0x0B3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bDisableCameraDistance;                                    // 0x0B40(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bResetLookUpWhenNoDriver;                                  // 0x0B41(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_OHUO[0x6];                                     // 0x0B42(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	struct FText                                       VehicleName;                                               // 0x0B48(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	class UMordhauVehicleComponent*                    VehicleComponent;                                          // 0x0B60(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.MordhauVehicle");

		return ptr;

	}







	void RequestUse();

	void KnockOffDriver(class AMordhauCharacter* Character);

	class AMordhauCharacter* GetDriver();

};



