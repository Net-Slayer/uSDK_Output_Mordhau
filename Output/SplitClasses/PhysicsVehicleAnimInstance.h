// Class Mordhau.PhysicsVehicleAnimInstance

// 0x0018 (FullSize[0x0280] - InheritedSize[0x0268])

class UPhysicsVehicleAnimInstance : public UAnimInstance

{

public:

	unsigned char                                      UnknownData_OBDP[0x8];                                     // 0x0268(0x0008) Fix Super Size

	class AVehicleBase*                                VehicleOwner;                                              // 0x0270(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	unsigned char                                      UnknownData_HPQK[0x8];                                     // 0x0278(0x0008) MISSED OFFSET (PADDING)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.PhysicsVehicleAnimInstance");

		return ptr;

	}







};



