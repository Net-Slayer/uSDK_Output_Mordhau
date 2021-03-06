// Name: Mordhau, Version: Patch23

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ContextPopupEntry_Interface.BP_ContextPopupEntry_Interface_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBP_ContextPopupEntry_Interface_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ContextPopupEntry_Interface.BP_ContextPopupEntry_Interface_C.Construct");

	UBP_ContextPopupEntry_Interface_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ContextPopupEntry_Interface.BP_ContextPopupEntry_Interface_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UBP_ContextPopupEntry_Interface_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ContextPopupEntry_Interface.BP_ContextPopupEntry_Interface_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");

	UBP_ContextPopupEntry_Interface_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_ContextPopupEntry_Interface.BP_ContextPopupEntry_Interface_C.ExecuteUbergraph_BP_ContextPopupEntry_Interface
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ContextPopupEntry_Interface_C::ExecuteUbergraph_BP_ContextPopupEntry_Interface(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ContextPopupEntry_Interface.BP_ContextPopupEntry_Interface_C.ExecuteUbergraph_BP_ContextPopupEntry_Interface");

	UBP_ContextPopupEntry_Interface_C_ExecuteUbergraph_BP_ContextPopupEntry_Interface_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
