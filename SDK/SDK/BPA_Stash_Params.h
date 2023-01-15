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
	 * Function BPA_Stash.BPA_Stash_C.SetLocked
	 */
	struct ABPA_Stash_C_SetLocked_Params
	{
	public:
		bool                                                       Locked;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_Stash.BPA_Stash_C.OnDoorStateChanged
	 */
	struct ABPA_Stash_C_OnDoorStateChanged_Params
	{	};

	/**
	 * Function BPA_Stash.BPA_Stash_C.OnLevelStarted
	 */
	struct ABPA_Stash_C_OnLevelStarted_Params
	{
	public:
		struct FGameplayTag                                        LevelTag;                                                // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Stash.BPA_Stash_C.SpawnLoot
	 */
	struct ABPA_Stash_C_SpawnLoot_Params
	{	};

	/**
	 * Function BPA_Stash.BPA_Stash_C.Setup
	 */
	struct ABPA_Stash_C_Setup_Params
	{
	public:
		struct FStashSpawnInfo                                     StashSpawnInfo;                                          // 0x0000(0x0080)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPA_Stash.BPA_Stash_C.ExecuteUbergraph_BPA_Stash
	 */
	struct ABPA_Stash_C_ExecuteUbergraph_BPA_Stash_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_P9UP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPA_Stash.BPA_Stash_C.StashOpened__DelegateSignature
	 */
	struct ABPA_Stash_C_StashOpened__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
