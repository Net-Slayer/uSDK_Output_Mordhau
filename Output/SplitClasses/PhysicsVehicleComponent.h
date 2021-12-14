// Class Mordhau.PhysicsVehicleComponent

// 0x0030 (FullSize[0x01E0] - InheritedSize[0x01B0])

class UPhysicsVehicleComponent : public UMordhauVehicleComponent

{

public:

	struct FName                                       LeftHandIKPushTarget;                                      // 0x01B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	struct FName                                       RightHandIKPushTarget;                                     // 0x01B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	float                                              MaxSpeed;                                                  // 0x01C0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	float                                              MaxRotation;                                               // 0x01C4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	unsigned char                                      UnknownData_68F7[0x18];                                    // 0x01C8(0x0018) MISSED OFFSET (PADDING)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.PhysicsVehicleComponent");

		return ptr;

	}







};



