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
	 * Function BP_Char_ScriptedSemyonich.BP_Char_ScriptedSemyonich_C.LoadAdditionalSettings
	 */
	struct ABP_Char_ScriptedSemyonich_C_LoadAdditionalSettings_Params
	{	};

	/**
	 * Function BP_Char_ScriptedSemyonich.BP_Char_ScriptedSemyonich_C.SetControll
	 */
	struct ABP_Char_ScriptedSemyonich_C_SetControll_Params
	{
	public:
		class ABP_Tutorial_Mission_C*                              TutSeq;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Char_ScriptedSemyonich.BP_Char_ScriptedSemyonich_C.SetEnableAdditionalThings
	 */
	struct ABP_Char_ScriptedSemyonich_C_SetEnableAdditionalThings_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Char_ScriptedSemyonich.BP_Char_ScriptedSemyonich_C.Trigger
	 */
	struct ABP_Char_ScriptedSemyonich_C_Trigger_Params
	{	};

	/**
	 * Function BP_Char_ScriptedSemyonich.BP_Char_ScriptedSemyonich_C.ProcessNoise
	 */
	struct ABP_Char_ScriptedSemyonich_C_ProcessNoise_Params
	{
	public:
		class FName                                                Tag;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Location;                                                // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Char_ScriptedSemyonich.BP_Char_ScriptedSemyonich_C.SetCrouch
	 */
	struct ABP_Char_ScriptedSemyonich_C_SetCrouch_Params
	{
	public:
		bool                                                       Crouch;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Char_ScriptedSemyonich.BP_Char_ScriptedSemyonich_C.OnStart
	 */
	struct ABP_Char_ScriptedSemyonich_C_OnStart_Params
	{	};

	/**
	 * Function BP_Char_ScriptedSemyonich.BP_Char_ScriptedSemyonich_C.ReceiveDestroyed
	 */
	struct ABP_Char_ScriptedSemyonich_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function BP_Char_ScriptedSemyonich.BP_Char_ScriptedSemyonich_C.ResetSpeed
	 */
	struct ABP_Char_ScriptedSemyonich_C_ResetSpeed_Params
	{	};

	/**
	 * Function BP_Char_ScriptedSemyonich.BP_Char_ScriptedSemyonich_C.SetSpeed
	 */
	struct ABP_Char_ScriptedSemyonich_C_SetSpeed_Params
	{
	public:
		float                                                      NewSpeed;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Char_ScriptedSemyonich.BP_Char_ScriptedSemyonich_C.OnAttackCommandStarted
	 */
	struct ABP_Char_ScriptedSemyonich_C_OnAttackCommandStarted_Params
	{	};

	/**
	 * Function BP_Char_ScriptedSemyonich.BP_Char_ScriptedSemyonich_C.ExecuteUbergraph_BP_Char_ScriptedSemyonich
	 */
	struct ABP_Char_ScriptedSemyonich_C_ExecuteUbergraph_BP_Char_ScriptedSemyonich_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OEQR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
