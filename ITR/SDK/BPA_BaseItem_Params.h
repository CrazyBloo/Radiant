#pragma once

/**
 * Name: Into_The_Radius_VR
 * Version: 2.5.1
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
	 * Function BPA_BaseItem.BPA_BaseItem_C.GetLightItem
	 */
	struct ABPA_BaseItem_C_GetLightItem_Params
	{
	public:
		bool                                                       IsOn;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_A7RM[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABPA_BaseItem_C*                                     Item;                                                    // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.DenyHolstering
	 */
	struct ABPA_BaseItem_C_DenyHolstering_Params
	{
	public:
		bool                                                       Deny;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.GetGSLerpToHand
	 */
	struct ABPA_BaseItem_C_GetGSLerpToHand_Params
	{
	public:
		class UGS_LerpToHand*                                      LerpToHandScript;                                        // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.IsOn
	 */
	struct ABPA_BaseItem_C_IsOn_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.IsItemActorAttachmentsLocked
	 */
	struct ABPA_BaseItem_C_IsItemActorAttachmentsLocked_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.InitInventoryItem
	 */
	struct ABPA_BaseItem_C_InitInventoryItem_Params
	{
	public:
		class UInventoryItem*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.IsInitInventoryItem
	 */
	struct ABPA_BaseItem_C_IsInitInventoryItem_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2PSR[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.InitCleanState
	 */
	struct ABPA_BaseItem_C_InitCleanState_Params
	{	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.CacheComponents
	 */
	struct ABPA_BaseItem_C_CacheComponents_Params
	{	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.GetAttachmentTypeID
	 */
	struct ABPA_BaseItem_C_GetAttachmentTypeID_Params
	{
	public:
		struct FGameplayTag                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DURM[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.UpdateInventoryItemLocation
	 */
	struct ABPA_BaseItem_C_UpdateInventoryItemLocation_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_51W6[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.GetPoseShift
	 */
	struct ABPA_BaseItem_C_GetPoseShift_Params
	{
	public:
		EPRHandPoseType                                            poseType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_URIM[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          ReturnValue;                                             // 0x0010(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.GetPreparedItem
	 */
	struct ABPA_BaseItem_C_GetPreparedItem_Params
	{
	public:
		class UInventoryItem*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.GetDefaultPoseType
	 */
	struct ABPA_BaseItem_C_GetDefaultPoseType_Params
	{
	public:
		EPRHandPoseType                                            ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.GetTypeID
	 */
	struct ABPA_BaseItem_C_GetTypeID_Params
	{
	public:
		struct FGameplayTag                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.IsItemInDelivery
	 */
	struct ABPA_BaseItem_C_IsItemInDelivery_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FZC2[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.GetItemInfo
	 */
	struct ABPA_BaseItem_C_GetItemInfo_Params
	{
	public:
		struct FPRItemInfo                                         ReturnValue;                                             // 0x0000(0x01A0)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.GetActorUID
	 */
	struct ABPA_BaseItem_C_GetActorUID_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.GetInventoryItem
	 */
	struct ABPA_BaseItem_C_GetInventoryItem_Params
	{
	public:
		class UInventoryItem*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.GetCurrentCondition
	 */
	struct ABPA_BaseItem_C_GetCurrentCondition_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.GetCurrentWeight
	 */
	struct ABPA_BaseItem_C_GetCurrentWeight_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HWLI[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.DropItemOnGround
	 */
	struct ABPA_BaseItem_C_DropItemOnGround_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.GetAttachmentsList
	 */
	struct ABPA_BaseItem_C_GetAttachmentsList_Params
	{
	public:
		TArray<class FString>                                      Attachments;                                             // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.GetConditionPercent
	 */
	struct ABPA_BaseItem_C_GetConditionPercent_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.GetItemCenterTransform
	 */
	struct ABPA_BaseItem_C_GetItemCenterTransform_Params
	{
	public:
		bool                                                       socket;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UHLL[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          itemCenterTransform;                                     // 0x0010(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.Reconfigure
	 */
	struct ABPA_BaseItem_C_Reconfigure_Params
	{
	public:
		class UInventoryItem*                                      InventoryItem;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.GetAllAttachments
	 */
	struct ABPA_BaseItem_C_GetAllAttachments_Params
	{
	public:
		TArray<class AActor*>                                      Attachments;                                             // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.CheckMark
	 */
	struct ABPA_BaseItem_C_CheckMark_Params
	{
	public:
		struct FGameplayTag                                        markTag;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		bool                                                       set;                                                     // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.SetMark
	 */
	struct ABPA_BaseItem_C_SetMark_Params
	{
	public:
		struct FGameplayTag                                        markTag;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		bool                                                       set;                                                     // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.RemoveMark
	 */
	struct ABPA_BaseItem_C_RemoveMark_Params
	{
	public:
		struct FGameplayTag                                        markTag;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		bool                                                       exactMatch;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ABQG[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.TogglePhysCollisions
	 */
	struct ABPA_BaseItem_C_TogglePhysCollisions_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1P2S[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.DropGlow
	 */
	struct ABPA_BaseItem_C_DropGlow_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FSVQ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.OnItemCreated
	 */
	struct ABPA_BaseItem_C_OnItemCreated_Params
	{	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.CheckInventoryItem
	 */
	struct ABPA_BaseItem_C_CheckInventoryItem_Params
	{	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.UpdateMass
	 */
	struct ABPA_BaseItem_C_UpdateMass_Params
	{	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.FindVisibleLoc
	 */
	struct ABPA_BaseItem_C_FindVisibleLoc_Params
	{
	public:
		struct FVector                                             originLoc;                                               // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       found;                                                   // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Q9AT[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Location;                                                // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.CheckVisibility
	 */
	struct ABPA_BaseItem_C_CheckVisibility_Params
	{
	public:
		struct FVector                                             Loc;                                                     // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Visible;                                                 // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HJJR[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.GetSocketSuffix
	 */
	struct ABPA_BaseItem_C_GetSocketSuffix_Params
	{
	public:
		bool                                                       Primary;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LGZ9[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Suffix;                                                  // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.GetRootPrimitive
	 */
	struct ABPA_BaseItem_C_GetRootPrimitive_Params
	{
	public:
		class UPrimitiveComponent*                                 RootPrimitive;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.PlayDropSound
	 */
	struct ABPA_BaseItem_C_PlayDropSound_Params
	{	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.MeshDestruction
	 */
	struct ABPA_BaseItem_C_MeshDestruction_Params
	{	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.CreateMaterialInstances
	 */
	struct ABPA_BaseItem_C_CreateMaterialInstances_Params
	{	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.UpdateMaterialDamage
	 */
	struct ABPA_BaseItem_C_UpdateMaterialDamage_Params
	{	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.UnHide
	 */
	struct ABPA_BaseItem_C_UnHide_Params
	{	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.HideEverything
	 */
	struct ABPA_BaseItem_C_HideEverything_Params
	{	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.VisibilityToogle
	 */
	struct ABPA_BaseItem_C_VisibilityToogle_Params
	{
	public:
		bool                                                       SetVisbile;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_X0UA[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.UserConstructionScript
	 */
	struct ABPA_BaseItem_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.PlayerInteract
	 */
	struct ABPA_BaseItem_C_PlayerInteract_Params
	{
	public:
		EHand_EHand                                                hand;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MN56[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimitiveComponent*                                 Controller;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.EjectMag
	 */
	struct ABPA_BaseItem_C_EjectMag_Params
	{	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.ThumbUp
	 */
	struct ABPA_BaseItem_C_ThumbUp_Params
	{	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.ThumbLeft
	 */
	struct ABPA_BaseItem_C_ThumbLeft_Params
	{	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.ThumbRight
	 */
	struct ABPA_BaseItem_C_ThumbRight_Params
	{	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.Inspect
	 */
	struct ABPA_BaseItem_C_Inspect_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.Use
	 */
	struct ABPA_BaseItem_C_Use_Params
	{	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.TutLock
	 */
	struct ABPA_BaseItem_C_TutLock_Params
	{	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.TutUnlock
	 */
	struct ABPA_BaseItem_C_TutUnlock_Params
	{	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.SetItemActorAttachmentsLock
	 */
	struct ABPA_BaseItem_C_SetItemActorAttachmentsLock_Params
	{
	public:
		bool                                                       lock;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.DropEjectedMag
	 */
	struct ABPA_BaseItem_C_DropEjectedMag_Params
	{	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.Request Recoil
	 */
	struct ABPA_BaseItem_C_RequestRecoil_Params
	{
	public:
		struct FVector                                             Recoil;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.TakenByHolder
	 */
	struct ABPA_BaseItem_C_TakenByHolder_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.SetAttachedCollision
	 */
	struct ABPA_BaseItem_C_SetAttachedCollision_Params
	{
	public:
		bool                                                       Attached;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.GameplayTrigger
	 */
	struct ABPA_BaseItem_C_GameplayTrigger_Params
	{	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.ToggleAttachments
	 */
	struct ABPA_BaseItem_C_ToggleAttachments_Params
	{	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.ReceiveBeginPlay
	 */
	struct ABPA_BaseItem_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.OnGripRelease
	 */
	struct ABPA_BaseItem_C_OnGripRelease_Params
	{
	public:
		class UGripMotionControllerComponent*                      ReleasingController;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_O3VQ[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
		bool                                                       bWasSocketed;                                            // 0x01F0(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.Fix Position
	 */
	struct ABPA_BaseItem_C_FixPosition_Params
	{	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.HealthEndedOverride
	 */
	struct ABPA_BaseItem_C_HealthEndedOverride_Params
	{	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.OnGrip
	 */
	struct ABPA_BaseItem_C_OnGrip_Params
	{
	public:
		class UGripMotionControllerComponent*                      GrippingController;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZFNS[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.OnStart
	 */
	struct ABPA_BaseItem_C_OnStart_Params
	{	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.Bind
	 */
	struct ABPA_BaseItem_C_Bind_Params
	{	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.Unbind
	 */
	struct ABPA_BaseItem_C_Unbind_Params
	{	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.OnReconfigure
	 */
	struct ABPA_BaseItem_C_OnReconfigure_Params
	{	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.BndEvt__StaticMeshComponent_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature
	 */
	struct ABPA_BaseItem_C_BndEvt__StaticMeshComponent_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x0024(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.StartPositionChecks
	 */
	struct ABPA_BaseItem_C_StartPositionChecks_Params
	{	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.StopPositionCheck
	 */
	struct ABPA_BaseItem_C_StopPositionCheck_Params
	{	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.CheckIfUnderTerrain0
	 */
	struct ABPA_BaseItem_C_CheckIfUnderTerrain0_Params
	{	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.BndEvt__BPC_ItemDurability_K2Node_ComponentBoundEvent_2_OnDestroyed__DelegateSignature
	 */
	struct ABPA_BaseItem_C_BndEvt__BPC_ItemDurability_K2Node_ComponentBoundEvent_2_OnDestroyed__DelegateSignature_Params
	{	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.OnTransitionEndOnceEventDelegate
	 */
	struct ABPA_BaseItem_C_OnTransitionEndOnceEventDelegate_Params
	{	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.UpdateActorTags
	 */
	struct ABPA_BaseItem_C_UpdateActorTags_Params
	{	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.ReceiveEndPlay
	 */
	struct ABPA_BaseItem_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.StartClean
	 */
	struct ABPA_BaseItem_C_StartClean_Params
	{	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.NightGlow
	 */
	struct ABPA_BaseItem_C_NightGlow_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.RequestPositionCheck
	 */
	struct ABPA_BaseItem_C_RequestPositionCheck_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.BeginItemPositionChecks
	 */
	struct ABPA_BaseItem_C_BeginItemPositionChecks_Params
	{	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.RequestPhysicsCollision
	 */
	struct ABPA_BaseItem_C_RequestPhysicsCollision_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BF60[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                Requestor;                                               // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.SetDenyGrip
	 */
	struct ABPA_BaseItem_C_SetDenyGrip_Params
	{
	public:
		bool                                                       DenyGrip;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.Hide
	 */
	struct ABPA_BaseItem_C_Hide_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.OnRootHit
	 */
	struct ABPA_BaseItem_C_OnRootHit_Params
	{
	public:
		struct FVector                                             Impulse;                                                 // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.BndEvt__BPA_BaseItem_BPC_ItemDurability_K2Node_ComponentBoundEvent_0_OnDurabilityChange__DelegateSignature
	 */
	struct ABPA_BaseItem_C_BndEvt__BPA_BaseItem_BPC_ItemDurability_K2Node_ComponentBoundEvent_0_OnDurabilityChange__DelegateSignature_Params
	{	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.SetDistanceGripEnable
	 */
	struct ABPA_BaseItem_C_SetDistanceGripEnable_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.ZeroVelocity
	 */
	struct ABPA_BaseItem_C_ZeroVelocity_Params
	{	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.PrimaryTrigger
	 */
	struct ABPA_BaseItem_C_PrimaryTrigger_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.SecondaryTrigger
	 */
	struct ABPA_BaseItem_C_SecondaryTrigger_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.PlayDropSounds
	 */
	struct ABPA_BaseItem_C_PlayDropSounds_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		struct FVector                                             HitImpulse;                                              // 0x0088(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsHeld;                                                  // 0x0094(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.DisableItemPhysics
	 */
	struct ABPA_BaseItem_C_DisableItemPhysics_Params
	{	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.Setup
	 */
	struct ABPA_BaseItem_C_Setup_Params
	{
	public:
		struct FBaseItemSpawnInfo                                  BaseItemSpawnInfo;                                       // 0x0000(0x0080)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.OnAddedToHolster
	 */
	struct ABPA_BaseItem_C_OnAddedToHolster_Params
	{
	public:
		class UHolsterComponent*                                   Holster;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.ResetInventoryItemRef
	 */
	struct ABPA_BaseItem_C_ResetInventoryItemRef_Params
	{	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.OnGameStartedEventDelegate
	 */
	struct ABPA_BaseItem_C_OnGameStartedEventDelegate_Params
	{	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.ExecuteUbergraph_BPA_BaseItem
	 */
	struct ABPA_BaseItem_C_ExecuteUbergraph_BPA_BaseItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_98QK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.OnTriggerChanged__DelegateSignature
	 */
	struct ABPA_BaseItem_C_OnTriggerChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsPrimary;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.OnReconfigureDone__DelegateSignature
	 */
	struct ABPA_BaseItem_C_OnReconfigureDone__DelegateSignature_Params
	{	};

	/**
	 * Function BPA_BaseItem.BPA_BaseItem_C.OnDrop__DelegateSignature
	 */
	struct ABPA_BaseItem_C_OnDrop__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
