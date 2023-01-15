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
	 * 		Name   -> Function C_OverlapHighlit.C_OverlapHighlit_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void UC_OverlapHighlit_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function C_OverlapHighlit.C_OverlapHighlit_C.ReceiveBeginPlay");
		
		UC_OverlapHighlit_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function C_OverlapHighlit.C_OverlapHighlit_C.LightOn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         PrimToHighlit                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UC_OverlapHighlit_C::LightOn(class UPrimitiveComponent* PrimToHighlit)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function C_OverlapHighlit.C_OverlapHighlit_C.LightOn");
		
		UC_OverlapHighlit_C_LightOn_Params params {};
		params.PrimToHighlit = PrimToHighlit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function C_OverlapHighlit.C_OverlapHighlit_C.LightOff
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         PrimToHighlight                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UC_OverlapHighlit_C::LightOff(class UPrimitiveComponent* PrimToHighlight)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function C_OverlapHighlit.C_OverlapHighlit_C.LightOff");
		
		UC_OverlapHighlit_C_LightOff_Params params {};
		params.PrimToHighlight = PrimToHighlight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function C_OverlapHighlit.C_OverlapHighlit_C.ExecuteUbergraph_C_OverlapHighlit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UC_OverlapHighlit_C::ExecuteUbergraph_C_OverlapHighlit(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function C_OverlapHighlit.C_OverlapHighlit_C.ExecuteUbergraph_C_OverlapHighlit");
		
		UC_OverlapHighlit_C_ExecuteUbergraph_C_OverlapHighlit_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UC_OverlapHighlit_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UC_OverlapHighlit_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass C_OverlapHighlit.C_OverlapHighlit_C");
		return ptr;
	}

}


