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
	 * 		Name   -> Function BPA_Attachment.BPA_Attachment_C.IsAttached
	 * 		Flags  -> ()
	 */
	bool ABPA_Attachment_C::IsAttached()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Attachment.BPA_Attachment_C.IsAttached");
		
		ABPA_Attachment_C_IsAttached_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Attachment.BPA_Attachment_C.Make Ungripable
	 * 		Flags  -> ()
	 */
	void ABPA_Attachment_C::MakeUngripable()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Attachment.BPA_Attachment_C.Make Ungripable");
		
		ABPA_Attachment_C_MakeUngripable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Attachment.BPA_Attachment_C.Make Gripable
	 * 		Flags  -> ()
	 */
	void ABPA_Attachment_C::MakeGripable()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Attachment.BPA_Attachment_C.Make Gripable");
		
		ABPA_Attachment_C_MakeGripable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Attachment.BPA_Attachment_C.CheckCanAttach
	 * 		Flags  -> ()
	 */
	void ABPA_Attachment_C::CheckCanAttach()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Attachment.BPA_Attachment_C.CheckCanAttach");
		
		ABPA_Attachment_C_CheckCanAttach_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Attachment.BPA_Attachment_C.StopChecks
	 * 		Flags  -> ()
	 */
	void ABPA_Attachment_C::StopChecks()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Attachment.BPA_Attachment_C.StopChecks");
		
		ABPA_Attachment_C_StopChecks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Attachment.BPA_Attachment_C.OnGripRelease
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              ReleasingController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 * 		bool                                               bWasSocketed                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_Attachment_C::OnGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Attachment.BPA_Attachment_C.OnGripRelease");
		
		ABPA_Attachment_C_OnGripRelease_Params params {};
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
	 * 		Name   -> Function BPA_Attachment.BPA_Attachment_C.OnGrip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              GrippingController                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 */
	void ABPA_Attachment_C::OnGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Attachment.BPA_Attachment_C.OnGrip");
		
		ABPA_Attachment_C_OnGrip_Params params {};
		params.GrippingController = GrippingController;
		params.GripInformation = GripInformation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Attachment.BPA_Attachment_C.BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABPA_Attachment_C::BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Attachment.BPA_Attachment_C.BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");
		
		ABPA_Attachment_C_BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
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
	 * 		Name   -> Function BPA_Attachment.BPA_Attachment_C.MakeSound
	 * 		Flags  -> ()
	 */
	void ABPA_Attachment_C::MakeSound()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Attachment.BPA_Attachment_C.MakeSound");
		
		ABPA_Attachment_C_MakeSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Attachment.BPA_Attachment_C.AttachTo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAttachmentSlotComponent*                    SlotComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bMakeSound                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_Attachment_C::AttachTo(class UAttachmentSlotComponent* SlotComponent, bool bMakeSound)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Attachment.BPA_Attachment_C.AttachTo");
		
		ABPA_Attachment_C_AttachTo_Params params {};
		params.SlotComponent = SlotComponent;
		params.bMakeSound = bMakeSound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Attachment.BPA_Attachment_C.DetachFrom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAttachmentSlotComponent*                    SlotComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Attachment_C::DetachFrom(class UAttachmentSlotComponent* SlotComponent)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Attachment.BPA_Attachment_C.DetachFrom");
		
		ABPA_Attachment_C_DetachFrom_Params params {};
		params.SlotComponent = SlotComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Attachment.BPA_Attachment_C.ExecuteUbergraph_BPA_Attachment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Attachment_C::ExecuteUbergraph_BPA_Attachment(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Attachment.BPA_Attachment_C.ExecuteUbergraph_BPA_Attachment");
		
		ABPA_Attachment_C_ExecuteUbergraph_BPA_Attachment_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Attachment.BPA_Attachment_C.OnAttachChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsAttached                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_Attachment_C::OnAttachChanged__DelegateSignature(bool bIsAttached)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Attachment.BPA_Attachment_C.OnAttachChanged__DelegateSignature");
		
		ABPA_Attachment_C_OnAttachChanged__DelegateSignature_Params params {};
		params.bIsAttached = bIsAttached;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABPA_Attachment_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPA_Attachment_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPA_Attachment.BPA_Attachment_C");
		return ptr;
	}

}


