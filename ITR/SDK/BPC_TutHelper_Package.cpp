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
	 * 		Name   -> Function BPC_TutHelper.BPC_TutHelper_C.ItemsSold
	 * 		Flags  -> ()
	 */
	void UBPC_TutHelper_C::ItemsSold()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_TutHelper.BPC_TutHelper_C.ItemsSold");
		
		UBPC_TutHelper_C_ItemsSold_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_TutHelper.BPC_TutHelper_C.ItemsBought
	 * 		Flags  -> ()
	 */
	void UBPC_TutHelper_C::ItemsBought()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_TutHelper.BPC_TutHelper_C.ItemsBought");
		
		UBPC_TutHelper_C_ItemsBought_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_TutHelper.BPC_TutHelper_C.SetControllActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABPA_TutorStep_C*                            Ref                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_TutHelper_C::SetControllActor(class ABPA_TutorStep_C* Ref)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_TutHelper.BPC_TutHelper_C.SetControllActor");
		
		UBPC_TutHelper_C_SetControllActor_Params params {};
		params.Ref = Ref;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_TutHelper.BPC_TutHelper_C.LockFunctions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               lock                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_TutHelper_C::LockFunctions(bool lock)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_TutHelper.BPC_TutHelper_C.LockFunctions");
		
		UBPC_TutHelper_C_LockFunctions_Params params {};
		params.lock = lock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_TutHelper.BPC_TutHelper_C.ItemPutToBin
	 * 		Flags  -> ()
	 */
	void UBPC_TutHelper_C::ItemPutToBin()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_TutHelper.BPC_TutHelper_C.ItemPutToBin");
		
		UBPC_TutHelper_C_ItemPutToBin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_TutHelper.BPC_TutHelper_C.ItemREmovedFromBin
	 * 		Flags  -> ()
	 */
	void UBPC_TutHelper_C::ItemREmovedFromBin()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_TutHelper.BPC_TutHelper_C.ItemREmovedFromBin");
		
		UBPC_TutHelper_C_ItemREmovedFromBin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_TutHelper.BPC_TutHelper_C.TargetActorHeldInHand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsHeld                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               HeldInLeft                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPC_TutHelper_C::TargetActorHeldInHand(bool IsHeld, bool HeldInLeft)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_TutHelper.BPC_TutHelper_C.TargetActorHeldInHand");
		
		UBPC_TutHelper_C_TargetActorHeldInHand_Params params {};
		params.IsHeld = IsHeld;
		params.HeldInLeft = HeldInLeft;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_TutHelper.BPC_TutHelper_C.StartHelper
	 * 		Flags  -> ()
	 */
	void UBPC_TutHelper_C::StartHelper()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_TutHelper.BPC_TutHelper_C.StartHelper");
		
		UBPC_TutHelper_C_StartHelper_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_TutHelper.BPC_TutHelper_C.StopHelper
	 * 		Flags  -> ()
	 */
	void UBPC_TutHelper_C::StopHelper()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_TutHelper.BPC_TutHelper_C.StopHelper");
		
		UBPC_TutHelper_C_StopHelper_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPC_TutHelper.BPC_TutHelper_C.ExecuteUbergraph_BPC_TutHelper
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPC_TutHelper_C::ExecuteUbergraph_BPC_TutHelper(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPC_TutHelper.BPC_TutHelper_C.ExecuteUbergraph_BPC_TutHelper");
		
		UBPC_TutHelper_C_ExecuteUbergraph_BPC_TutHelper_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPC_TutHelper_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPC_TutHelper_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPC_TutHelper.BPC_TutHelper_C");
		return ptr;
	}

}


