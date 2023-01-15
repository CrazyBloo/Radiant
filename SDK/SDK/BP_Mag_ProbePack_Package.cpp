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
	 * 		Name   -> Function BP_Mag_ProbePack.BP_Mag_ProbePack_C.GetThrowVelocity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Mult                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     LinVel                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     AngVel                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Mag_ProbePack_C::GetThrowVelocity(float Mult, struct FVector* LinVel, struct FVector* AngVel)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Mag_ProbePack.BP_Mag_ProbePack_C.GetThrowVelocity");
		
		ABP_Mag_ProbePack_C_GetThrowVelocity_Params params {};
		params.Mult = Mult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LinVel != nullptr)
			*LinVel = params.LinVel;
		if (AngVel != nullptr)
			*AngVel = params.AngVel;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Mag_ProbePack.BP_Mag_ProbePack_C.CacheVelocity
	 * 		Flags  -> ()
	 */
	void ABP_Mag_ProbePack_C::CacheVelocity()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Mag_ProbePack.BP_Mag_ProbePack_C.CacheVelocity");
		
		ABP_Mag_ProbePack_C_CacheVelocity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Mag_ProbePack.BP_Mag_ProbePack_C.TryDropAmmo
	 * 		Flags  -> ()
	 */
	void ABP_Mag_ProbePack_C::TryDropAmmo()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Mag_ProbePack.BP_Mag_ProbePack_C.TryDropAmmo");
		
		ABP_Mag_ProbePack_C_TryDropAmmo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Mag_ProbePack.BP_Mag_ProbePack_C.TryTakeOutAmmo
	 * 		Flags  -> ()
	 */
	void ABP_Mag_ProbePack_C::TryTakeOutAmmo()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Mag_ProbePack.BP_Mag_ProbePack_C.TryTakeOutAmmo");
		
		ABP_Mag_ProbePack_C_TryTakeOutAmmo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Mag_ProbePack.BP_Mag_ProbePack_C.StartCacheVelocity
	 * 		Flags  -> ()
	 */
	void ABP_Mag_ProbePack_C::StartCacheVelocity()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Mag_ProbePack.BP_Mag_ProbePack_C.StartCacheVelocity");
		
		ABP_Mag_ProbePack_C_StartCacheVelocity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Mag_ProbePack.BP_Mag_ProbePack_C.CacheTimer
	 * 		Flags  -> ()
	 */
	void ABP_Mag_ProbePack_C::CacheTimer()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Mag_ProbePack.BP_Mag_ProbePack_C.CacheTimer");
		
		ABP_Mag_ProbePack_C_CacheTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Mag_ProbePack.BP_Mag_ProbePack_C.ThrowItem
	 * 		Flags  -> ()
	 */
	void ABP_Mag_ProbePack_C::ThrowItem()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Mag_ProbePack.BP_Mag_ProbePack_C.ThrowItem");
		
		ABP_Mag_ProbePack_C_ThrowItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Mag_ProbePack.BP_Mag_ProbePack_C.OnEndUsed
	 * 		Flags  -> ()
	 */
	void ABP_Mag_ProbePack_C::OnEndUsed()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Mag_ProbePack.BP_Mag_ProbePack_C.OnEndUsed");
		
		ABP_Mag_ProbePack_C_OnEndUsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Mag_ProbePack.BP_Mag_ProbePack_C.StopUse
	 * 		Flags  -> ()
	 */
	void ABP_Mag_ProbePack_C::StopUse()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Mag_ProbePack.BP_Mag_ProbePack_C.StopUse");
		
		ABP_Mag_ProbePack_C_StopUse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Mag_ProbePack.BP_Mag_ProbePack_C.OnStart
	 * 		Flags  -> ()
	 */
	void ABP_Mag_ProbePack_C::OnStart()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Mag_ProbePack.BP_Mag_ProbePack_C.OnStart");
		
		ABP_Mag_ProbePack_C_OnStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Mag_ProbePack.BP_Mag_ProbePack_C.OnUsed
	 * 		Flags  -> ()
	 */
	void ABP_Mag_ProbePack_C::OnUsed()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Mag_ProbePack.BP_Mag_ProbePack_C.OnUsed");
		
		ABP_Mag_ProbePack_C_OnUsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Mag_ProbePack.BP_Mag_ProbePack_C.ExecuteUbergraph_BP_Mag_ProbePack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Mag_ProbePack_C::ExecuteUbergraph_BP_Mag_ProbePack(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Mag_ProbePack.BP_Mag_ProbePack_C.ExecuteUbergraph_BP_Mag_ProbePack");
		
		ABP_Mag_ProbePack_C_ExecuteUbergraph_BP_Mag_ProbePack_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Mag_ProbePack_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Mag_ProbePack_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Mag_ProbePack.BP_Mag_ProbePack_C");
		return ptr;
	}

}


