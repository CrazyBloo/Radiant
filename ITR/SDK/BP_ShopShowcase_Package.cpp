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
	 * 		Name   -> Function BP_ShopShowcase.BP_ShopShowcase_C.InitSlots
	 * 		Flags  -> ()
	 */
	void ABP_ShopShowcase_C::InitSlots()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ShopShowcase.BP_ShopShowcase_C.InitSlots");
		
		ABP_ShopShowcase_C_InitSlots_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ShopShowcase.BP_ShopShowcase_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_ShopShowcase_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ShopShowcase.BP_ShopShowcase_C.ReceiveBeginPlay");
		
		ABP_ShopShowcase_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ShopShowcase.BP_ShopShowcase_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ShopShowcase_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ShopShowcase.BP_ShopShowcase_C.ReceiveTick");
		
		ABP_ShopShowcase_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ShopShowcase.BP_ShopShowcase_C.ExecuteUbergraph_BP_ShopShowcase
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ShopShowcase_C::ExecuteUbergraph_BP_ShopShowcase(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ShopShowcase.BP_ShopShowcase_C.ExecuteUbergraph_BP_ShopShowcase");
		
		ABP_ShopShowcase_C_ExecuteUbergraph_BP_ShopShowcase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ShopShowcase.BP_ShopShowcase_C.OnSwitchFinished__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_ShopShowcase_C::OnSwitchFinished__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ShopShowcase.BP_ShopShowcase_C.OnSwitchFinished__DelegateSignature");
		
		ABP_ShopShowcase_C_OnSwitchFinished__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ShopShowcase.BP_ShopShowcase_C.OnSwitchStarted__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_ShopShowcase_C::OnSwitchStarted__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ShopShowcase.BP_ShopShowcase_C.OnSwitchStarted__DelegateSignature");
		
		ABP_ShopShowcase_C_OnSwitchStarted__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_ShopShowcase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ShopShowcase_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_ShopShowcase.BP_ShopShowcase_C");
		return ptr;
	}

}


