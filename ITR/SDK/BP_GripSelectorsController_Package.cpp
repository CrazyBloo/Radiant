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
	 * 		Name   -> Function BP_GripSelectorsController.BP_GripSelectorsController_C.UpdateSelectors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPRHand                                            hand                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GripSelectorsController_C::UpdateSelectors(EPRHand hand)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GripSelectorsController.BP_GripSelectorsController_C.UpdateSelectors");
		
		ABP_GripSelectorsController_C_UpdateSelectors_Params params {};
		params.hand = hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GripSelectorsController.BP_GripSelectorsController_C.ShowGripSelector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPRHand                                            hand                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Distance                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GripSelectorsController_C::ShowGripSelector(EPRHand hand, bool Distance)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GripSelectorsController.BP_GripSelectorsController_C.ShowGripSelector");
		
		ABP_GripSelectorsController_C_ShowGripSelector_Params params {};
		params.hand = hand;
		params.Distance = Distance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GripSelectorsController.BP_GripSelectorsController_C.GetGripPrimitive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPRHand                                            hand                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         Primitive                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Point                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               selected                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GripSelectorsController_C::GetGripPrimitive(EPRHand hand, class UPrimitiveComponent** Primitive, struct FVector* Point, bool* selected)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GripSelectorsController.BP_GripSelectorsController_C.GetGripPrimitive");
		
		ABP_GripSelectorsController_C_GetGripPrimitive_Params params {};
		params.hand = hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Primitive != nullptr)
			*Primitive = params.Primitive;
		if (Point != nullptr)
			*Point = params.Point;
		if (selected != nullptr)
			*selected = params.selected;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GripSelectorsController.BP_GripSelectorsController_C.ShowTriggerSelector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPRHand                                            hand                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GripSelectorsController_C::ShowTriggerSelector(EPRHand hand)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GripSelectorsController.BP_GripSelectorsController_C.ShowTriggerSelector");
		
		ABP_GripSelectorsController_C_ShowTriggerSelector_Params params {};
		params.hand = hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GripSelectorsController.BP_GripSelectorsController_C.GetTriggerPrimitiveLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPRHand                                            hand                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                                                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GripSelectorsController_C::GetTriggerPrimitiveLocation(EPRHand hand, struct FVector* )
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GripSelectorsController.BP_GripSelectorsController_C.GetTriggerPrimitiveLocation");
		
		ABP_GripSelectorsController_C_GetTriggerPrimitiveLocation_Params params {};
		params.hand = hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if ( != nullptr)
			* = params.;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GripSelectorsController.BP_GripSelectorsController_C.GetTriggerPrimitive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPRHand                                            hand                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                                                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GripSelectorsController_C::GetTriggerPrimitive(EPRHand hand, class UPrimitiveComponent** )
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GripSelectorsController.BP_GripSelectorsController_C.GetTriggerPrimitive");
		
		ABP_GripSelectorsController_C_GetTriggerPrimitive_Params params {};
		params.hand = hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if ( != nullptr)
			* = params.;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GripSelectorsController.BP_GripSelectorsController_C.HideSelectors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPRHand                                            hand                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Grip                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Trigger                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GripSelectorsController_C::HideSelectors(EPRHand hand, bool Grip, bool Trigger)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GripSelectorsController.BP_GripSelectorsController_C.HideSelectors");
		
		ABP_GripSelectorsController_C_HideSelectors_Params params {};
		params.hand = hand;
		params.Grip = Grip;
		params.Trigger = Trigger;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GripSelectorsController.BP_GripSelectorsController_C.UpdateGrips
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPRHand                                            hand                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GripSelectorsController_C::UpdateGrips(EPRHand hand)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GripSelectorsController.BP_GripSelectorsController_C.UpdateGrips");
		
		ABP_GripSelectorsController_C_UpdateGrips_Params params {};
		params.hand = hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GripSelectorsController.BP_GripSelectorsController_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GripSelectorsController_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GripSelectorsController.BP_GripSelectorsController_C.ReceiveTick");
		
		ABP_GripSelectorsController_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GripSelectorsController.BP_GripSelectorsController_C.OnGameStarted
	 * 		Flags  -> ()
	 */
	void ABP_GripSelectorsController_C::OnGameStarted()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GripSelectorsController.BP_GripSelectorsController_C.OnGameStarted");
		
		ABP_GripSelectorsController_C_OnGameStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GripSelectorsController.BP_GripSelectorsController_C.ShowSelector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPRHand                                            hand                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Distance                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_GripSelectorsController_C::ShowSelector(EPRHand hand, bool Distance)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GripSelectorsController.BP_GripSelectorsController_C.ShowSelector");
		
		ABP_GripSelectorsController_C_ShowSelector_Params params {};
		params.hand = hand;
		params.Distance = Distance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GripSelectorsController.BP_GripSelectorsController_C.HideSelector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPRHand                                            hand                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GripSelectorsController_C::HideSelector(EPRHand hand)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GripSelectorsController.BP_GripSelectorsController_C.HideSelector");
		
		ABP_GripSelectorsController_C_HideSelector_Params params {};
		params.hand = hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GripSelectorsController.BP_GripSelectorsController_C.HideAllSelectors
	 * 		Flags  -> ()
	 */
	void ABP_GripSelectorsController_C::HideAllSelectors()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GripSelectorsController.BP_GripSelectorsController_C.HideAllSelectors");
		
		ABP_GripSelectorsController_C_HideAllSelectors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_GripSelectorsController.BP_GripSelectorsController_C.ExecuteUbergraph_BP_GripSelectorsController
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_GripSelectorsController_C::ExecuteUbergraph_BP_GripSelectorsController(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GripSelectorsController.BP_GripSelectorsController_C.ExecuteUbergraph_BP_GripSelectorsController");
		
		ABP_GripSelectorsController_C_ExecuteUbergraph_BP_GripSelectorsController_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_GripSelectorsController_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_GripSelectorsController_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_GripSelectorsController.BP_GripSelectorsController_C");
		return ptr;
	}

}


