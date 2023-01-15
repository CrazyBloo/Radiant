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
	 * 		Name   -> Function BPA_Probe.BPA_Probe_C.DropItemOnGround
	 * 		Flags  -> ()
	 */
	bool ABPA_Probe_C::DropItemOnGround()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Probe.BPA_Probe_C.DropItemOnGround");
		
		ABPA_Probe_C_DropItemOnGround_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Probe.BPA_Probe_C.GetActorUID
	 * 		Flags  -> ()
	 */
	class FString ABPA_Probe_C::GetActorUID()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Probe.BPA_Probe_C.GetActorUID");
		
		ABPA_Probe_C_GetActorUID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Probe.BPA_Probe_C.GetAttachmentsList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              Attachments                                                (Parm, OutParm)
	 */
	void ABPA_Probe_C::GetAttachmentsList(TArray<class FString>* Attachments)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Probe.BPA_Probe_C.GetAttachmentsList");
		
		ABPA_Probe_C_GetAttachmentsList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Attachments != nullptr)
			*Attachments = params.Attachments;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Probe.BPA_Probe_C.GetAttachmentTypeID
	 * 		Flags  -> ()
	 */
	struct FGameplayTag ABPA_Probe_C::GetAttachmentTypeID()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Probe.BPA_Probe_C.GetAttachmentTypeID");
		
		ABPA_Probe_C_GetAttachmentTypeID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Probe.BPA_Probe_C.GetConditionPercent
	 * 		Flags  -> ()
	 */
	float ABPA_Probe_C::GetConditionPercent()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Probe.BPA_Probe_C.GetConditionPercent");
		
		ABPA_Probe_C_GetConditionPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Probe.BPA_Probe_C.GetCurrentCondition
	 * 		Flags  -> ()
	 */
	float ABPA_Probe_C::GetCurrentCondition()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Probe.BPA_Probe_C.GetCurrentCondition");
		
		ABPA_Probe_C_GetCurrentCondition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Probe.BPA_Probe_C.GetCurrentWeight
	 * 		Flags  -> ()
	 */
	float ABPA_Probe_C::GetCurrentWeight()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Probe.BPA_Probe_C.GetCurrentWeight");
		
		ABPA_Probe_C_GetCurrentWeight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Probe.BPA_Probe_C.GetDefaultPoseType
	 * 		Flags  -> ()
	 */
	EPRHandPoseType ABPA_Probe_C::GetDefaultPoseType()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Probe.BPA_Probe_C.GetDefaultPoseType");
		
		ABPA_Probe_C_GetDefaultPoseType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Probe.BPA_Probe_C.GetInventoryItem
	 * 		Flags  -> ()
	 */
	class UInventoryItem* ABPA_Probe_C::GetInventoryItem()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Probe.BPA_Probe_C.GetInventoryItem");
		
		ABPA_Probe_C_GetInventoryItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Probe.BPA_Probe_C.GetItemCenterTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               socket                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FTransform                                  itemCenterTransform                                        (Parm, OutParm, IsPlainOldData, NoDestructor)
	 */
	void ABPA_Probe_C::GetItemCenterTransform(bool* socket, struct FTransform* itemCenterTransform)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Probe.BPA_Probe_C.GetItemCenterTransform");
		
		ABPA_Probe_C_GetItemCenterTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (socket != nullptr)
			*socket = params.socket;
		if (itemCenterTransform != nullptr)
			*itemCenterTransform = params.itemCenterTransform;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Probe.BPA_Probe_C.GetItemInfo
	 * 		Flags  -> ()
	 */
	struct FPRItemInfo ABPA_Probe_C::GetItemInfo()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Probe.BPA_Probe_C.GetItemInfo");
		
		ABPA_Probe_C_GetItemInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Probe.BPA_Probe_C.GetItemVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsVisible                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_Probe_C::GetItemVisibility(bool* bIsVisible)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Probe.BPA_Probe_C.GetItemVisibility");
		
		ABPA_Probe_C_GetItemVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsVisible != nullptr)
			*bIsVisible = params.bIsVisible;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Probe.BPA_Probe_C.GetPoseShift
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPRHandPoseType                                    poseType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FTransform ABPA_Probe_C::GetPoseShift(EPRHandPoseType poseType)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Probe.BPA_Probe_C.GetPoseShift");
		
		ABPA_Probe_C_GetPoseShift_Params params {};
		params.poseType = poseType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Probe.BPA_Probe_C.GetPreparedItem
	 * 		Flags  -> ()
	 */
	class UInventoryItem* ABPA_Probe_C::GetPreparedItem()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Probe.BPA_Probe_C.GetPreparedItem");
		
		ABPA_Probe_C_GetPreparedItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Probe.BPA_Probe_C.GetProxyMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bUseProxy                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_Probe_C::GetProxyMode(bool* bUseProxy)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Probe.BPA_Probe_C.GetProxyMode");
		
		ABPA_Probe_C_GetProxyMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bUseProxy != nullptr)
			*bUseProxy = params.bUseProxy;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Probe.BPA_Probe_C.GetTypeID
	 * 		Flags  -> ()
	 */
	struct FGameplayTag ABPA_Probe_C::GetTypeID()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Probe.BPA_Probe_C.GetTypeID");
		
		ABPA_Probe_C_GetTypeID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Probe.BPA_Probe_C.IsItemInDelivery
	 * 		Flags  -> ()
	 */
	bool ABPA_Probe_C::IsItemInDelivery()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Probe.BPA_Probe_C.IsItemInDelivery");
		
		ABPA_Probe_C_IsItemInDelivery_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Probe.BPA_Probe_C.Reconfigure
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInventoryItem*                              InventoryItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_Probe_C::Reconfigure(class UInventoryItem* InventoryItem, bool* success)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Probe.BPA_Probe_C.Reconfigure");
		
		ABPA_Probe_C_Reconfigure_Params params {};
		params.InventoryItem = InventoryItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (success != nullptr)
			*success = params.success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Probe.BPA_Probe_C.UpdateInventoryItemLocation
	 * 		Flags  -> ()
	 */
	bool ABPA_Probe_C::UpdateInventoryItemLocation()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Probe.BPA_Probe_C.UpdateInventoryItemLocation");
		
		ABPA_Probe_C_UpdateInventoryItemLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Probe.BPA_Probe_C.DisableItemPhysics
	 * 		Flags  -> ()
	 */
	void ABPA_Probe_C::DisableItemPhysics()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Probe.BPA_Probe_C.DisableItemPhysics");
		
		ABPA_Probe_C_DisableItemPhysics_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Probe.BPA_Probe_C.InitBought
	 * 		Flags  -> ()
	 */
	void ABPA_Probe_C::InitBought()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Probe.BPA_Probe_C.InitBought");
		
		ABPA_Probe_C_InitBought_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Probe.BPA_Probe_C.OnAddedToHolster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHolsterComponent*                           Holster                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Probe_C::OnAddedToHolster(class UHolsterComponent* Holster)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Probe.BPA_Probe_C.OnAddedToHolster");
		
		ABPA_Probe_C_OnAddedToHolster_Params params {};
		params.Holster = Holster;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Probe.BPA_Probe_C.OnProxyDisabled
	 * 		Flags  -> ()
	 */
	void ABPA_Probe_C::OnProxyDisabled()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Probe.BPA_Probe_C.OnProxyDisabled");
		
		ABPA_Probe_C_OnProxyDisabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Probe.BPA_Probe_C.OnProxyEnabled
	 * 		Flags  -> ()
	 */
	void ABPA_Probe_C::OnProxyEnabled()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Probe.BPA_Probe_C.OnProxyEnabled");
		
		ABPA_Probe_C_OnProxyEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Probe.BPA_Probe_C.OnProxySystemReady
	 * 		Flags  -> ()
	 */
	void ABPA_Probe_C::OnProxySystemReady()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Probe.BPA_Probe_C.OnProxySystemReady");
		
		ABPA_Probe_C_OnProxySystemReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Probe.BPA_Probe_C.OnRemovedFromHolster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHolsterComponent*                           Holster                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Probe_C::OnRemovedFromHolster(class UHolsterComponent* Holster)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Probe.BPA_Probe_C.OnRemovedFromHolster");
		
		ABPA_Probe_C_OnRemovedFromHolster_Params params {};
		params.Holster = Holster;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Probe.BPA_Probe_C.RegisterMeshComponentsAndOmittableColliders
	 * 		Flags  -> ()
	 */
	void ABPA_Probe_C::RegisterMeshComponentsAndOmittableColliders()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Probe.BPA_Probe_C.RegisterMeshComponentsAndOmittableColliders");
		
		ABPA_Probe_C_RegisterMeshComponentsAndOmittableColliders_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Probe.BPA_Probe_C.SetDistanceGripEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_Probe_C::SetDistanceGripEnable(bool enable)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Probe.BPA_Probe_C.SetDistanceGripEnable");
		
		ABPA_Probe_C_SetDistanceGripEnable_Params params {};
		params.enable = enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Probe.BPA_Probe_C.SetItemVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewVisibility                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_Probe_C::SetItemVisibility(bool bNewVisibility)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Probe.BPA_Probe_C.SetItemVisibility");
		
		ABPA_Probe_C_SetItemVisibility_Params params {};
		params.bNewVisibility = bNewVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Probe.BPA_Probe_C.SetProxyMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bUseProxy                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_Probe_C::SetProxyMode(bool bUseProxy)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Probe.BPA_Probe_C.SetProxyMode");
		
		ABPA_Probe_C_SetProxyMode_Params params {};
		params.bUseProxy = bUseProxy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Probe.BPA_Probe_C.SetupProxySystem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bStartWithProxy                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bStartVisible                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_Probe_C::SetupProxySystem(bool bStartWithProxy, bool bStartVisible)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Probe.BPA_Probe_C.SetupProxySystem");
		
		ABPA_Probe_C_SetupProxySystem_Params params {};
		params.bStartWithProxy = bStartWithProxy;
		params.bStartVisible = bStartVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Probe.BPA_Probe_C.StopUse
	 * 		Flags  -> ()
	 */
	void ABPA_Probe_C::StopUse()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Probe.BPA_Probe_C.StopUse");
		
		ABPA_Probe_C_StopUse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Probe.BPA_Probe_C.UpdateAttachmentSlots
	 * 		Flags  -> ()
	 */
	void ABPA_Probe_C::UpdateAttachmentSlots()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Probe.BPA_Probe_C.UpdateAttachmentSlots");
		
		ABPA_Probe_C_UpdateAttachmentSlots_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Probe.BPA_Probe_C.UpdateFireMode
	 * 		Flags  -> ()
	 */
	void ABPA_Probe_C::UpdateFireMode()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Probe.BPA_Probe_C.UpdateFireMode");
		
		ABPA_Probe_C_UpdateFireMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Probe.BPA_Probe_C.Damage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USceneComponent*                             HitComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Probe_C::Damage(float Damage, class USceneComponent* HitComponent)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Probe.BPA_Probe_C.Damage");
		
		ABPA_Probe_C_Damage_Params params {};
		params.Damage = Damage;
		params.HitComponent = HitComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Probe.BPA_Probe_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABPA_Probe_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Probe.BPA_Probe_C.ReceiveBeginPlay");
		
		ABPA_Probe_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Probe.BPA_Probe_C.Thrown
	 * 		Flags  -> ()
	 */
	void ABPA_Probe_C::Thrown()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Probe.BPA_Probe_C.Thrown");
		
		ABPA_Probe_C_Thrown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_Probe.BPA_Probe_C.BndEvt__BPA_Probe_Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     NormalImpulse                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABPA_Probe_C::BndEvt__BPA_Probe_Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Probe.BPA_Probe_C.BndEvt__BPA_Probe_Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");
		
		ABPA_Probe_C_BndEvt__BPA_Probe_Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params params {};
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
	 * 		Name   -> Function BPA_Probe.BPA_Probe_C.ExecuteUbergraph_BPA_Probe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_Probe_C::ExecuteUbergraph_BPA_Probe(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_Probe.BPA_Probe_C.ExecuteUbergraph_BPA_Probe");
		
		ABPA_Probe_C_ExecuteUbergraph_BPA_Probe_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABPA_Probe_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPA_Probe_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPA_Probe.BPA_Probe_C");
		return ptr;
	}

}


