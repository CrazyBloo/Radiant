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
	 * Function BPC_ItemInfosController.BPC_ItemInfosController_C.GetInfoObject
	 */
	struct UBPC_ItemInfosController_C_GetInfoObject_Params
	{
	public:
		bool                                                       Left;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XBJ0[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABP_ItemInfo_C*                                      Actor;                                                   // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_ItemInfosController.BPC_ItemInfosController_C.GetInfoFirstPivot
	 */
	struct UBPC_ItemInfosController_C_GetInfoFirstPivot_Params
	{
	public:
		bool                                                       Left;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UJI7[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USceneComponent*                                     Pivot;                                                   // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_ItemInfosController.BPC_ItemInfosController_C.IsInfoShown
	 */
	struct UBPC_ItemInfosController_C_IsInfoShown_Params
	{
	public:
		bool                                                       Left;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       shown;                                                   // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPC_ItemInfosController.BPC_ItemInfosController_C.SetupInfoPosition
	 */
	struct UBPC_ItemInfosController_C_SetupInfoPosition_Params
	{
	public:
		bool                                                       bLeft;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPC_ItemInfosController.BPC_ItemInfosController_C.UpdateInfos
	 */
	struct UBPC_ItemInfosController_C_UpdateInfos_Params
	{	};

	/**
	 * Function BPC_ItemInfosController.BPC_ItemInfosController_C.ShowOneInfo
	 */
	struct UBPC_ItemInfosController_C_ShowOneInfo_Params
	{
	public:
		bool                                                       Left;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       toggle;                                                  // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       unlock;                                                  // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PKJQ[0x5];                                   // 0x0003(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_ItemInfosController.BPC_ItemInfosController_C.ShowAllInfos
	 */
	struct UBPC_ItemInfosController_C_ShowAllInfos_Params
	{
	public:
		bool                                                       toggle;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       unlock;                                                  // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Q653[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_ItemInfosController.BPC_ItemInfosController_C.GetInfoActor
	 */
	struct UBPC_ItemInfosController_C_GetInfoActor_Params
	{
	public:
		bool                                                       Left;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_G5O1[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              infoActor;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_ItemInfosController.BPC_ItemInfosController_C.SpawnInfos
	 */
	struct UBPC_ItemInfosController_C_SpawnInfos_Params
	{	};

	/**
	 * Function BPC_ItemInfosController.BPC_ItemInfosController_C.ToggleInfos
	 */
	struct UBPC_ItemInfosController_C_ToggleInfos_Params
	{	};

	/**
	 * Function BPC_ItemInfosController.BPC_ItemInfosController_C.ShowInfo
	 */
	struct UBPC_ItemInfosController_C_ShowInfo_Params
	{
	public:
		bool                                                       Left;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       toggle;                                                  // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPC_ItemInfosController.BPC_ItemInfosController_C.Nullify
	 */
	struct UBPC_ItemInfosController_C_Nullify_Params
	{	};

	/**
	 * Function BPC_ItemInfosController.BPC_ItemInfosController_C.ReceiveTick
	 */
	struct UBPC_ItemInfosController_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_ItemInfosController.BPC_ItemInfosController_C.ReceiveBeginPlay
	 */
	struct UBPC_ItemInfosController_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPC_ItemInfosController.BPC_ItemInfosController_C.Initialize
	 */
	struct UBPC_ItemInfosController_C_Initialize_Params
	{
	public:
		class USkeletalMeshComponent*                              Body;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_ItemInfosController.BPC_ItemInfosController_C.ExecuteUbergraph_BPC_ItemInfosController
	 */
	struct UBPC_ItemInfosController_C_ExecuteUbergraph_BPC_ItemInfosController_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
