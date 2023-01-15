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
	 * Function BPI_PRGameMode.BPI_PRGameMode_C.ApplyBightnessMult
	 */
	struct UBPI_PRGameMode_C_ApplyBightnessMult_Params
	{	};

	/**
	 * Function BPI_PRGameMode.BPI_PRGameMode_C.OnPlayerDeath
	 */
	struct UBPI_PRGameMode_C_OnPlayerDeath_Params
	{	};

	/**
	 * Function BPI_PRGameMode.BPI_PRGameMode_C.GetEnvironment
	 */
	struct UBPI_PRGameMode_C_GetEnvironment_Params
	{
	public:
		class ABP_Environment_C*                                   Environment;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
