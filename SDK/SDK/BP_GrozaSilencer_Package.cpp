/**
 * Name: Into_The_Radius_VR
 * Version: 2.4
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GrozaSilencer.BP_GrozaSilencer_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_GrozaSilencer_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GrozaSilencer.BP_GrozaSilencer_C.ReceiveBeginPlay");
		
		ABP_GrozaSilencer_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GrozaSilencer.BP_GrozaSilencer_C.ExecuteUbergraph_BP_GrozaSilencer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GrozaSilencer_C::ExecuteUbergraph_BP_GrozaSilencer(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GrozaSilencer.BP_GrozaSilencer_C.ExecuteUbergraph_BP_GrozaSilencer");
		
		ABP_GrozaSilencer_C_ExecuteUbergraph_BP_GrozaSilencer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_GrozaSilencer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_GrozaSilencer_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_GrozaSilencer.BP_GrozaSilencer_C");
		return ptr;
	}

}


