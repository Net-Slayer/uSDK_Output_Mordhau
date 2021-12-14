// Class Mordhau.Bounds

// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])

class UBounds : public UInterface

{

public:





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.Bounds");

		return ptr;

	}







	void OnExceededTimeOutOfBounds();

	void LeftOutOfBoundsArea();

	bool IsOutOfBounds();

	bool IsAllowedOutOfBounds();

	float GetOutOfBoundsTimeUntilDeath();

	void EnteredOutOfBoundsArea(class UObject* WCO);

};



