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
	 * Function BPC_Holster.BPC_Holster_C.CalcDistance
	 */
	struct UBPC_Holster_C_CalcDistance_Params
	{
	public:
		class AActor*                                              targetActor;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInRange;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HN8I[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Distance;                                                // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Holster.BPC_Holster_C.Check if Item from This Holster
	 */
	struct UBPC_Holster_C_Check_if_Item_from_This_Holster_Params
	{
	public:
		class UInventoryItem*                                      Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Result;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPC_Holster.BPC_Holster_C.IsAcceptItemActor
	 */
	struct UBPC_Holster_C_IsAcceptItemActor_Params
	{
	public:
		class AActor*                                              itemActor;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       onlyIfFree;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       accept;                                                  // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPC_Holster.BPC_Holster_C.IsSnapHolder
	 */
	struct UBPC_Holster_C_IsSnapHolder_Params
	{
	public:
		bool                                                       snapHolder;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPC_Holster.BPC_Holster_C.GetHolderID
	 */
	struct UBPC_Holster_C_GetHolderID_Params
	{
	public:
		struct FGameplayTag                                        holderID;                                                // 0x0000(0x0008)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Holster.BPC_Holster_C.AdditionalTransformBasedOnTag
	 */
	struct UBPC_Holster_C_AdditionalTransformBasedOnTag_Params
	{	};

	/**
	 * Function BPC_Holster.BPC_Holster_C.ReceiveTick
	 */
	struct UBPC_Holster_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Holster.BPC_Holster_C.MeshMarker
	 */
	struct UBPC_Holster_C_MeshMarker_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Q6FK[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Holster.BPC_Holster_C.CheckDist
	 */
	struct UBPC_Holster_C_CheckDist_Params
	{	};

	/**
	 * Function BPC_Holster.BPC_Holster_C.SpawnContent
	 */
	struct UBPC_Holster_C_SpawnContent_Params
	{	};

	/**
	 * Function BPC_Holster.BPC_Holster_C.RefreshHolder
	 */
	struct UBPC_Holster_C_RefreshHolder_Params
	{	};

	/**
	 * Function BPC_Holster.BPC_Holster_C.ReceiveEndPlay
	 */
	struct UBPC_Holster_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Holster.BPC_Holster_C.ReceiveBeginPlay
	 */
	struct UBPC_Holster_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPC_Holster.BPC_Holster_C.OnItemTaken
	 */
	struct UBPC_Holster_C_OnItemTaken_Params
	{
	public:
		class UInventoryItem*                                      InventoryItem;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_Holster.BPC_Holster_C.InstantAttach
	 */
	struct UBPC_Holster_C_InstantAttach_Params
	{	};

	/**
	 * Function BPC_Holster.BPC_Holster_C.SetContentVisibility
	 */
	struct UBPC_Holster_C_SetContentVisibility_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPC_Holster.BPC_Holster_C.SetHolderVisibility
	 */
	struct UBPC_Holster_C_SetHolderVisibility_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPC_Holster.BPC_Holster_C.AttachAndLerpHold
	 */
	struct UBPC_Holster_C_AttachAndLerpHold_Params
	{	};

	/**
	 * Function BPC_Holster.BPC_Holster_C.ExecuteUbergraph_BPC_Holster
	 */
	struct UBPC_Holster_C_ExecuteUbergraph_BPC_Holster_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
