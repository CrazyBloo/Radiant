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
	 * 		Name   -> Function BP_HandheldMap.BP_HandheldMap_C.GetLightItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsOn                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ABPA_BaseItem_C*                             Item                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HandheldMap_C::GetLightItem(bool* IsOn, class ABPA_BaseItem_C** Item)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HandheldMap.BP_HandheldMap_C.GetLightItem");
		
		ABP_HandheldMap_C_GetLightItem_Params params {};
		
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
	 * 		Name   -> Function BP_HandheldMap.BP_HandheldMap_C.DenyHolstering
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Deny                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HandheldMap_C::DenyHolstering(bool* Deny)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HandheldMap.BP_HandheldMap_C.DenyHolstering");
		
		ABP_HandheldMap_C_DenyHolstering_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Deny != nullptr)
			*Deny = params.Deny;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HandheldMap.BP_HandheldMap_C.GetGSLerpToHand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGS_LerpToHand*                              LerpToHandScript                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HandheldMap_C::GetGSLerpToHand(class UGS_LerpToHand** LerpToHandScript)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HandheldMap.BP_HandheldMap_C.GetGSLerpToHand");
		
		ABP_HandheldMap_C_GetGSLerpToHand_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LerpToHandScript != nullptr)
			*LerpToHandScript = params.LerpToHandScript;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HandheldMap.BP_HandheldMap_C.IsItemActorAttachmentsLocked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HandheldMap_C::IsItemActorAttachmentsLocked(bool* Result)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HandheldMap.BP_HandheldMap_C.IsItemActorAttachmentsLocked");
		
		ABP_HandheldMap_C_IsItemActorAttachmentsLocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HandheldMap.BP_HandheldMap_C.IsOn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               On                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HandheldMap_C::IsOn(bool* On)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HandheldMap.BP_HandheldMap_C.IsOn");
		
		ABP_HandheldMap_C_IsOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (On != nullptr)
			*On = params.On;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HandheldMap.BP_HandheldMap_C.Set UI Collision
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HandheldMap_C::Set_UI_Collision(bool Enabled)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HandheldMap.BP_HandheldMap_C.Set UI Collision");
		
		ABP_HandheldMap_C_Set_UI_Collision_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HandheldMap.BP_HandheldMap_C.SelectTab
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVRButtonComponent*                          Tab                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HandheldMap_C::SelectTab(class UVRButtonComponent* Tab)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HandheldMap.BP_HandheldMap_C.SelectTab");
		
		ABP_HandheldMap_C_SelectTab_Params params {};
		params.Tab = Tab;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HandheldMap.BP_HandheldMap_C.GetGripScripts
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UVRGripScriptBase*>                   ArrayReference                                             (Parm, OutParm, ContainsInstancedReference)
	 */
	bool ABP_HandheldMap_C::GetGripScripts(TArray<class UVRGripScriptBase*>* ArrayReference)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HandheldMap.BP_HandheldMap_C.GetGripScripts");
		
		ABP_HandheldMap_C_GetGripScripts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ArrayReference != nullptr)
			*ArrayReference = params.ArrayReference;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HandheldMap.BP_HandheldMap_C.PlayPageSound
	 * 		Flags  -> ()
	 */
	void ABP_HandheldMap_C::PlayPageSound()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HandheldMap.BP_HandheldMap_C.PlayPageSound");
		
		ABP_HandheldMap_C_PlayPageSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HandheldMap.BP_HandheldMap_C.PlayerInteract
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHand_EHand                                        hand                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HandheldMap_C::PlayerInteract(EHand_EHand hand, class UPrimitiveComponent* Controller)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HandheldMap.BP_HandheldMap_C.PlayerInteract");
		
		ABP_HandheldMap_C_PlayerInteract_Params params {};
		params.hand = hand;
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HandheldMap.BP_HandheldMap_C.EjectMag
	 * 		Flags  -> ()
	 */
	void ABP_HandheldMap_C::EjectMag()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HandheldMap.BP_HandheldMap_C.EjectMag");
		
		ABP_HandheldMap_C_EjectMag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HandheldMap.BP_HandheldMap_C.ThumbUp
	 * 		Flags  -> ()
	 */
	void ABP_HandheldMap_C::ThumbUp()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HandheldMap.BP_HandheldMap_C.ThumbUp");
		
		ABP_HandheldMap_C_ThumbUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HandheldMap.BP_HandheldMap_C.Bind
	 * 		Flags  -> ()
	 */
	void ABP_HandheldMap_C::Bind()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HandheldMap.BP_HandheldMap_C.Bind");
		
		ABP_HandheldMap_C_Bind_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HandheldMap.BP_HandheldMap_C.ThumbLeft
	 * 		Flags  -> ()
	 */
	void ABP_HandheldMap_C::ThumbLeft()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HandheldMap.BP_HandheldMap_C.ThumbLeft");
		
		ABP_HandheldMap_C_ThumbLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HandheldMap.BP_HandheldMap_C.ThumbRight
	 * 		Flags  -> ()
	 */
	void ABP_HandheldMap_C::ThumbRight()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HandheldMap.BP_HandheldMap_C.ThumbRight");
		
		ABP_HandheldMap_C_ThumbRight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HandheldMap.BP_HandheldMap_C.Inspect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HandheldMap_C::Inspect(bool On)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HandheldMap.BP_HandheldMap_C.Inspect");
		
		ABP_HandheldMap_C_Inspect_Params params {};
		params.On = On;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HandheldMap.BP_HandheldMap_C.Unbind
	 * 		Flags  -> ()
	 */
	void ABP_HandheldMap_C::Unbind()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HandheldMap.BP_HandheldMap_C.Unbind");
		
		ABP_HandheldMap_C_Unbind_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HandheldMap.BP_HandheldMap_C.Use
	 * 		Flags  -> ()
	 */
	void ABP_HandheldMap_C::Use()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HandheldMap.BP_HandheldMap_C.Use");
		
		ABP_HandheldMap_C_Use_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HandheldMap.BP_HandheldMap_C.TutLock
	 * 		Flags  -> ()
	 */
	void ABP_HandheldMap_C::TutLock()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HandheldMap.BP_HandheldMap_C.TutLock");
		
		ABP_HandheldMap_C_TutLock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HandheldMap.BP_HandheldMap_C.TutUnlock
	 * 		Flags  -> ()
	 */
	void ABP_HandheldMap_C::TutUnlock()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HandheldMap.BP_HandheldMap_C.TutUnlock");
		
		ABP_HandheldMap_C_TutUnlock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HandheldMap.BP_HandheldMap_C.SetItemActorAttachmentsLock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               lock                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HandheldMap_C::SetItemActorAttachmentsLock(bool lock)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HandheldMap.BP_HandheldMap_C.SetItemActorAttachmentsLock");
		
		ABP_HandheldMap_C_SetItemActorAttachmentsLock_Params params {};
		params.lock = lock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HandheldMap.BP_HandheldMap_C.DropEjectedMag
	 * 		Flags  -> ()
	 */
	void ABP_HandheldMap_C::DropEjectedMag()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HandheldMap.BP_HandheldMap_C.DropEjectedMag");
		
		ABP_HandheldMap_C_DropEjectedMag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HandheldMap.BP_HandheldMap_C.NightGlow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HandheldMap_C::NightGlow(bool On)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HandheldMap.BP_HandheldMap_C.NightGlow");
		
		ABP_HandheldMap_C_NightGlow_Params params {};
		params.On = On;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HandheldMap.BP_HandheldMap_C.SecondaryTrigger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HandheldMap_C::SecondaryTrigger(float AxisValue)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HandheldMap.BP_HandheldMap_C.SecondaryTrigger");
		
		ABP_HandheldMap_C_SecondaryTrigger_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HandheldMap.BP_HandheldMap_C.Request Recoil
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Recoil                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HandheldMap_C::Request_Recoil(const struct FVector& Recoil)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HandheldMap.BP_HandheldMap_C.Request Recoil");
		
		ABP_HandheldMap_C_Request_Recoil_Params params {};
		params.Recoil = Recoil;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HandheldMap.BP_HandheldMap_C.RequestPositionCheck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HandheldMap_C::RequestPositionCheck(bool On)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HandheldMap.BP_HandheldMap_C.RequestPositionCheck");
		
		ABP_HandheldMap_C_RequestPositionCheck_Params params {};
		params.On = On;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HandheldMap.BP_HandheldMap_C.BeginItemPositionChecks
	 * 		Flags  -> ()
	 */
	void ABP_HandheldMap_C::BeginItemPositionChecks()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HandheldMap.BP_HandheldMap_C.BeginItemPositionChecks");
		
		ABP_HandheldMap_C_BeginItemPositionChecks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HandheldMap.BP_HandheldMap_C.SetDenyGrip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               DenyGrip                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HandheldMap_C::SetDenyGrip(bool DenyGrip)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HandheldMap.BP_HandheldMap_C.SetDenyGrip");
		
		ABP_HandheldMap_C_SetDenyGrip_Params params {};
		params.DenyGrip = DenyGrip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HandheldMap.BP_HandheldMap_C.TakenByHolder
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_HandheldMap_C::TakenByHolder(const class FString& Name)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HandheldMap.BP_HandheldMap_C.TakenByHolder");
		
		ABP_HandheldMap_C_TakenByHolder_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HandheldMap.BP_HandheldMap_C.SetAttachedCollision
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Attached                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HandheldMap_C::SetAttachedCollision(bool Attached)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HandheldMap.BP_HandheldMap_C.SetAttachedCollision");
		
		ABP_HandheldMap_C_SetAttachedCollision_Params params {};
		params.Attached = Attached;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HandheldMap.BP_HandheldMap_C.GameplayTrigger
	 * 		Flags  -> ()
	 */
	void ABP_HandheldMap_C::GameplayTrigger()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HandheldMap.BP_HandheldMap_C.GameplayTrigger");
		
		ABP_HandheldMap_C_GameplayTrigger_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HandheldMap.BP_HandheldMap_C.ToggleAttachments
	 * 		Flags  -> ()
	 */
	void ABP_HandheldMap_C::ToggleAttachments()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HandheldMap.BP_HandheldMap_C.ToggleAttachments");
		
		ABP_HandheldMap_C_ToggleAttachments_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HandheldMap.BP_HandheldMap_C.PrimaryTrigger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HandheldMap_C::PrimaryTrigger(float AxisValue)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HandheldMap.BP_HandheldMap_C.PrimaryTrigger");
		
		ABP_HandheldMap_C_PrimaryTrigger_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HandheldMap.BP_HandheldMap_C.OnGrip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              GrippingController                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_HandheldMap_C::OnGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HandheldMap.BP_HandheldMap_C.OnGrip");
		
		ABP_HandheldMap_C_OnGrip_Params params {};
		params.GrippingController = GrippingController;
		params.GripInformation = GripInformation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HandheldMap.BP_HandheldMap_C.OnGripRelease
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              ReleasingController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 * 		bool                                               bWasSocketed                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HandheldMap_C::OnGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HandheldMap.BP_HandheldMap_C.OnGripRelease");
		
		ABP_HandheldMap_C_OnGripRelease_Params params {};
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
	 * 		Name   -> Function BP_HandheldMap.BP_HandheldMap_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HandheldMap_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HandheldMap.BP_HandheldMap_C.ReceiveTick");
		
		ABP_HandheldMap_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HandheldMap.BP_HandheldMap_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HandheldMap_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HandheldMap.BP_HandheldMap_C.ReceiveEndPlay");
		
		ABP_HandheldMap_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HandheldMap.BP_HandheldMap_C.OnLevelStarted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                LevelTag                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HandheldMap_C::OnLevelStarted(const struct FGameplayTag& LevelTag)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HandheldMap.BP_HandheldMap_C.OnLevelStarted");
		
		ABP_HandheldMap_C_OnLevelStarted_Params params {};
		params.LevelTag = LevelTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HandheldMap.BP_HandheldMap_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_HandheldMap_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HandheldMap.BP_HandheldMap_C.ReceiveBeginPlay");
		
		ABP_HandheldMap_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HandheldMap.BP_HandheldMap_C.BndEvt__VRButton_K2Node_ComponentBoundEvent_1_VRButtonStateChangedSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ButtonState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      InteractingActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         InteractingComponent                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HandheldMap_C::BndEvt__VRButton_K2Node_ComponentBoundEvent_1_VRButtonStateChangedSignature__DelegateSignature(bool ButtonState, class AActor* InteractingActor, class UPrimitiveComponent* InteractingComponent)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HandheldMap.BP_HandheldMap_C.BndEvt__VRButton_K2Node_ComponentBoundEvent_1_VRButtonStateChangedSignature__DelegateSignature");
		
		ABP_HandheldMap_C_BndEvt__VRButton_K2Node_ComponentBoundEvent_1_VRButtonStateChangedSignature__DelegateSignature_Params params {};
		params.ButtonState = ButtonState;
		params.InteractingActor = InteractingActor;
		params.InteractingComponent = InteractingComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HandheldMap.BP_HandheldMap_C.PenReset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HandheldMap_C::PenReset(const struct FGameplayTag& Value)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HandheldMap.BP_HandheldMap_C.PenReset");
		
		ABP_HandheldMap_C_PenReset_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HandheldMap.BP_HandheldMap_C.RequestPhysicsCollision
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        Requestor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HandheldMap_C::RequestPhysicsCollision(bool On, const class FName& Requestor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HandheldMap.BP_HandheldMap_C.RequestPhysicsCollision");
		
		ABP_HandheldMap_C_RequestPhysicsCollision_Params params {};
		params.On = On;
		params.Requestor = Requestor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HandheldMap.BP_HandheldMap_C.BndEvt__BP_HandheldMap_VRButton_AlarmTurnOff_K2Node_ComponentBoundEvent_0_VRButtonStateChangedSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ButtonState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      InteractingActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         InteractingComponent                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HandheldMap_C::BndEvt__BP_HandheldMap_VRButton_AlarmTurnOff_K2Node_ComponentBoundEvent_0_VRButtonStateChangedSignature__DelegateSignature(bool ButtonState, class AActor* InteractingActor, class UPrimitiveComponent* InteractingComponent)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HandheldMap.BP_HandheldMap_C.BndEvt__BP_HandheldMap_VRButton_AlarmTurnOff_K2Node_ComponentBoundEvent_0_VRButtonStateChangedSignature__DelegateSignature");
		
		ABP_HandheldMap_C_BndEvt__BP_HandheldMap_VRButton_AlarmTurnOff_K2Node_ComponentBoundEvent_0_VRButtonStateChangedSignature__DelegateSignature_Params params {};
		params.ButtonState = ButtonState;
		params.InteractingActor = InteractingActor;
		params.InteractingComponent = InteractingComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HandheldMap.BP_HandheldMap_C.Hide
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HandheldMap_C::Hide(bool Show)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HandheldMap.BP_HandheldMap_C.Hide");
		
		ABP_HandheldMap_C_Hide_Params params {};
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HandheldMap.BP_HandheldMap_C.OnMapEvent
	 * 		Flags  -> ()
	 */
	void ABP_HandheldMap_C::OnMapEvent()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HandheldMap.BP_HandheldMap_C.OnMapEvent");
		
		ABP_HandheldMap_C_OnMapEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HandheldMap.BP_HandheldMap_C.OnMissionEvent
	 * 		Flags  -> ()
	 */
	void ABP_HandheldMap_C::OnMissionEvent()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HandheldMap.BP_HandheldMap_C.OnMissionEvent");
		
		ABP_HandheldMap_C_OnMissionEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HandheldMap.BP_HandheldMap_C.OnJournalEvent
	 * 		Flags  -> ()
	 */
	void ABP_HandheldMap_C::OnJournalEvent()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HandheldMap.BP_HandheldMap_C.OnJournalEvent");
		
		ABP_HandheldMap_C_OnJournalEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HandheldMap.BP_HandheldMap_C.BndEvt__VRButton_Map_K2Node_ComponentBoundEvent_0_VRButtonStateChangedSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ButtonState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      InteractingActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         InteractingComponent                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HandheldMap_C::BndEvt__VRButton_Map_K2Node_ComponentBoundEvent_0_VRButtonStateChangedSignature__DelegateSignature(bool ButtonState, class AActor* InteractingActor, class UPrimitiveComponent* InteractingComponent)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HandheldMap.BP_HandheldMap_C.BndEvt__VRButton_Map_K2Node_ComponentBoundEvent_0_VRButtonStateChangedSignature__DelegateSignature");
		
		ABP_HandheldMap_C_BndEvt__VRButton_Map_K2Node_ComponentBoundEvent_0_VRButtonStateChangedSignature__DelegateSignature_Params params {};
		params.ButtonState = ButtonState;
		params.InteractingActor = InteractingActor;
		params.InteractingComponent = InteractingComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HandheldMap.BP_HandheldMap_C.BndEvt__VRButton_Mission_K2Node_ComponentBoundEvent_2_VRButtonStateChangedSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ButtonState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      InteractingActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         InteractingComponent                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HandheldMap_C::BndEvt__VRButton_Mission_K2Node_ComponentBoundEvent_2_VRButtonStateChangedSignature__DelegateSignature(bool ButtonState, class AActor* InteractingActor, class UPrimitiveComponent* InteractingComponent)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HandheldMap.BP_HandheldMap_C.BndEvt__VRButton_Mission_K2Node_ComponentBoundEvent_2_VRButtonStateChangedSignature__DelegateSignature");
		
		ABP_HandheldMap_C_BndEvt__VRButton_Mission_K2Node_ComponentBoundEvent_2_VRButtonStateChangedSignature__DelegateSignature_Params params {};
		params.ButtonState = ButtonState;
		params.InteractingActor = InteractingActor;
		params.InteractingComponent = InteractingComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HandheldMap.BP_HandheldMap_C.BndEvt__VRButton_Journal_K2Node_ComponentBoundEvent_3_VRButtonStateChangedSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ButtonState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      InteractingActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         InteractingComponent                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HandheldMap_C::BndEvt__VRButton_Journal_K2Node_ComponentBoundEvent_3_VRButtonStateChangedSignature__DelegateSignature(bool ButtonState, class AActor* InteractingActor, class UPrimitiveComponent* InteractingComponent)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HandheldMap.BP_HandheldMap_C.BndEvt__VRButton_Journal_K2Node_ComponentBoundEvent_3_VRButtonStateChangedSignature__DelegateSignature");
		
		ABP_HandheldMap_C_BndEvt__VRButton_Journal_K2Node_ComponentBoundEvent_3_VRButtonStateChangedSignature__DelegateSignature_Params params {};
		params.ButtonState = ButtonState;
		params.InteractingActor = InteractingActor;
		params.InteractingComponent = InteractingComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HandheldMap.BP_HandheldMap_C.BndEvt__BP_HandheldMap_VRButton_MapGlobal_K2Node_ComponentBoundEvent_2_VRButtonStateChangedSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ButtonState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      InteractingActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         InteractingComponent                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HandheldMap_C::BndEvt__BP_HandheldMap_VRButton_MapGlobal_K2Node_ComponentBoundEvent_2_VRButtonStateChangedSignature__DelegateSignature(bool ButtonState, class AActor* InteractingActor, class UPrimitiveComponent* InteractingComponent)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HandheldMap.BP_HandheldMap_C.BndEvt__BP_HandheldMap_VRButton_MapGlobal_K2Node_ComponentBoundEvent_2_VRButtonStateChangedSignature__DelegateSignature");
		
		ABP_HandheldMap_C_BndEvt__BP_HandheldMap_VRButton_MapGlobal_K2Node_ComponentBoundEvent_2_VRButtonStateChangedSignature__DelegateSignature_Params params {};
		params.ButtonState = ButtonState;
		params.InteractingActor = InteractingActor;
		params.InteractingComponent = InteractingComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HandheldMap.BP_HandheldMap_C.OnMapGlobalEvent
	 * 		Flags  -> ()
	 */
	void ABP_HandheldMap_C::OnMapGlobalEvent()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HandheldMap.BP_HandheldMap_C.OnMapGlobalEvent");
		
		ABP_HandheldMap_C_OnMapGlobalEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HandheldMap.BP_HandheldMap_C.OnAnyLevelStarted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HandheldMap_C::OnAnyLevelStarted(const struct FGameplayTag& Value)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HandheldMap.BP_HandheldMap_C.OnAnyLevelStarted");
		
		ABP_HandheldMap_C_OnAnyLevelStarted_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HandheldMap.BP_HandheldMap_C.PenReleased
	 * 		Flags  -> ()
	 */
	void ABP_HandheldMap_C::PenReleased()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HandheldMap.BP_HandheldMap_C.PenReleased");
		
		ABP_HandheldMap_C_PenReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HandheldMap.BP_HandheldMap_C.ExecuteUbergraph_BP_HandheldMap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HandheldMap_C::ExecuteUbergraph_BP_HandheldMap(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HandheldMap.BP_HandheldMap_C.ExecuteUbergraph_BP_HandheldMap");
		
		ABP_HandheldMap_C_ExecuteUbergraph_BP_HandheldMap_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_HandheldMap_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_HandheldMap_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_HandheldMap.BP_HandheldMap_C");
		return ptr;
	}

}


