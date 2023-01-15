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
	 * Function BPA_Holder.BPA_Holder_C.IsAcceptItemActor
	 */
	struct ABPA_Holder_C_IsAcceptItemActor_Params
	{
	public:
		class AActor*                                              itemActor;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       onlyIfFree;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       accept;                                                  // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RRBK[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPA_Holder.BPA_Holder_C.IsSnapHolder
	 */
	struct ABPA_Holder_C_IsSnapHolder_Params
	{
	public:
		bool                                                       snapHolder;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_Holder.BPA_Holder_C.GetHolderID
	 */
	struct ABPA_Holder_C_GetHolderID_Params
	{
	public:
		struct FGameplayTag                                        holderID;                                                // 0x0000(0x0008)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Holder.BPA_Holder_C.FixItemsPositions
	 */
	struct ABPA_Holder_C_FixItemsPositions_Params
	{	};

	/**
	 * Function BPA_Holder.BPA_Holder_C.IsActorTagMatch
	 */
	struct ABPA_Holder_C_IsActorTagMatch_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Result;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_Holder.BPA_Holder_C.IsOverlap
	 */
	struct ABPA_Holder_C_IsOverlap_Params
	{
	public:
		class ABPA_Holder_C*                                       Holder;                                                  // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              itemActor;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Result;                                                  // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_M9CT[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPA_Holder.BPA_Holder_C.HideHeldItems
	 */
	struct ABPA_Holder_C_HideHeldItems_Params
	{
	public:
		bool                                                       Hidden;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_Holder.BPA_Holder_C.DoAttach
	 */
	struct ABPA_Holder_C_DoAttach_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Simulate;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       NoItemTake;                                              // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BEGV[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPA_Holder.BPA_Holder_C.ReinitPrimitives
	 */
	struct ABPA_Holder_C_ReinitPrimitives_Params
	{	};

	/**
	 * Function BPA_Holder.BPA_Holder_C.IsHoldObject
	 */
	struct ABPA_Holder_C_IsHoldObject_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IgnodeGripped;                                           // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6V0X[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPA_Holder.BPA_Holder_C.GetHeldCount
	 */
	struct ABPA_Holder_C_GetHeldCount_Params
	{
	public:
		bool                                                       NotEmpty;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MSTO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Count;                                                   // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Holder.BPA_Holder_C.GetHeldObjects
	 */
	struct ABPA_Holder_C_GetHeldObjects_Params
	{
	public:
		bool                                                       IgnodeGripped;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XNWO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class AActor*>                                      HeldObjects;                                             // 0x0008(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BPA_Holder.BPA_Holder_C.GetTotalWeight
	 */
	struct ABPA_Holder_C_GetTotalWeight_Params
	{
	public:
		float                                                      TotalWeight;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Holder.BPA_Holder_C.TryRemoveFromInventory
	 */
	struct ABPA_Holder_C_TryRemoveFromInventory_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGameplayTagContainer                               AllowedTag;                                              // 0x0008(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPA_Holder.BPA_Holder_C.TryAttachToInventory
	 */
	struct ABPA_Holder_C_TryAttachToInventory_Params
	{
	public:
		class AActor*                                              ActorDropped;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Attached;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NI67[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPA_Holder.BPA_Holder_C.OnSpawnedFromInventory
	 */
	struct ABPA_Holder_C_OnSpawnedFromInventory_Params
	{	};

	/**
	 * Function BPA_Holder.BPA_Holder_C.OnDrop
	 */
	struct ABPA_Holder_C_OnDrop_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Holder.BPA_Holder_C.SpawnContent
	 */
	struct ABPA_Holder_C_SpawnContent_Params
	{	};

	/**
	 * Function BPA_Holder.BPA_Holder_C.RefreshHolder
	 */
	struct ABPA_Holder_C_RefreshHolder_Params
	{	};

	/**
	 * Function BPA_Holder.BPA_Holder_C.ReceiveEndPlay
	 */
	struct ABPA_Holder_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Holder.BPA_Holder_C.OnGameStarted
	 */
	struct ABPA_Holder_C_OnGameStarted_Params
	{	};

	/**
	 * Function BPA_Holder.BPA_Holder_C.OnTransitionEnd
	 */
	struct ABPA_Holder_C_OnTransitionEnd_Params
	{	};

	/**
	 * Function BPA_Holder.BPA_Holder_C.ExecuteUbergraph_BPA_Holder
	 */
	struct ABPA_Holder_C_ExecuteUbergraph_BPA_Holder_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
