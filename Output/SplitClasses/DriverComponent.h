// Class Mordhau.DriverComponent

// 0x00B0 (FullSize[0x0160] - InheritedSize[0x00B0])

class UDriverComponent : public UActorComponent

{

public:

	unsigned char                                      UnknownData_MB73[0xB0];                                    // 0x00B0(0x00B0) MISSED OFFSET (PADDING)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.DriverComponent");

		return ptr;

	}







	void OnLateTick(float DeltaTime);

};



