// Class Mordhau.BaseAttackMotion

// 0x05B8 (FullSize[0x0658] - InheritedSize[0x00A0])

class UBaseAttackMotion : public UMordhauMotion

{

public:

	bool                                               bBlendInMultiplicative;                                    // 0x00A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_C1ZS[0x3];                                     // 0x00A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	struct FPerspectiveFloat                           BlendIn;                                                   // 0x00A4(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_MG3Q[0x4];                                     // 0x00AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	struct FPerspectiveCurveFloat                      BlendInCurve;                                              // 0x00B0(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	struct FPerspectiveFloat                           SlowBlendIn;                                               // 0x00C0(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	struct FPerspectiveFloat                           ParrySlowBlendIn;                                          // 0x00C8(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	struct FPerspectiveFloat                           RiposteBlendInWithShield;                                  // 0x00D0(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	TMap<class UAnimSequence*, struct FPerspectiveAnimSequenceBaseArray> AnimationMap;                                              // 0x00D8(0x0050) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	struct FRotator                                    CueAmount;                                                 // 0x0128(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_QNJ4[0x4];                                     // 0x0134(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	class UCurveFloat*                                 CueCurve;                                                  // 0x0138(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FHighMidLowSpineSpaceAdditive               AngleAdditive;                                             // 0x0140(0x018C) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	struct FPerspectiveHighMidLowSpineSpaceAdditive    AngleAdditiveWindUp;                                       // 0x02CC(0x0318) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_CISS[0x4];                                     // 0x05E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	class UCurveFloat*                                 ReleaseCurve;                                              // 0x05E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FPerspectiveFloat                           FeintAnimRate;                                             // 0x05F0(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	struct FPerspectiveFloat                           FeintAnimDurationOffset;                                   // 0x05F8(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	struct FPerspectiveFloat                           MinimumFeintAnimDuration;                                  // 0x0600(0x0008) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	struct FPerspectiveCurveFloat                      WorldBounceCurve;                                          // 0x0608(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	struct FPerspectiveCurveFloat                      WorldBounceScaleCurve;                                     // 0x0618(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	struct FPerspectiveCurveFloat                      ParryBounceCurve;                                          // 0x0628(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	struct FPerspectiveCurveFloat                      ParryLateBounceCurve;                                      // 0x0638(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	struct FPerspectiveCurveFloat                      ParryBounceScaleCurve;                                     // 0x0648(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.BaseAttackMotion");

		return ptr;

	}







};



