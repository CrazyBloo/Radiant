#pragma once

/**
 * Name: Into_The_Radius_VR
 * Version: 2.4
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_Backpack_Simple.BP_Backpack_Simple_C.GetLightItem
	 */
	struct ABP_Backpack_Simple_C_GetLightItem_Params
	{
	public:
		bool                                                       IsOn;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WE8E[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABPA_BaseItem_C*                                     Item;                                                    // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Backpack_Simple.BP_Backpack_Simple_C.DenyHolstering
	 */
	struct ABP_Backpack_Simple_C_DenyHolstering_Params
	{
	public:
		bool                                                       Deny;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Backpack_Simple.BP_Backpack_Simple_C.GetGSLerpToHand
	 */
	struct ABP_Backpack_Simple_C_GetGSLerpToHand_Params
	{
	public:
		class UGS_LerpToHand*                                      LerpToHandScript;                                        // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Backpack_Simple.BP_Backpack_Simple_C.IsOn
	 */
	struct ABP_Backpack_Simple_C_IsOn_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Backpack_Simple.BP_Backpack_Simple_C.IsItemActorAttachmentsLocked
	 */
	struct ABP_Backpack_Simple_C_IsItemActorAttachmentsLocked_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Backpack_Simple.BP_Backpack_Simple_C.CheckDistanceWeightTrinket
	 */
	struct ABP_Backpack_Simple_C_CheckDistanceWeightTrinket_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_O38R[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Backpack_Simple.BP_Backpack_Simple_C.LerpSetWorldLocAndRot
	 */
	struct ABP_Backpack_Simple_C_LerpSetWorldLocAndRot_Params
	{	};

	/**
	 * Function BP_Backpack_Simple.BP_Backpack_Simple_C.GetPivotGripPoint
	 */
	struct ABP_Backpack_Simple_C_GetPivotGripPoint_Params
	{
	public:
		class USceneComponent*                                     ReturnValue;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Backpack_Simple.BP_Backpack_Simple_C.CheckEquipped
	 */
	struct ABP_Backpack_Simple_C_CheckEquipped_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Backpack_Simple.BP_Backpack_Simple_C.GetHolderSleepingBag
	 */
	struct ABP_Backpack_Simple_C_GetHolderSleepingBag_Params
	{
	public:
		class APRHolder*                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Backpack_Simple.BP_Backpack_Simple_C.GetHolderPrimaryWeapon
	 */
	struct ABP_Backpack_Simple_C_GetHolderPrimaryWeapon_Params
	{
	public:
		class APRHolder*                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Backpack_Simple.BP_Backpack_Simple_C.GetHolderBackpack
	 */
	struct ABP_Backpack_Simple_C_GetHolderBackpack_Params
	{
	public:
		class APRHolder*                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Backpack_Simple.BP_Backpack_Simple_C.GetItemVisibility
	 */
	struct ABP_Backpack_Simple_C_GetItemVisibility_Params
	{
	public:
		bool                                                       bIsVisible;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Backpack_Simple.BP_Backpack_Simple_C.GetProxyMode
	 */
	struct ABP_Backpack_Simple_C_GetProxyMode_Params
	{
	public:
		bool                                                       bUseProxy;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Backpack_Simple.BP_Backpack_Simple_C.GetAttachmentTypeID
	 */
	struct ABP_Backpack_Simple_C_GetAttachmentTypeID_Params
	{
	public:
		struct FGameplayTag                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Backpack_Simple.BP_Backpack_Simple_C.UpdateInventoryItemLocation
	 */
	struct ABP_Backpack_Simple_C_UpdateInventoryItemLocation_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Backpack_Simple.BP_Backpack_Simple_C.GetDefaultPoseType
	 */
	struct ABP_Backpack_Simple_C_GetDefaultPoseType_Params
	{
	public:
		EPRHandPoseType                                            ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Backpack_Simple.BP_Backpack_Simple_C.GetPoseShift
	 */
	struct ABP_Backpack_Simple_C_GetPoseShift_Params
	{
	public:
		EPRHandPoseType                                            poseType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_M4TE[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          ReturnValue;                                             // 0x0010(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Backpack_Simple.BP_Backpack_Simple_C.GetPreparedItem
	 */
	struct ABP_Backpack_Simple_C_GetPreparedItem_Params
	{
	public:
		class UInventoryItem*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Backpack_Simple.BP_Backpack_Simple_C.GetTypeID
	 */
	struct ABP_Backpack_Simple_C_GetTypeID_Params
	{
	public:
		struct FGameplayTag                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Backpack_Simple.BP_Backpack_Simple_C.IsItemInDelivery
	 */
	struct ABP_Backpack_Simple_C_IsItemInDelivery_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Backpack_Simple.BP_Backpack_Simple_C.GetItemInfo
	 */
	struct ABP_Backpack_Simple_C_GetItemInfo_Params
	{
	public:
		struct FPRItemInfo                                         ReturnValue;                                             // 0x0000(0x01A0)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_Backpack_Simple.BP_Backpack_Simple_C.DropItemOnGround
	 */
	struct ABP_Backpack_Simple_C_DropItemOnGround_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Backpack_Simple.BP_Backpack_Simple_C.GetActorUID
	 */
	struct ABP_Backpack_Simple_C_GetActorUID_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Backpack_Simple.BP_Backpack_Simple_C.GetAttachmentsList
	 */
	struct ABP_Backpack_Simple_C_GetAttachmentsList_Params
	{
	public:
		TArray<class FString>                                      Attachments;                                             // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BP_Backpack_Simple.BP_Backpack_Simple_C.GetConditionPercent
	 */
	struct ABP_Backpack_Simple_C_GetConditionPercent_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Backpack_Simple.BP_Backpack_Simple_C.GetCurrentCondition
	 */
	struct ABP_Backpack_Simple_C_GetCurrentCondition_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Backpack_Simple.BP_Backpack_Simple_C.GetCurrentWeight
	 */
	struct ABP_Backpack_Simple_C_GetCurrentWeight_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Backpack_Simple.BP_Backpack_Simple_C.GetInventoryItem
	 */
	struct ABP_Backpack_Simple_C_GetInventoryItem_Params
	{
	public:
		class UInventoryItem*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Backpack_Simple.BP_Backpack_Simple_C.GetItemCenterTransform
	 */
	struct ABP_Backpack_Simple_C_GetItemCenterTransform_Params
	{
	public:
		bool                                                       socket;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XS00[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          itemCenterTransform;                                     // 0x0010(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Backpack_Simple.BP_Backpack_Simple_C.Reconfigure
	 */
	struct ABP_Backpack_Simple_C_Reconfigure_Params
	{
	public:
		class UInventoryItem*                                      InventoryItem;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Backpack_Simple.BP_Backpack_Simple_C.CheckDistance
	 */
	struct ABP_Backpack_Simple_C_CheckDistance_Params
	{
	public:
		bool                                                       Restored;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3JYD[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Backpack_Simple.BP_Backpack_Simple_C.Get BP Holder Backpack
	 */
	struct ABP_Backpack_Simple_C_Get_BP_Holder_Backpack_Params
	{
	public:
		class ABP_Holder_BackPack_C*                               BP;                                                      // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Backpack_Simple.BP_Backpack_Simple_C.SetState
	 */
	struct ABP_Backpack_Simple_C_SetState_Params
	{
	public:
		bool                                                       Closed;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MGG0[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Backpack_Simple.BP_Backpack_Simple_C.UserConstructionScript
	 */
	struct ABP_Backpack_Simple_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Backpack_Simple.BP_Backpack_Simple_C.OnTransitionEndOnceEventDelegate
	 */
	struct ABP_Backpack_Simple_C_OnTransitionEndOnceEventDelegate_Params
	{	};

	/**
	 * Function BP_Backpack_Simple.BP_Backpack_Simple_C.PlayerInteract
	 */
	struct ABP_Backpack_Simple_C_PlayerInteract_Params
	{
	public:
		EHand_EHand                                                hand;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4NQH[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimitiveComponent*                                 Controller;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Backpack_Simple.BP_Backpack_Simple_C.EjectMag
	 */
	struct ABP_Backpack_Simple_C_EjectMag_Params
	{	};

	/**
	 * Function BP_Backpack_Simple.BP_Backpack_Simple_C.ThumbUp
	 */
	struct ABP_Backpack_Simple_C_ThumbUp_Params
	{	};

	/**
	 * Function BP_Backpack_Simple.BP_Backpack_Simple_C.Bind
	 */
	struct ABP_Backpack_Simple_C_Bind_Params
	{	};

	/**
	 * Function BP_Backpack_Simple.BP_Backpack_Simple_C.ThumbLeft
	 */
	struct ABP_Backpack_Simple_C_ThumbLeft_Params
	{	};

	/**
	 * Function BP_Backpack_Simple.BP_Backpack_Simple_C.ThumbRight
	 */
	struct ABP_Backpack_Simple_C_ThumbRight_Params
	{	};

	/**
	 * Function BP_Backpack_Simple.BP_Backpack_Simple_C.Inspect
	 */
	struct ABP_Backpack_Simple_C_Inspect_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Backpack_Simple.BP_Backpack_Simple_C.Unbind
	 */
	struct ABP_Backpack_Simple_C_Unbind_Params
	{	};

	/**
	 * Function BP_Backpack_Simple.BP_Backpack_Simple_C.Use
	 */
	struct ABP_Backpack_Simple_C_Use_Params
	{	};

	/**
	 * Function BP_Backpack_Simple.BP_Backpack_Simple_C.TutLock
	 */
	struct ABP_Backpack_Simple_C_TutLock_Params
	{	};

	/**
	 * Function BP_Backpack_Simple.BP_Backpack_Simple_C.TutUnlock
	 */
	struct ABP_Backpack_Simple_C_TutUnlock_Params
	{	};

	/**
	 * Function BP_Backpack_Simple.BP_Backpack_Simple_C.Hide
	 */
	struct ABP_Backpack_Simple_C_Hide_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Backpack_Simple.BP_Backpack_Simple_C.SetItemActorAttachmentsLock
	 */
	struct ABP_Backpack_Simple_C_SetItemActorAttachmentsLock_Params
	{
	public:
		bool                                                       lock;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Backpack_Simple.BP_Backpack_Simple_C.DropEjectedMag
	 */
	struct ABP_Backpack_Simple_C_DropEjectedMag_Params
	{	};

	/**
	 * Function BP_Backpack_Simple.BP_Backpack_Simple_C.NightGlow
	 */
	struct ABP_Backpack_Simple_C_NightGlow_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Backpack_Simple.BP_Backpack_Simple_C.SecondaryTrigger
	 */
	struct ABP_Backpack_Simple_C_SecondaryTrigger_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Backpack_Simple.BP_Backpack_Simple_C.Request Recoil
	 */
	struct ABP_Backpack_Simple_C_Request_Recoil_Params
	{
	public:
		struct FVector                                             Recoil;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Backpack_Simple.BP_Backpack_Simple_C.RequestPositionCheck
	 */
	struct ABP_Backpack_Simple_C_RequestPositionCheck_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Backpack_Simple.BP_Backpack_Simple_C.BeginItemPositionChecks
	 */
	struct ABP_Backpack_Simple_C_BeginItemPositionChecks_Params
	{	};

	/**
	 * Function BP_Backpack_Simple.BP_Backpack_Simple_C.RequestPhysicsCollision
	 */
	struct ABP_Backpack_Simple_C_RequestPhysicsCollision_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3CV6[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                Requestor;                                               // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Backpack_Simple.BP_Backpack_Simple_C.SetDenyGrip
	 */
	struct ABP_Backpack_Simple_C_SetDenyGrip_Params
	{
	public:
		bool                                                       DenyGrip;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Backpack_Simple.BP_Backpack_Simple_C.TakenByHolder
	 */
	struct ABP_Backpack_Simple_C_TakenByHolder_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Backpack_Simple.BP_Backpack_Simple_C.SetAttachedCollision
	 */
	struct ABP_Backpack_Simple_C_SetAttachedCollision_Params
	{
	public:
		bool                                                       Attached;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Backpack_Simple.BP_Backpack_Simple_C.GameplayTrigger
	 */
	struct ABP_Backpack_Simple_C_GameplayTrigger_Params
	{	};

	/**
	 * Function BP_Backpack_Simple.BP_Backpack_Simple_C.ToggleAttachments
	 */
	struct ABP_Backpack_Simple_C_ToggleAttachments_Params
	{	};

	/**
	 * Function BP_Backpack_Simple.BP_Backpack_Simple_C.PrimaryTrigger
	 */
	struct ABP_Backpack_Simple_C_PrimaryTrigger_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Backpack_Simple.BP_Backpack_Simple_C.OnGrip
	 */
	struct ABP_Backpack_Simple_C_OnGrip_Params
	{
	public:
		class UGripMotionControllerComponent*                      GrippingController;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VD6H[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Backpack_Simple.BP_Backpack_Simple_C.OnGripRelease
	 */
	struct ABP_Backpack_Simple_C_OnGripRelease_Params
	{
	public:
		class UGripMotionControllerComponent*                      ReleasingController;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_I1S1[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
		bool                                                       bWasSocketed;                                            // 0x01F0(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Backpack_Simple.BP_Backpack_Simple_C.ReceiveBeginPlay
	 */
	struct ABP_Backpack_Simple_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Backpack_Simple.BP_Backpack_Simple_C.ReceiveTick
	 */
	struct ABP_Backpack_Simple_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Backpack_Simple.BP_Backpack_Simple_C.OnStart
	 */
	struct ABP_Backpack_Simple_C_OnStart_Params
	{	};

	/**
	 * Function BP_Backpack_Simple.BP_Backpack_Simple_C.OnGameStartedEventDelegate
	 */
	struct ABP_Backpack_Simple_C_OnGameStartedEventDelegate_Params
	{	};

	/**
	 * Function BP_Backpack_Simple.BP_Backpack_Simple_C.ReceiveEndPlay
	 */
	struct ABP_Backpack_Simple_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Backpack_Simple.BP_Backpack_Simple_C.LerpToHolster
	 */
	struct ABP_Backpack_Simple_C_LerpToHolster_Params
	{	};

	/**
	 * Function BP_Backpack_Simple.BP_Backpack_Simple_C.RefreshState
	 */
	struct ABP_Backpack_Simple_C_RefreshState_Params
	{	};

	/**
	 * Function BP_Backpack_Simple.BP_Backpack_Simple_C.OnReturned
	 */
	struct ABP_Backpack_Simple_C_OnReturned_Params
	{	};

	/**
	 * Function BP_Backpack_Simple.BP_Backpack_Simple_C.OnUnequipped
	 */
	struct ABP_Backpack_Simple_C_OnUnequipped_Params
	{	};

	/**
	 * Function BP_Backpack_Simple.BP_Backpack_Simple_C.BndEvt__BP_Backpack_Simple_StaticMesh_K2Node_ComponentBoundEvent_0_VROnGripSignature__DelegateSignature
	 */
	struct ABP_Backpack_Simple_C_BndEvt__BP_Backpack_Simple_StaticMesh_K2Node_ComponentBoundEvent_0_VROnGripSignature__DelegateSignature_Params
	{
	public:
		class UGripMotionControllerComponent*                      GrippingController;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8D8M[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Backpack_Simple.BP_Backpack_Simple_C.BndEvt__BP_Backpack_Simple_StaticMesh_K2Node_ComponentBoundEvent_1_VROnDropSignature__DelegateSignature
	 */
	struct ABP_Backpack_Simple_C_BndEvt__BP_Backpack_Simple_StaticMesh_K2Node_ComponentBoundEvent_1_VROnDropSignature__DelegateSignature_Params
	{
	public:
		class UGripMotionControllerComponent*                      GrippingController;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JETP[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
		bool                                                       bWasSocketed;                                            // 0x01F0(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Backpack_Simple.BP_Backpack_Simple_C.CustomTimeline
	 */
	struct ABP_Backpack_Simple_C_CustomTimeline_Params
	{	};

	/**
	 * Function BP_Backpack_Simple.BP_Backpack_Simple_C.ReturnWeight
	 */
	struct ABP_Backpack_Simple_C_ReturnWeight_Params
	{	};

	/**
	 * Function BP_Backpack_Simple.BP_Backpack_Simple_C.E2
	 */
	struct ABP_Backpack_Simple_C_E2_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Backpack_Simple.BP_Backpack_Simple_C.E1
	 */
	struct ABP_Backpack_Simple_C_E1_Params
	{
	public:
		class UInventoryItem*                                      InventoryItem;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Backpack_Simple.BP_Backpack_Simple_C.ExecuteUbergraph_BP_Backpack_Simple
	 */
	struct ABP_Backpack_Simple_C_ExecuteUbergraph_BP_Backpack_Simple_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
