﻿// Name: Mordhau, Version: Patch23

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
//		Name   -> Function BP_DeliverySpawnWidgetFloater.BP_DeliverySpawnWidgetFloater_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_DeliverySpawnWidgetFloater_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DeliverySpawnWidgetFloater.BP_DeliverySpawnWidgetFloater_C.Tick");

	UBP_DeliverySpawnWidgetFloater_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_DeliverySpawnWidgetFloater.BP_DeliverySpawnWidgetFloater_C.ExecuteUbergraph_BP_DeliverySpawnWidgetFloater
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_DeliverySpawnWidgetFloater_C::ExecuteUbergraph_BP_DeliverySpawnWidgetFloater(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DeliverySpawnWidgetFloater.BP_DeliverySpawnWidgetFloater_C.ExecuteUbergraph_BP_DeliverySpawnWidgetFloater");

	UBP_DeliverySpawnWidgetFloater_C_ExecuteUbergraph_BP_DeliverySpawnWidgetFloater_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
