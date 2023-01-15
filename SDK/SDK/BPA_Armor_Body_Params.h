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
	 * Function BPA_Armor_Body.BPA_Armor_Body_C.GetSoundType
	 */
	struct ABPA_Armor_Body_C_GetSoundType_Params
	{
	public:
		bool                                                       Exist;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1Q6X[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Type;                                                    // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Armor_Body.BPA_Armor_Body_C.ApplayVisualEffects
	 */
	struct ABPA_Armor_Body_C_ApplayVisualEffects_Params
	{
	public:
		class AActor*                                              _char_;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Applay;                                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KV1V[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FFBodyArmorSetup                                    FBodyArmorSetup;                                         // 0x0010(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Armor_Body.BPA_Armor_Body_C.ApplayToCharacter
	 */
	struct ABPA_Armor_Body_C_ApplayToCharacter_Params
	{
	public:
		class AActor*                                              Chracter;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Armor_Body.BPA_Armor_Body_C.ReceiveEndPlay
	 */
	struct ABPA_Armor_Body_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Armor_Body.BPA_Armor_Body_C.OnShowBodyChanged_Event_1
	 */
	struct ABPA_Armor_Body_C_OnShowBodyChanged_Event_1_Params
	{	};

	/**
	 * Function BPA_Armor_Body.BPA_Armor_Body_C.OnAddedToHolster
	 */
	struct ABPA_Armor_Body_C_OnAddedToHolster_Params
	{
	public:
		class UHolsterComponent*                                   Holster;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Armor_Body.BPA_Armor_Body_C.OnRemovedFromHolster
	 */
	struct ABPA_Armor_Body_C_OnRemovedFromHolster_Params
	{
	public:
		class UHolsterComponent*                                   Holster;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Armor_Body.BPA_Armor_Body_C.ExecuteUbergraph_BPA_Armor_Body
	 */
	struct ABPA_Armor_Body_C_ExecuteUbergraph_BPA_Armor_Body_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QM31[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
