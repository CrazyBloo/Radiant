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
	 * 		Name   -> Function BP_PhysicsActor.BP_PhysicsActor_C.GetLightItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsOn                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ABPA_BaseItem_C*                             Item                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PhysicsActor_C::GetLightItem(bool* IsOn, class ABPA_BaseItem_C** Item)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PhysicsActor.BP_PhysicsActor_C.GetLightItem");
		
		ABP_PhysicsActor_C_GetLightItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsOn != nullptr)
			*IsOn = params.IsOn;
		if (Item != nullptr)
			*Item = params.Item;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PhysicsActor.BP_PhysicsActor_C.IsItemActorAttachmentsLocked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PhysicsActor_C::IsItemActorAttachmentsLocked(bool* Result)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PhysicsActor.BP_PhysicsActor_C.IsItemActorAttachmentsLocked");
		
		ABP_PhysicsActor_C_IsItemActorAttachmentsLocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PhysicsActor.BP_PhysicsActor_C.IsOn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               On                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PhysicsActor_C::IsOn(bool* On)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PhysicsActor.BP_PhysicsActor_C.IsOn");
		
		ABP_PhysicsActor_C_IsOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (On != nullptr)
			*On = params.On;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PhysicsActor.BP_PhysicsActor_C.GetGSLerpToHand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGS_LerpToHand*                              LerpToHandScript                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PhysicsActor_C::GetGSLerpToHand(class UGS_LerpToHand** LerpToHandScript)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PhysicsActor.BP_PhysicsActor_C.GetGSLerpToHand");
		
		ABP_PhysicsActor_C_GetGSLerpToHand_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LerpToHandScript != nullptr)
			*LerpToHandScript = params.LerpToHandScript;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PhysicsActor.BP_PhysicsActor_C.DenyHolstering
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Deny                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PhysicsActor_C::DenyHolstering(bool* Deny)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PhysicsActor.BP_PhysicsActor_C.DenyHolstering");
		
		ABP_PhysicsActor_C_DenyHolstering_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Deny != nullptr)
			*Deny = params.Deny;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PhysicsActor.BP_PhysicsActor_C.GetInstanceID
	 * 		Flags  -> ()
	 */
	class FString ABP_PhysicsActor_C::GetInstanceID()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PhysicsActor.BP_PhysicsActor_C.GetInstanceID");
		
		ABP_PhysicsActor_C_GetInstanceID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PhysicsActor.BP_PhysicsActor_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_PhysicsActor_C::UserConstructionScript()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PhysicsActor.BP_PhysicsActor_C.UserConstructionScript");
		
		ABP_PhysicsActor_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PhysicsActor.BP_PhysicsActor_C.OnTransitionEndOnceEventDelegate
	 * 		Flags  -> ()
	 */
	void ABP_PhysicsActor_C::OnTransitionEndOnceEventDelegate()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PhysicsActor.BP_PhysicsActor_C.OnTransitionEndOnceEventDelegate");
		
		ABP_PhysicsActor_C_OnTransitionEndOnceEventDelegate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PhysicsActor.BP_PhysicsActor_C.PlayerInteract
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHand_EHand                                        hand                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PhysicsActor_C::PlayerInteract(EHand_EHand hand, class UPrimitiveComponent* Controller)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PhysicsActor.BP_PhysicsActor_C.PlayerInteract");
		
		ABP_PhysicsActor_C_PlayerInteract_Params params {};
		params.hand = hand;
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PhysicsActor.BP_PhysicsActor_C.EjectMag
	 * 		Flags  -> ()
	 */
	void ABP_PhysicsActor_C::EjectMag()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PhysicsActor.BP_PhysicsActor_C.EjectMag");
		
		ABP_PhysicsActor_C_EjectMag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PhysicsActor.BP_PhysicsActor_C.ThumbUp
	 * 		Flags  -> ()
	 */
	void ABP_PhysicsActor_C::ThumbUp()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PhysicsActor.BP_PhysicsActor_C.ThumbUp");
		
		ABP_PhysicsActor_C_ThumbUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PhysicsActor.BP_PhysicsActor_C.Bind
	 * 		Flags  -> ()
	 */
	void ABP_PhysicsActor_C::Bind()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PhysicsActor.BP_PhysicsActor_C.Bind");
		
		ABP_PhysicsActor_C_Bind_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PhysicsActor.BP_PhysicsActor_C.ThumbLeft
	 * 		Flags  -> ()
	 */
	void ABP_PhysicsActor_C::ThumbLeft()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PhysicsActor.BP_PhysicsActor_C.ThumbLeft");
		
		ABP_PhysicsActor_C_ThumbLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PhysicsActor.BP_PhysicsActor_C.ThumbRight
	 * 		Flags  -> ()
	 */
	void ABP_PhysicsActor_C::ThumbRight()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PhysicsActor.BP_PhysicsActor_C.ThumbRight");
		
		ABP_PhysicsActor_C_ThumbRight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PhysicsActor.BP_PhysicsActor_C.Inspect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PhysicsActor_C::Inspect(bool On)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PhysicsActor.BP_PhysicsActor_C.Inspect");
		
		ABP_PhysicsActor_C_Inspect_Params params {};
		params.On = On;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PhysicsActor.BP_PhysicsActor_C.Unbind
	 * 		Flags  -> ()
	 */
	void ABP_PhysicsActor_C::Unbind()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PhysicsActor.BP_PhysicsActor_C.Unbind");
		
		ABP_PhysicsActor_C_Unbind_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PhysicsActor.BP_PhysicsActor_C.Use
	 * 		Flags  -> ()
	 */
	void ABP_PhysicsActor_C::Use()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PhysicsActor.BP_PhysicsActor_C.Use");
		
		ABP_PhysicsActor_C_Use_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PhysicsActor.BP_PhysicsActor_C.TutLock
	 * 		Flags  -> ()
	 */
	void ABP_PhysicsActor_C::TutLock()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PhysicsActor.BP_PhysicsActor_C.TutLock");
		
		ABP_PhysicsActor_C_TutLock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PhysicsActor.BP_PhysicsActor_C.TutUnlock
	 * 		Flags  -> ()
	 */
	void ABP_PhysicsActor_C::TutUnlock()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PhysicsActor.BP_PhysicsActor_C.TutUnlock");
		
		ABP_PhysicsActor_C_TutUnlock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PhysicsActor.BP_PhysicsActor_C.Hide
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PhysicsActor_C::Hide(bool Show)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PhysicsActor.BP_PhysicsActor_C.Hide");
		
		ABP_PhysicsActor_C_Hide_Params params {};
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PhysicsActor.BP_PhysicsActor_C.SetItemActorAttachmentsLock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               lock                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PhysicsActor_C::SetItemActorAttachmentsLock(bool lock)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PhysicsActor.BP_PhysicsActor_C.SetItemActorAttachmentsLock");
		
		ABP_PhysicsActor_C_SetItemActorAttachmentsLock_Params params {};
		params.lock = lock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PhysicsActor.BP_PhysicsActor_C.DropEjectedMag
	 * 		Flags  -> ()
	 */
	void ABP_PhysicsActor_C::DropEjectedMag()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PhysicsActor.BP_PhysicsActor_C.DropEjectedMag");
		
		ABP_PhysicsActor_C_DropEjectedMag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PhysicsActor.BP_PhysicsActor_C.NightGlow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PhysicsActor_C::NightGlow(bool On)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PhysicsActor.BP_PhysicsActor_C.NightGlow");
		
		ABP_PhysicsActor_C_NightGlow_Params params {};
		params.On = On;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PhysicsActor.BP_PhysicsActor_C.SecondaryTrigger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PhysicsActor_C::SecondaryTrigger(float AxisValue)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PhysicsActor.BP_PhysicsActor_C.SecondaryTrigger");
		
		ABP_PhysicsActor_C_SecondaryTrigger_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PhysicsActor.BP_PhysicsActor_C.Request Recoil
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Recoil                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PhysicsActor_C::Request_Recoil(const struct FVector& Recoil)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PhysicsActor.BP_PhysicsActor_C.Request Recoil");
		
		ABP_PhysicsActor_C_Request_Recoil_Params params {};
		params.Recoil = Recoil;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PhysicsActor.BP_PhysicsActor_C.RequestPositionCheck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PhysicsActor_C::RequestPositionCheck(bool On)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PhysicsActor.BP_PhysicsActor_C.RequestPositionCheck");
		
		ABP_PhysicsActor_C_RequestPositionCheck_Params params {};
		params.On = On;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PhysicsActor.BP_PhysicsActor_C.BeginItemPositionChecks
	 * 		Flags  -> ()
	 */
	void ABP_PhysicsActor_C::BeginItemPositionChecks()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PhysicsActor.BP_PhysicsActor_C.BeginItemPositionChecks");
		
		ABP_PhysicsActor_C_BeginItemPositionChecks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PhysicsActor.BP_PhysicsActor_C.RequestPhysicsCollision
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        Requestor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PhysicsActor_C::RequestPhysicsCollision(bool On, const class FName& Requestor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PhysicsActor.BP_PhysicsActor_C.RequestPhysicsCollision");
		
		ABP_PhysicsActor_C_RequestPhysicsCollision_Params params {};
		params.On = On;
		params.Requestor = Requestor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PhysicsActor.BP_PhysicsActor_C.SetDenyGrip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               DenyGrip                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PhysicsActor_C::SetDenyGrip(bool DenyGrip)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PhysicsActor.BP_PhysicsActor_C.SetDenyGrip");
		
		ABP_PhysicsActor_C_SetDenyGrip_Params params {};
		params.DenyGrip = DenyGrip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PhysicsActor.BP_PhysicsActor_C.TakenByHolder
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_PhysicsActor_C::TakenByHolder(const class FString& Name)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PhysicsActor.BP_PhysicsActor_C.TakenByHolder");
		
		ABP_PhysicsActor_C_TakenByHolder_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PhysicsActor.BP_PhysicsActor_C.SetAttachedCollision
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Attached                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PhysicsActor_C::SetAttachedCollision(bool Attached)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PhysicsActor.BP_PhysicsActor_C.SetAttachedCollision");
		
		ABP_PhysicsActor_C_SetAttachedCollision_Params params {};
		params.Attached = Attached;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PhysicsActor.BP_PhysicsActor_C.GameplayTrigger
	 * 		Flags  -> ()
	 */
	void ABP_PhysicsActor_C::GameplayTrigger()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PhysicsActor.BP_PhysicsActor_C.GameplayTrigger");
		
		ABP_PhysicsActor_C_GameplayTrigger_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PhysicsActor.BP_PhysicsActor_C.ToggleAttachments
	 * 		Flags  -> ()
	 */
	void ABP_PhysicsActor_C::ToggleAttachments()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PhysicsActor.BP_PhysicsActor_C.ToggleAttachments");
		
		ABP_PhysicsActor_C_ToggleAttachments_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PhysicsActor.BP_PhysicsActor_C.PrimaryTrigger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PhysicsActor_C::PrimaryTrigger(float AxisValue)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PhysicsActor.BP_PhysicsActor_C.PrimaryTrigger");
		
		ABP_PhysicsActor_C_PrimaryTrigger_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PhysicsActor.BP_PhysicsActor_C.BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     NormalImpulse                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_PhysicsActor_C::BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PhysicsActor.BP_PhysicsActor_C.BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");
		
		ABP_PhysicsActor_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params params {};
		params.HitComponent = HitComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.NormalImpulse = NormalImpulse;
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PhysicsActor.BP_PhysicsActor_C.SetMesh
	 * 		Flags  -> ()
	 */
	void ABP_PhysicsActor_C::SetMesh()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PhysicsActor.BP_PhysicsActor_C.SetMesh");
		
		ABP_PhysicsActor_C_SetMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PhysicsActor.BP_PhysicsActor_C.OnGrip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              GrippingController                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_PhysicsActor_C::OnGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PhysicsActor.BP_PhysicsActor_C.OnGrip");
		
		ABP_PhysicsActor_C_OnGrip_Params params {};
		params.GrippingController = GrippingController;
		params.GripInformation = GripInformation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PhysicsActor.BP_PhysicsActor_C.OnGripRelease
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              ReleasingController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 * 		bool                                               bWasSocketed                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_PhysicsActor_C::OnGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PhysicsActor.BP_PhysicsActor_C.OnGripRelease");
		
		ABP_PhysicsActor_C_OnGripRelease_Params params {};
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
	 * 		Name   -> Function BP_PhysicsActor.BP_PhysicsActor_C.RemoveOwner
	 * 		Flags  -> ()
	 */
	void ABP_PhysicsActor_C::RemoveOwner()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PhysicsActor.BP_PhysicsActor_C.RemoveOwner");
		
		ABP_PhysicsActor_C_RemoveOwner_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PhysicsActor.BP_PhysicsActor_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_PhysicsActor_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PhysicsActor.BP_PhysicsActor_C.ReceiveBeginPlay");
		
		ABP_PhysicsActor_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PhysicsActor.BP_PhysicsActor_C.Kill
	 * 		Flags  -> ()
	 */
	void ABP_PhysicsActor_C::Kill()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PhysicsActor.BP_PhysicsActor_C.Kill");
		
		ABP_PhysicsActor_C_Kill_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PhysicsActor.BP_PhysicsActor_C.KillDelayed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PhysicsActor_C::KillDelayed(float Delay)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PhysicsActor.BP_PhysicsActor_C.KillDelayed");
		
		ABP_PhysicsActor_C_KillDelayed_Params params {};
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PhysicsActor.BP_PhysicsActor_C.OnGameStartedEventDelegate
	 * 		Flags  -> ()
	 */
	void ABP_PhysicsActor_C::OnGameStartedEventDelegate()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PhysicsActor.BP_PhysicsActor_C.OnGameStartedEventDelegate");
		
		ABP_PhysicsActor_C_OnGameStartedEventDelegate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PhysicsActor.BP_PhysicsActor_C.ExecuteUbergraph_BP_PhysicsActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PhysicsActor_C::ExecuteUbergraph_BP_PhysicsActor(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PhysicsActor.BP_PhysicsActor_C.ExecuteUbergraph_BP_PhysicsActor");
		
		ABP_PhysicsActor_C_ExecuteUbergraph_BP_PhysicsActor_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_PhysicsActor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_PhysicsActor_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_PhysicsActor.BP_PhysicsActor_C");
		return ptr;
	}

}


