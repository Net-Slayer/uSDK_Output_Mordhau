// Class Mordhau.OneDimensionalMovementComponent

// 0x0048 (FullSize[0x07A0] - InheritedSize[0x0758])

class UOneDimensionalMovementComponent : public UAdvancedCharacterMovement

{

public:

	unsigned char                                      UnknownData_7KJP[0x4];                                     // 0x0758(0x0004) Fix Super Size

	int                                                TargetStep;                                                // 0x075C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              StepSize;                                                  // 0x0760(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	int                                                TotalSteps;                                                // 0x0764(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	bool                                               bHasInitializedLine;                                       // 0x0768(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_OSA2[0x3];                                     // 0x0769(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	int                                                CurrentStep;                                               // 0x076C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FVector                                     LineStart;                                                 // 0x0770(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FVector                                     LineEnd;                                                   // 0x077C(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	struct FVector                                     MovementDirection;                                         // 0x0788(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_8YVH[0xC];                                     // 0x0794(0x000C) MISSED OFFSET (PADDING)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.OneDimensionalMovementComponent");

		return ptr;

	}







	void SetMovementLine(const struct FVector& NewLineStart, const struct FVector& NewLineEnd);

};



