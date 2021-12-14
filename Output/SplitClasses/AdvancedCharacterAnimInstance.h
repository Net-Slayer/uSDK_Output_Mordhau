// Class Mordhau.AdvancedCharacterAnimInstance

// 0x00C8 (FullSize[0x0330] - InheritedSize[0x0268])

class UAdvancedCharacterAnimInstance : public UAnimInstance

{

public:

	TArray<TEnumAsByte<Engine_ECollisionChannel>>      GroundingChannels;                                         // 0x0268(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bWantsGrounding;                                           // 0x0278(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_BOVH[0x3];                                     // 0x0279(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	struct FVector                                     RootTranslationOffsetInternal;                             // 0x027C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FVector                                     RootTranslationOffset;                                     // 0x0288(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FRotator                                    RootRotationOffsetInternal;                                // 0x0294(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	struct FRotator                                    RootRotationOffset;                                        // 0x02A0(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	struct FVector                                     RootRotationPivot;                                         // 0x02AC(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              TranslationInterpSpeed;                                    // 0x02B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              RotationInterpSpeed;                                       // 0x02BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              RootRotationOffsetFactor;                                  // 0x02C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              LimbRotationOffsetFactor;                                  // 0x02C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FVector2D                                   RootLiftLimits;                                            // 0x02C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              GroundingWeight;                                           // 0x02D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FVector                                     AccumulatedLocationLag;                                    // 0x02D4(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FRotator                                    AccumulatedTurnLag;                                        // 0x02E0(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	bool                                               bIsAirborne;                                               // 0x02EC(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_N7HB[0x3];                                     // 0x02ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              LastLand;                                                  // 0x02F0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              LastJump;                                                  // 0x02F4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              AirborneTime;                                              // 0x02F8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bJumped;                                                   // 0x02FC(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bAirborneFromJump;                                         // 0x02FD(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bIsDead;                                                   // 0x02FE(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_7IL7[0x1];                                     // 0x02FF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              DeathDirection;                                            // 0x0300(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FName                                       AdditiveOverrideType;                                      // 0x0304(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              AdditiveOverrideWeight;                                    // 0x030C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              AdditiveOverrideNoneTime;                                  // 0x0310(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              AdditiveOverrideTypeNormalizedTime;                        // 0x0314(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              FlinchDirection;                                           // 0x0318(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              FlinchIsHead;                                              // 0x031C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              AltFlinchDirection;                                        // 0x0320(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              AltFlinchIsHead;                                           // 0x0324(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              LastDeltaSeconds;                                          // 0x0328(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_OJYL[0x4];                                     // 0x032C(0x0004) MISSED OFFSET (PADDING)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.AdvancedCharacterAnimInstance");

		return ptr;

	}







};



