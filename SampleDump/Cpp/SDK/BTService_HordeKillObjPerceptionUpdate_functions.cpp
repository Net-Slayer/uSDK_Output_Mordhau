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
//		Name   -> Function BTService_HordeKillObjPerceptionUpdate.BTService_HordeKillObjPerceptionUpdate_C.ReceiveTickAI
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTService_HordeKillObjPerceptionUpdate_C::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BTService_HordeKillObjPerceptionUpdate.BTService_HordeKillObjPerceptionUpdate_C.ReceiveTickAI");

	UBTService_HordeKillObjPerceptionUpdate_C_ReceiveTickAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014F36A0
//		Name   -> Function BTService_HordeKillObjPerceptionUpdate.BTService_HordeKillObjPerceptionUpdate_C.ExecuteUbergraph_BTService_HordeKillObjPerceptionUpdate
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTService_HordeKillObjPerceptionUpdate_C::ExecuteUbergraph_BTService_HordeKillObjPerceptionUpdate(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BTService_HordeKillObjPerceptionUpdate.BTService_HordeKillObjPerceptionUpdate_C.ExecuteUbergraph_BTService_HordeKillObjPerceptionUpdate");

	UBTService_HordeKillObjPerceptionUpdate_C_ExecuteUbergraph_BTService_HordeKillObjPerceptionUpdate_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
