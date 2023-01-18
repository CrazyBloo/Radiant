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
	 * 		Name   -> Function BPA_Revolver.BPA_Revolver_C.GetAmmoContainerData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAmmoContainerData                          Data                                                       (Parm, OutParm)
	 */
	void ABPA_Revolver_C::GetAmmoContainerData(struct FAmmoContainerData* Data)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Revolver.BPA_Revolver_C.GetAmmoContainerData");
		
		ABPA_Revolver_C_GetAmmoContainerData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Data != nullptr)
			*Data = params.Data;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Revolver.BPA_Revolver_C.GetShootingPointTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                                  Transform                                                  (Parm, OutParm, IsPlainOldData, NoDestructor)
	 * 		class UPrimitiveComponent*                         Parent                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Revolver_C::GetShootingPointTransform(struct FTransform* Transform, class UPrimitiveComponent** Parent)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Revolver.BPA_Revolver_C.GetShootingPointTransform");
		
		ABPA_Revolver_C_GetShootingPointTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Transform != nullptr)
			*Transform = params.Transform;
		if (Parent != nullptr)
			*Parent = params.Parent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Revolver.BPA_Revolver_C.EjectMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                                  SpawnTransform                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 */
	void ABPA_Revolver_C::EjectMesh(const struct FTransform& SpawnTransform)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Revolver.BPA_Revolver_C.EjectMesh");
		
		ABPA_Revolver_C_EjectMesh_Params params {};
		params.SpawnTransform = SpawnTransform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Revolver.BPA_Revolver_C.GetChamberedAmmoTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                chamberedAmmoTag                                           (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Revolver_C::GetChamberedAmmoTag(struct FGameplayTag* chamberedAmmoTag)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Revolver.BPA_Revolver_C.GetChamberedAmmoTag");
		
		ABPA_Revolver_C_GetChamberedAmmoTag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (chamberedAmmoTag != nullptr)
			*chamberedAmmoTag = params.chamberedAmmoTag;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Revolver.BPA_Revolver_C.GetChamberedAmmoInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAmmoInfo                                   AmmoInfo                                                   (Parm, OutParm)
	 */
	void ABPA_Revolver_C::GetChamberedAmmoInfo(struct FAmmoInfo* AmmoInfo)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Revolver.BPA_Revolver_C.GetChamberedAmmoInfo");
		
		ABPA_Revolver_C_GetChamberedAmmoInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AmmoInfo != nullptr)
			*AmmoInfo = params.AmmoInfo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Revolver.BPA_Revolver_C.UpdateItem
	 * 		Flags  -> ()
	 */
	void ABPA_Revolver_C::UpdateItem()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Revolver.BPA_Revolver_C.UpdateItem");
		
		ABPA_Revolver_C_UpdateItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Revolver.BPA_Revolver_C.HammerTimeline__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABPA_Revolver_C::HammerTimeline__FinishedFunc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Revolver.BPA_Revolver_C.HammerTimeline__FinishedFunc");
		
		ABPA_Revolver_C_HammerTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Revolver.BPA_Revolver_C.HammerTimeline__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABPA_Revolver_C::HammerTimeline__UpdateFunc()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Revolver.BPA_Revolver_C.HammerTimeline__UpdateFunc");
		
		ABPA_Revolver_C_HammerTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Revolver.BPA_Revolver_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Revolver_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Revolver.BPA_Revolver_C.ReceiveTick");
		
		ABPA_Revolver_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Revolver.BPA_Revolver_C.EjectMag
	 * 		Flags  -> ()
	 */
	void ABPA_Revolver_C::EjectMag()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Revolver.BPA_Revolver_C.EjectMag");
		
		ABPA_Revolver_C_EjectMag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Revolver.BPA_Revolver_C.SetLocked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NewLocked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_Revolver_C::SetLocked(bool NewLocked)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Revolver.BPA_Revolver_C.SetLocked");
		
		ABPA_Revolver_C_SetLocked_Params params {};
		params.NewLocked = NewLocked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Revolver.BPA_Revolver_C.OnStart
	 * 		Flags  -> ()
	 */
	void ABPA_Revolver_C::OnStart()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Revolver.BPA_Revolver_C.OnStart");
		
		ABPA_Revolver_C_OnStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Revolver.BPA_Revolver_C.OnBarrelPositionChanged
	 * 		Flags  -> ()
	 */
	void ABPA_Revolver_C::OnBarrelPositionChanged()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Revolver.BPA_Revolver_C.OnBarrelPositionChanged");
		
		ABPA_Revolver_C_OnBarrelPositionChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Revolver.BPA_Revolver_C.BndEvt__LoadingTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABPA_Revolver_C::BndEvt__LoadingTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Revolver.BPA_Revolver_C.BndEvt__LoadingTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
		
		ABPA_Revolver_C_BndEvt__LoadingTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
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
	 * 		Name   -> Function BPA_Revolver.BPA_Revolver_C.ThumbLeft
	 * 		Flags  -> ()
	 */
	void ABPA_Revolver_C::ThumbLeft()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Revolver.BPA_Revolver_C.ThumbLeft");
		
		ABPA_Revolver_C_ThumbLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Revolver.BPA_Revolver_C.OnGrip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              GrippingController                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 */
	void ABPA_Revolver_C::OnGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Revolver.BPA_Revolver_C.OnGrip");
		
		ABPA_Revolver_C_OnGrip_Params params {};
		params.GrippingController = GrippingController;
		params.GripInformation = GripInformation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Revolver.BPA_Revolver_C.OnGripRelease
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              ReleasingController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 * 		bool                                               bWasSocketed                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_Revolver_C::OnGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Revolver.BPA_Revolver_C.OnGripRelease");
		
		ABPA_Revolver_C_OnGripRelease_Params params {};
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
	 * 		Name   -> Function BPA_Revolver.BPA_Revolver_C.OnReconfigure
	 * 		Flags  -> ()
	 */
	void ABPA_Revolver_C::OnReconfigure()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Revolver.BPA_Revolver_C.OnReconfigure");
		
		ABPA_Revolver_C_OnReconfigure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Revolver.BPA_Revolver_C.OnAmmoRemoved
	 * 		Flags  -> ()
	 */
	void ABPA_Revolver_C::OnAmmoRemoved()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Revolver.BPA_Revolver_C.OnAmmoRemoved");
		
		ABPA_Revolver_C_OnAmmoRemoved_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Revolver.BPA_Revolver_C.DestroyComp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             SceneComponent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Revolver_C::DestroyComp(class USceneComponent* SceneComponent)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Revolver.BPA_Revolver_C.DestroyComp");
		
		ABPA_Revolver_C_DestroyComp_Params params {};
		params.SceneComponent = SceneComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Revolver.BPA_Revolver_C.DrumRotate
	 * 		Flags  -> ()
	 */
	void ABPA_Revolver_C::DrumRotate()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Revolver.BPA_Revolver_C.DrumRotate");
		
		ABPA_Revolver_C_DrumRotate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Revolver.BPA_Revolver_C.OnUsed
	 * 		Flags  -> ()
	 */
	void ABPA_Revolver_C::OnUsed()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Revolver.BPA_Revolver_C.OnUsed");
		
		ABPA_Revolver_C_OnUsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Revolver.BPA_Revolver_C.EjectAllRounds
	 * 		Flags  -> ()
	 */
	void ABPA_Revolver_C::EjectAllRounds()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Revolver.BPA_Revolver_C.EjectAllRounds");
		
		ABPA_Revolver_C_EjectAllRounds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Revolver.BPA_Revolver_C.PrimaryTrigger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Revolver_C::PrimaryTrigger(float AxisValue)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Revolver.BPA_Revolver_C.PrimaryTrigger");
		
		ABPA_Revolver_C_PrimaryTrigger_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Revolver.BPA_Revolver_C.EjectEmptyCases
	 * 		Flags  -> ()
	 */
	void ABPA_Revolver_C::EjectEmptyCases()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Revolver.BPA_Revolver_C.EjectEmptyCases");
		
		ABPA_Revolver_C_EjectEmptyCases_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Revolver.BPA_Revolver_C.EjectBullets
	 * 		Flags  -> ()
	 */
	void ABPA_Revolver_C::EjectBullets()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Revolver.BPA_Revolver_C.EjectBullets");
		
		ABPA_Revolver_C_EjectBullets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Revolver.BPA_Revolver_C.ExecuteUbergraph_BPA_Revolver
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Revolver_C::ExecuteUbergraph_BPA_Revolver(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Revolver.BPA_Revolver_C.ExecuteUbergraph_BPA_Revolver");
		
		ABPA_Revolver_C_ExecuteUbergraph_BPA_Revolver_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABPA_Revolver_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPA_Revolver_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPA_Revolver.BPA_Revolver_C");
		return ptr;
	}

}


