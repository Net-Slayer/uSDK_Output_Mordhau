// Class Mordhau.HeadWearable

// 0x0028 (FullSize[0x01C8] - InheritedSize[0x01A0])

class UHeadWearable : public UMordhauWearable

{

public:

	unsigned char                                      DefaultCoif;                                               // 0x01A0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_TLT0[0x7];                                     // 0x01A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	unsigned char                                      CoifWearables[0x10];                                       // 0x01A1(0x0010) UNKNOWN PROPERTY: ArrayProperty

	float                                              HelmetAOOffset;                                            // 0x01B8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              HelmetAOPower;                                             // 0x01BC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              HelmetAOIntensity;                                         // 0x01C0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              HelmetAOEyeIntensity;                                      // 0x01C4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.HeadWearable");

		return ptr;

	}







	int GetCoifWearablesNum();

	class UClass* GetCoifWearable(int Index);

	void AddCoifWearable();

};



