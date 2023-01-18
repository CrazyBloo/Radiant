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
	 * 		Name   -> Function BP_TutorStep_TraderBuyCheck.BP_TutorStep_TraderBuyCheck_C.GetShopShowCaseRef
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_ShopShowcase_C*                          Ref                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TutorStep_TraderBuyCheck_C::GetShopShowCaseRef(class ABP_ShopShowcase_C** Ref)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TutorStep_TraderBuyCheck.BP_TutorStep_TraderBuyCheck_C.GetShopShowCaseRef");
		
		ABP_TutorStep_TraderBuyCheck_C_GetShopShowCaseRef_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ref != nullptr)
			*Ref = params.Ref;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TutorStep_TraderBuyCheck.BP_TutorStep_TraderBuyCheck_C.GetShopComputerRef
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_ShopComputer_C*                          Ref                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TutorStep_TraderBuyCheck_C::GetShopComputerRef(class ABP_ShopComputer_C** Ref)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TutorStep_TraderBuyCheck.BP_TutorStep_TraderBuyCheck_C.GetShopComputerRef");
		
		ABP_TutorStep_TraderBuyCheck_C_GetShopComputerRef_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ref != nullptr)
			*Ref = params.Ref;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TutorStep_TraderBuyCheck.BP_TutorStep_TraderBuyCheck_C.DoExecute
	 * 		Flags  -> ()
	 */
	void ABP_TutorStep_TraderBuyCheck_C::DoExecute()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TutorStep_TraderBuyCheck.BP_TutorStep_TraderBuyCheck_C.DoExecute");
		
		ABP_TutorStep_TraderBuyCheck_C_DoExecute_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TutorStep_TraderBuyCheck.BP_TutorStep_TraderBuyCheck_C.checkTimer
	 * 		Flags  -> ()
	 */
	void ABP_TutorStep_TraderBuyCheck_C::checkTimer()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TutorStep_TraderBuyCheck.BP_TutorStep_TraderBuyCheck_C.checkTimer");
		
		ABP_TutorStep_TraderBuyCheck_C_checkTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TutorStep_TraderBuyCheck.BP_TutorStep_TraderBuyCheck_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TutorStep_TraderBuyCheck_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TutorStep_TraderBuyCheck.BP_TutorStep_TraderBuyCheck_C.ReceiveTick");
		
		ABP_TutorStep_TraderBuyCheck_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TutorStep_TraderBuyCheck.BP_TutorStep_TraderBuyCheck_C.ExecuteUbergraph_BP_TutorStep_TraderBuyCheck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TutorStep_TraderBuyCheck_C::ExecuteUbergraph_BP_TutorStep_TraderBuyCheck(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TutorStep_TraderBuyCheck.BP_TutorStep_TraderBuyCheck_C.ExecuteUbergraph_BP_TutorStep_TraderBuyCheck");
		
		ABP_TutorStep_TraderBuyCheck_C_ExecuteUbergraph_BP_TutorStep_TraderBuyCheck_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_TutorStep_TraderBuyCheck_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_TutorStep_TraderBuyCheck_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_TutorStep_TraderBuyCheck.BP_TutorStep_TraderBuyCheck_C");
		return ptr;
	}

}


