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
	 * Function BP_Detonator.BP_Detonator_C.ReceiveBeginPlay
	 */
	struct ABP_Detonator_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Detonator.BP_Detonator_C.OnUsed
	 */
	struct ABP_Detonator_C_OnUsed_Params
	{	};

	/**
	 * Function BP_Detonator.BP_Detonator_C.ExecuteUbergraph_BP_Detonator
	 */
	struct ABP_Detonator_C_ExecuteUbergraph_BP_Detonator_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LMRZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
