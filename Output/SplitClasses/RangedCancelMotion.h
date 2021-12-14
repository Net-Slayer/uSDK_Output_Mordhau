// Class Mordhau.RangedCancelMotion

// 0x0018 (FullSize[0x00B8] - InheritedSize[0x00A0])

class URangedCancelMotion : public UMordhauMotion

{

public:

	unsigned char                                      UnknownData_GJLV[0x8];                                     // 0x00A0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	class AMordhauEquipment*                           RangedEquipment;                                           // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	class UAudioComponent*                             CurrentlyPlayingRangedCancel;                              // 0x00B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.RangedCancelMotion");

		return ptr;

	}







};



