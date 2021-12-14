// Class Mordhau.SpawnGroup

// 0x0018 (FullSize[0x0238] - InheritedSize[0x0220])

class ASpawnGroup : public AActor

{

public:

	unsigned char                                      UnknownData_U9TM[0x8];                                     // 0x0220(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	TArray<class AMordhauPlayerStart*>                 Spawns;                                                    // 0x0228(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.SpawnGroup");

		return ptr;

	}







	void SetSpawnsTeam(int NewTeam);

	void SetAreSpawnsEnabled(bool bValue);

	bool GetAreSpawnsEnabled();

};



