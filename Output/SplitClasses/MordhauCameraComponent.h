// Class Mordhau.MordhauCameraComponent

// 0x01F0 (FullSize[0x09A0] - InheritedSize[0x07B0])

class UMordhauCameraComponent : public UCameraComponent

{

public:

	unsigned char                                      UnknownData_3C4E[0x20];                                    // 0x07B0(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              MaxCameraCycleFrequency;                                   // 0x07D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              FirstPersonLookUpOffset;                                   // 0x07D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              AimingCameraActivateChangeSpeed;                           // 0x07D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              AimingCameraDisableChangeSpeed;                            // 0x07DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_0VV4[0x4];                                     // 0x07E0(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              CinematicCameraBlendWeight;                                // 0x07E4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              MinimumCinematicCameraBlendWeight;                         // 0x07E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FVector                                     FirstPersonCinematicCameraOffset;                          // 0x07EC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FVector                                     ThirdPersonCinematicCameraOffset;                          // 0x07F8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FRotator                                    CinematicCameraRotationOffset;                             // 0x0804(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	float                                              MaxThirdPersonFOV;                                         // 0x0810(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FRotator                                    ThirdPersonRotationOffset;                                 // 0x0814(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	struct FVector                                     ThirdPersonCameraOffset;                                   // 0x0820(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FRotator                                    ThirdPersonAimingCameraRotationOffset;                     // 0x082C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	struct FVector                                     ThirdPersonAimingCameraOffset;                             // 0x0838(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              ThirdPersonHipsSmoothSpeed;                                // 0x0844(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FVector                                     ThirdPersonHipsSmoothLimits;                               // 0x0848(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              ThirdPersonTeleportThreshold;                              // 0x0854(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              DeadCameraLocationSmoothSpeed;                             // 0x0858(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              DeadCameraLocationSmoothMaxDistance;                       // 0x085C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              DeadCameraRotationSmoothSpeed;                             // 0x0860(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FVector                                     SmoothedHeadLocation;                                      // 0x0864(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FRotator                                    SmoothedHeadRotation;                                      // 0x0870(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_96VZ[0x4];                                     // 0x087C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	struct FTransform                                  PreviousHeadTransform;                                     // 0x0880(0x0030) (BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	float                                              TurnOnFirstPersonModelDistance;                            // 0x08B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              TurnOnThirdPersonModelDistance;                            // 0x08B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UCurveFloat*                                 ThirdToFirstBlendCurve;                                    // 0x08B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UCurveFloat*                                 FirstToThirdBlendCurve;                                    // 0x08C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UCurveFloat*                                 MapToFirstBlendCurve;                                      // 0x08C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UCurveFloat*                                 MapToThirdBlendCurve;                                      // 0x08D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UCurveFloat*                                 MapToFirstRotationBlendCurve;                              // 0x08D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UCurveFloat*                                 MapToThirdRotationBlendCurve;                              // 0x08E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      CameraStyleBlendingFrom;                                   // 0x08E8(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      CameraStyleBlendingTo;                                     // 0x08E9(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_MD2H[0x2];                                     // 0x08EA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	struct FPOV                                        LastCameraStyleChangeCameraPOV;                            // 0x08EC(0x001C) (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	struct FPOV                                        LastVehicleCameraPOV;                                      // 0x0908(0x001C) (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	struct FPOV                                        LastNonVehicleCameraPOV;                                   // 0x0924(0x001C) (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	struct FPOV                                        LastCameraPOV;                                             // 0x0940(0x001C) (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	bool                                               bIsBlendingCameraStyle;                                    // 0x095C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_EGUN[0x3];                                     // 0x095D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              CameraStyleChangeBlendDuration;                            // 0x0960(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              MapCameraStyleChangeBlendDuration;                         // 0x0964(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FVector                                     SmoothedHipsOffset;                                        // 0x0968(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FVector                                     PreviousHipsLocation;                                      // 0x0974(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UCurveFloat*                                 CameraFOVToLocationOffsetScaleCurve;                       // 0x0980(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FVector                                     PreviousCharacterMeshLocation;                             // 0x0988(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_1U00[0xC];                                     // 0x0994(0x000C) MISSED OFFSET (PADDING)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.MordhauCameraComponent");

		return ptr;

	}







	void UpdateCamera();

	bool IsBlendingFromMapView();

	struct FPOV ComputeCameraPOV();

};



