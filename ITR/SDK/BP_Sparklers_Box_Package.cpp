/**
 * Name: Into_The_Radius_VR
 * Version: 2.5.1
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
	 * 		Name   -> Function BP_Sparklers_Box.BP_Sparklers_Box_C.RefillBulletPoints
	 * 		Flags  -> ()
	 */
	void ABP_Sparklers_Box_C::RefillBulletPoints()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Sparklers_Box.BP_Sparklers_Box_C.RefillBulletPoints");
		
		ABP_Sparklers_Box_C_RefillBulletPoints_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Sparklers_Box.BP_Sparklers_Box_C.ProcessTriggerOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Sparklers_Box_C::ProcessTriggerOverlap(class AActor* Actor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Sparklers_Box.BP_Sparklers_Box_C.ProcessTriggerOverlap");
		
		ABP_Sparklers_Box_C_ProcessTriggerOverlap_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Sparklers_Box.BP_Sparklers_Box_C.InitBought
	 * 		Flags  -> ()
	 */
	void ABP_Sparklers_Box_C::InitBought()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Sparklers_Box.BP_Sparklers_Box_C.InitBought");
		
		ABP_Sparklers_Box_C_InitBought_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Sparklers_Box.BP_Sparklers_Box_C.ExecuteUbergraph_BP_Sparklers_Box
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Sparklers_Box_C::ExecuteUbergraph_BP_Sparklers_Box(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Sparklers_Box.BP_Sparklers_Box_C.ExecuteUbergraph_BP_Sparklers_Box");
		
		ABP_Sparklers_Box_C_ExecuteUbergraph_BP_Sparklers_Box_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Sparklers_Box_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Sparklers_Box_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Sparklers_Box.BP_Sparklers_Box_C");
		return ptr;
	}

}


