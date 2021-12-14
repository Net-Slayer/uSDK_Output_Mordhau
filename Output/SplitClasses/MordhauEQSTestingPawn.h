// Class Mordhau.MordhauEQSTestingPawn

// 0x0010 (FullSize[0x0560] - InheritedSize[0x0550])

class AMordhauEQSTestingPawn : public AEQSTestingPawn

{

public:

	unsigned char                                      Team;                                                      // 0x0550(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_DYOQ[0xF];                                     // 0x0551(0x000F) MISSED OFFSET (PADDING)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.MordhauEQSTestingPawn");

		return ptr;

	}







};



