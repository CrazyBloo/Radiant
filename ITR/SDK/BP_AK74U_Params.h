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
	 * Function BP_AK74U.BP_AK74U_C.OnReconfigure
	 */
	struct ABP_AK74U_C_OnReconfigure_Params
	{	};

	/**
	 * Function BP_AK74U.BP_AK74U_C.AttachmentAttached
	 */
	struct ABP_AK74U_C_AttachmentAttached_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AK74U.BP_AK74U_C.AttachmentDetached
	 */
	struct ABP_AK74U_C_AttachmentDetached_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AK74U.BP_AK74U_C.UpdateAttachmentSlots
	 */
	struct ABP_AK74U_C_UpdateAttachmentSlots_Params
	{	};

	/**
	 * Function BP_AK74U.BP_AK74U_C.ExecuteUbergraph_BP_AK74U
	 */
	struct ABP_AK74U_C_ExecuteUbergraph_BP_AK74U_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BGW3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
