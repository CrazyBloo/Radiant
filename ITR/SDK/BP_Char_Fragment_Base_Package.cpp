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
	 * 		Name   -> Function BP_Char_Fragment_Base.BP_Char_Fragment_Base_C.Footsteps Loop__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_Char_Fragment_Base_C::FootstepsLoop__FinishedFunc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Fragment_Base.BP_Char_Fragment_Base_C.Footsteps Loop__FinishedFunc");
		
		ABP_Char_Fragment_Base_C_FootstepsLoop__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Fragment_Base.BP_Char_Fragment_Base_C.Footsteps Loop__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_Char_Fragment_Base_C::FootstepsLoop__UpdateFunc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Fragment_Base.BP_Char_Fragment_Base_C.Footsteps Loop__UpdateFunc");
		
		ABP_Char_Fragment_Base_C_FootstepsLoop__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Fragment_Base.BP_Char_Fragment_Base_C.Footsteps Loop__NewTrack_0__EventFunc
	 * 		Flags  -> ()
	 */
	void ABP_Char_Fragment_Base_C::FootstepsLoop__NewTrack_0__EventFunc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Fragment_Base.BP_Char_Fragment_Base_C.Footsteps Loop__NewTrack_0__EventFunc");
		
		ABP_Char_Fragment_Base_C_FootstepsLoop__NewTrack_0__EventFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Fragment_Base.BP_Char_Fragment_Base_C.StartFootstepLoop
	 * 		Flags  -> ()
	 */
	void ABP_Char_Fragment_Base_C::StartFootstepLoop()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Fragment_Base.BP_Char_Fragment_Base_C.StartFootstepLoop");
		
		ABP_Char_Fragment_Base_C_StartFootstepLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Fragment_Base.BP_Char_Fragment_Base_C.StopFootstepLoop
	 * 		Flags  -> ()
	 */
	void ABP_Char_Fragment_Base_C::StopFootstepLoop()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Fragment_Base.BP_Char_Fragment_Base_C.StopFootstepLoop");
		
		ABP_Char_Fragment_Base_C_StopFootstepLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Fragment_Base.BP_Char_Fragment_Base_C.PlayFootstepSound
	 * 		Flags  -> ()
	 */
	void ABP_Char_Fragment_Base_C::PlayFootstepSound()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Fragment_Base.BP_Char_Fragment_Base_C.PlayFootstepSound");
		
		ABP_Char_Fragment_Base_C_PlayFootstepSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Fragment_Base.BP_Char_Fragment_Base_C.ExecuteUbergraph_BP_Char_Fragment_Base
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Char_Fragment_Base_C::ExecuteUbergraph_BP_Char_Fragment_Base(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Fragment_Base.BP_Char_Fragment_Base_C.ExecuteUbergraph_BP_Char_Fragment_Base");
		
		ABP_Char_Fragment_Base_C_ExecuteUbergraph_BP_Char_Fragment_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Char_Fragment_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Char_Fragment_Base_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Char_Fragment_Base.BP_Char_Fragment_Base_C");
		return ptr;
	}

}


