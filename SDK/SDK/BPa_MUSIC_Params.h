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
	 * Function BPa_MUSIC.BPa_MUSIC_C.ReceiveEndPlay
	 */
	struct ABPa_MUSIC_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPa_MUSIC.BPa_MUSIC_C.ReceiveBeginPlay
	 */
	struct ABPa_MUSIC_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPa_MUSIC.BPa_MUSIC_C.CustomEvent_2
	 */
	struct ABPa_MUSIC_C_CustomEvent_2_Params
	{	};

	/**
	 * Function BPa_MUSIC.BPa_MUSIC_C.ExecuteUbergraph_BPa_MUSIC
	 */
	struct ABPa_MUSIC_C_ExecuteUbergraph_BPa_MUSIC_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_G7OD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
