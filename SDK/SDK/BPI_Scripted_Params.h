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
	 * Function BPI_Scripted.BPI_Scripted_C.SetControll
	 */
	struct UBPI_Scripted_C_SetControll_Params
	{
	public:
		class ABP_Tutorial_Mission_C*                              TutSeq;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_Scripted.BPI_Scripted_C.ResetSpeed
	 */
	struct UBPI_Scripted_C_ResetSpeed_Params
	{	};

	/**
	 * Function BPI_Scripted.BPI_Scripted_C.Trigger
	 */
	struct UBPI_Scripted_C_Trigger_Params
	{	};

	/**
	 * Function BPI_Scripted.BPI_Scripted_C.SetCrouch
	 */
	struct UBPI_Scripted_C_SetCrouch_Params
	{
	public:
		bool                                                       Crouch;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_Scripted.BPI_Scripted_C.SetSpeed
	 */
	struct UBPI_Scripted_C_SetSpeed_Params
	{
	public:
		float                                                      NewSpeed;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
