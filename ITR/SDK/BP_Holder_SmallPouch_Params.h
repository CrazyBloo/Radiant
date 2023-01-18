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
	 * Function BP_Holder_SmallPouch.BP_Holder_SmallPouch_C.PlayHaptics
	 */
	struct ABP_Holder_SmallPouch_C_PlayHaptics_Params
	{	};

	/**
	 * Function BP_Holder_SmallPouch.BP_Holder_SmallPouch_C.TryAttachToInventory
	 */
	struct ABP_Holder_SmallPouch_C_TryAttachToInventory_Params
	{
	public:
		class AActor*                                              ActorDropped;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Attached;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Holder_SmallPouch.BP_Holder_SmallPouch_C.DoAttach
	 */
	struct ABP_Holder_SmallPouch_C_DoAttach_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Simulate;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       NoItemTake;                                              // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Holder_SmallPouch.BP_Holder_SmallPouch_C.IsAcceptItemActor
	 */
	struct ABP_Holder_SmallPouch_C_IsAcceptItemActor_Params
	{
	public:
		class AActor*                                              itemActor;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       onlyIfFree;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       accept;                                                  // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IYZ4[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Holder_SmallPouch.BP_Holder_SmallPouch_C.IsOverlapSomething
	 */
	struct ABP_Holder_SmallPouch_C_IsOverlapSomething_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5BP5[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Holder_SmallPouch.BP_Holder_SmallPouch_C.BndEvt__HolsterBoxTrigger_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct ABP_Holder_SmallPouch_C_BndEvt__HolsterBoxTrigger_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Holder_SmallPouch.BP_Holder_SmallPouch_C.ReinitPrimitives
	 */
	struct ABP_Holder_SmallPouch_C_ReinitPrimitives_Params
	{	};

	/**
	 * Function BP_Holder_SmallPouch.BP_Holder_SmallPouch_C.BndEvt__HolsterBoxTrigger_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_Holder_SmallPouch_C_BndEvt__HolsterBoxTrigger_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_20K5[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Holder_SmallPouch.BP_Holder_SmallPouch_C.RefreshHolder
	 */
	struct ABP_Holder_SmallPouch_C_RefreshHolder_Params
	{	};

	/**
	 * Function BP_Holder_SmallPouch.BP_Holder_SmallPouch_C.OnGameStarted
	 */
	struct ABP_Holder_SmallPouch_C_OnGameStarted_Params
	{	};

	/**
	 * Function BP_Holder_SmallPouch.BP_Holder_SmallPouch_C.OnPlayerBodyVisibilityChangedEvent
	 */
	struct ABP_Holder_SmallPouch_C_OnPlayerBodyVisibilityChangedEvent_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Holder_SmallPouch.BP_Holder_SmallPouch_C.ExecuteUbergraph_BP_Holder_SmallPouch
	 */
	struct ABP_Holder_SmallPouch_C_ExecuteUbergraph_BP_Holder_SmallPouch_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
