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
	 * Function BP_Cassette_Story.BP_Cassette_Story_C.IsCassetteCollected
	 */
	struct ABP_Cassette_Story_C_IsCassetteCollected_Params
	{
	public:
		bool                                                       collected;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OHSZ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Cassette_Story.BP_Cassette_Story_C.OnStart
	 */
	struct ABP_Cassette_Story_C_OnStart_Params
	{	};

	/**
	 * Function BP_Cassette_Story.BP_Cassette_Story_C.ExecuteUbergraph_BP_Cassette_Story
	 */
	struct ABP_Cassette_Story_C_ExecuteUbergraph_BP_Cassette_Story_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
