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
	 * 		Name   -> Function BP_TideBase.BP_TideBase_C.GetTideRadius
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Radius                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TideBase_C::GetTideRadius(float* Radius)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TideBase.BP_TideBase_C.GetTideRadius");
		
		ABP_TideBase_C_GetTideRadius_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Radius != nullptr)
			*Radius = params.Radius;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TideBase.BP_TideBase_C.AnimateTide
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              OnFinished                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		bool                                               Animating                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_TideBase_C::AnimateTide(const class FScriptDelegate& OnFinished, bool* Animating)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TideBase.BP_TideBase_C.AnimateTide");
		
		ABP_TideBase_C_AnimateTide_Params params {};
		params.OnFinished = OnFinished;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Animating != nullptr)
			*Animating = params.Animating;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TideBase.BP_TideBase_C.GetRandomLocationAlongSpline
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_TideBase_C::GetRandomLocationAlongSpline(struct FVector* Location, bool* success)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TideBase.BP_TideBase_C.GetRandomLocationAlongSpline");
		
		ABP_TideBase_C_GetRandomLocationAlongSpline_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Location != nullptr)
			*Location = params.Location;
		if (success != nullptr)
			*success = params.success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TideBase.BP_TideBase_C.GetRandomPositionAlongRadius
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                                  navigablePosition                                          (Parm, OutParm, IsPlainOldData, NoDestructor)
	 * 		bool                                               success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_TideBase_C::GetRandomPositionAlongRadius(struct FTransform* navigablePosition, bool* success)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TideBase.BP_TideBase_C.GetRandomPositionAlongRadius");
		
		ABP_TideBase_C_GetRandomPositionAlongRadius_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (navigablePosition != nullptr)
			*navigablePosition = params.navigablePosition;
		if (success != nullptr)
			*success = params.success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TideBase.BP_TideBase_C.GetInZoneGate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_ZoneGate_C*                              Gate                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TideBase_C::GetInZoneGate(class ABP_ZoneGate_C** Gate)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TideBase.BP_TideBase_C.GetInZoneGate");
		
		ABP_TideBase_C_GetInZoneGate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Gate != nullptr)
			*Gate = params.Gate;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TideBase.BP_TideBase_C.GetTideCenter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Center                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TideBase_C::GetTideCenter(struct FVector* Center)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TideBase.BP_TideBase_C.GetTideCenter");
		
		ABP_TideBase_C_GetTideCenter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Center != nullptr)
			*Center = params.Center;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TideBase.BP_TideBase_C.CheckIsInTide
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               inTide                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_TideBase_C::CheckIsInTide(const struct FVector& Location, bool* inTide)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TideBase.BP_TideBase_C.CheckIsInTide");
		
		ABP_TideBase_C_CheckIsInTide_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (inTide != nullptr)
			*inTide = params.inTide;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TideBase.BP_TideBase_C.GetDistanceToTide
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Distance                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TideBase_C::GetDistanceToTide(float* Distance)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TideBase.BP_TideBase_C.GetDistanceToTide");
		
		ABP_TideBase_C_GetDistanceToTide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Distance != nullptr)
			*Distance = params.Distance;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TideBase.BP_TideBase_C.EventCheck
	 * 		Flags  -> ()
	 */
	void ABP_TideBase_C::EventCheck()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TideBase.BP_TideBase_C.EventCheck");
		
		ABP_TideBase_C_EventCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TideBase.BP_TideBase_C.DoTransition
	 * 		Flags  -> ()
	 */
	void ABP_TideBase_C::DoTransition()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TideBase.BP_TideBase_C.DoTransition");
		
		ABP_TideBase_C_DoTransition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TideBase.BP_TideBase_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TideBase_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TideBase.BP_TideBase_C.ReceiveEndPlay");
		
		ABP_TideBase_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TideBase.BP_TideBase_C.OnTransitionEnd
	 * 		Flags  -> ()
	 */
	void ABP_TideBase_C::OnTransitionEnd()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TideBase.BP_TideBase_C.OnTransitionEnd");
		
		ABP_TideBase_C_OnTransitionEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TideBase.BP_TideBase_C.OnLevelPrepare
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                LevelTag                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TideBase_C::OnLevelPrepare(const struct FGameplayTag& LevelTag)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TideBase.BP_TideBase_C.OnLevelPrepare");
		
		ABP_TideBase_C_OnLevelPrepare_Params params {};
		params.LevelTag = LevelTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TideBase.BP_TideBase_C.OnTransitionStart
	 * 		Flags  -> ()
	 */
	void ABP_TideBase_C::OnTransitionStart()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TideBase.BP_TideBase_C.OnTransitionStart");
		
		ABP_TideBase_C_OnTransitionStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TideBase.BP_TideBase_C.UpdateCenterLocation
	 * 		Flags  -> ()
	 */
	void ABP_TideBase_C::UpdateCenterLocation()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TideBase.BP_TideBase_C.UpdateCenterLocation");
		
		ABP_TideBase_C_UpdateCenterLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_TideBase.BP_TideBase_C.ExecuteUbergraph_BP_TideBase
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TideBase_C::ExecuteUbergraph_BP_TideBase(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TideBase.BP_TideBase_C.ExecuteUbergraph_BP_TideBase");
		
		ABP_TideBase_C_ExecuteUbergraph_BP_TideBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_TideBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_TideBase_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_TideBase.BP_TideBase_C");
		return ptr;
	}

}


