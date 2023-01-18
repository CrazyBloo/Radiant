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
	 * Function BPA_Revolver.BPA_Revolver_C.GetAmmoContainerData
	 */
	struct ABPA_Revolver_C_GetAmmoContainerData_Params
	{
	public:
		struct FAmmoContainerData                                  Data;                                                    // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BPA_Revolver.BPA_Revolver_C.GetShootingPointTransform
	 */
	struct ABPA_Revolver_C_GetShootingPointTransform_Params
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 Parent;                                                  // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LDST[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPA_Revolver.BPA_Revolver_C.EjectMesh
	 */
	struct ABPA_Revolver_C_EjectMesh_Params
	{
	public:
		struct FTransform                                          SpawnTransform;                                          // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_Revolver.BPA_Revolver_C.GetChamberedAmmoTag
	 */
	struct ABPA_Revolver_C_GetChamberedAmmoTag_Params
	{
	public:
		struct FGameplayTag                                        chamberedAmmoTag;                                        // 0x0000(0x0008)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Revolver.BPA_Revolver_C.GetChamberedAmmoInfo
	 */
	struct ABPA_Revolver_C_GetChamberedAmmoInfo_Params
	{
	public:
		struct FAmmoInfo                                           AmmoInfo;                                                // 0x0000(0x0058)  (Parm, OutParm)
	};

	/**
	 * Function BPA_Revolver.BPA_Revolver_C.UpdateItem
	 */
	struct ABPA_Revolver_C_UpdateItem_Params
	{	};

	/**
	 * Function BPA_Revolver.BPA_Revolver_C.HammerTimeline__FinishedFunc
	 */
	struct ABPA_Revolver_C_HammerTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function BPA_Revolver.BPA_Revolver_C.HammerTimeline__UpdateFunc
	 */
	struct ABPA_Revolver_C_HammerTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function BPA_Revolver.BPA_Revolver_C.ReceiveTick
	 */
	struct ABPA_Revolver_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Revolver.BPA_Revolver_C.EjectMag
	 */
	struct ABPA_Revolver_C_EjectMag_Params
	{	};

	/**
	 * Function BPA_Revolver.BPA_Revolver_C.SetLocked
	 */
	struct ABPA_Revolver_C_SetLocked_Params
	{
	public:
		bool                                                       NewLocked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_Revolver.BPA_Revolver_C.OnStart
	 */
	struct ABPA_Revolver_C_OnStart_Params
	{	};

	/**
	 * Function BPA_Revolver.BPA_Revolver_C.OnBarrelPositionChanged
	 */
	struct ABPA_Revolver_C_OnBarrelPositionChanged_Params
	{	};

	/**
	 * Function BPA_Revolver.BPA_Revolver_C.BndEvt__LoadingTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABPA_Revolver_C_BndEvt__LoadingTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_H42M[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BPA_Revolver.BPA_Revolver_C.ThumbLeft
	 */
	struct ABPA_Revolver_C_ThumbLeft_Params
	{	};

	/**
	 * Function BPA_Revolver.BPA_Revolver_C.OnGrip
	 */
	struct ABPA_Revolver_C_OnGrip_Params
	{
	public:
		class UGripMotionControllerComponent*                      GrippingController;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SNFX[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BPA_Revolver.BPA_Revolver_C.OnGripRelease
	 */
	struct ABPA_Revolver_C_OnGripRelease_Params
	{
	public:
		class UGripMotionControllerComponent*                      ReleasingController;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DW6A[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
		bool                                                       bWasSocketed;                                            // 0x01F0(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_Revolver.BPA_Revolver_C.OnReconfigure
	 */
	struct ABPA_Revolver_C_OnReconfigure_Params
	{	};

	/**
	 * Function BPA_Revolver.BPA_Revolver_C.OnAmmoRemoved
	 */
	struct ABPA_Revolver_C_OnAmmoRemoved_Params
	{	};

	/**
	 * Function BPA_Revolver.BPA_Revolver_C.DestroyComp
	 */
	struct ABPA_Revolver_C_DestroyComp_Params
	{
	public:
		class USceneComponent*                                     SceneComponent;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Revolver.BPA_Revolver_C.DrumRotate
	 */
	struct ABPA_Revolver_C_DrumRotate_Params
	{	};

	/**
	 * Function BPA_Revolver.BPA_Revolver_C.OnUsed
	 */
	struct ABPA_Revolver_C_OnUsed_Params
	{	};

	/**
	 * Function BPA_Revolver.BPA_Revolver_C.EjectAllRounds
	 */
	struct ABPA_Revolver_C_EjectAllRounds_Params
	{	};

	/**
	 * Function BPA_Revolver.BPA_Revolver_C.PrimaryTrigger
	 */
	struct ABPA_Revolver_C_PrimaryTrigger_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Revolver.BPA_Revolver_C.EjectEmptyCases
	 */
	struct ABPA_Revolver_C_EjectEmptyCases_Params
	{	};

	/**
	 * Function BPA_Revolver.BPA_Revolver_C.EjectBullets
	 */
	struct ABPA_Revolver_C_EjectBullets_Params
	{	};

	/**
	 * Function BPA_Revolver.BPA_Revolver_C.ExecuteUbergraph_BPA_Revolver
	 */
	struct ABPA_Revolver_C_ExecuteUbergraph_BPA_Revolver_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
