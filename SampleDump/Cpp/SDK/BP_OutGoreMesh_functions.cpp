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
//		Name   -> Function BP_OutGoreMesh.BP_OutGoreMesh_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_OutGoreMesh_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_OutGoreMesh.BP_OutGoreMesh_C.ReceiveBeginPlay");

	ABP_OutGoreMesh_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BP_OutGoreMesh.BP_OutGoreMesh_C.ExecuteUbergraph_BP_OutGoreMesh
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_OutGoreMesh_C::ExecuteUbergraph_BP_OutGoreMesh(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_OutGoreMesh.BP_OutGoreMesh_C.ExecuteUbergraph_BP_OutGoreMesh");

	ABP_OutGoreMesh_C_ExecuteUbergraph_BP_OutGoreMesh_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
