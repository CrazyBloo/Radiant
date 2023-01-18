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
	 * Function BP_Pointer.BP_Pointer_C.GetLightItem
	 */
	struct ABP_Pointer_C_GetLightItem_Params
	{
	public:
		bool                                                       IsOn;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_I9L1[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABPA_BaseItem_C*                                     Item;                                                    // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Pointer.BP_Pointer_C.IsOn
	 */
	struct ABP_Pointer_C_IsOn_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3TE8[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Pointer.BP_Pointer_C.Off
	 */
	struct ABP_Pointer_C_Off_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Pointer.BP_Pointer_C.OnReconfigure
	 */
	struct ABP_Pointer_C_OnReconfigure_Params
	{	};

	/**
	 * Function BP_Pointer.BP_Pointer_C.OnUsed
	 */
	struct ABP_Pointer_C_OnUsed_Params
	{	};

	/**
	 * Function BP_Pointer.BP_Pointer_C.Hide
	 */
	struct ABP_Pointer_C_Hide_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Pointer.BP_Pointer_C.ReceiveTick
	 */
	struct ABP_Pointer_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Pointer.BP_Pointer_C.ExecuteUbergraph_BP_Pointer
	 */
	struct ABP_Pointer_C_ExecuteUbergraph_BP_Pointer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
