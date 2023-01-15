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
	 * 		Name   -> Function BP_RadiusExplosionActor.BP_RadiusExplosionActor_C.IsInAir
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               State                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_RadiusExplosionActor_C::IsInAir(bool* State)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_RadiusExplosionActor.BP_RadiusExplosionActor_C.IsInAir");
		
		ABP_RadiusExplosionActor_C_IsInAir_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (State != nullptr)
			*State = params.State;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RadiusExplosionActor.BP_RadiusExplosionActor_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_RadiusExplosionActor_C::UserConstructionScript()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_RadiusExplosionActor.BP_RadiusExplosionActor_C.UserConstructionScript");
		
		ABP_RadiusExplosionActor_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RadiusExplosionActor.BP_RadiusExplosionActor_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_RadiusExplosionActor_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_RadiusExplosionActor.BP_RadiusExplosionActor_C.Timeline_0__FinishedFunc");
		
		ABP_RadiusExplosionActor_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RadiusExplosionActor.BP_RadiusExplosionActor_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_RadiusExplosionActor_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_RadiusExplosionActor.BP_RadiusExplosionActor_C.Timeline_0__UpdateFunc");
		
		ABP_RadiusExplosionActor_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RadiusExplosionActor.BP_RadiusExplosionActor_C.VisRecoil
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     ExplosionPos                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RadiusExplosionActor_C::VisRecoil(const struct FVector& ExplosionPos)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_RadiusExplosionActor.BP_RadiusExplosionActor_C.VisRecoil");
		
		ABP_RadiusExplosionActor_C_VisRecoil_Params params {};
		params.ExplosionPos = ExplosionPos;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RadiusExplosionActor.BP_RadiusExplosionActor_C.Launch
	 * 		Flags  -> ()
	 */
	void ABP_RadiusExplosionActor_C::Launch()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_RadiusExplosionActor.BP_RadiusExplosionActor_C.Launch");
		
		ABP_RadiusExplosionActor_C_Launch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_RadiusExplosionActor.BP_RadiusExplosionActor_C.ExecuteUbergraph_BP_RadiusExplosionActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_RadiusExplosionActor_C::ExecuteUbergraph_BP_RadiusExplosionActor(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_RadiusExplosionActor.BP_RadiusExplosionActor_C.ExecuteUbergraph_BP_RadiusExplosionActor");
		
		ABP_RadiusExplosionActor_C_ExecuteUbergraph_BP_RadiusExplosionActor_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_RadiusExplosionActor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_RadiusExplosionActor_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_RadiusExplosionActor.BP_RadiusExplosionActor_C");
		return ptr;
	}

}


