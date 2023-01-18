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
	 * Function SpawnCharSkillComponent.SpawnCharSkillComponent_C.GetSkillPhases
	 */
	struct USpawnCharSkillComponent_C_GetSkillPhases_Params
	{
	public:
		TArray<ESkillPhase>                                        Phases;                                                  // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function SpawnCharSkillComponent.SpawnCharSkillComponent_C.NeedWaitForReadyAfter
	 */
	struct USpawnCharSkillComponent_C_NeedWaitForReadyAfter_Params
	{
	public:
		bool                                                       NeedWait;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpawnCharSkillComponent.SpawnCharSkillComponent_C.NeedWaitForReadyBefore
	 */
	struct USpawnCharSkillComponent_C_NeedWaitForReadyBefore_Params
	{
	public:
		bool                                                       NeedWait;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpawnCharSkillComponent.SpawnCharSkillComponent_C.IsSkillReady
	 */
	struct USpawnCharSkillComponent_C_IsSkillReady_Params
	{
	public:
		bool                                                       SkillReady;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AOSO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      CooldownLeft;                                            // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SpawnCharSkillComponent.SpawnCharSkillComponent_C.UseSkill
	 */
	struct USpawnCharSkillComponent_C_UseSkill_Params
	{
	public:
		bool                                                       success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpawnCharSkillComponent.SpawnCharSkillComponent_C.IsSkillInProgress
	 */
	struct USpawnCharSkillComponent_C_IsSkillInProgress_Params
	{
	public:
		bool                                                       InProgress;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SpawnCharSkillComponent.SpawnCharSkillComponent_C.UpdateCharsLifetime
	 */
	struct USpawnCharSkillComponent_C_UpdateCharsLifetime_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YTYZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SpawnCharSkillComponent.SpawnCharSkillComponent_C.SpawnChar
	 */
	struct USpawnCharSkillComponent_C_SpawnChar_Params
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		class ABPA_Char_C*                                         _char_;                                                  // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SpawnCharSkillComponent.SpawnCharSkillComponent_C.ReceiveBeginPlay
	 */
	struct USpawnCharSkillComponent_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function SpawnCharSkillComponent.SpawnCharSkillComponent_C.OnOwnerDead
	 */
	struct USpawnCharSkillComponent_C_OnOwnerDead_Params
	{	};

	/**
	 * Function SpawnCharSkillComponent.SpawnCharSkillComponent_C.DoUse
	 */
	struct USpawnCharSkillComponent_C_DoUse_Params
	{	};

	/**
	 * Function SpawnCharSkillComponent.SpawnCharSkillComponent_C.ReceiveTick
	 */
	struct USpawnCharSkillComponent_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SpawnCharSkillComponent.SpawnCharSkillComponent_C.ExecuteUbergraph_SpawnCharSkillComponent
	 */
	struct USpawnCharSkillComponent_C_ExecuteUbergraph_SpawnCharSkillComponent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
