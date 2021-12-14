// Class Mordhau.KickMotion

// 0x0018 (FullSize[0x1108] - InheritedSize[0x10F0])

class UKickMotion : public UAttackMotion

{

public:

	float                                              KickDamageModifierTier3Legs;                               // 0x10F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              JumpKickStaminaDrain;                                      // 0x10F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              JumpKickExtraWindup;                                       // 0x10F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	Mordhau_EMovementRestriction                       JumpKickAirMovementRestriction;                            // 0x10FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_7YYI[0x3];                                     // 0x10FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              MaxAirborneTimeForJumpKickAnim;                            // 0x1100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bIsAirKick;                                                // 0x1104(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_0S9L[0x3];                                     // 0x1105(0x0003) MISSED OFFSET (PADDING)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.KickMotion");

		return ptr;

	}







};



