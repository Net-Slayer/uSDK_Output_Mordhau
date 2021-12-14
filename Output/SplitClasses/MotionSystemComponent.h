// Class Mordhau.MotionSystemComponent

// 0x00B8 (FullSize[0x0168] - InheritedSize[0x00B0])

class UMotionSystemComponent : public UActorComponent

{

public:

	unsigned char                                      UnknownData_0KRK[0x10];                                    // 0x00B0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              MotionFOVOffsetZeroSpeed;                                  // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FNetMotion                                  NetMotion;                                                 // 0x00C4(0x0006) (NoDestructor, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_27HW[0x6];                                     // 0x00CA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	TArray<struct FNetMotion>                          UnconfirmedMotionsBacklog;                                 // 0x00D0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_E2YC[0x2];                                     // 0x00E0(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	struct FNetMotion                                  LocallyPredictedNetMotion;                                 // 0x00E2(0x0006) (NoDestructor, NativeAccessSpecifierPublic)

	class UMordhauMotion*                              Motion;                                                    // 0x00E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UParryMotion*                                LastParryMotion;                                           // 0x00F0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UFlinchMotion*                               LastFlinchMotion;                                          // 0x00F8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UFeintedMotion*                              LastFeintedMotion;                                         // 0x0100(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UAttackMotion*                               LastAttackMotion;                                          // 0x0108(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UEmoteMotion*                                LastEmoteMotion;                                           // 0x0110(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TMap<Mordhau_EAttackMove, class UClass*>           AttackMotions;                                             // 0x0118(0x0050) (Edit, BlueprintVisible, UObjectWrapper, NativeAccessSpecifierPublic)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.MotionSystemComponent");

		return ptr;

	}







	void OnServerAssignNetMotion(const struct FNetMotion& NewNetMotion, unsigned char LastAuthObserved);

	void OnPreBeginPlay(class AMordhauCharacter* Character);

	void OnLODTick(float DeltaTime);

	void OnLateTick(float DeltaTime);

	void OnClientSetNetMotion(const struct FNetMotion& NewMotion, float ServerStartTime);

};



