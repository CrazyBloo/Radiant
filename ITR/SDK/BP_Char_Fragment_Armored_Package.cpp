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
	 * 		Name   -> Function BP_Char_Fragment_Armored.BP_Char_Fragment_Armored_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Char_Fragment_Armored_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Fragment_Armored.BP_Char_Fragment_Armored_C.ReceiveBeginPlay");
		
		ABP_Char_Fragment_Armored_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Fragment_Armored.BP_Char_Fragment_Armored_C.DamagedState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Char_Fragment_Armored_C::DamagedState(bool enable)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Fragment_Armored.BP_Char_Fragment_Armored_C.DamagedState");
		
		ABP_Char_Fragment_Armored_C_DamagedState_Params params {};
		params.enable = enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Char_Fragment_Armored.BP_Char_Fragment_Armored_C.ExecuteUbergraph_BP_Char_Fragment_Armored
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Char_Fragment_Armored_C::ExecuteUbergraph_BP_Char_Fragment_Armored(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Char_Fragment_Armored.BP_Char_Fragment_Armored_C.ExecuteUbergraph_BP_Char_Fragment_Armored");
		
		ABP_Char_Fragment_Armored_C_ExecuteUbergraph_BP_Char_Fragment_Armored_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Char_Fragment_Armored_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Char_Fragment_Armored_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Char_Fragment_Armored.BP_Char_Fragment_Armored_C");
		return ptr;
	}

}


