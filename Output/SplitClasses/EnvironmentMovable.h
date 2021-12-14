// Class Mordhau.EnvironmentMovable

// 0x0030 (FullSize[0x0250] - InheritedSize[0x0220])

class AEnvironmentMovable : public AActor

{

public:

	Mordhau_ESwayMethod                                SwayMethod;                                                // 0x0220(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_9Y1W[0x3];                                     // 0x0221(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	TWeakObjectPtr<class USceneComponent>              SwayingComponent;                                          // 0x0224(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FVector                                     RollPitchYawFrequency;                                     // 0x022C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FVector                                     RollPitchYawMagnitude;                                     // 0x0238(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FVector                                     RollPitchYawSpeed;                                         // 0x0244(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.EnvironmentMovable");

		return ptr;

	}







	void InitializeMovable(class USceneComponent* InSwayingComponent, const struct FVector& InRollPitchYawFrequency, const struct FVector& InRollPitchYawMagnitude, const struct FVector& InRollPitchYawSpeed);

};



