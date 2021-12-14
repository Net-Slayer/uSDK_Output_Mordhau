// Class Mordhau.PhysicsProxy

// 0x0050 (FullSize[0x0270] - InheritedSize[0x0220])

class APhysicsProxy : public AActor

{

public:

	TWeakObjectPtr<class AActor>                       Original;                                                  // 0x0220(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_2O7D[0x8];                                     // 0x0228(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	struct FTransform                                  Offset;                                                    // 0x0230(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	class USkeletalMeshComponent*                      SkeletalMesh;                                              // 0x0260(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              IdleTime;                                                  // 0x0268(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_L0X3[0x4];                                     // 0x026C(0x0004) MISSED OFFSET (PADDING)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.PhysicsProxy");

		return ptr;

	}







};



