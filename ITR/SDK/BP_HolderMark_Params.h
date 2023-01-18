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
	 * Function BP_HolderMark.BP_HolderMark_C.GetDistances
	 */
	struct ABP_HolderMark_C_GetDistances_Params
	{
	public:
		bool                                                       bLeftInRange;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HQ0K[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      leftDistance;                                            // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bRightInRange;                                           // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FGWN[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      rightDistance;                                           // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HolderMark.BP_HolderMark_C.ReceiveEndPlay
	 */
	struct ABP_HolderMark_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HolderMark.BP_HolderMark_C.ReceiveBeginPlay
	 */
	struct ABP_HolderMark_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_HolderMark.BP_HolderMark_C.LinkActor
	 */
	struct ABP_HolderMark_C_LinkActor_Params
	{
	public:
		class AActor*                                              ActorInHand;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsLeft;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HolderMark.BP_HolderMark_C.Highlight
	 */
	struct ABP_HolderMark_C_Highlight_Params
	{
	public:
		bool                                                       bIsLeft;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_HolderMark.BP_HolderMark_C.Update
	 */
	struct ABP_HolderMark_C_Update_Params
	{	};

	/**
	 * Function BP_HolderMark.BP_HolderMark_C.InitHolsterRef
	 */
	struct ABP_HolderMark_C_InitHolsterRef_Params
	{
	public:
		class UHolsterComponent*                                   holsterRef;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HolderMark.BP_HolderMark_C.ExecuteUbergraph_BP_HolderMark
	 */
	struct ABP_HolderMark_C_ExecuteUbergraph_BP_HolderMark_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DD27[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
