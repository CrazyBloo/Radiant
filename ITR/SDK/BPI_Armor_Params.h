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
	 * Function BPI_Armor.BPI_Armor_C.GetFootStepBonus
	 */
	struct UBPI_Armor_C_GetFootStepBonus_Params
	{
	public:
		unsigned char                                              UnknownData_IL8J[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      bonus;                                                   // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_Armor.BPI_Armor_C.BlockFaceTrigger
	 */
	struct UBPI_Armor_C_BlockFaceTrigger_Params
	{
	};

	/**
	 * Function BPI_Armor.BPI_Armor_C.GetSoundType
	 */
	struct UBPI_Armor_C_GetSoundType_Params
	{
	public:
		bool                                                       Exist;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_E9FZ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Type;                                                    // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
