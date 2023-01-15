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
	 * 		Name   -> Function BP_Cleaner_Brush.BP_Cleaner_Brush_C.GetBrushingSpeed
	 * 		Flags  -> ()
	 */
	float ABP_Cleaner_Brush_C::GetBrushingSpeed()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Cleaner_Brush.BP_Cleaner_Brush_C.GetBrushingSpeed");
		
		ABP_Cleaner_Brush_C_GetBrushingSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Cleaner_Brush.BP_Cleaner_Brush_C.MakeBrushingSound
	 * 		Flags  -> ()
	 */
	void ABP_Cleaner_Brush_C::MakeBrushingSound()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Cleaner_Brush.BP_Cleaner_Brush_C.MakeBrushingSound");
		
		ABP_Cleaner_Brush_C_MakeBrushingSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Cleaner_Brush.BP_Cleaner_Brush_C.DoRepairPc
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  TraceResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Cleaner_Brush_C::DoRepairPc(const struct FHitResult& TraceResult, float DeltaTime)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Cleaner_Brush.BP_Cleaner_Brush_C.DoRepairPc");
		
		ABP_Cleaner_Brush_C_DoRepairPc_Params params {};
		params.TraceResult = TraceResult;
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Cleaner_Brush.BP_Cleaner_Brush_C.DoRepairQuest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  HitResult                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_Cleaner_Brush_C::DoRepairQuest(const struct FHitResult& HitResult)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Cleaner_Brush.BP_Cleaner_Brush_C.DoRepairQuest");
		
		ABP_Cleaner_Brush_C_DoRepairQuest_Params params {};
		params.HitResult = HitResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Cleaner_Brush.BP_Cleaner_Brush_C.OnGrip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              GrippingController                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_Cleaner_Brush_C::OnGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Cleaner_Brush.BP_Cleaner_Brush_C.OnGrip");
		
		ABP_Cleaner_Brush_C_OnGrip_Params params {};
		params.GrippingController = GrippingController;
		params.GripInformation = GripInformation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Cleaner_Brush.BP_Cleaner_Brush_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Cleaner_Brush_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Cleaner_Brush.BP_Cleaner_Brush_C.ReceiveBeginPlay");
		
		ABP_Cleaner_Brush_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Cleaner_Brush.BP_Cleaner_Brush_C.OnGripRelease
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              ReleasingController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 * 		bool                                               bWasSocketed                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Cleaner_Brush_C::OnGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Cleaner_Brush.BP_Cleaner_Brush_C.OnGripRelease");
		
		ABP_Cleaner_Brush_C_OnGripRelease_Params params {};
		params.ReleasingController = ReleasingController;
		params.GripInformation = GripInformation;
		params.bWasSocketed = bWasSocketed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Cleaner_Brush.BP_Cleaner_Brush_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Cleaner_Brush_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Cleaner_Brush.BP_Cleaner_Brush_C.ReceiveTick");
		
		ABP_Cleaner_Brush_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Cleaner_Brush.BP_Cleaner_Brush_C.ExecuteUbergraph_BP_Cleaner_Brush
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Cleaner_Brush_C::ExecuteUbergraph_BP_Cleaner_Brush(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Cleaner_Brush.BP_Cleaner_Brush_C.ExecuteUbergraph_BP_Cleaner_Brush");
		
		ABP_Cleaner_Brush_C_ExecuteUbergraph_BP_Cleaner_Brush_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Cleaner_Brush_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Cleaner_Brush_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Cleaner_Brush.BP_Cleaner_Brush_C");
		return ptr;
	}

}


