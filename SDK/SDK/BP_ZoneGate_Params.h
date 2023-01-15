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
	 * Function BP_ZoneGate.BP_ZoneGate_C.GetTrigger
	 */
	struct ABP_ZoneGate_C_GetTrigger_Params
	{
	public:
		struct FGameplayTag                                        Trigger;                                                 // 0x0000(0x0008)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ZoneGate.BP_ZoneGate_C.CheckTrigger
	 */
	struct ABP_ZoneGate_C_CheckTrigger_Params
	{
	public:
		bool                                                       Activated;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ZoneGate.BP_ZoneGate_C.GetDestinationLevelName
	 */
	struct ABP_ZoneGate_C_GetDestinationLevelName_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_ZoneGate.BP_ZoneGate_C.IsActivated
	 */
	struct ABP_ZoneGate_C_IsActivated_Params
	{
	public:
		bool                                                       Activated;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ZoneGate.BP_ZoneGate_C.IsPlayerInside
	 */
	struct ABP_ZoneGate_C_IsPlayerInside_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ZoneGate.BP_ZoneGate_C.CheckEquals
	 */
	struct ABP_ZoneGate_C_CheckEquals_Params
	{
	public:
		struct FGameplayTag                                        Level;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTag                                        PairTag;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		bool                                                       Value;                                                   // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ZoneGate.BP_ZoneGate_C.GetExitPoint
	 */
	struct ABP_ZoneGate_C_GetExitPoint_Params
	{
	public:
		struct FTransform                                          Value;                                                   // 0x0000(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ZoneGate.BP_ZoneGate_C.UserConstructionScript
	 */
	struct ABP_ZoneGate_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_ZoneGate.BP_ZoneGate_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_ZoneGate_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IAFU[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_ZoneGate.BP_ZoneGate_C.OnTransitionEnd
	 */
	struct ABP_ZoneGate_C_OnTransitionEnd_Params
	{	};

	/**
	 * Function BP_ZoneGate.BP_ZoneGate_C.OnTransitionStart
	 */
	struct ABP_ZoneGate_C_OnTransitionStart_Params
	{	};

	/**
	 * Function BP_ZoneGate.BP_ZoneGate_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct ABP_ZoneGate_C_BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ZoneGate.BP_ZoneGate_C.SetDisabled
	 */
	struct ABP_ZoneGate_C_SetDisabled_Params
	{
	public:
		bool                                                       Disabled;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ZoneGate.BP_ZoneGate_C.DoTransfer
	 */
	struct ABP_ZoneGate_C_DoTransfer_Params
	{	};

	/**
	 * Function BP_ZoneGate.BP_ZoneGate_C.ReceiveBeginPlay
	 */
	struct ABP_ZoneGate_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_ZoneGate.BP_ZoneGate_C.ExecuteUbergraph_BP_ZoneGate
	 */
	struct ABP_ZoneGate_C_ExecuteUbergraph_BP_ZoneGate_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
