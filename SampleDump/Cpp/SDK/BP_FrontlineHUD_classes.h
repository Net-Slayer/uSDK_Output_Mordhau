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

// BlueprintGeneratedClass BP_FrontlineHUD.BP_FrontlineHUD_C
// 0x0020 (FullSize[0x0490] - InheritedSize[0x0470])
class ABP_FrontlineHUD_C : public ABP_MordhauHUD_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0470(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBP_FrontlineHUDWidget_C*                    FrontlineHUDWidget;                                        // 0x0478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_PushHUDWidget_C*                         PushHUDWidget;                                             // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_FrontlineGameState_C*                    GameState;                                                 // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_FrontlineHUD.BP_FrontlineHUD_C");
		return ptr;
	}



	void ShowObjectives();
	void ReceiveBeginPlay();
	void UseMinimalHUD();
	void UseFullHUD();
	void OnGameStateReplicated();
	void HideMainMenu();
	void ShowMainMenu(TEnumAsByte<E_ArmoryStates_E_ArmoryStates> Armory_State);
	void ExecuteUbergraph_BP_FrontlineHUD(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
