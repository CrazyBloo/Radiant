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
	 * Function BPA_Probe.BPA_Probe_C.DropItemOnGround
	 */
	struct ABPA_Probe_C_DropItemOnGround_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_Probe.BPA_Probe_C.GetActorUID
	 */
	struct ABPA_Probe_C_GetActorUID_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Probe.BPA_Probe_C.GetAttachmentsList
	 */
	struct ABPA_Probe_C_GetAttachmentsList_Params
	{
	public:
		TArray<class FString>                                      Attachments;                                             // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BPA_Probe.BPA_Probe_C.GetAttachmentTypeID
	 */
	struct ABPA_Probe_C_GetAttachmentTypeID_Params
	{
	public:
		struct FGameplayTag                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Probe.BPA_Probe_C.GetConditionPercent
	 */
	struct ABPA_Probe_C_GetConditionPercent_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Probe.BPA_Probe_C.GetCurrentCondition
	 */
	struct ABPA_Probe_C_GetCurrentCondition_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Probe.BPA_Probe_C.GetCurrentWeight
	 */
	struct ABPA_Probe_C_GetCurrentWeight_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Probe.BPA_Probe_C.GetDefaultPoseType
	 */
	struct ABPA_Probe_C_GetDefaultPoseType_Params
	{
	public:
		EPRHandPoseType                                            ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Probe.BPA_Probe_C.GetInventoryItem
	 */
	struct ABPA_Probe_C_GetInventoryItem_Params
	{
	public:
		class UInventoryItem*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Probe.BPA_Probe_C.GetItemCenterTransform
	 */
	struct ABPA_Probe_C_GetItemCenterTransform_Params
	{
	public:
		bool                                                       socket;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_J94O[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          itemCenterTransform;                                     // 0x0010(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_Probe.BPA_Probe_C.GetItemInfo
	 */
	struct ABPA_Probe_C_GetItemInfo_Params
	{
	public:
		struct FPRItemInfo                                         ReturnValue;                                             // 0x0000(0x01A0)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BPA_Probe.BPA_Probe_C.GetItemVisibility
	 */
	struct ABPA_Probe_C_GetItemVisibility_Params
	{
	public:
		bool                                                       bIsVisible;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_Probe.BPA_Probe_C.GetPoseShift
	 */
	struct ABPA_Probe_C_GetPoseShift_Params
	{
	public:
		EPRHandPoseType                                            poseType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HHFT[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          ReturnValue;                                             // 0x0010(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_Probe.BPA_Probe_C.GetPreparedItem
	 */
	struct ABPA_Probe_C_GetPreparedItem_Params
	{
	public:
		class UInventoryItem*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Probe.BPA_Probe_C.GetProxyMode
	 */
	struct ABPA_Probe_C_GetProxyMode_Params
	{
	public:
		bool                                                       bUseProxy;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_Probe.BPA_Probe_C.GetTypeID
	 */
	struct ABPA_Probe_C_GetTypeID_Params
	{
	public:
		struct FGameplayTag                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Probe.BPA_Probe_C.IsItemInDelivery
	 */
	struct ABPA_Probe_C_IsItemInDelivery_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_Probe.BPA_Probe_C.Reconfigure
	 */
	struct ABPA_Probe_C_Reconfigure_Params
	{
	public:
		class UInventoryItem*                                      InventoryItem;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_Probe.BPA_Probe_C.UpdateInventoryItemLocation
	 */
	struct ABPA_Probe_C_UpdateInventoryItemLocation_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_Probe.BPA_Probe_C.DisableItemPhysics
	 */
	struct ABPA_Probe_C_DisableItemPhysics_Params
	{	};

	/**
	 * Function BPA_Probe.BPA_Probe_C.InitBought
	 */
	struct ABPA_Probe_C_InitBought_Params
	{	};

	/**
	 * Function BPA_Probe.BPA_Probe_C.OnAddedToHolster
	 */
	struct ABPA_Probe_C_OnAddedToHolster_Params
	{
	public:
		class UHolsterComponent*                                   Holster;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Probe.BPA_Probe_C.OnProxyDisabled
	 */
	struct ABPA_Probe_C_OnProxyDisabled_Params
	{	};

	/**
	 * Function BPA_Probe.BPA_Probe_C.OnProxyEnabled
	 */
	struct ABPA_Probe_C_OnProxyEnabled_Params
	{	};

	/**
	 * Function BPA_Probe.BPA_Probe_C.OnProxySystemReady
	 */
	struct ABPA_Probe_C_OnProxySystemReady_Params
	{	};

	/**
	 * Function BPA_Probe.BPA_Probe_C.OnRemovedFromHolster
	 */
	struct ABPA_Probe_C_OnRemovedFromHolster_Params
	{
	public:
		class UHolsterComponent*                                   Holster;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Probe.BPA_Probe_C.RegisterMeshComponentsAndOmittableColliders
	 */
	struct ABPA_Probe_C_RegisterMeshComponentsAndOmittableColliders_Params
	{	};

	/**
	 * Function BPA_Probe.BPA_Probe_C.SetDistanceGripEnable
	 */
	struct ABPA_Probe_C_SetDistanceGripEnable_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_Probe.BPA_Probe_C.SetItemVisibility
	 */
	struct ABPA_Probe_C_SetItemVisibility_Params
	{
	public:
		bool                                                       bNewVisibility;                                          // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_Probe.BPA_Probe_C.SetProxyMode
	 */
	struct ABPA_Probe_C_SetProxyMode_Params
	{
	public:
		bool                                                       bUseProxy;                                               // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_Probe.BPA_Probe_C.SetupProxySystem
	 */
	struct ABPA_Probe_C_SetupProxySystem_Params
	{
	public:
		bool                                                       bStartWithProxy;                                         // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bStartVisible;                                           // 0x0001(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_Probe.BPA_Probe_C.StopUse
	 */
	struct ABPA_Probe_C_StopUse_Params
	{	};

	/**
	 * Function BPA_Probe.BPA_Probe_C.UpdateAttachmentSlots
	 */
	struct ABPA_Probe_C_UpdateAttachmentSlots_Params
	{	};

	/**
	 * Function BPA_Probe.BPA_Probe_C.UpdateFireMode
	 */
	struct ABPA_Probe_C_UpdateFireMode_Params
	{	};

	/**
	 * Function BPA_Probe.BPA_Probe_C.Damage
	 */
	struct ABPA_Probe_C_Damage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YD4N[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USceneComponent*                                     HitComponent;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Probe.BPA_Probe_C.ReceiveBeginPlay
	 */
	struct ABPA_Probe_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPA_Probe.BPA_Probe_C.Thrown
	 */
	struct ABPA_Probe_C_Thrown_Params
	{	};

	/**
	 * Function BPA_Probe.BPA_Probe_C.BndEvt__BPA_Probe_Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
	 */
	struct ABPA_Probe_C_BndEvt__BPA_Probe_Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x0024(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BPA_Probe.BPA_Probe_C.ExecuteUbergraph_BPA_Probe
	 */
	struct ABPA_Probe_C_ExecuteUbergraph_BPA_Probe_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QB1F[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
