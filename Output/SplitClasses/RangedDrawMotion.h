// Class Mordhau.RangedDrawMotion

// 0x00B0 (FullSize[0x0150] - InheritedSize[0x00A0])

class URangedDrawMotion : public UMordhauMotion

{

public:

	unsigned char                                      UnknownData_KNCU[0x30];                                    // 0x00A0(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	unsigned char                                      RandomValue;                                               // 0x00D0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_DFBT[0x3];                                     // 0x00D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	struct FRotator                                    AimRotationOffset;                                         // 0x00D4(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_NY8Z[0xC];                                     // 0x00E0(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	struct FRotator                                    AimVisualRotationOffset;                                   // 0x00EC(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	TWeakObjectPtr<class AMordhauEquipment>            RangedEquipmentPtr;                                        // 0x00F8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_YCQE[0x8];                                     // 0x0100(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	class UAnimMontage*                                DrawMontage;                                               // 0x0108(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UAnimMontage*                                Draw1PMontage;                                             // 0x0110(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UAnimMontage*                                DrawEquipmentMontage;                                      // 0x0118(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UAnimMontage*                                DrawEquipment1PMontage;                                    // 0x0120(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UAnimMontage*                                CurrentMontage;                                            // 0x0128(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UAnimMontage*                                CurrentEquipmentMontage;                                   // 0x0130(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_QDSU[0x10];                                    // 0x0138(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	class UAudioComponent*                             CurrentlyPlayingDraw;                                      // 0x0148(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.RangedDrawMotion");

		return ptr;

	}







};



