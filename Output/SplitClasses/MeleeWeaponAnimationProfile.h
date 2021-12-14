// Class Mordhau.MeleeWeaponAnimationProfile

// 0x0098 (FullSize[0x00C0] - InheritedSize[0x0028])

class UMeleeWeaponAnimationProfile : public UObject

{

public:

	TMap<Mordhau_EAttackMove, class UClass*>           Attacks;                                                   // 0x0028(0x0050) (Edit, BlueprintVisible, UObjectWrapper, NativeAccessSpecifierPublic)

	class UClass*                                      ParryMotion;                                               // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UAnimSequence*                               RightStabBounce;                                           // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UAnimSequence*                               LeftStabBounce;                                            // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UAnimSequence*                               RightStabBounce1P;                                         // 0x0090(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UAnimSequence*                               LeftStabBounce1P;                                          // 0x0098(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UAnimSequence*                               RightStrikeBounce;                                         // 0x00A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UAnimSequence*                               LeftStrikeBounce;                                          // 0x00A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UAnimSequence*                               RightStrikeBounce1P;                                       // 0x00B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UAnimSequence*                               LeftStrikeBounce1P;                                        // 0x00B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.MeleeWeaponAnimationProfile");

		return ptr;

	}







};



