// Class Mordhau.MordhauCrowdFollowingComponent

// 0x0010 (FullSize[0x02A8] - InheritedSize[0x0298])

class UMordhauCrowdFollowingComponent : public UCrowdFollowingComponent

{

public:

	float                                              PheromoneDepositAmount;                                    // 0x0298(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	float                                              PheromoneDepositInterval;                                  // 0x029C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	unsigned char                                      UnknownData_MW9F[0x8];                                     // 0x02A0(0x0008) MISSED OFFSET (PADDING)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.MordhauCrowdFollowingComponent");

		return ptr;

	}







};



