﻿#pragma once

// Name: Mordhau, Version: Patch23


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass BP_TeamSelect.BP_TeamSelect_C
// 0x0000 (FullSize[0x0230] - InheritedSize[0x0230])
class UBP_TeamSelect_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_TeamSelect.BP_TeamSelect_C");
		return ptr;
	}



	struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void Hide();
	void GetMapName(struct FString* NewParam);
	void GetGameModeName(struct FText* Text);
	void Show();
	void SelectTeam(int Team);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
