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
	 * Function TeleportToPOISkillComponent.TeleportToPOISkillComponent_C.GetSkillPhases
	 */
	struct UTeleportToPOISkillComponent_C_GetSkillPhases_Params
	{
	public:
		TArray<ESkillPhase>                                        Phases;                                                  // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function TeleportToPOISkillComponent.TeleportToPOISkillComponent_C.NeedWaitForReadyAfter
	 */
	struct UTeleportToPOISkillComponent_C_NeedWaitForReadyAfter_Params
	{
	public:
		bool                                                       NeedWait;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TeleportToPOISkillComponent.TeleportToPOISkillComponent_C.NeedWaitForReadyBefore
	 */
	struct UTeleportToPOISkillComponent_C_NeedWaitForReadyBefore_Params
	{
	public:
		bool                                                       NeedWait;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TeleportToPOISkillComponent.TeleportToPOISkillComponent_C.IsSkillReady
	 */
	struct UTeleportToPOISkillComponent_C_IsSkillReady_Params
	{
	public:
		bool                                                       SkillReady;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OXKP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      CooldownLeft;                                            // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TeleportToPOISkillComponent.TeleportToPOISkillComponent_C.UseSkill
	 */
	struct UTeleportToPOISkillComponent_C_UseSkill_Params
	{
	public:
		bool                                                       success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TeleportToPOISkillComponent.TeleportToPOISkillComponent_C.IsSkillInProgress
	 */
	struct UTeleportToPOISkillComponent_C_IsSkillInProgress_Params
	{
	public:
		bool                                                       InProgress;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TeleportToPOISkillComponent.TeleportToPOISkillComponent_C.CheckTargetReachability
	 */
	struct UTeleportToPOISkillComponent_C_CheckTargetReachability_Params
	{
	public:
		bool                                                       success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DKYA[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TeleportToPOISkillComponent.TeleportToPOISkillComponent_C.GetSettingsKey
	 */
	struct UTeleportToPOISkillComponent_C_GetSettingsKey_Params
	{
	public:
		class FString                                              Input;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Output;                                                  // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function TeleportToPOISkillComponent.TeleportToPOISkillComponent_C.ReceiveTick
	 */
	struct UTeleportToPOISkillComponent_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TeleportToPOISkillComponent.TeleportToPOISkillComponent_C.DoUse
	 */
	struct UTeleportToPOISkillComponent_C_DoUse_Params
	{	};

	/**
	 * Function TeleportToPOISkillComponent.TeleportToPOISkillComponent_C.ReceiveBeginPlay
	 */
	struct UTeleportToPOISkillComponent_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function TeleportToPOISkillComponent.TeleportToPOISkillComponent_C.ExecuteUbergraph_TeleportToPOISkillComponent
	 */
	struct UTeleportToPOISkillComponent_C_ExecuteUbergraph_TeleportToPOISkillComponent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BNZO[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TeleportToPOISkillComponent.TeleportToPOISkillComponent_C.OnTeleportFinish__DelegateSignature
	 */
	struct UTeleportToPOISkillComponent_C_OnTeleportFinish__DelegateSignature_Params
	{	};

	/**
	 * Function TeleportToPOISkillComponent.TeleportToPOISkillComponent_C.OnTeleportStart__DelegateSignature
	 */
	struct UTeleportToPOISkillComponent_C_OnTeleportStart__DelegateSignature_Params
	{
	public:
		struct FVector                                             TargetLocation;                                          // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Time;                                                    // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
