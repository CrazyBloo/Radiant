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
	 * Function BP_GripSelectorsController.BP_GripSelectorsController_C.UpdateSelectors
	 */
	struct ABP_GripSelectorsController_C_UpdateSelectors_Params
	{
	public:
		EPRHand                                                    hand;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SRNZ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_GripSelectorsController.BP_GripSelectorsController_C.ShowGripSelector
	 */
	struct ABP_GripSelectorsController_C_ShowGripSelector_Params
	{
	public:
		EPRHand                                                    hand;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Distance;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GripSelectorsController.BP_GripSelectorsController_C.GetGripPrimitive
	 */
	struct ABP_GripSelectorsController_C_GetGripPrimitive_Params
	{
	public:
		EPRHand                                                    hand;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UOL7[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimitiveComponent*                                 Primitive;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Point;                                                   // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       selected;                                                // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GripSelectorsController.BP_GripSelectorsController_C.ShowTriggerSelector
	 */
	struct ABP_GripSelectorsController_C_ShowTriggerSelector_Params
	{
	public:
		EPRHand                                                    hand;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LANJ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_GripSelectorsController.BP_GripSelectorsController_C.GetTriggerPrimitiveLocation
	 */
	struct ABP_GripSelectorsController_C_GetTriggerPrimitiveLocation_Params
	{
	public:
		EPRHand                                                    hand;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NIHI[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_GripSelectorsController.BP_GripSelectorsController_C.GetTriggerPrimitive
	 */
	struct ABP_GripSelectorsController_C_GetTriggerPrimitive_Params
	{
	public:
		EPRHand                                                    hand;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4COL[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_GripSelectorsController.BP_GripSelectorsController_C.HideSelectors
	 */
	struct ABP_GripSelectorsController_C_HideSelectors_Params
	{
	public:
		EPRHand                                                    hand;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Grip;                                                    // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Trigger;                                                 // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GripSelectorsController.BP_GripSelectorsController_C.UpdateGrips
	 */
	struct ABP_GripSelectorsController_C_UpdateGrips_Params
	{
	public:
		EPRHand                                                    hand;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Y0KC[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_GripSelectorsController.BP_GripSelectorsController_C.ReceiveTick
	 */
	struct ABP_GripSelectorsController_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GripSelectorsController.BP_GripSelectorsController_C.OnGameStarted
	 */
	struct ABP_GripSelectorsController_C_OnGameStarted_Params
	{	};

	/**
	 * Function BP_GripSelectorsController.BP_GripSelectorsController_C.ShowSelector
	 */
	struct ABP_GripSelectorsController_C_ShowSelector_Params
	{
	public:
		EPRHand                                                    hand;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Distance;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GripSelectorsController.BP_GripSelectorsController_C.HideSelector
	 */
	struct ABP_GripSelectorsController_C_HideSelector_Params
	{
	public:
		EPRHand                                                    hand;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GripSelectorsController.BP_GripSelectorsController_C.HideAllSelectors
	 */
	struct ABP_GripSelectorsController_C_HideAllSelectors_Params
	{	};

	/**
	 * Function BP_GripSelectorsController.BP_GripSelectorsController_C.ExecuteUbergraph_BP_GripSelectorsController
	 */
	struct ABP_GripSelectorsController_C_ExecuteUbergraph_BP_GripSelectorsController_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
