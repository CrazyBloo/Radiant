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
	 * 		Name   -> Function BPA_AmmoContainer.BPA_AmmoContainer_C.IsLoadingLocked
	 * 		Flags  -> ()
	 */
	bool ABPA_AmmoContainer_C::IsLoadingLocked()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_AmmoContainer.BPA_AmmoContainer_C.IsLoadingLocked");
		
		ABPA_AmmoContainer_C_IsLoadingLocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_AmmoContainer.BPA_AmmoContainer_C.GetAmmoContainerData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAmmoContainerData                          Data                                                       (Parm, OutParm)
	 */
	void ABPA_AmmoContainer_C::GetAmmoContainerData(struct FAmmoContainerData* Data)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_AmmoContainer.BPA_AmmoContainer_C.GetAmmoContainerData");
		
		ABPA_AmmoContainer_C_GetAmmoContainerData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Data != nullptr)
			*Data = params.Data;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_AmmoContainer.BPA_AmmoContainer_C.GetAmmoContainerInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPRAmmoContainerInfo                        Info                                                       (Parm, OutParm)
	 */
	void ABPA_AmmoContainer_C::GetAmmoContainerInfo(struct FPRAmmoContainerInfo* Info)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_AmmoContainer.BPA_AmmoContainer_C.GetAmmoContainerInfo");
		
		ABPA_AmmoContainer_C_GetAmmoContainerInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Info != nullptr)
			*Info = params.Info;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_AmmoContainer.BPA_AmmoContainer_C.LoadAmmoToContainer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      ContainerToLoad                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_AmmoContainer_C::LoadAmmoToContainer(class AActor* ContainerToLoad)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_AmmoContainer.BPA_AmmoContainer_C.LoadAmmoToContainer");
		
		ABPA_AmmoContainer_C_LoadAmmoToContainer_Params params {};
		params.ContainerToLoad = ContainerToLoad;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_AmmoContainer.BPA_AmmoContainer_C.LoadInAmmo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      AmmoActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_AmmoContainer_C::LoadInAmmo(class AActor* AmmoActor, bool* success)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_AmmoContainer.BPA_AmmoContainer_C.LoadInAmmo");
		
		ABPA_AmmoContainer_C_LoadInAmmo_Params params {};
		params.AmmoActor = AmmoActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (success != nullptr)
			*success = params.success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_AmmoContainer.BPA_AmmoContainer_C.GetNextAmmo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                AmmoTypeID                                                 (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_AmmoContainer_C::GetNextAmmo(struct FGameplayTag* AmmoTypeID)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_AmmoContainer.BPA_AmmoContainer_C.GetNextAmmo");
		
		ABPA_AmmoContainer_C_GetNextAmmo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AmmoTypeID != nullptr)
			*AmmoTypeID = params.AmmoTypeID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_AmmoContainer.BPA_AmmoContainer_C.TryDropAmmo
	 * 		Flags  -> ()
	 */
	void ABPA_AmmoContainer_C::TryDropAmmo()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_AmmoContainer.BPA_AmmoContainer_C.TryDropAmmo");
		
		ABPA_AmmoContainer_C_TryDropAmmo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_AmmoContainer.BPA_AmmoContainer_C.TryTakeOutAmmo
	 * 		Flags  -> ()
	 */
	void ABPA_AmmoContainer_C::TryTakeOutAmmo()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_AmmoContainer.BPA_AmmoContainer_C.TryTakeOutAmmo");
		
		ABPA_AmmoContainer_C_TryTakeOutAmmo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_AmmoContainer.BPA_AmmoContainer_C.OnAmmoAdded
	 * 		Flags  -> ()
	 */
	void ABPA_AmmoContainer_C::OnAmmoAdded()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_AmmoContainer.BPA_AmmoContainer_C.OnAmmoAdded");
		
		ABPA_AmmoContainer_C_OnAmmoAdded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_AmmoContainer.BPA_AmmoContainer_C.OnAmmoRemoved
	 * 		Flags  -> ()
	 */
	void ABPA_AmmoContainer_C::OnAmmoRemoved()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_AmmoContainer.BPA_AmmoContainer_C.OnAmmoRemoved");
		
		ABPA_AmmoContainer_C_OnAmmoRemoved_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_AmmoContainer.BPA_AmmoContainer_C.MakeUngripable
	 * 		Flags  -> ()
	 */
	void ABPA_AmmoContainer_C::MakeUngripable()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_AmmoContainer.BPA_AmmoContainer_C.MakeUngripable");
		
		ABPA_AmmoContainer_C_MakeUngripable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_AmmoContainer.BPA_AmmoContainer_C.MakeGripable
	 * 		Flags  -> ()
	 */
	void ABPA_AmmoContainer_C::MakeGripable()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_AmmoContainer.BPA_AmmoContainer_C.MakeGripable");
		
		ABPA_AmmoContainer_C_MakeGripable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_AmmoContainer.BPA_AmmoContainer_C.BndEvt__BoxTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABPA_AmmoContainer_C::BndEvt__BoxTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_AmmoContainer.BPA_AmmoContainer_C.BndEvt__BoxTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
		
		ABPA_AmmoContainer_C_BndEvt__BoxTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
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
	 * 		Name   -> Function BPA_AmmoContainer.BPA_AmmoContainer_C.BndEvt__BoxTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_AmmoContainer_C::BndEvt__BoxTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_AmmoContainer.BPA_AmmoContainer_C.BndEvt__BoxTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
		
		ABPA_AmmoContainer_C_BndEvt__BoxTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params {};
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
	 * 		Name   -> Function BPA_AmmoContainer.BPA_AmmoContainer_C.OnUsed
	 * 		Flags  -> ()
	 */
	void ABPA_AmmoContainer_C::OnUsed()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_AmmoContainer.BPA_AmmoContainer_C.OnUsed");
		
		ABPA_AmmoContainer_C_OnUsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_AmmoContainer.BPA_AmmoContainer_C.OnEndUsed
	 * 		Flags  -> ()
	 */
	void ABPA_AmmoContainer_C::OnEndUsed()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_AmmoContainer.BPA_AmmoContainer_C.OnEndUsed");
		
		ABPA_AmmoContainer_C_OnEndUsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_AmmoContainer.BPA_AmmoContainer_C.OnGripRelease
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              ReleasingController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 * 		bool                                               bWasSocketed                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_AmmoContainer_C::OnGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_AmmoContainer.BPA_AmmoContainer_C.OnGripRelease");
		
		ABPA_AmmoContainer_C_OnGripRelease_Params params {};
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
	 * 		Name   -> Function BPA_AmmoContainer.BPA_AmmoContainer_C.SetLoadingLock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               lock                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_AmmoContainer_C::SetLoadingLock(bool lock)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_AmmoContainer.BPA_AmmoContainer_C.SetLoadingLock");
		
		ABPA_AmmoContainer_C_SetLoadingLock_Params params {};
		params.lock = lock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_AmmoContainer.BPA_AmmoContainer_C.DelayLoading
	 * 		Flags  -> ()
	 */
	void ABPA_AmmoContainer_C::DelayLoading()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_AmmoContainer.BPA_AmmoContainer_C.DelayLoading");
		
		ABPA_AmmoContainer_C_DelayLoading_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_AmmoContainer.BPA_AmmoContainer_C.LoadBullet
	 * 		Flags  -> ()
	 */
	void ABPA_AmmoContainer_C::LoadBullet()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_AmmoContainer.BPA_AmmoContainer_C.LoadBullet");
		
		ABPA_AmmoContainer_C_LoadBullet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_AmmoContainer.BPA_AmmoContainer_C.StopLoadBullet
	 * 		Flags  -> ()
	 */
	void ABPA_AmmoContainer_C::StopLoadBullet()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_AmmoContainer.BPA_AmmoContainer_C.StopLoadBullet");
		
		ABPA_AmmoContainer_C_StopLoadBullet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_AmmoContainer.BPA_AmmoContainer_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_AmmoContainer_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_AmmoContainer.BPA_AmmoContainer_C.ReceiveTick");
		
		ABPA_AmmoContainer_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_AmmoContainer.BPA_AmmoContainer_C.OnGrip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              GrippingController                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 */
	void ABPA_AmmoContainer_C::OnGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_AmmoContainer.BPA_AmmoContainer_C.OnGrip");
		
		ABPA_AmmoContainer_C_OnGrip_Params params {};
		params.GrippingController = GrippingController;
		params.GripInformation = GripInformation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_AmmoContainer.BPA_AmmoContainer_C.ProcessTriggerOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_AmmoContainer_C::ProcessTriggerOverlap(class AActor* Actor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_AmmoContainer.BPA_AmmoContainer_C.ProcessTriggerOverlap");
		
		ABPA_AmmoContainer_C_ProcessTriggerOverlap_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_AmmoContainer.BPA_AmmoContainer_C.EjectMag
	 * 		Flags  -> ()
	 */
	void ABPA_AmmoContainer_C::EjectMag()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_AmmoContainer.BPA_AmmoContainer_C.EjectMag");
		
		ABPA_AmmoContainer_C_EjectMag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_AmmoContainer.BPA_AmmoContainer_C.SaveBulletAndDrop
	 * 		Flags  -> ()
	 */
	void ABPA_AmmoContainer_C::SaveBulletAndDrop()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_AmmoContainer.BPA_AmmoContainer_C.SaveBulletAndDrop");
		
		ABPA_AmmoContainer_C_SaveBulletAndDrop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_AmmoContainer.BPA_AmmoContainer_C.ExecuteUbergraph_BPA_AmmoContainer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_AmmoContainer_C::ExecuteUbergraph_BPA_AmmoContainer(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_AmmoContainer.BPA_AmmoContainer_C.ExecuteUbergraph_BPA_AmmoContainer");
		
		ABPA_AmmoContainer_C_ExecuteUbergraph_BPA_AmmoContainer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABPA_AmmoContainer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPA_AmmoContainer_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPA_AmmoContainer.BPA_AmmoContainer_C");
		return ptr;
	}

}


