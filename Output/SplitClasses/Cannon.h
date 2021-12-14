// Class Mordhau.Cannon

// 0x0028 (FullSize[0x0480] - InheritedSize[0x0458])

class ACannon : public AVehicleBase

{

public:

	unsigned char                                      UnknownData_Y6J2[0x4];                                     // 0x0458(0x0004) Fix Super Size

	struct FName                                       HoleSocketName;                                            // 0x045C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	float                                              MinXYDistanceToLoad;                                       // 0x0464(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	struct FVector2D                                   MinZDistanceToLoad;                                        // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	class UProjectileTurretShooterComponent*           ShooterComponent;                                          // 0x0470(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	unsigned char                                      UnknownData_D1TX[0x8];                                     // 0x0478(0x0008) MISSED OFFSET (PADDING)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.Cannon");

		return ptr;

	}







};



