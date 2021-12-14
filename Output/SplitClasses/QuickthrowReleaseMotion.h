// Class Mordhau.QuickthrowReleaseMotion

// 0x0018 (FullSize[0x00B8] - InheritedSize[0x00A0])

class UQuickthrowReleaseMotion : public UMordhauMotion

{

public:

	class AMordhauEquipment*                           RangedEquipment;                                           // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	TWeakObjectPtr<class AMordhauProjectile>           CreatedLocalProjectile;                                    // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      Stage;                                                     // 0x00B0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_RWN4[0x3];                                     // 0x00B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	float                                              FirstStageEnd;                                             // 0x00B4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.QuickthrowReleaseMotion");

		return ptr;

	}







};



