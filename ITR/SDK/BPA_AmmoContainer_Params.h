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
	 * Function BPA_AmmoContainer.BPA_AmmoContainer_C.IsLoadingLocked
	 */
	struct ABPA_AmmoContainer_C_IsLoadingLocked_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_AmmoContainer.BPA_AmmoContainer_C.GetAmmoContainerData
	 */
	struct ABPA_AmmoContainer_C_GetAmmoContainerData_Params
	{
	public:
		struct FAmmoContainerData                                  Data;                                                    // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BPA_AmmoContainer.BPA_AmmoContainer_C.GetAmmoContainerInfo
	 */
	struct ABPA_AmmoContainer_C_GetAmmoContainerInfo_Params
	{
	public:
		struct FPRAmmoContainerInfo                                Info;                                                    // 0x0000(0x0050)  (Parm, OutParm)
	};

	/**
	 * Function BPA_AmmoContainer.BPA_AmmoContainer_C.LoadAmmoToContainer
	 */
	struct ABPA_AmmoContainer_C_LoadAmmoToContainer_Params
	{
	public:
		class AActor*                                              ContainerToLoad;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_AmmoContainer.BPA_AmmoContainer_C.LoadInAmmo
	 */
	struct ABPA_AmmoContainer_C_LoadInAmmo_Params
	{
	public:
		class AActor*                                              AmmoActor;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_AmmoContainer.BPA_AmmoContainer_C.GetNextAmmo
	 */
	struct ABPA_AmmoContainer_C_GetNextAmmo_Params
	{
	public:
		struct FGameplayTag                                        AmmoTypeID;                                              // 0x0000(0x0008)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_AmmoContainer.BPA_AmmoContainer_C.TryDropAmmo
	 */
	struct ABPA_AmmoContainer_C_TryDropAmmo_Params
	{	};

	/**
	 * Function BPA_AmmoContainer.BPA_AmmoContainer_C.TryTakeOutAmmo
	 */
	struct ABPA_AmmoContainer_C_TryTakeOutAmmo_Params
	{	};

	/**
	 * Function BPA_AmmoContainer.BPA_AmmoContainer_C.OnAmmoAdded
	 */
	struct ABPA_AmmoContainer_C_OnAmmoAdded_Params
	{	};

	/**
	 * Function BPA_AmmoContainer.BPA_AmmoContainer_C.OnAmmoRemoved
	 */
	struct ABPA_AmmoContainer_C_OnAmmoRemoved_Params
	{	};

	/**
	 * Function BPA_AmmoContainer.BPA_AmmoContainer_C.MakeUngripable
	 */
	struct ABPA_AmmoContainer_C_MakeUngripable_Params
	{	};

	/**
	 * Function BPA_AmmoContainer.BPA_AmmoContainer_C.MakeGripable
	 */
	struct ABPA_AmmoContainer_C_MakeGripable_Params
	{	};

	/**
	 * Function BPA_AmmoContainer.BPA_AmmoContainer_C.BndEvt__BoxTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABPA_AmmoContainer_C_BndEvt__BoxTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_19NB[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BPA_AmmoContainer.BPA_AmmoContainer_C.BndEvt__BoxTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct ABPA_AmmoContainer_C_BndEvt__BoxTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_AmmoContainer.BPA_AmmoContainer_C.OnUsed
	 */
	struct ABPA_AmmoContainer_C_OnUsed_Params
	{	};

	/**
	 * Function BPA_AmmoContainer.BPA_AmmoContainer_C.OnEndUsed
	 */
	struct ABPA_AmmoContainer_C_OnEndUsed_Params
	{	};

	/**
	 * Function BPA_AmmoContainer.BPA_AmmoContainer_C.OnGripRelease
	 */
	struct ABPA_AmmoContainer_C_OnGripRelease_Params
	{
	public:
		class UGripMotionControllerComponent*                      ReleasingController;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KC31[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
		bool                                                       bWasSocketed;                                            // 0x01F0(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_AmmoContainer.BPA_AmmoContainer_C.SetLoadingLock
	 */
	struct ABPA_AmmoContainer_C_SetLoadingLock_Params
	{
	public:
		bool                                                       lock;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_AmmoContainer.BPA_AmmoContainer_C.DelayLoading
	 */
	struct ABPA_AmmoContainer_C_DelayLoading_Params
	{	};

	/**
	 * Function BPA_AmmoContainer.BPA_AmmoContainer_C.LoadBullet
	 */
	struct ABPA_AmmoContainer_C_LoadBullet_Params
	{	};

	/**
	 * Function BPA_AmmoContainer.BPA_AmmoContainer_C.StopLoadBullet
	 */
	struct ABPA_AmmoContainer_C_StopLoadBullet_Params
	{	};

	/**
	 * Function BPA_AmmoContainer.BPA_AmmoContainer_C.ReceiveTick
	 */
	struct ABPA_AmmoContainer_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_AmmoContainer.BPA_AmmoContainer_C.OnGrip
	 */
	struct ABPA_AmmoContainer_C_OnGrip_Params
	{
	public:
		class UGripMotionControllerComponent*                      GrippingController;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_E8W8[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BPA_AmmoContainer.BPA_AmmoContainer_C.ProcessTriggerOverlap
	 */
	struct ABPA_AmmoContainer_C_ProcessTriggerOverlap_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_AmmoContainer.BPA_AmmoContainer_C.EjectMag
	 */
	struct ABPA_AmmoContainer_C_EjectMag_Params
	{	};

	/**
	 * Function BPA_AmmoContainer.BPA_AmmoContainer_C.SaveBulletAndDrop
	 */
	struct ABPA_AmmoContainer_C_SaveBulletAndDrop_Params
	{	};

	/**
	 * Function BPA_AmmoContainer.BPA_AmmoContainer_C.ExecuteUbergraph_BPA_AmmoContainer
	 */
	struct ABPA_AmmoContainer_C_ExecuteUbergraph_BPA_AmmoContainer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
