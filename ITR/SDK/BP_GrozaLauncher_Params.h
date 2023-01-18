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
	 * Function BP_GrozaLauncher.BP_GrozaLauncher_C.GetAttachmentsList
	 */
	struct ABP_GrozaLauncher_C_GetAttachmentsList_Params
	{
	public:
		TArray<class FString>                                      Attachments;                                             // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BP_GrozaLauncher.BP_GrozaLauncher_C.UserConstructionScript
	 */
	struct ABP_GrozaLauncher_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_GrozaLauncher.BP_GrozaLauncher_C.OnReconfigure
	 */
	struct ABP_GrozaLauncher_C_OnReconfigure_Params
	{	};

	/**
	 * Function BP_GrozaLauncher.BP_GrozaLauncher_C.OnSecondaryUsed
	 */
	struct ABP_GrozaLauncher_C_OnSecondaryUsed_Params
	{	};

	/**
	 * Function BP_GrozaLauncher.BP_GrozaLauncher_C.ExecuteUbergraph_BP_GrozaLauncher
	 */
	struct ABP_GrozaLauncher_C_ExecuteUbergraph_BP_GrozaLauncher_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
