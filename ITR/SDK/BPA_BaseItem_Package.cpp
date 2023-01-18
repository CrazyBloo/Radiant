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
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.GetLightItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsOn                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ABPA_BaseItem_C*                             Item                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_BaseItem_C::GetLightItem(bool* IsOn, class ABPA_BaseItem_C** Item)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.GetLightItem");
		
		ABPA_BaseItem_C_GetLightItem_Params params {};
		
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
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.DenyHolstering
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Deny                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_BaseItem_C::DenyHolstering(bool* Deny)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.DenyHolstering");
		
		ABPA_BaseItem_C_DenyHolstering_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Deny != nullptr)
			*Deny = params.Deny;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.GetGSLerpToHand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGS_LerpToHand*                              LerpToHandScript                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_BaseItem_C::GetGSLerpToHand(class UGS_LerpToHand** LerpToHandScript)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.GetGSLerpToHand");
		
		ABPA_BaseItem_C_GetGSLerpToHand_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LerpToHandScript != nullptr)
			*LerpToHandScript = params.LerpToHandScript;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.IsOn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               On                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_BaseItem_C::IsOn(bool* On)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.IsOn");
		
		ABPA_BaseItem_C_IsOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (On != nullptr)
			*On = params.On;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.IsItemActorAttachmentsLocked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_BaseItem_C::IsItemActorAttachmentsLocked(bool* Result)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.IsItemActorAttachmentsLocked");
		
		ABPA_BaseItem_C_IsItemActorAttachmentsLocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.InitInventoryItem
	 * 		Flags  -> ()
	 */
	class UInventoryItem* ABPA_BaseItem_C::InitInventoryItem()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.InitInventoryItem");
		
		ABPA_BaseItem_C_InitInventoryItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.IsInitInventoryItem
	 * 		Flags  -> ()
	 */
	bool ABPA_BaseItem_C::IsInitInventoryItem()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.IsInitInventoryItem");
		
		ABPA_BaseItem_C_IsInitInventoryItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.InitCleanState
	 * 		Flags  -> ()
	 */
	void ABPA_BaseItem_C::InitCleanState()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.InitCleanState");
		
		ABPA_BaseItem_C_InitCleanState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.CacheComponents
	 * 		Flags  -> ()
	 */
	void ABPA_BaseItem_C::CacheComponents()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.CacheComponents");
		
		ABPA_BaseItem_C_CacheComponents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.GetAttachmentTypeID
	 * 		Flags  -> ()
	 */
	struct FGameplayTag ABPA_BaseItem_C::GetAttachmentTypeID()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.GetAttachmentTypeID");
		
		ABPA_BaseItem_C_GetAttachmentTypeID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.UpdateInventoryItemLocation
	 * 		Flags  -> ()
	 */
	bool ABPA_BaseItem_C::UpdateInventoryItemLocation()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.UpdateInventoryItemLocation");
		
		ABPA_BaseItem_C_UpdateInventoryItemLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.GetPoseShift
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPRHandPoseType                                    poseType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FTransform ABPA_BaseItem_C::GetPoseShift(EPRHandPoseType poseType)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.GetPoseShift");
		
		ABPA_BaseItem_C_GetPoseShift_Params params {};
		params.poseType = poseType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.GetPreparedItem
	 * 		Flags  -> ()
	 */
	class UInventoryItem* ABPA_BaseItem_C::GetPreparedItem()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.GetPreparedItem");
		
		ABPA_BaseItem_C_GetPreparedItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.GetDefaultPoseType
	 * 		Flags  -> ()
	 */
	EPRHandPoseType ABPA_BaseItem_C::GetDefaultPoseType()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.GetDefaultPoseType");
		
		ABPA_BaseItem_C_GetDefaultPoseType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.GetTypeID
	 * 		Flags  -> ()
	 */
	struct FGameplayTag ABPA_BaseItem_C::GetTypeID()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.GetTypeID");
		
		ABPA_BaseItem_C_GetTypeID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.IsItemInDelivery
	 * 		Flags  -> ()
	 */
	bool ABPA_BaseItem_C::IsItemInDelivery()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.IsItemInDelivery");
		
		ABPA_BaseItem_C_IsItemInDelivery_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.GetItemInfo
	 * 		Flags  -> ()
	 */
	struct FPRItemInfo ABPA_BaseItem_C::GetItemInfo()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.GetItemInfo");
		
		ABPA_BaseItem_C_GetItemInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.GetActorUID
	 * 		Flags  -> ()
	 */
	class FString ABPA_BaseItem_C::GetActorUID()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.GetActorUID");
		
		ABPA_BaseItem_C_GetActorUID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.GetInventoryItem
	 * 		Flags  -> ()
	 */
	class UInventoryItem* ABPA_BaseItem_C::GetInventoryItem()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.GetInventoryItem");
		
		ABPA_BaseItem_C_GetInventoryItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.GetCurrentCondition
	 * 		Flags  -> ()
	 */
	float ABPA_BaseItem_C::GetCurrentCondition()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.GetCurrentCondition");
		
		ABPA_BaseItem_C_GetCurrentCondition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.GetCurrentWeight
	 * 		Flags  -> ()
	 */
	float ABPA_BaseItem_C::GetCurrentWeight()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.GetCurrentWeight");
		
		ABPA_BaseItem_C_GetCurrentWeight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.DropItemOnGround
	 * 		Flags  -> ()
	 */
	bool ABPA_BaseItem_C::DropItemOnGround()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.DropItemOnGround");
		
		ABPA_BaseItem_C_DropItemOnGround_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.GetAttachmentsList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              Attachments                                                (Parm, OutParm)
	 */
	void ABPA_BaseItem_C::GetAttachmentsList(TArray<class FString>* Attachments)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.GetAttachmentsList");
		
		ABPA_BaseItem_C_GetAttachmentsList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Attachments != nullptr)
			*Attachments = params.Attachments;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.GetConditionPercent
	 * 		Flags  -> ()
	 */
	float ABPA_BaseItem_C::GetConditionPercent()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.GetConditionPercent");
		
		ABPA_BaseItem_C_GetConditionPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.GetItemCenterTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               socket                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FTransform                                  itemCenterTransform                                        (Parm, OutParm, IsPlainOldData, NoDestructor)
	 */
	void ABPA_BaseItem_C::GetItemCenterTransform(bool* socket, struct FTransform* itemCenterTransform)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.GetItemCenterTransform");
		
		ABPA_BaseItem_C_GetItemCenterTransform_Params params {};
		
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
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.Reconfigure
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInventoryItem*                              InventoryItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_BaseItem_C::Reconfigure(class UInventoryItem* InventoryItem, bool* success)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.Reconfigure");
		
		ABPA_BaseItem_C_Reconfigure_Params params {};
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
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.GetAllAttachments
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class AActor*>                              Attachments                                                (Parm, OutParm)
	 */
	void ABPA_BaseItem_C::GetAllAttachments(TArray<class AActor*>* Attachments)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.GetAllAttachments");
		
		ABPA_BaseItem_C_GetAllAttachments_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Attachments != nullptr)
			*Attachments = params.Attachments;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.CheckMark
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                markTag                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               set                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_BaseItem_C::CheckMark(const struct FGameplayTag& markTag, bool* set)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.CheckMark");
		
		ABPA_BaseItem_C_CheckMark_Params params {};
		params.markTag = markTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (set != nullptr)
			*set = params.set;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.SetMark
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                markTag                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               set                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_BaseItem_C::SetMark(const struct FGameplayTag& markTag, bool* set)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.SetMark");
		
		ABPA_BaseItem_C_SetMark_Params params {};
		params.markTag = markTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (set != nullptr)
			*set = params.set;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.RemoveMark
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                markTag                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               exactMatch                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_BaseItem_C::RemoveMark(const struct FGameplayTag& markTag, bool exactMatch)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.RemoveMark");
		
		ABPA_BaseItem_C_RemoveMark_Params params {};
		params.markTag = markTag;
		params.exactMatch = exactMatch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.TogglePhysCollisions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_BaseItem_C::TogglePhysCollisions(bool On)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.TogglePhysCollisions");
		
		ABPA_BaseItem_C_TogglePhysCollisions_Params params {};
		params.On = On;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.DropGlow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_BaseItem_C::DropGlow(bool On)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.DropGlow");
		
		ABPA_BaseItem_C_DropGlow_Params params {};
		params.On = On;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.OnItemCreated
	 * 		Flags  -> ()
	 */
	void ABPA_BaseItem_C::OnItemCreated()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.OnItemCreated");
		
		ABPA_BaseItem_C_OnItemCreated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.CheckInventoryItem
	 * 		Flags  -> ()
	 */
	void ABPA_BaseItem_C::CheckInventoryItem()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.CheckInventoryItem");
		
		ABPA_BaseItem_C_CheckInventoryItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.UpdateMass
	 * 		Flags  -> ()
	 */
	void ABPA_BaseItem_C::UpdateMass()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.UpdateMass");
		
		ABPA_BaseItem_C_UpdateMass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.FindVisibleLoc
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     originLoc                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               found                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_BaseItem_C::FindVisibleLoc(const struct FVector& originLoc, bool* found, struct FVector* Location)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.FindVisibleLoc");
		
		ABPA_BaseItem_C_FindVisibleLoc_Params params {};
		params.originLoc = originLoc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (found != nullptr)
			*found = params.found;
		if (Location != nullptr)
			*Location = params.Location;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.CheckVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Loc                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Visible                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_BaseItem_C::CheckVisibility(const struct FVector& Loc, bool* Visible)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.CheckVisibility");
		
		ABPA_BaseItem_C_CheckVisibility_Params params {};
		params.Loc = Loc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Visible != nullptr)
			*Visible = params.Visible;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.GetSocketSuffix
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Primary                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      Suffix                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABPA_BaseItem_C::GetSocketSuffix(bool Primary, class FString* Suffix)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.GetSocketSuffix");
		
		ABPA_BaseItem_C_GetSocketSuffix_Params params {};
		params.Primary = Primary;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Suffix != nullptr)
			*Suffix = params.Suffix;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.GetRootPrimitive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         RootPrimitive                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_BaseItem_C::GetRootPrimitive(class UPrimitiveComponent** RootPrimitive)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.GetRootPrimitive");
		
		ABPA_BaseItem_C_GetRootPrimitive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RootPrimitive != nullptr)
			*RootPrimitive = params.RootPrimitive;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.PlayDropSound
	 * 		Flags  -> ()
	 */
	void ABPA_BaseItem_C::PlayDropSound()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.PlayDropSound");
		
		ABPA_BaseItem_C_PlayDropSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.MeshDestruction
	 * 		Flags  -> ()
	 */
	void ABPA_BaseItem_C::MeshDestruction()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.MeshDestruction");
		
		ABPA_BaseItem_C_MeshDestruction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.CreateMaterialInstances
	 * 		Flags  -> ()
	 */
	void ABPA_BaseItem_C::CreateMaterialInstances()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.CreateMaterialInstances");
		
		ABPA_BaseItem_C_CreateMaterialInstances_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.UpdateMaterialDamage
	 * 		Flags  -> ()
	 */
	void ABPA_BaseItem_C::UpdateMaterialDamage()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.UpdateMaterialDamage");
		
		ABPA_BaseItem_C_UpdateMaterialDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.UnHide
	 * 		Flags  -> ()
	 */
	void ABPA_BaseItem_C::UnHide()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.UnHide");
		
		ABPA_BaseItem_C_UnHide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.HideEverything
	 * 		Flags  -> ()
	 */
	void ABPA_BaseItem_C::HideEverything()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.HideEverything");
		
		ABPA_BaseItem_C_HideEverything_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.VisibilityToogle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               SetVisbile                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_BaseItem_C::VisibilityToogle(bool SetVisbile)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.VisibilityToogle");
		
		ABPA_BaseItem_C_VisibilityToogle_Params params {};
		params.SetVisbile = SetVisbile;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABPA_BaseItem_C::UserConstructionScript()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.UserConstructionScript");
		
		ABPA_BaseItem_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.PlayerInteract
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHand_EHand                                        hand                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_BaseItem_C::PlayerInteract(EHand_EHand hand, class UPrimitiveComponent* Controller)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.PlayerInteract");
		
		ABPA_BaseItem_C_PlayerInteract_Params params {};
		params.hand = hand;
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.EjectMag
	 * 		Flags  -> ()
	 */
	void ABPA_BaseItem_C::EjectMag()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.EjectMag");
		
		ABPA_BaseItem_C_EjectMag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.ThumbUp
	 * 		Flags  -> ()
	 */
	void ABPA_BaseItem_C::ThumbUp()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.ThumbUp");
		
		ABPA_BaseItem_C_ThumbUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.ThumbLeft
	 * 		Flags  -> ()
	 */
	void ABPA_BaseItem_C::ThumbLeft()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.ThumbLeft");
		
		ABPA_BaseItem_C_ThumbLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.ThumbRight
	 * 		Flags  -> ()
	 */
	void ABPA_BaseItem_C::ThumbRight()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.ThumbRight");
		
		ABPA_BaseItem_C_ThumbRight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.Inspect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_BaseItem_C::Inspect(bool On)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.Inspect");
		
		ABPA_BaseItem_C_Inspect_Params params {};
		params.On = On;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.Use
	 * 		Flags  -> ()
	 */
	void ABPA_BaseItem_C::Use()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.Use");
		
		ABPA_BaseItem_C_Use_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.TutLock
	 * 		Flags  -> ()
	 */
	void ABPA_BaseItem_C::TutLock()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.TutLock");
		
		ABPA_BaseItem_C_TutLock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.TutUnlock
	 * 		Flags  -> ()
	 */
	void ABPA_BaseItem_C::TutUnlock()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.TutUnlock");
		
		ABPA_BaseItem_C_TutUnlock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.SetItemActorAttachmentsLock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               lock                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_BaseItem_C::SetItemActorAttachmentsLock(bool lock)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.SetItemActorAttachmentsLock");
		
		ABPA_BaseItem_C_SetItemActorAttachmentsLock_Params params {};
		params.lock = lock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.DropEjectedMag
	 * 		Flags  -> ()
	 */
	void ABPA_BaseItem_C::DropEjectedMag()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.DropEjectedMag");
		
		ABPA_BaseItem_C_DropEjectedMag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.Request Recoil
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Recoil                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_BaseItem_C::RequestRecoil(const struct FVector& Recoil)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.Request Recoil");
		
		ABPA_BaseItem_C_RequestRecoil_Params params {};
		params.Recoil = Recoil;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.TakenByHolder
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABPA_BaseItem_C::TakenByHolder(const class FString& Name)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.TakenByHolder");
		
		ABPA_BaseItem_C_TakenByHolder_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.SetAttachedCollision
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Attached                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_BaseItem_C::SetAttachedCollision(bool Attached)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.SetAttachedCollision");
		
		ABPA_BaseItem_C_SetAttachedCollision_Params params {};
		params.Attached = Attached;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.GameplayTrigger
	 * 		Flags  -> ()
	 */
	void ABPA_BaseItem_C::GameplayTrigger()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.GameplayTrigger");
		
		ABPA_BaseItem_C_GameplayTrigger_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.ToggleAttachments
	 * 		Flags  -> ()
	 */
	void ABPA_BaseItem_C::ToggleAttachments()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.ToggleAttachments");
		
		ABPA_BaseItem_C_ToggleAttachments_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABPA_BaseItem_C::ReceiveBeginPlay()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.ReceiveBeginPlay");
		
		ABPA_BaseItem_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.OnGripRelease
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              ReleasingController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 * 		bool                                               bWasSocketed                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_BaseItem_C::OnGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.OnGripRelease");
		
		ABPA_BaseItem_C_OnGripRelease_Params params {};
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
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.Fix Position
	 * 		Flags  -> ()
	 */
	void ABPA_BaseItem_C::FixPosition()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.Fix Position");
		
		ABPA_BaseItem_C_FixPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.HealthEndedOverride
	 * 		Flags  -> ()
	 */
	void ABPA_BaseItem_C::HealthEndedOverride()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.HealthEndedOverride");
		
		ABPA_BaseItem_C_HealthEndedOverride_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.OnGrip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              GrippingController                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPActorGripInformation                     GripInformation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 */
	void ABPA_BaseItem_C::OnGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.OnGrip");
		
		ABPA_BaseItem_C_OnGrip_Params params {};
		params.GrippingController = GrippingController;
		params.GripInformation = GripInformation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.OnStart
	 * 		Flags  -> ()
	 */
	void ABPA_BaseItem_C::OnStart()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.OnStart");
		
		ABPA_BaseItem_C_OnStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.Bind
	 * 		Flags  -> ()
	 */
	void ABPA_BaseItem_C::Bind()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.Bind");
		
		ABPA_BaseItem_C_Bind_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.Unbind
	 * 		Flags  -> ()
	 */
	void ABPA_BaseItem_C::Unbind()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.Unbind");
		
		ABPA_BaseItem_C_Unbind_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.OnReconfigure
	 * 		Flags  -> ()
	 */
	void ABPA_BaseItem_C::OnReconfigure()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.OnReconfigure");
		
		ABPA_BaseItem_C_OnReconfigure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.BndEvt__StaticMeshComponent_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     NormalImpulse                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABPA_BaseItem_C::BndEvt__StaticMeshComponent_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.BndEvt__StaticMeshComponent_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature");
		
		ABPA_BaseItem_C_BndEvt__StaticMeshComponent_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature_Params params {};
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
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.StartPositionChecks
	 * 		Flags  -> ()
	 */
	void ABPA_BaseItem_C::StartPositionChecks()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.StartPositionChecks");
		
		ABPA_BaseItem_C_StartPositionChecks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.StopPositionCheck
	 * 		Flags  -> ()
	 */
	void ABPA_BaseItem_C::StopPositionCheck()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.StopPositionCheck");
		
		ABPA_BaseItem_C_StopPositionCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.CheckIfUnderTerrain0
	 * 		Flags  -> ()
	 */
	void ABPA_BaseItem_C::CheckIfUnderTerrain0()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.CheckIfUnderTerrain0");
		
		ABPA_BaseItem_C_CheckIfUnderTerrain0_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.BndEvt__BPC_ItemDurability_K2Node_ComponentBoundEvent_2_OnDestroyed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABPA_BaseItem_C::BndEvt__BPC_ItemDurability_K2Node_ComponentBoundEvent_2_OnDestroyed__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.BndEvt__BPC_ItemDurability_K2Node_ComponentBoundEvent_2_OnDestroyed__DelegateSignature");
		
		ABPA_BaseItem_C_BndEvt__BPC_ItemDurability_K2Node_ComponentBoundEvent_2_OnDestroyed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.OnTransitionEndOnceEventDelegate
	 * 		Flags  -> ()
	 */
	void ABPA_BaseItem_C::OnTransitionEndOnceEventDelegate()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.OnTransitionEndOnceEventDelegate");
		
		ABPA_BaseItem_C_OnTransitionEndOnceEventDelegate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.UpdateActorTags
	 * 		Flags  -> ()
	 */
	void ABPA_BaseItem_C::UpdateActorTags()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.UpdateActorTags");
		
		ABPA_BaseItem_C_UpdateActorTags_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_BaseItem_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.ReceiveEndPlay");
		
		ABPA_BaseItem_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.StartClean
	 * 		Flags  -> ()
	 */
	void ABPA_BaseItem_C::StartClean()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.StartClean");
		
		ABPA_BaseItem_C_StartClean_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.NightGlow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_BaseItem_C::NightGlow(bool On)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.NightGlow");
		
		ABPA_BaseItem_C_NightGlow_Params params {};
		params.On = On;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.RequestPositionCheck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_BaseItem_C::RequestPositionCheck(bool On)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.RequestPositionCheck");
		
		ABPA_BaseItem_C_RequestPositionCheck_Params params {};
		params.On = On;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.BeginItemPositionChecks
	 * 		Flags  -> ()
	 */
	void ABPA_BaseItem_C::BeginItemPositionChecks()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.BeginItemPositionChecks");
		
		ABPA_BaseItem_C_BeginItemPositionChecks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.RequestPhysicsCollision
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        Requestor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_BaseItem_C::RequestPhysicsCollision(bool On, const class FName& Requestor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.RequestPhysicsCollision");
		
		ABPA_BaseItem_C_RequestPhysicsCollision_Params params {};
		params.On = On;
		params.Requestor = Requestor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.SetDenyGrip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               DenyGrip                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_BaseItem_C::SetDenyGrip(bool DenyGrip)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.SetDenyGrip");
		
		ABPA_BaseItem_C_SetDenyGrip_Params params {};
		params.DenyGrip = DenyGrip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.Hide
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_BaseItem_C::Hide(bool Show)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.Hide");
		
		ABPA_BaseItem_C_Hide_Params params {};
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.OnRootHit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Impulse                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_BaseItem_C::OnRootHit(const struct FVector& Impulse)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.OnRootHit");
		
		ABPA_BaseItem_C_OnRootHit_Params params {};
		params.Impulse = Impulse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.BndEvt__BPA_BaseItem_BPC_ItemDurability_K2Node_ComponentBoundEvent_0_OnDurabilityChange__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABPA_BaseItem_C::BndEvt__BPA_BaseItem_BPC_ItemDurability_K2Node_ComponentBoundEvent_0_OnDurabilityChange__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.BndEvt__BPA_BaseItem_BPC_ItemDurability_K2Node_ComponentBoundEvent_0_OnDurabilityChange__DelegateSignature");
		
		ABPA_BaseItem_C_BndEvt__BPA_BaseItem_BPC_ItemDurability_K2Node_ComponentBoundEvent_0_OnDurabilityChange__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.SetDistanceGripEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_BaseItem_C::SetDistanceGripEnable(bool enable)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.SetDistanceGripEnable");
		
		ABPA_BaseItem_C_SetDistanceGripEnable_Params params {};
		params.enable = enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.ZeroVelocity
	 * 		Flags  -> ()
	 */
	void ABPA_BaseItem_C::ZeroVelocity()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.ZeroVelocity");
		
		ABPA_BaseItem_C_ZeroVelocity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.PrimaryTrigger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_BaseItem_C::PrimaryTrigger(float AxisValue)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.PrimaryTrigger");
		
		ABPA_BaseItem_C_PrimaryTrigger_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.SecondaryTrigger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_BaseItem_C::SecondaryTrigger(float AxisValue)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.SecondaryTrigger");
		
		ABPA_BaseItem_C_SecondaryTrigger_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.PlayDropSounds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 * 		struct FVector                                     HitImpulse                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsHeld                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_BaseItem_C::PlayDropSounds(const struct FHitResult& Hit, const struct FVector& HitImpulse, bool IsHeld)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.PlayDropSounds");
		
		ABPA_BaseItem_C_PlayDropSounds_Params params {};
		params.Hit = Hit;
		params.HitImpulse = HitImpulse;
		params.IsHeld = IsHeld;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.DisableItemPhysics
	 * 		Flags  -> ()
	 */
	void ABPA_BaseItem_C::DisableItemPhysics()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.DisableItemPhysics");
		
		ABPA_BaseItem_C_DisableItemPhysics_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.Setup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBaseItemSpawnInfo                          BaseItemSpawnInfo                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABPA_BaseItem_C::Setup(const struct FBaseItemSpawnInfo& BaseItemSpawnInfo)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.Setup");
		
		ABPA_BaseItem_C_Setup_Params params {};
		params.BaseItemSpawnInfo = BaseItemSpawnInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.OnAddedToHolster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHolsterComponent*                           Holster                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_BaseItem_C::OnAddedToHolster(class UHolsterComponent* Holster)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.OnAddedToHolster");
		
		ABPA_BaseItem_C_OnAddedToHolster_Params params {};
		params.Holster = Holster;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.ResetInventoryItemRef
	 * 		Flags  -> ()
	 */
	void ABPA_BaseItem_C::ResetInventoryItemRef()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.ResetInventoryItemRef");
		
		ABPA_BaseItem_C_ResetInventoryItemRef_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.OnGameStartedEventDelegate
	 * 		Flags  -> ()
	 */
	void ABPA_BaseItem_C::OnGameStartedEventDelegate()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.OnGameStartedEventDelegate");
		
		ABPA_BaseItem_C_OnGameStartedEventDelegate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.ExecuteUbergraph_BPA_BaseItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPA_BaseItem_C::ExecuteUbergraph_BPA_BaseItem(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.ExecuteUbergraph_BPA_BaseItem");
		
		ABPA_BaseItem_C_ExecuteUbergraph_BPA_BaseItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.OnTriggerChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsPrimary                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABPA_BaseItem_C::OnTriggerChanged__DelegateSignature(bool bIsPrimary)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.OnTriggerChanged__DelegateSignature");
		
		ABPA_BaseItem_C_OnTriggerChanged__DelegateSignature_Params params {};
		params.bIsPrimary = bIsPrimary;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.OnReconfigureDone__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABPA_BaseItem_C::OnReconfigureDone__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.OnReconfigureDone__DelegateSignature");
		
		ABPA_BaseItem_C_OnReconfigureDone__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPA_BaseItem.BPA_BaseItem_C.OnDrop__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABPA_BaseItem_C::OnDrop__DelegateSignature()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPA_BaseItem.BPA_BaseItem_C.OnDrop__DelegateSignature");
		
		ABPA_BaseItem_C_OnDrop__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABPA_BaseItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPA_BaseItem_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPA_BaseItem.BPA_BaseItem_C");
		return ptr;
	}

}


