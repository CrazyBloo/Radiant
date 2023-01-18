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
	 * Function BP_M4A1.BP_M4A1_C.AttachmentAttached
	 */
	struct ABP_M4A1_C_AttachmentAttached_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_M4A1.BP_M4A1_C.AttachmentDetached
	 */
	struct ABP_M4A1_C_AttachmentDetached_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_M4A1.BP_M4A1_C.OnReconfigure
	 */
	struct ABP_M4A1_C_OnReconfigure_Params
	{	};

	/**
	 * Function BP_M4A1.BP_M4A1_C.RefreshSights
	 */
	struct ABP_M4A1_C_RefreshSights_Params
	{	};

	/**
	 * Function BP_M4A1.BP_M4A1_C.ExecuteUbergraph_BP_M4A1
	 */
	struct ABP_M4A1_C_ExecuteUbergraph_BP_M4A1_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZSNQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
