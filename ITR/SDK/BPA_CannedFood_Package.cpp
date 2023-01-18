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
	 * 		Name   -> Function BPA_CannedFood.BPA_CannedFood_C.UpdateMaterialDamage
	 * 		Flags  -> ()
	 */
	void ABPA_CannedFood_C::UpdateMaterialDamage()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_CannedFood.BPA_CannedFood_C.UpdateMaterialDamage");
		
		ABPA_CannedFood_C_UpdateMaterialDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_CannedFood.BPA_CannedFood_C.BndEvt__VRSlider_K2Node_ComponentBoundEvent_0_VRSliderHitPointSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              SliderProgressPoint                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_CannedFood_C::BndEvt__VRSlider_K2Node_ComponentBoundEvent_0_VRSliderHitPointSignature__DelegateSignature(float SliderProgressPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_CannedFood.BPA_CannedFood_C.BndEvt__VRSlider_K2Node_ComponentBoundEvent_0_VRSliderHitPointSignature__DelegateSignature");
		
		ABPA_CannedFood_C_BndEvt__VRSlider_K2Node_ComponentBoundEvent_0_VRSliderHitPointSignature__DelegateSignature_Params params {};
		params.SliderProgressPoint = SliderProgressPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_CannedFood.BPA_CannedFood_C.opened
	 * 		Flags  -> ()
	 */
	void ABPA_CannedFood_C::opened()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_CannedFood.BPA_CannedFood_C.opened");
		
		ABPA_CannedFood_C_opened_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_CannedFood.BPA_CannedFood_C.SetFoodLvl
	 * 		Flags  -> ()
	 */
	void ABPA_CannedFood_C::SetFoodLvl()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_CannedFood.BPA_CannedFood_C.SetFoodLvl");
		
		ABPA_CannedFood_C_SetFoodLvl_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_CannedFood.BPA_CannedFood_C.OnGrip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              GrippingController                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 */
	void ABPA_CannedFood_C::OnGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_CannedFood.BPA_CannedFood_C.OnGrip");
		
		ABPA_CannedFood_C_OnGrip_Params params {};
		params.GrippingController = GrippingController;
		params.GripInformation = GripInformation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_CannedFood.BPA_CannedFood_C.OnGripRelease
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              ReleasingController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 * 		bool                                               bWasSocketed                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_CannedFood_C::OnGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_CannedFood.BPA_CannedFood_C.OnGripRelease");
		
		ABPA_CannedFood_C_OnGripRelease_Params params {};
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
	 * 		Name   -> Function BPA_CannedFood.BPA_CannedFood_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_CannedFood_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_CannedFood.BPA_CannedFood_C.ReceiveTick");
		
		ABPA_CannedFood_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_CannedFood.BPA_CannedFood_C.BndEvt__Can_Tushonka_Food_level_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABPA_CannedFood_C::BndEvt__Can_Tushonka_Food_level_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_CannedFood.BPA_CannedFood_C.BndEvt__Can_Tushonka_Food_level_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");
		
		ABPA_CannedFood_C_BndEvt__Can_Tushonka_Food_level_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_CannedFood.BPA_CannedFood_C.BndEvt__Can_Tushonka_Food_level_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_CannedFood_C::BndEvt__Can_Tushonka_Food_level_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_CannedFood.BPA_CannedFood_C.BndEvt__Can_Tushonka_Food_level_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature");
		
		ABPA_CannedFood_C_BndEvt__Can_Tushonka_Food_level_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_CannedFood.BPA_CannedFood_C.OnReconfigure
	 * 		Flags  -> ()
	 */
	void ABPA_CannedFood_C::OnReconfigure()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_CannedFood.BPA_CannedFood_C.OnReconfigure");
		
		ABPA_CannedFood_C_OnReconfigure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_CannedFood.BPA_CannedFood_C.OnProxyEnabled
	 * 		Flags  -> ()
	 */
	void ABPA_CannedFood_C::OnProxyEnabled()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_CannedFood.BPA_CannedFood_C.OnProxyEnabled");
		
		ABPA_CannedFood_C_OnProxyEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_CannedFood.BPA_CannedFood_C.OnProxyDisabled
	 * 		Flags  -> ()
	 */
	void ABPA_CannedFood_C::OnProxyDisabled()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_CannedFood.BPA_CannedFood_C.OnProxyDisabled");
		
		ABPA_CannedFood_C_OnProxyDisabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_CannedFood.BPA_CannedFood_C.ExecuteUbergraph_BPA_CannedFood
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_CannedFood_C::ExecuteUbergraph_BPA_CannedFood(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_CannedFood.BPA_CannedFood_C.ExecuteUbergraph_BPA_CannedFood");
		
		ABPA_CannedFood_C_ExecuteUbergraph_BPA_CannedFood_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABPA_CannedFood_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPA_CannedFood_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPA_CannedFood.BPA_CannedFood_C");
		return ptr;
	}

}


