// Class Mordhau.PseudoVehicleMovementComponent

// 0x0048 (FullSize[0x07A0] - InheritedSize[0x0758])

class UPseudoVehicleMovementComponent : public UAdvancedCharacterMovement

{

public:

	TArray<class UPrimitiveComponent*>                 SecondaryComponents;                                       // 0x0758(0x0010) (BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TArray<class UPrimitiveComponent*>                 SecondaryStepCapableComponents;                            // 0x0768(0x0010) (BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              TurningVelocity;                                           // 0x0778(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_QZJA[0x4];                                     // 0x077C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	class UCurveFloat*                                 TurningBrakeAccelerationByVelocity;                        // 0x0780(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UCurveFloat*                                 TurningFactorByVelocity;                                   // 0x0788(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UCurveFloat*                                 TurningAccelerationByVelocity;                             // 0x0790(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              TurningFactorScaleAirborne;                                // 0x0798(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_VMXF[0x4];                                     // 0x079C(0x0004) MISSED OFFSET (PADDING)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.PseudoVehicleMovementComponent");

		return ptr;

	}







};



