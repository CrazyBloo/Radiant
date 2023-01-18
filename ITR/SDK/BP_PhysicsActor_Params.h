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
	 * Function BP_PhysicsActor.BP_PhysicsActor_C.GetLightItem
	 */
	struct ABP_PhysicsActor_C_GetLightItem_Params
	{
	public:
		bool                                                       IsOn;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TPXJ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABPA_BaseItem_C*                                     Item;                                                    // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PhysicsActor.BP_PhysicsActor_C.IsItemActorAttachmentsLocked
	 */
	struct ABP_PhysicsActor_C_IsItemActorAttachmentsLocked_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PhysicsActor.BP_PhysicsActor_C.IsOn
	 */
	struct ABP_PhysicsActor_C_IsOn_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PhysicsActor.BP_PhysicsActor_C.GetGSLerpToHand
	 */
	struct ABP_PhysicsActor_C_GetGSLerpToHand_Params
	{
	public:
		class UGS_LerpToHand*                                      LerpToHandScript;                                        // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PhysicsActor.BP_PhysicsActor_C.DenyHolstering
	 */
	struct ABP_PhysicsActor_C_DenyHolstering_Params
	{
	public:
		bool                                                       Deny;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PhysicsActor.BP_PhysicsActor_C.GetInstanceID
	 */
	struct ABP_PhysicsActor_C_GetInstanceID_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PhysicsActor.BP_PhysicsActor_C.UserConstructionScript
	 */
	struct ABP_PhysicsActor_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_PhysicsActor.BP_PhysicsActor_C.OnTransitionEndOnceEventDelegate
	 */
	struct ABP_PhysicsActor_C_OnTransitionEndOnceEventDelegate_Params
	{	};

	/**
	 * Function BP_PhysicsActor.BP_PhysicsActor_C.PlayerInteract
	 */
	struct ABP_PhysicsActor_C_PlayerInteract_Params
	{
	public:
		EHand_EHand                                                hand;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RKDK[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimitiveComponent*                                 Controller;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PhysicsActor.BP_PhysicsActor_C.EjectMag
	 */
	struct ABP_PhysicsActor_C_EjectMag_Params
	{	};

	/**
	 * Function BP_PhysicsActor.BP_PhysicsActor_C.ThumbUp
	 */
	struct ABP_PhysicsActor_C_ThumbUp_Params
	{	};

	/**
	 * Function BP_PhysicsActor.BP_PhysicsActor_C.Bind
	 */
	struct ABP_PhysicsActor_C_Bind_Params
	{	};

	/**
	 * Function BP_PhysicsActor.BP_PhysicsActor_C.ThumbLeft
	 */
	struct ABP_PhysicsActor_C_ThumbLeft_Params
	{	};

	/**
	 * Function BP_PhysicsActor.BP_PhysicsActor_C.ThumbRight
	 */
	struct ABP_PhysicsActor_C_ThumbRight_Params
	{	};

	/**
	 * Function BP_PhysicsActor.BP_PhysicsActor_C.Inspect
	 */
	struct ABP_PhysicsActor_C_Inspect_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PhysicsActor.BP_PhysicsActor_C.Unbind
	 */
	struct ABP_PhysicsActor_C_Unbind_Params
	{	};

	/**
	 * Function BP_PhysicsActor.BP_PhysicsActor_C.Use
	 */
	struct ABP_PhysicsActor_C_Use_Params
	{	};

	/**
	 * Function BP_PhysicsActor.BP_PhysicsActor_C.TutLock
	 */
	struct ABP_PhysicsActor_C_TutLock_Params
	{	};

	/**
	 * Function BP_PhysicsActor.BP_PhysicsActor_C.TutUnlock
	 */
	struct ABP_PhysicsActor_C_TutUnlock_Params
	{	};

	/**
	 * Function BP_PhysicsActor.BP_PhysicsActor_C.Hide
	 */
	struct ABP_PhysicsActor_C_Hide_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PhysicsActor.BP_PhysicsActor_C.SetItemActorAttachmentsLock
	 */
	struct ABP_PhysicsActor_C_SetItemActorAttachmentsLock_Params
	{
	public:
		bool                                                       lock;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PhysicsActor.BP_PhysicsActor_C.DropEjectedMag
	 */
	struct ABP_PhysicsActor_C_DropEjectedMag_Params
	{	};

	/**
	 * Function BP_PhysicsActor.BP_PhysicsActor_C.NightGlow
	 */
	struct ABP_PhysicsActor_C_NightGlow_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PhysicsActor.BP_PhysicsActor_C.SecondaryTrigger
	 */
	struct ABP_PhysicsActor_C_SecondaryTrigger_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PhysicsActor.BP_PhysicsActor_C.Request Recoil
	 */
	struct ABP_PhysicsActor_C_RequestRecoil_Params
	{
	public:
		struct FVector                                             Recoil;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PhysicsActor.BP_PhysicsActor_C.RequestPositionCheck
	 */
	struct ABP_PhysicsActor_C_RequestPositionCheck_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PhysicsActor.BP_PhysicsActor_C.BeginItemPositionChecks
	 */
	struct ABP_PhysicsActor_C_BeginItemPositionChecks_Params
	{	};

	/**
	 * Function BP_PhysicsActor.BP_PhysicsActor_C.RequestPhysicsCollision
	 */
	struct ABP_PhysicsActor_C_RequestPhysicsCollision_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MZMJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                Requestor;                                               // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PhysicsActor.BP_PhysicsActor_C.SetDenyGrip
	 */
	struct ABP_PhysicsActor_C_SetDenyGrip_Params
	{
	public:
		bool                                                       DenyGrip;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PhysicsActor.BP_PhysicsActor_C.TakenByHolder
	 */
	struct ABP_PhysicsActor_C_TakenByHolder_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PhysicsActor.BP_PhysicsActor_C.SetAttachedCollision
	 */
	struct ABP_PhysicsActor_C_SetAttachedCollision_Params
	{
	public:
		bool                                                       Attached;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PhysicsActor.BP_PhysicsActor_C.GameplayTrigger
	 */
	struct ABP_PhysicsActor_C_GameplayTrigger_Params
	{	};

	/**
	 * Function BP_PhysicsActor.BP_PhysicsActor_C.ToggleAttachments
	 */
	struct ABP_PhysicsActor_C_ToggleAttachments_Params
	{	};

	/**
	 * Function BP_PhysicsActor.BP_PhysicsActor_C.PrimaryTrigger
	 */
	struct ABP_PhysicsActor_C_PrimaryTrigger_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PhysicsActor.BP_PhysicsActor_C.BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
	 */
	struct ABP_PhysicsActor_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x0024(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_PhysicsActor.BP_PhysicsActor_C.SetMesh
	 */
	struct ABP_PhysicsActor_C_SetMesh_Params
	{	};

	/**
	 * Function BP_PhysicsActor.BP_PhysicsActor_C.OnGrip
	 */
	struct ABP_PhysicsActor_C_OnGrip_Params
	{
	public:
		class UGripMotionControllerComponent*                      GrippingController;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GG8X[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_PhysicsActor.BP_PhysicsActor_C.OnGripRelease
	 */
	struct ABP_PhysicsActor_C_OnGripRelease_Params
	{
	public:
		class UGripMotionControllerComponent*                      ReleasingController;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7VDY[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
		bool                                                       bWasSocketed;                                            // 0x01F0(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PhysicsActor.BP_PhysicsActor_C.RemoveOwner
	 */
	struct ABP_PhysicsActor_C_RemoveOwner_Params
	{	};

	/**
	 * Function BP_PhysicsActor.BP_PhysicsActor_C.ReceiveBeginPlay
	 */
	struct ABP_PhysicsActor_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_PhysicsActor.BP_PhysicsActor_C.Kill
	 */
	struct ABP_PhysicsActor_C_Kill_Params
	{	};

	/**
	 * Function BP_PhysicsActor.BP_PhysicsActor_C.KillDelayed
	 */
	struct ABP_PhysicsActor_C_KillDelayed_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PhysicsActor.BP_PhysicsActor_C.OnGameStartedEventDelegate
	 */
	struct ABP_PhysicsActor_C_OnGameStartedEventDelegate_Params
	{	};

	/**
	 * Function BP_PhysicsActor.BP_PhysicsActor_C.ExecuteUbergraph_BP_PhysicsActor
	 */
	struct ABP_PhysicsActor_C_ExecuteUbergraph_BP_PhysicsActor_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
