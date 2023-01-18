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
	 * Function BP_ZoneGate_Shortcut.BP_ZoneGate_Shortcut_C.GetTrigger
	 */
	struct ABP_ZoneGate_Shortcut_C_GetTrigger_Params
	{
	public:
		struct FGameplayTag                                        Trigger;                                                 // 0x0000(0x0008)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ZoneGate_Shortcut.BP_ZoneGate_Shortcut_C.CheckTrigger
	 */
	struct ABP_ZoneGate_Shortcut_C_CheckTrigger_Params
	{
	public:
		bool                                                       Activated;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KWAY[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ZoneGate_Shortcut.BP_ZoneGate_Shortcut_C.IsActivated
	 */
	struct ABP_ZoneGate_Shortcut_C_IsActivated_Params
	{
	public:
		bool                                                       Activated;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ZoneGate_Shortcut.BP_ZoneGate_Shortcut_C.SetDisabled
	 */
	struct ABP_ZoneGate_Shortcut_C_SetDisabled_Params
	{
	public:
		bool                                                       Disabled;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ZoneGate_Shortcut.BP_ZoneGate_Shortcut_C.DoTransfer
	 */
	struct ABP_ZoneGate_Shortcut_C_DoTransfer_Params
	{	};

	/**
	 * Function BP_ZoneGate_Shortcut.BP_ZoneGate_Shortcut_C.BndEvt__BP_ZoneGate_Shortcut_BoxDimentions_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_ZoneGate_Shortcut_C_BndEvt__BP_ZoneGate_Shortcut_BoxDimentions_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BAU4[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_ZoneGate_Shortcut.BP_ZoneGate_Shortcut_C.ExecuteUbergraph_BP_ZoneGate_Shortcut
	 */
	struct ABP_ZoneGate_Shortcut_C_ExecuteUbergraph_BP_ZoneGate_Shortcut_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
