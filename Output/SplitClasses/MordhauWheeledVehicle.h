// Class Mordhau.MordhauWheeledVehicle

// 0x0030 (FullSize[0x0BA0] - InheritedSize[0x0B70])

class AMordhauWheeledVehicle : public AMordhauCompoundVehicle

{

public:

	struct FVector2D                                   PreviousRotation;                                          // 0x0B68(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FVector2D                                   RotationVelocity;                                          // 0x0B70(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FVector2D                                   RotationVelocityInterpSpeed;                               // 0x0B78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FVector2D                                   RotationVelocityMax;                                       // 0x0B80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FName                                       LeftHandIKPushTarget;                                      // 0x0B88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FName                                       RightHandIKPushTarget;                                     // 0x0B90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class USoundCue*                                   MoveSoundCue;                                              // 0x0B98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.MordhauWheeledVehicle");

		return ptr;

	}







};



