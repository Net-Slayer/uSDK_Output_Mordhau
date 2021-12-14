// Class Mordhau.Mods

// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])

class UMods : public UObject

{

public:





	static UClass* StaticClass()

	{

		static UClass* ptr = UObject::FindClass("Class Mordhau.Mods");

		return ptr;

	}







	bool STATIC_UnmountMod(int ModId);

	bool STATIC_UninstallMod(int ModId);

	void STATIC_Process();

	void STATIC_MountMods(TArray<int> ModIds);

	bool STATIC_MountMod(int ModId);

	int STATIC_MountAllPaksInCustomPakFolder();

	void STATIC_MountAllInstalledMods();

	bool STATIC_IsModMounted(int ModId);

	TArray<struct FQueuedModDownload> STATIC_GetModDownloadQueue();

	struct FInstalledMod STATIC_GetInstalledMod(int ModId);

	TArray<struct FInstalledMod> STATIC_GetAllInstalledMods();

	void STATIC_CancelModDownload(int ModId);

};



