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
	 * Function BP_SCAR.BP_SCAR_C.AttachmentAttached
	 */
	struct ABP_SCAR_C_AttachmentAttached_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SCAR.BP_SCAR_C.AttachmentDetached
	 */
	struct ABP_SCAR_C_AttachmentDetached_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SCAR.BP_SCAR_C.OnReconfigure
	 */
	struct ABP_SCAR_C_OnReconfigure_Params
	{	};

	/**
	 * Function BP_SCAR.BP_SCAR_C.RefreshSights
	 */
	struct ABP_SCAR_C_RefreshSights_Params
	{	};

	/**
	 * Function BP_SCAR.BP_SCAR_C.ExecuteUbergraph_BP_SCAR
	 */
	struct ABP_SCAR_C_ExecuteUbergraph_BP_SCAR_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
