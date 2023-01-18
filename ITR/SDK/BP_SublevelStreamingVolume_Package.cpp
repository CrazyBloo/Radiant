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
	 * 		Name   -> Function BP_SublevelStreamingVolume.BP_SublevelStreamingVolume_C.FixScale
	 * 		Flags  -> ()
	 */
	void ABP_SublevelStreamingVolume_C::FixScale()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SublevelStreamingVolume.BP_SublevelStreamingVolume_C.FixScale");
		
		ABP_SublevelStreamingVolume_C_FixScale_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SublevelStreamingVolume.BP_SublevelStreamingVolume_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_SublevelStreamingVolume_C::UserConstructionScript()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SublevelStreamingVolume.BP_SublevelStreamingVolume_C.UserConstructionScript");
		
		ABP_SublevelStreamingVolume_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SublevelStreamingVolume.BP_SublevelStreamingVolume_C.OnLevelStarted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                LevelTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SublevelStreamingVolume_C::OnLevelStarted(const struct FGameplayTag& LevelTag)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SublevelStreamingVolume.BP_SublevelStreamingVolume_C.OnLevelStarted");
		
		ABP_SublevelStreamingVolume_C_OnLevelStarted_Params params {};
		params.LevelTag = LevelTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SublevelStreamingVolume.BP_SublevelStreamingVolume_C.CheckPlayerTimerEvent
	 * 		Flags  -> ()
	 */
	void ABP_SublevelStreamingVolume_C::CheckPlayerTimerEvent()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SublevelStreamingVolume.BP_SublevelStreamingVolume_C.CheckPlayerTimerEvent");
		
		ABP_SublevelStreamingVolume_C_CheckPlayerTimerEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SublevelStreamingVolume.BP_SublevelStreamingVolume_C.CheckAndShowSublevels
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Point                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Coefficient                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SublevelStreamingVolume_C::CheckAndShowSublevels(const struct FVector& Point, float Coefficient)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SublevelStreamingVolume.BP_SublevelStreamingVolume_C.CheckAndShowSublevels");
		
		ABP_SublevelStreamingVolume_C_CheckAndShowSublevels_Params params {};
		params.Point = Point;
		params.Coefficient = Coefficient;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_SublevelStreamingVolume.BP_SublevelStreamingVolume_C.ExecuteUbergraph_BP_SublevelStreamingVolume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_SublevelStreamingVolume_C::ExecuteUbergraph_BP_SublevelStreamingVolume(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SublevelStreamingVolume.BP_SublevelStreamingVolume_C.ExecuteUbergraph_BP_SublevelStreamingVolume");
		
		ABP_SublevelStreamingVolume_C_ExecuteUbergraph_BP_SublevelStreamingVolume_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_SublevelStreamingVolume_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_SublevelStreamingVolume_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_SublevelStreamingVolume.BP_SublevelStreamingVolume_C");
		return ptr;
	}

}


