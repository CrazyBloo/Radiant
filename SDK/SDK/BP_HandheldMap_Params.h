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
	 * Function BP_HandheldMap.BP_HandheldMap_C.GetLightItem
	 */
	struct ABP_HandheldMap_C_GetLightItem_Params
	{
	public:
		bool                                                       IsOn;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VAC1[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABPA_BaseItem_C*                                     Item;                                                    // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HandheldMap.BP_HandheldMap_C.DenyHolstering
	 */
	struct ABP_HandheldMap_C_DenyHolstering_Params
	{
	public:
		bool                                                       Deny;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HandheldMap.BP_HandheldMap_C.GetGSLerpToHand
	 */
	struct ABP_HandheldMap_C_GetGSLerpToHand_Params
	{
	public:
		class UGS_LerpToHand*                                      LerpToHandScript;                                        // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HandheldMap.BP_HandheldMap_C.IsItemActorAttachmentsLocked
	 */
	struct ABP_HandheldMap_C_IsItemActorAttachmentsLocked_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HandheldMap.BP_HandheldMap_C.IsOn
	 */
	struct ABP_HandheldMap_C_IsOn_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HandheldMap.BP_HandheldMap_C.Set UI Collision
	 */
	struct ABP_HandheldMap_C_Set_UI_Collision_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HandheldMap.BP_HandheldMap_C.SelectTab
	 */
	struct ABP_HandheldMap_C_SelectTab_Params
	{
	public:
		class UVRButtonComponent*                                  Tab;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HandheldMap.BP_HandheldMap_C.GetGripScripts
	 */
	struct ABP_HandheldMap_C_GetGripScripts_Params
	{
	public:
		TArray<class UVRGripScriptBase*>                           ArrayReference;                                          // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MGU6[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_HandheldMap.BP_HandheldMap_C.PlayPageSound
	 */
	struct ABP_HandheldMap_C_PlayPageSound_Params
	{	};

	/**
	 * Function BP_HandheldMap.BP_HandheldMap_C.PlayerInteract
	 */
	struct ABP_HandheldMap_C_PlayerInteract_Params
	{
	public:
		EHand_EHand                                                hand;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_19D5[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimitiveComponent*                                 Controller;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HandheldMap.BP_HandheldMap_C.EjectMag
	 */
	struct ABP_HandheldMap_C_EjectMag_Params
	{	};

	/**
	 * Function BP_HandheldMap.BP_HandheldMap_C.ThumbUp
	 */
	struct ABP_HandheldMap_C_ThumbUp_Params
	{	};

	/**
	 * Function BP_HandheldMap.BP_HandheldMap_C.Bind
	 */
	struct ABP_HandheldMap_C_Bind_Params
	{	};

	/**
	 * Function BP_HandheldMap.BP_HandheldMap_C.ThumbLeft
	 */
	struct ABP_HandheldMap_C_ThumbLeft_Params
	{	};

	/**
	 * Function BP_HandheldMap.BP_HandheldMap_C.ThumbRight
	 */
	struct ABP_HandheldMap_C_ThumbRight_Params
	{	};

	/**
	 * Function BP_HandheldMap.BP_HandheldMap_C.Inspect
	 */
	struct ABP_HandheldMap_C_Inspect_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HandheldMap.BP_HandheldMap_C.Unbind
	 */
	struct ABP_HandheldMap_C_Unbind_Params
	{	};

	/**
	 * Function BP_HandheldMap.BP_HandheldMap_C.Use
	 */
	struct ABP_HandheldMap_C_Use_Params
	{	};

	/**
	 * Function BP_HandheldMap.BP_HandheldMap_C.TutLock
	 */
	struct ABP_HandheldMap_C_TutLock_Params
	{	};

	/**
	 * Function BP_HandheldMap.BP_HandheldMap_C.TutUnlock
	 */
	struct ABP_HandheldMap_C_TutUnlock_Params
	{	};

	/**
	 * Function BP_HandheldMap.BP_HandheldMap_C.SetItemActorAttachmentsLock
	 */
	struct ABP_HandheldMap_C_SetItemActorAttachmentsLock_Params
	{
	public:
		bool                                                       lock;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HandheldMap.BP_HandheldMap_C.DropEjectedMag
	 */
	struct ABP_HandheldMap_C_DropEjectedMag_Params
	{	};

	/**
	 * Function BP_HandheldMap.BP_HandheldMap_C.NightGlow
	 */
	struct ABP_HandheldMap_C_NightGlow_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HandheldMap.BP_HandheldMap_C.SecondaryTrigger
	 */
	struct ABP_HandheldMap_C_SecondaryTrigger_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HandheldMap.BP_HandheldMap_C.Request Recoil
	 */
	struct ABP_HandheldMap_C_Request_Recoil_Params
	{
	public:
		struct FVector                                             Recoil;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HandheldMap.BP_HandheldMap_C.RequestPositionCheck
	 */
	struct ABP_HandheldMap_C_RequestPositionCheck_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HandheldMap.BP_HandheldMap_C.BeginItemPositionChecks
	 */
	struct ABP_HandheldMap_C_BeginItemPositionChecks_Params
	{	};

	/**
	 * Function BP_HandheldMap.BP_HandheldMap_C.SetDenyGrip
	 */
	struct ABP_HandheldMap_C_SetDenyGrip_Params
	{
	public:
		bool                                                       DenyGrip;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HandheldMap.BP_HandheldMap_C.TakenByHolder
	 */
	struct ABP_HandheldMap_C_TakenByHolder_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HandheldMap.BP_HandheldMap_C.SetAttachedCollision
	 */
	struct ABP_HandheldMap_C_SetAttachedCollision_Params
	{
	public:
		bool                                                       Attached;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HandheldMap.BP_HandheldMap_C.GameplayTrigger
	 */
	struct ABP_HandheldMap_C_GameplayTrigger_Params
	{	};

	/**
	 * Function BP_HandheldMap.BP_HandheldMap_C.ToggleAttachments
	 */
	struct ABP_HandheldMap_C_ToggleAttachments_Params
	{	};

	/**
	 * Function BP_HandheldMap.BP_HandheldMap_C.PrimaryTrigger
	 */
	struct ABP_HandheldMap_C_PrimaryTrigger_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HandheldMap.BP_HandheldMap_C.OnGrip
	 */
	struct ABP_HandheldMap_C_OnGrip_Params
	{
	public:
		class UGripMotionControllerComponent*                      GrippingController;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2CKU[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_HandheldMap.BP_HandheldMap_C.OnGripRelease
	 */
	struct ABP_HandheldMap_C_OnGripRelease_Params
	{
	public:
		class UGripMotionControllerComponent*                      ReleasingController;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_814G[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
		bool                                                       bWasSocketed;                                            // 0x01F0(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HandheldMap.BP_HandheldMap_C.ReceiveTick
	 */
	struct ABP_HandheldMap_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HandheldMap.BP_HandheldMap_C.ReceiveEndPlay
	 */
	struct ABP_HandheldMap_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HandheldMap.BP_HandheldMap_C.OnLevelStarted
	 */
	struct ABP_HandheldMap_C_OnLevelStarted_Params
	{
	public:
		struct FGameplayTag                                        LevelTag;                                                // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HandheldMap.BP_HandheldMap_C.ReceiveBeginPlay
	 */
	struct ABP_HandheldMap_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_HandheldMap.BP_HandheldMap_C.BndEvt__VRButton_K2Node_ComponentBoundEvent_1_VRButtonStateChangedSignature__DelegateSignature
	 */
	struct ABP_HandheldMap_C_BndEvt__VRButton_K2Node_ComponentBoundEvent_1_VRButtonStateChangedSignature__DelegateSignature_Params
	{
	public:
		bool                                                       ButtonState;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DR7O[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              InteractingActor;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 InteractingComponent;                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HandheldMap.BP_HandheldMap_C.PenReset
	 */
	struct ABP_HandheldMap_C_PenReset_Params
	{
	public:
		struct FGameplayTag                                        Value;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HandheldMap.BP_HandheldMap_C.RequestPhysicsCollision
	 */
	struct ABP_HandheldMap_C_RequestPhysicsCollision_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0VX7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                Requestor;                                               // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HandheldMap.BP_HandheldMap_C.BndEvt__BP_HandheldMap_VRButton_AlarmTurnOff_K2Node_ComponentBoundEvent_0_VRButtonStateChangedSignature__DelegateSignature
	 */
	struct ABP_HandheldMap_C_BndEvt__BP_HandheldMap_VRButton_AlarmTurnOff_K2Node_ComponentBoundEvent_0_VRButtonStateChangedSignature__DelegateSignature_Params
	{
	public:
		bool                                                       ButtonState;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EOA6[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              InteractingActor;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 InteractingComponent;                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HandheldMap.BP_HandheldMap_C.Hide
	 */
	struct ABP_HandheldMap_C_Hide_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HandheldMap.BP_HandheldMap_C.OnMapEvent
	 */
	struct ABP_HandheldMap_C_OnMapEvent_Params
	{	};

	/**
	 * Function BP_HandheldMap.BP_HandheldMap_C.OnMissionEvent
	 */
	struct ABP_HandheldMap_C_OnMissionEvent_Params
	{	};

	/**
	 * Function BP_HandheldMap.BP_HandheldMap_C.OnJournalEvent
	 */
	struct ABP_HandheldMap_C_OnJournalEvent_Params
	{	};

	/**
	 * Function BP_HandheldMap.BP_HandheldMap_C.BndEvt__VRButton_Map_K2Node_ComponentBoundEvent_0_VRButtonStateChangedSignature__DelegateSignature
	 */
	struct ABP_HandheldMap_C_BndEvt__VRButton_Map_K2Node_ComponentBoundEvent_0_VRButtonStateChangedSignature__DelegateSignature_Params
	{
	public:
		bool                                                       ButtonState;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DCXK[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              InteractingActor;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 InteractingComponent;                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HandheldMap.BP_HandheldMap_C.BndEvt__VRButton_Mission_K2Node_ComponentBoundEvent_2_VRButtonStateChangedSignature__DelegateSignature
	 */
	struct ABP_HandheldMap_C_BndEvt__VRButton_Mission_K2Node_ComponentBoundEvent_2_VRButtonStateChangedSignature__DelegateSignature_Params
	{
	public:
		bool                                                       ButtonState;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QWRM[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              InteractingActor;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 InteractingComponent;                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HandheldMap.BP_HandheldMap_C.BndEvt__VRButton_Journal_K2Node_ComponentBoundEvent_3_VRButtonStateChangedSignature__DelegateSignature
	 */
	struct ABP_HandheldMap_C_BndEvt__VRButton_Journal_K2Node_ComponentBoundEvent_3_VRButtonStateChangedSignature__DelegateSignature_Params
	{
	public:
		bool                                                       ButtonState;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4NVX[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              InteractingActor;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 InteractingComponent;                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HandheldMap.BP_HandheldMap_C.BndEvt__BP_HandheldMap_VRButton_MapGlobal_K2Node_ComponentBoundEvent_2_VRButtonStateChangedSignature__DelegateSignature
	 */
	struct ABP_HandheldMap_C_BndEvt__BP_HandheldMap_VRButton_MapGlobal_K2Node_ComponentBoundEvent_2_VRButtonStateChangedSignature__DelegateSignature_Params
	{
	public:
		bool                                                       ButtonState;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LWPD[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              InteractingActor;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 InteractingComponent;                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HandheldMap.BP_HandheldMap_C.OnMapGlobalEvent
	 */
	struct ABP_HandheldMap_C_OnMapGlobalEvent_Params
	{	};

	/**
	 * Function BP_HandheldMap.BP_HandheldMap_C.OnAnyLevelStarted
	 */
	struct ABP_HandheldMap_C_OnAnyLevelStarted_Params
	{
	public:
		struct FGameplayTag                                        Value;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HandheldMap.BP_HandheldMap_C.PenReleased
	 */
	struct ABP_HandheldMap_C_PenReleased_Params
	{	};

	/**
	 * Function BP_HandheldMap.BP_HandheldMap_C.ExecuteUbergraph_BP_HandheldMap
	 */
	struct ABP_HandheldMap_C_ExecuteUbergraph_BP_HandheldMap_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
