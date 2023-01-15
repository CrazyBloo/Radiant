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
	 * 		Name   -> Function BPA_BaseItem_Throwable.BPA_BaseItem_Throwable_C.GetThrowVelocity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Multiplier                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     CurrentAvrgLinVel                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     CurentAvrgAnglVel                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_BaseItem_Throwable_C::GetThrowVelocity(float Multiplier, struct FVector* CurrentAvrgLinVel, struct FVector* CurentAvrgAnglVel)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem_Throwable.BPA_BaseItem_Throwable_C.GetThrowVelocity");
		
		ABPA_BaseItem_Throwable_C_GetThrowVelocity_Params params {};
		params.Multiplier = Multiplier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentAvrgLinVel != nullptr)
			*CurrentAvrgLinVel = params.CurrentAvrgLinVel;
		if (CurentAvrgAnglVel != nullptr)
			*CurentAvrgAnglVel = params.CurentAvrgAnglVel;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem_Throwable.BPA_BaseItem_Throwable_C.CacheVelocity
	 * 		Flags  -> ()
	 */
	void ABPA_BaseItem_Throwable_C::CacheVelocity()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem_Throwable.BPA_BaseItem_Throwable_C.CacheVelocity");
		
		ABPA_BaseItem_Throwable_C_CacheVelocity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem_Throwable.BPA_BaseItem_Throwable_C.StartCacheVelocity
	 * 		Flags  -> ()
	 */
	void ABPA_BaseItem_Throwable_C::StartCacheVelocity()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem_Throwable.BPA_BaseItem_Throwable_C.StartCacheVelocity");
		
		ABPA_BaseItem_Throwable_C_StartCacheVelocity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem_Throwable.BPA_BaseItem_Throwable_C.CacheTick
	 * 		Flags  -> ()
	 */
	void ABPA_BaseItem_Throwable_C::CacheTick()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem_Throwable.BPA_BaseItem_Throwable_C.CacheTick");
		
		ABPA_BaseItem_Throwable_C_CacheTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem_Throwable.BPA_BaseItem_Throwable_C.ThrowItem
	 * 		Flags  -> ()
	 */
	void ABPA_BaseItem_Throwable_C::ThrowItem()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem_Throwable.BPA_BaseItem_Throwable_C.ThrowItem");
		
		ABPA_BaseItem_Throwable_C_ThrowItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem_Throwable.BPA_BaseItem_Throwable_C.OnGrip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              GrippingController                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 */
	void ABPA_BaseItem_Throwable_C::OnGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem_Throwable.BPA_BaseItem_Throwable_C.OnGrip");
		
		ABPA_BaseItem_Throwable_C_OnGrip_Params params {};
		params.GrippingController = GrippingController;
		params.GripInformation = GripInformation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem_Throwable.BPA_BaseItem_Throwable_C.Debug_TraceTick
	 * 		Flags  -> ()
	 */
	void ABPA_BaseItem_Throwable_C::Debug_TraceTick()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem_Throwable.BPA_BaseItem_Throwable_C.Debug_TraceTick");
		
		ABPA_BaseItem_Throwable_C_Debug_TraceTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem_Throwable.BPA_BaseItem_Throwable_C.StopCacheVeloclity
	 * 		Flags  -> ()
	 */
	void ABPA_BaseItem_Throwable_C::StopCacheVeloclity()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem_Throwable.BPA_BaseItem_Throwable_C.StopCacheVeloclity");
		
		ABPA_BaseItem_Throwable_C_StopCacheVeloclity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem_Throwable.BPA_BaseItem_Throwable_C.ExecuteUbergraph_BPA_BaseItem_Throwable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_BaseItem_Throwable_C::ExecuteUbergraph_BPA_BaseItem_Throwable(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem_Throwable.BPA_BaseItem_Throwable_C.ExecuteUbergraph_BPA_BaseItem_Throwable");
		
		ABPA_BaseItem_Throwable_C_ExecuteUbergraph_BPA_BaseItem_Throwable_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABPA_BaseItem_Throwable_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPA_BaseItem_Throwable_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPA_BaseItem_Throwable.BPA_BaseItem_Throwable_C");
		return ptr;
	}

}


