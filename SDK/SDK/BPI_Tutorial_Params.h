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
	 * Function BPI_Tutorial.BPI_Tutorial_C.TargetActorHeldInHand
	 */
	struct UBPI_Tutorial_C_TargetActorHeldInHand_Params
	{
	public:
		bool                                                       IsHeld;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       HeldInLeft;                                              // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_Tutorial.BPI_Tutorial_C.ItemREmovedFromBin
	 */
	struct UBPI_Tutorial_C_ItemREmovedFromBin_Params
	{	};

	/**
	 * Function BPI_Tutorial.BPI_Tutorial_C.ItemPutToBin
	 */
	struct UBPI_Tutorial_C_ItemPutToBin_Params
	{	};

	/**
	 * Function BPI_Tutorial.BPI_Tutorial_C.LockFunctions
	 */
	struct UBPI_Tutorial_C_LockFunctions_Params
	{
	public:
		bool                                                       lock;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_Tutorial.BPI_Tutorial_C.SetControllActor
	 */
	struct UBPI_Tutorial_C_SetControllActor_Params
	{
	public:
		class ABPA_TutorStep_C*                                    Ref;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_Tutorial.BPI_Tutorial_C.ItemsBought
	 */
	struct UBPI_Tutorial_C_ItemsBought_Params
	{	};

	/**
	 * Function BPI_Tutorial.BPI_Tutorial_C.ItemsSold
	 */
	struct UBPI_Tutorial_C_ItemsSold_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
