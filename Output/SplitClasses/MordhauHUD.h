// Class Mordhau.MordhauHUD

// 0x0018 (FullSize[0x0328] - InheritedSize[0x0310])

class AMordhauHUD : public AHUD

{

public:

	unsigned char                                      UnknownData_BSKO[0x8];                                     // 0x0310(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	TArray<class AControlPoint*>                       CapturePointsOfInterest;                                   // 0x0318(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.MordhauHUD");

		return ptr;

	}







	void OnGameStateReplicated();

	void EnqueueMordhauDialog(class UMordhauDialog* Dialog);

};



