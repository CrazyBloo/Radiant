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
	 * Function BPI_DebugAndCheats.BPI_DebugAndCheats_C.CheatShowActorsOfClass
	 */
	struct UBPI_DebugAndCheats_C_CheatShowActorsOfClass_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_DebugAndCheats.BPI_DebugAndCheats_C.SwitchCheatShowClimableActors
	 */
	struct UBPI_DebugAndCheats_C_SwitchCheatShowClimableActors_Params
	{	};

	/**
	 * Function BPI_DebugAndCheats.BPI_DebugAndCheats_C.GetCheatShowClimabledistance
	 */
	struct UBPI_DebugAndCheats_C_GetCheatShowClimabledistance_Params
	{
	public:
		int32_t                                                    Distance;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_DebugAndCheats.BPI_DebugAndCheats_C.SwitchNightVision
	 */
	struct UBPI_DebugAndCheats_C_SwitchNightVision_Params
	{	};

	/**
	 * Function BPI_DebugAndCheats.BPI_DebugAndCheats_C.SwitchCheatShowItems
	 */
	struct UBPI_DebugAndCheats_C_SwitchCheatShowItems_Params
	{	};

	/**
	 * Function BPI_DebugAndCheats.BPI_DebugAndCheats_C.SetCheatShowItems
	 */
	struct UBPI_DebugAndCheats_C_SetCheatShowItems_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_DebugAndCheats.BPI_DebugAndCheats_C.GetCheatShowItems
	 */
	struct UBPI_DebugAndCheats_C_GetCheatShowItems_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_DebugAndCheats.BPI_DebugAndCheats_C.SwitchCheatSpeed
	 */
	struct UBPI_DebugAndCheats_C_SwitchCheatSpeed_Params
	{	};

	/**
	 * Function BPI_DebugAndCheats.BPI_DebugAndCheats_C.SetCheatSpeed
	 */
	struct UBPI_DebugAndCheats_C_SetCheatSpeed_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_DebugAndCheats.BPI_DebugAndCheats_C.GetCheatSpeed
	 */
	struct UBPI_DebugAndCheats_C_GetCheatSpeed_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_DebugAndCheats.BPI_DebugAndCheats_C.SwitchCheatShowNearbyNPCs
	 */
	struct UBPI_DebugAndCheats_C_SwitchCheatShowNearbyNPCs_Params
	{	};

	/**
	 * Function BPI_DebugAndCheats.BPI_DebugAndCheats_C.SetCheatShowNearbyNPCs
	 */
	struct UBPI_DebugAndCheats_C_SetCheatShowNearbyNPCs_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_DebugAndCheats.BPI_DebugAndCheats_C.GetCheatShowNearbyNPCs
	 */
	struct UBPI_DebugAndCheats_C_GetCheatShowNearbyNPCs_Params
	{
	public:
		bool                                                       Value;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
