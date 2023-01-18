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
	 * Function BP_CharBroadcast.BP_CharBroadcast_C.HasAnyone
	 */
	struct ABP_CharBroadcast_C_HasAnyone_Params
	{
	public:
		bool                                                       has;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9SN1[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_CharBroadcast.BP_CharBroadcast_C.AlertOthers
	 */
	struct ABP_CharBroadcast_C_AlertOthers_Params
	{
	public:
		class ABPA_Char_C*                                         Caller;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Target;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FTransform                                          Location;                                                // 0x0010(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_CharBroadcast.BP_CharBroadcast_C.GetOtherChars
	 */
	struct ABP_CharBroadcast_C_GetOtherChars_Params
	{
	public:
		class ABPA_Char_C*                                         Caller;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class ABPA_Char_C*>                                 others;                                                  // 0x0008(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BP_CharBroadcast.BP_CharBroadcast_C.UserConstructionScript
	 */
	struct ABP_CharBroadcast_C_UserConstructionScript_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
