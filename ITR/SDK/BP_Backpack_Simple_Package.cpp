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
	 * 		Name   -> Function BP_Backpack_Simple.BP_Backpack_Simple_C.GetLightItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsOn                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ABPA_BaseItem_C*                             Item                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Backpack_Simple_C::GetLightItem(bool* IsOn, class ABPA_BaseItem_C** Item)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Backpack_Simple.BP_Backpack_Simple_C.GetLightItem");
		
		ABP_Backpack_Simple_C_GetLightItem_Params params {};
		
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
	 * 		Name   -> Function BP_Backpack_Simple.BP_Backpack_Simple_C.DenyHolstering
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Deny                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Backpack_Simple_C::DenyHolstering(bool* Deny)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Backpack_Simple.BP_Backpack_Simple_C.DenyHolstering");
		
		ABP_Backpack_Simple_C_DenyHolstering_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Deny != nullptr)
			*Deny = params.Deny;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Backpack_Simple.BP_Backpack_Simple_C.GetGSLerpToHand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGS_LerpToHand*                              LerpToHandScript                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Backpack_Simple_C::GetGSLerpToHand(class UGS_LerpToHand** LerpToHandScript)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Backpack_Simple.BP_Backpack_Simple_C.GetGSLerpToHand");
		
		ABP_Backpack_Simple_C_GetGSLerpToHand_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LerpToHandScript != nullptr)
			*LerpToHandScript = params.LerpToHandScript;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Backpack_Simple.BP_Backpack_Simple_C.IsOn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               On                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Backpack_Simple_C::IsOn(bool* On)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Backpack_Simple.BP_Backpack_Simple_C.IsOn");
		
		ABP_Backpack_Simple_C_IsOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (On != nullptr)
			*On = params.On;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Backpack_Simple.BP_Backpack_Simple_C.IsItemActorAttachmentsLocked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Backpack_Simple_C::IsItemActorAttachmentsLocked(bool* Result)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Backpack_Simple.BP_Backpack_Simple_C.IsItemActorAttachmentsLocked");
		
		ABP_Backpack_Simple_C_IsItemActorAttachmentsLocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Backpack_Simple.BP_Backpack_Simple_C.CheckDistanceWeightTrinket
	 * 		Flags  -> ()
	 */
	bool ABP_Backpack_Simple_C::CheckDistanceWeightTrinket()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Backpack_Simple.BP_Backpack_Simple_C.CheckDistanceWeightTrinket");
		
		ABP_Backpack_Simple_C_CheckDistanceWeightTrinket_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Backpack_Simple.BP_Backpack_Simple_C.LerpSetWorldLocAndRot
	 * 		Flags  -> ()
	 */
	void ABP_Backpack_Simple_C::LerpSetWorldLocAndRot()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Backpack_Simple.BP_Backpack_Simple_C.LerpSetWorldLocAndRot");
		
		ABP_Backpack_Simple_C_LerpSetWorldLocAndRot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Backpack_Simple.BP_Backpack_Simple_C.GetPivotGripPoint
	 * 		Flags  -> ()
	 */
	class USceneComponent* ABP_Backpack_Simple_C::GetPivotGripPoint()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Backpack_Simple.BP_Backpack_Simple_C.GetPivotGripPoint");
		
		ABP_Backpack_Simple_C_GetPivotGripPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Backpack_Simple.BP_Backpack_Simple_C.CheckEquipped
	 * 		Flags  -> ()
	 */
	bool ABP_Backpack_Simple_C::CheckEquipped()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Backpack_Simple.BP_Backpack_Simple_C.CheckEquipped");
		
		ABP_Backpack_Simple_C_CheckEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Backpack_Simple.BP_Backpack_Simple_C.GetHolderSleepingBag
	 * 		Flags  -> ()
	 */
	class APRHolder* ABP_Backpack_Simple_C::GetHolderSleepingBag()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Backpack_Simple.BP_Backpack_Simple_C.GetHolderSleepingBag");
		
		ABP_Backpack_Simple_C_GetHolderSleepingBag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Backpack_Simple.BP_Backpack_Simple_C.GetHolderPrimaryWeapon
	 * 		Flags  -> ()
	 */
	class APRHolder* ABP_Backpack_Simple_C::GetHolderPrimaryWeapon()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Backpack_Simple.BP_Backpack_Simple_C.GetHolderPrimaryWeapon");
		
		ABP_Backpack_Simple_C_GetHolderPrimaryWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Backpack_Simple.BP_Backpack_Simple_C.GetHolderBackpack
	 * 		Flags  -> ()
	 */
	class APRHolder* ABP_Backpack_Simple_C::GetHolderBackpack()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Backpack_Simple.BP_Backpack_Simple_C.GetHolderBackpack");
		
		ABP_Backpack_Simple_C_GetHolderBackpack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Backpack_Simple.BP_Backpack_Simple_C.GetItemVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsVisible                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Backpack_Simple_C::GetItemVisibility(bool* bIsVisible)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Backpack_Simple.BP_Backpack_Simple_C.GetItemVisibility");
		
		ABP_Backpack_Simple_C_GetItemVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsVisible != nullptr)
			*bIsVisible = params.bIsVisible;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Backpack_Simple.BP_Backpack_Simple_C.GetProxyMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bUseProxy                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Backpack_Simple_C::GetProxyMode(bool* bUseProxy)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Backpack_Simple.BP_Backpack_Simple_C.GetProxyMode");
		
		ABP_Backpack_Simple_C_GetProxyMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bUseProxy != nullptr)
			*bUseProxy = params.bUseProxy;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Backpack_Simple.BP_Backpack_Simple_C.GetAttachmentTypeID
	 * 		Flags  -> ()
	 */
	struct FGameplayTag ABP_Backpack_Simple_C::GetAttachmentTypeID()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Backpack_Simple.BP_Backpack_Simple_C.GetAttachmentTypeID");
		
		ABP_Backpack_Simple_C_GetAttachmentTypeID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Backpack_Simple.BP_Backpack_Simple_C.UpdateInventoryItemLocation
	 * 		Flags  -> ()
	 */
	bool ABP_Backpack_Simple_C::UpdateInventoryItemLocation()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Backpack_Simple.BP_Backpack_Simple_C.UpdateInventoryItemLocation");
		
		ABP_Backpack_Simple_C_UpdateInventoryItemLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Backpack_Simple.BP_Backpack_Simple_C.GetDefaultPoseType
	 * 		Flags  -> ()
	 */
	EPRHandPoseType ABP_Backpack_Simple_C::GetDefaultPoseType()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Backpack_Simple.BP_Backpack_Simple_C.GetDefaultPoseType");
		
		ABP_Backpack_Simple_C_GetDefaultPoseType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Backpack_Simple.BP_Backpack_Simple_C.GetPoseShift
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPRHandPoseType                                    poseType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FTransform ABP_Backpack_Simple_C::GetPoseShift(EPRHandPoseType poseType)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Backpack_Simple.BP_Backpack_Simple_C.GetPoseShift");
		
		ABP_Backpack_Simple_C_GetPoseShift_Params params {};
		params.poseType = poseType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Backpack_Simple.BP_Backpack_Simple_C.GetPreparedItem
	 * 		Flags  -> ()
	 */
	class UInventoryItem* ABP_Backpack_Simple_C::GetPreparedItem()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Backpack_Simple.BP_Backpack_Simple_C.GetPreparedItem");
		
		ABP_Backpack_Simple_C_GetPreparedItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Backpack_Simple.BP_Backpack_Simple_C.GetTypeID
	 * 		Flags  -> ()
	 */
	struct FGameplayTag ABP_Backpack_Simple_C::GetTypeID()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Backpack_Simple.BP_Backpack_Simple_C.GetTypeID");
		
		ABP_Backpack_Simple_C_GetTypeID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Backpack_Simple.BP_Backpack_Simple_C.IsItemInDelivery
	 * 		Flags  -> ()
	 */
	bool ABP_Backpack_Simple_C::IsItemInDelivery()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Backpack_Simple.BP_Backpack_Simple_C.IsItemInDelivery");
		
		ABP_Backpack_Simple_C_IsItemInDelivery_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Backpack_Simple.BP_Backpack_Simple_C.GetItemInfo
	 * 		Flags  -> ()
	 */
	struct FPRItemInfo ABP_Backpack_Simple_C::GetItemInfo()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Backpack_Simple.BP_Backpack_Simple_C.GetItemInfo");
		
		ABP_Backpack_Simple_C_GetItemInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Backpack_Simple.BP_Backpack_Simple_C.DropItemOnGround
	 * 		Flags  -> ()
	 */
	bool ABP_Backpack_Simple_C::DropItemOnGround()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Backpack_Simple.BP_Backpack_Simple_C.DropItemOnGround");
		
		ABP_Backpack_Simple_C_DropItemOnGround_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Backpack_Simple.BP_Backpack_Simple_C.GetActorUID
	 * 		Flags  -> ()
	 */
	class FString ABP_Backpack_Simple_C::GetActorUID()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Backpack_Simple.BP_Backpack_Simple_C.GetActorUID");
		
		ABP_Backpack_Simple_C_GetActorUID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Backpack_Simple.BP_Backpack_Simple_C.GetAttachmentsList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              Attachments                                                (Parm, OutParm)
	 */
	void ABP_Backpack_Simple_C::GetAttachmentsList(TArray<class FString>* Attachments)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Backpack_Simple.BP_Backpack_Simple_C.GetAttachmentsList");
		
		ABP_Backpack_Simple_C_GetAttachmentsList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Attachments != nullptr)
			*Attachments = params.Attachments;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Backpack_Simple.BP_Backpack_Simple_C.GetConditionPercent
	 * 		Flags  -> ()
	 */
	float ABP_Backpack_Simple_C::GetConditionPercent()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Backpack_Simple.BP_Backpack_Simple_C.GetConditionPercent");
		
		ABP_Backpack_Simple_C_GetConditionPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Backpack_Simple.BP_Backpack_Simple_C.GetCurrentCondition
	 * 		Flags  -> ()
	 */
	float ABP_Backpack_Simple_C::GetCurrentCondition()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Backpack_Simple.BP_Backpack_Simple_C.GetCurrentCondition");
		
		ABP_Backpack_Simple_C_GetCurrentCondition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Backpack_Simple.BP_Backpack_Simple_C.GetCurrentWeight
	 * 		Flags  -> ()
	 */
	float ABP_Backpack_Simple_C::GetCurrentWeight()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Backpack_Simple.BP_Backpack_Simple_C.GetCurrentWeight");
		
		ABP_Backpack_Simple_C_GetCurrentWeight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Backpack_Simple.BP_Backpack_Simple_C.GetInventoryItem
	 * 		Flags  -> ()
	 */
	class UInventoryItem* ABP_Backpack_Simple_C::GetInventoryItem()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Backpack_Simple.BP_Backpack_Simple_C.GetInventoryItem");
		
		ABP_Backpack_Simple_C_GetInventoryItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Backpack_Simple.BP_Backpack_Simple_C.GetItemCenterTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               socket                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FTransform                                  itemCenterTransform                                        (Parm, OutParm, IsPlainOldData, NoDestructor)
	 */
	void ABP_Backpack_Simple_C::GetItemCenterTransform(bool* socket, struct FTransform* itemCenterTransform)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Backpack_Simple.BP_Backpack_Simple_C.GetItemCenterTransform");
		
		ABP_Backpack_Simple_C_GetItemCenterTransform_Params params {};
		
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
	 * 		Name   -> Function BP_Backpack_Simple.BP_Backpack_Simple_C.Reconfigure
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInventoryItem*                              InventoryItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Backpack_Simple_C::Reconfigure(class UInventoryItem* InventoryItem, bool* success)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Backpack_Simple.BP_Backpack_Simple_C.Reconfigure");
		
		ABP_Backpack_Simple_C_Reconfigure_Params params {};
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
	 * 		Name   -> Function BP_Backpack_Simple.BP_Backpack_Simple_C.CheckDistance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Restored                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Backpack_Simple_C::CheckDistance(bool* Restored)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Backpack_Simple.BP_Backpack_Simple_C.CheckDistance");
		
		ABP_Backpack_Simple_C_CheckDistance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Restored != nullptr)
			*Restored = params.Restored;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Backpack_Simple.BP_Backpack_Simple_C.Get BP Holder Backpack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_Holder_BackPack_C*                       BP                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Backpack_Simple_C::GetBPHolderBackpack(class ABP_Holder_BackPack_C** BP)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Backpack_Simple.BP_Backpack_Simple_C.Get BP Holder Backpack");
		
		ABP_Backpack_Simple_C_GetBPHolderBackpack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BP != nullptr)
			*BP = params.BP;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Backpack_Simple.BP_Backpack_Simple_C.SetState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Closed                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Backpack_Simple_C::SetState(bool Closed)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Backpack_Simple.BP_Backpack_Simple_C.SetState");
		
		ABP_Backpack_Simple_C_SetState_Params params {};
		params.Closed = Closed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Backpack_Simple.BP_Backpack_Simple_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_Backpack_Simple_C::UserConstructionScript()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Backpack_Simple.BP_Backpack_Simple_C.UserConstructionScript");
		
		ABP_Backpack_Simple_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Backpack_Simple.BP_Backpack_Simple_C.OnTransitionEndOnceEventDelegate
	 * 		Flags  -> ()
	 */
	void ABP_Backpack_Simple_C::OnTransitionEndOnceEventDelegate()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Backpack_Simple.BP_Backpack_Simple_C.OnTransitionEndOnceEventDelegate");
		
		ABP_Backpack_Simple_C_OnTransitionEndOnceEventDelegate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Backpack_Simple.BP_Backpack_Simple_C.PlayerInteract
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHand_EHand                                        hand                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Backpack_Simple_C::PlayerInteract(EHand_EHand hand, class UPrimitiveComponent* Controller)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Backpack_Simple.BP_Backpack_Simple_C.PlayerInteract");
		
		ABP_Backpack_Simple_C_PlayerInteract_Params params {};
		params.hand = hand;
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Backpack_Simple.BP_Backpack_Simple_C.EjectMag
	 * 		Flags  -> ()
	 */
	void ABP_Backpack_Simple_C::EjectMag()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Backpack_Simple.BP_Backpack_Simple_C.EjectMag");
		
		ABP_Backpack_Simple_C_EjectMag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Backpack_Simple.BP_Backpack_Simple_C.ThumbUp
	 * 		Flags  -> ()
	 */
	void ABP_Backpack_Simple_C::ThumbUp()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Backpack_Simple.BP_Backpack_Simple_C.ThumbUp");
		
		ABP_Backpack_Simple_C_ThumbUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Backpack_Simple.BP_Backpack_Simple_C.Bind
	 * 		Flags  -> ()
	 */
	void ABP_Backpack_Simple_C::Bind()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Backpack_Simple.BP_Backpack_Simple_C.Bind");
		
		ABP_Backpack_Simple_C_Bind_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Backpack_Simple.BP_Backpack_Simple_C.ThumbLeft
	 * 		Flags  -> ()
	 */
	void ABP_Backpack_Simple_C::ThumbLeft()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Backpack_Simple.BP_Backpack_Simple_C.ThumbLeft");
		
		ABP_Backpack_Simple_C_ThumbLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Backpack_Simple.BP_Backpack_Simple_C.ThumbRight
	 * 		Flags  -> ()
	 */
	void ABP_Backpack_Simple_C::ThumbRight()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Backpack_Simple.BP_Backpack_Simple_C.ThumbRight");
		
		ABP_Backpack_Simple_C_ThumbRight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Backpack_Simple.BP_Backpack_Simple_C.Inspect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Backpack_Simple_C::Inspect(bool On)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Backpack_Simple.BP_Backpack_Simple_C.Inspect");
		
		ABP_Backpack_Simple_C_Inspect_Params params {};
		params.On = On;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Backpack_Simple.BP_Backpack_Simple_C.Unbind
	 * 		Flags  -> ()
	 */
	void ABP_Backpack_Simple_C::Unbind()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Backpack_Simple.BP_Backpack_Simple_C.Unbind");
		
		ABP_Backpack_Simple_C_Unbind_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Backpack_Simple.BP_Backpack_Simple_C.Use
	 * 		Flags  -> ()
	 */
	void ABP_Backpack_Simple_C::Use()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Backpack_Simple.BP_Backpack_Simple_C.Use");
		
		ABP_Backpack_Simple_C_Use_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Backpack_Simple.BP_Backpack_Simple_C.TutLock
	 * 		Flags  -> ()
	 */
	void ABP_Backpack_Simple_C::TutLock()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Backpack_Simple.BP_Backpack_Simple_C.TutLock");
		
		ABP_Backpack_Simple_C_TutLock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Backpack_Simple.BP_Backpack_Simple_C.TutUnlock
	 * 		Flags  -> ()
	 */
	void ABP_Backpack_Simple_C::TutUnlock()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Backpack_Simple.BP_Backpack_Simple_C.TutUnlock");
		
		ABP_Backpack_Simple_C_TutUnlock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Backpack_Simple.BP_Backpack_Simple_C.Hide
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Backpack_Simple_C::Hide(bool Show)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Backpack_Simple.BP_Backpack_Simple_C.Hide");
		
		ABP_Backpack_Simple_C_Hide_Params params {};
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Backpack_Simple.BP_Backpack_Simple_C.SetItemActorAttachmentsLock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               lock                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Backpack_Simple_C::SetItemActorAttachmentsLock(bool lock)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Backpack_Simple.BP_Backpack_Simple_C.SetItemActorAttachmentsLock");
		
		ABP_Backpack_Simple_C_SetItemActorAttachmentsLock_Params params {};
		params.lock = lock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Backpack_Simple.BP_Backpack_Simple_C.DropEjectedMag
	 * 		Flags  -> ()
	 */
	void ABP_Backpack_Simple_C::DropEjectedMag()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Backpack_Simple.BP_Backpack_Simple_C.DropEjectedMag");
		
		ABP_Backpack_Simple_C_DropEjectedMag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Backpack_Simple.BP_Backpack_Simple_C.NightGlow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Backpack_Simple_C::NightGlow(bool On)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Backpack_Simple.BP_Backpack_Simple_C.NightGlow");
		
		ABP_Backpack_Simple_C_NightGlow_Params params {};
		params.On = On;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Backpack_Simple.BP_Backpack_Simple_C.SecondaryTrigger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Backpack_Simple_C::SecondaryTrigger(float AxisValue)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Backpack_Simple.BP_Backpack_Simple_C.SecondaryTrigger");
		
		ABP_Backpack_Simple_C_SecondaryTrigger_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Backpack_Simple.BP_Backpack_Simple_C.Request Recoil
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Recoil                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Backpack_Simple_C::RequestRecoil(const struct FVector& Recoil)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Backpack_Simple.BP_Backpack_Simple_C.Request Recoil");
		
		ABP_Backpack_Simple_C_RequestRecoil_Params params {};
		params.Recoil = Recoil;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Backpack_Simple.BP_Backpack_Simple_C.RequestPositionCheck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Backpack_Simple_C::RequestPositionCheck(bool On)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Backpack_Simple.BP_Backpack_Simple_C.RequestPositionCheck");
		
		ABP_Backpack_Simple_C_RequestPositionCheck_Params params {};
		params.On = On;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Backpack_Simple.BP_Backpack_Simple_C.BeginItemPositionChecks
	 * 		Flags  -> ()
	 */
	void ABP_Backpack_Simple_C::BeginItemPositionChecks()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Backpack_Simple.BP_Backpack_Simple_C.BeginItemPositionChecks");
		
		ABP_Backpack_Simple_C_BeginItemPositionChecks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Backpack_Simple.BP_Backpack_Simple_C.RequestPhysicsCollision
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        Requestor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Backpack_Simple_C::RequestPhysicsCollision(bool On, const class FName& Requestor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Backpack_Simple.BP_Backpack_Simple_C.RequestPhysicsCollision");
		
		ABP_Backpack_Simple_C_RequestPhysicsCollision_Params params {};
		params.On = On;
		params.Requestor = Requestor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Backpack_Simple.BP_Backpack_Simple_C.SetDenyGrip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               DenyGrip                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Backpack_Simple_C::SetDenyGrip(bool DenyGrip)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Backpack_Simple.BP_Backpack_Simple_C.SetDenyGrip");
		
		ABP_Backpack_Simple_C_SetDenyGrip_Params params {};
		params.DenyGrip = DenyGrip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Backpack_Simple.BP_Backpack_Simple_C.TakenByHolder
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_Backpack_Simple_C::TakenByHolder(const class FString& Name)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Backpack_Simple.BP_Backpack_Simple_C.TakenByHolder");
		
		ABP_Backpack_Simple_C_TakenByHolder_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Backpack_Simple.BP_Backpack_Simple_C.SetAttachedCollision
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Attached                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Backpack_Simple_C::SetAttachedCollision(bool Attached)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Backpack_Simple.BP_Backpack_Simple_C.SetAttachedCollision");
		
		ABP_Backpack_Simple_C_SetAttachedCollision_Params params {};
		params.Attached = Attached;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Backpack_Simple.BP_Backpack_Simple_C.GameplayTrigger
	 * 		Flags  -> ()
	 */
	void ABP_Backpack_Simple_C::GameplayTrigger()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Backpack_Simple.BP_Backpack_Simple_C.GameplayTrigger");
		
		ABP_Backpack_Simple_C_GameplayTrigger_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Backpack_Simple.BP_Backpack_Simple_C.ToggleAttachments
	 * 		Flags  -> ()
	 */
	void ABP_Backpack_Simple_C::ToggleAttachments()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Backpack_Simple.BP_Backpack_Simple_C.ToggleAttachments");
		
		ABP_Backpack_Simple_C_ToggleAttachments_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Backpack_Simple.BP_Backpack_Simple_C.PrimaryTrigger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Backpack_Simple_C::PrimaryTrigger(float AxisValue)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Backpack_Simple.BP_Backpack_Simple_C.PrimaryTrigger");
		
		ABP_Backpack_Simple_C_PrimaryTrigger_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Backpack_Simple.BP_Backpack_Simple_C.OnGrip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              GrippingController                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_Backpack_Simple_C::OnGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Backpack_Simple.BP_Backpack_Simple_C.OnGrip");
		
		ABP_Backpack_Simple_C_OnGrip_Params params {};
		params.GrippingController = GrippingController;
		params.GripInformation = GripInformation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Backpack_Simple.BP_Backpack_Simple_C.OnGripRelease
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              ReleasingController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 * 		bool                                               bWasSocketed                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Backpack_Simple_C::OnGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Backpack_Simple.BP_Backpack_Simple_C.OnGripRelease");
		
		ABP_Backpack_Simple_C_OnGripRelease_Params params {};
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
	 * 		Name   -> Function BP_Backpack_Simple.BP_Backpack_Simple_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Backpack_Simple_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Backpack_Simple.BP_Backpack_Simple_C.ReceiveBeginPlay");
		
		ABP_Backpack_Simple_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Backpack_Simple.BP_Backpack_Simple_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Backpack_Simple_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Backpack_Simple.BP_Backpack_Simple_C.ReceiveTick");
		
		ABP_Backpack_Simple_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Backpack_Simple.BP_Backpack_Simple_C.OnStart
	 * 		Flags  -> ()
	 */
	void ABP_Backpack_Simple_C::OnStart()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Backpack_Simple.BP_Backpack_Simple_C.OnStart");
		
		ABP_Backpack_Simple_C_OnStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Backpack_Simple.BP_Backpack_Simple_C.OnGameStartedEventDelegate
	 * 		Flags  -> ()
	 */
	void ABP_Backpack_Simple_C::OnGameStartedEventDelegate()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Backpack_Simple.BP_Backpack_Simple_C.OnGameStartedEventDelegate");
		
		ABP_Backpack_Simple_C_OnGameStartedEventDelegate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Backpack_Simple.BP_Backpack_Simple_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Backpack_Simple_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Backpack_Simple.BP_Backpack_Simple_C.ReceiveEndPlay");
		
		ABP_Backpack_Simple_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Backpack_Simple.BP_Backpack_Simple_C.LerpToHolster
	 * 		Flags  -> ()
	 */
	void ABP_Backpack_Simple_C::LerpToHolster()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Backpack_Simple.BP_Backpack_Simple_C.LerpToHolster");
		
		ABP_Backpack_Simple_C_LerpToHolster_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Backpack_Simple.BP_Backpack_Simple_C.RefreshState
	 * 		Flags  -> ()
	 */
	void ABP_Backpack_Simple_C::RefreshState()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Backpack_Simple.BP_Backpack_Simple_C.RefreshState");
		
		ABP_Backpack_Simple_C_RefreshState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Backpack_Simple.BP_Backpack_Simple_C.OnReturned
	 * 		Flags  -> ()
	 */
	void ABP_Backpack_Simple_C::OnReturned()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Backpack_Simple.BP_Backpack_Simple_C.OnReturned");
		
		ABP_Backpack_Simple_C_OnReturned_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Backpack_Simple.BP_Backpack_Simple_C.OnUnequipped
	 * 		Flags  -> ()
	 */
	void ABP_Backpack_Simple_C::OnUnequipped()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Backpack_Simple.BP_Backpack_Simple_C.OnUnequipped");
		
		ABP_Backpack_Simple_C_OnUnequipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Backpack_Simple.BP_Backpack_Simple_C.BndEvt__BP_Backpack_Simple_StaticMesh_K2Node_ComponentBoundEvent_0_VROnGripSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              GrippingController                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_Backpack_Simple_C::BndEvt__BP_Backpack_Simple_StaticMesh_K2Node_ComponentBoundEvent_0_VROnGripSignature__DelegateSignature(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Backpack_Simple.BP_Backpack_Simple_C.BndEvt__BP_Backpack_Simple_StaticMesh_K2Node_ComponentBoundEvent_0_VROnGripSignature__DelegateSignature");
		
		ABP_Backpack_Simple_C_BndEvt__BP_Backpack_Simple_StaticMesh_K2Node_ComponentBoundEvent_0_VROnGripSignature__DelegateSignature_Params params {};
		params.GrippingController = GrippingController;
		params.GripInformation = GripInformation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Backpack_Simple.BP_Backpack_Simple_C.BndEvt__BP_Backpack_Simple_StaticMesh_K2Node_ComponentBoundEvent_1_VROnDropSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              GrippingController                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 * 		bool                                               bWasSocketed                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Backpack_Simple_C::BndEvt__BP_Backpack_Simple_StaticMesh_K2Node_ComponentBoundEvent_1_VROnDropSignature__DelegateSignature(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Backpack_Simple.BP_Backpack_Simple_C.BndEvt__BP_Backpack_Simple_StaticMesh_K2Node_ComponentBoundEvent_1_VROnDropSignature__DelegateSignature");
		
		ABP_Backpack_Simple_C_BndEvt__BP_Backpack_Simple_StaticMesh_K2Node_ComponentBoundEvent_1_VROnDropSignature__DelegateSignature_Params params {};
		params.GrippingController = GrippingController;
		params.GripInformation = GripInformation;
		params.bWasSocketed = bWasSocketed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Backpack_Simple.BP_Backpack_Simple_C.CustomTimeline
	 * 		Flags  -> ()
	 */
	void ABP_Backpack_Simple_C::CustomTimeline()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Backpack_Simple.BP_Backpack_Simple_C.CustomTimeline");
		
		ABP_Backpack_Simple_C_CustomTimeline_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Backpack_Simple.BP_Backpack_Simple_C.ReturnWeight
	 * 		Flags  -> ()
	 */
	void ABP_Backpack_Simple_C::ReturnWeight()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Backpack_Simple.BP_Backpack_Simple_C.ReturnWeight");
		
		ABP_Backpack_Simple_C_ReturnWeight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Backpack_Simple.BP_Backpack_Simple_C.E2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Backpack_Simple_C::E2(class AActor* Actor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Backpack_Simple.BP_Backpack_Simple_C.E2");
		
		ABP_Backpack_Simple_C_E2_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Backpack_Simple.BP_Backpack_Simple_C.E1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInventoryItem*                              InventoryItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Backpack_Simple_C::E1(class UInventoryItem* InventoryItem)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Backpack_Simple.BP_Backpack_Simple_C.E1");
		
		ABP_Backpack_Simple_C_E1_Params params {};
		params.InventoryItem = InventoryItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Backpack_Simple.BP_Backpack_Simple_C.ExecuteUbergraph_BP_Backpack_Simple
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Backpack_Simple_C::ExecuteUbergraph_BP_Backpack_Simple(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Backpack_Simple.BP_Backpack_Simple_C.ExecuteUbergraph_BP_Backpack_Simple");
		
		ABP_Backpack_Simple_C_ExecuteUbergraph_BP_Backpack_Simple_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Backpack_Simple_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Backpack_Simple_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Backpack_Simple.BP_Backpack_Simple_C");
		return ptr;
	}

}


