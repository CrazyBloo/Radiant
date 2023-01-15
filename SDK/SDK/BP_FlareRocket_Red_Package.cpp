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
	 * 		Name   -> Function BP_FlareRocket_Red.BP_FlareRocket_Red_C.OnUsed
	 * 		Flags  -> ()
	 */
	void ABP_FlareRocket_Red_C::OnUsed()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FlareRocket_Red.BP_FlareRocket_Red_C.OnUsed");
		
		ABP_FlareRocket_Red_C_OnUsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_FlareRocket_Red.BP_FlareRocket_Red_C.ExecuteUbergraph_BP_FlareRocket_Red
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FlareRocket_Red_C::ExecuteUbergraph_BP_FlareRocket_Red(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FlareRocket_Red.BP_FlareRocket_Red_C.ExecuteUbergraph_BP_FlareRocket_Red");
		
		ABP_FlareRocket_Red_C_ExecuteUbergraph_BP_FlareRocket_Red_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_FlareRocket_Red_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_FlareRocket_Red_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_FlareRocket_Red.BP_FlareRocket_Red_C");
		return ptr;
	}

}


