// Class Mordhau.ECSActor

// 0x0108 (FullSize[0x0328] - InheritedSize[0x0220])

class AECSActor : public AActor

{

public:

	int                                                TotalCharacters;                                           // 0x0220(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FVector                                     PlaneTopLeft;                                              // 0x0224(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FVector                                     PlaneBottomRight;                                          // 0x0230(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              MoveVelocityMax;                                           // 0x023C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	int                                                AnimTicksPerFrame;                                         // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_TW5N[0x4];                                     // 0x0244(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	class USkeletalMesh*                               SkeletalMesh;                                              // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TEnumAsByte<Engine_ECollisionEnabled>              CollisionEnabled;                                          // 0x0250(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_4AIA[0x7];                                     // 0x0251(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	class UPhysicsAsset*                               PhysicsAsset;                                              // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UClass*                                      AnimInstance;                                              // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TArray<class UECSSkeletalMeshComponent*>           SkeletalMeshComponents;                                    // 0x0268(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TArray<struct FCharPhysics>                        CharPhysics;                                               // 0x0278(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TArray<struct FCharMove>                           CharMove;                                                  // 0x0288(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TArray<class ACharacter*>                          ManagedCharacters;                                         // 0x0298(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TArray<struct FCharPhysics>                        ManagedCharPhysics;                                        // 0x02A8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TArray<struct FCharMove>                           ManagedCharMove;                                           // 0x02B8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FECSDuringPhysicsTickFunction               DuringPhysicsTickFunction;                                 // 0x02C8(0x0030) (NativeAccessSpecifierPublic)

	struct FECSPostPhysicsTickFunction                 PostPhysicsTickFunction;                                   // 0x02F8(0x0030) (NativeAccessSpecifierPublic)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.ECSActor");

		return ptr;

	}







	void AddManagedCharacter(class ACharacter* Character);

};



