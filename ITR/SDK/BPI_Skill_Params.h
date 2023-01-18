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
	 * Function BPI_Skill.BPI_Skill_C.GetSkillPhases
	 */
	struct UBPI_Skill_C_GetSkillPhases_Params
	{
	public:
		TArray<ESkillPhase>                                        Phases;                                                  // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BPI_Skill.BPI_Skill_C.NeedWaitForReadyAfter
	 */
	struct UBPI_Skill_C_NeedWaitForReadyAfter_Params
	{
	public:
		bool                                                       NeedWait;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_Skill.BPI_Skill_C.NeedWaitForReadyBefore
	 */
	struct UBPI_Skill_C_NeedWaitForReadyBefore_Params
	{
	public:
		bool                                                       NeedWait;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_Skill.BPI_Skill_C.IsSkillInProgress
	 */
	struct UBPI_Skill_C_IsSkillInProgress_Params
	{
	public:
		bool                                                       InProgress;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_Skill.BPI_Skill_C.UseSkill
	 */
	struct UBPI_Skill_C_UseSkill_Params
	{
	public:
		bool                                                       success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_Skill.BPI_Skill_C.IsSkillReady
	 */
	struct UBPI_Skill_C_IsSkillReady_Params
	{
	public:
		bool                                                       SkillReady;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Y8FI[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      CooldownLeft;                                            // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
