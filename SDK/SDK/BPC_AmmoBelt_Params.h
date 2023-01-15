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
	 * Function BPC_AmmoBelt.BPC_AmmoBelt_C.UpdateContent
	 */
	struct UBPC_AmmoBelt_C_UpdateContent_Params
	{	};

	/**
	 * Function BPC_AmmoBelt.BPC_AmmoBelt_C.CollectPoints
	 */
	struct UBPC_AmmoBelt_C_CollectPoints_Params
	{	};

	/**
	 * Function BPC_AmmoBelt.BPC_AmmoBelt_C.UpdateBullets
	 */
	struct UBPC_AmmoBelt_C_UpdateBullets_Params
	{	};

	/**
	 * Function BPC_AmmoBelt.BPC_AmmoBelt_C.ReceiveBeginPlay
	 */
	struct UBPC_AmmoBelt_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPC_AmmoBelt.BPC_AmmoBelt_C.Initialize
	 */
	struct UBPC_AmmoBelt_C_Initialize_Params
	{
	public:
		class FString                                              itemInstanceID;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_AmmoBelt.BPC_AmmoBelt_C.OnComponentBeginOverlap_Event_1
	 */
	struct UBPC_AmmoBelt_C_OnComponentBeginOverlap_Event_1_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_T970[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BPC_AmmoBelt.BPC_AmmoBelt_C.OnGrip
	 */
	struct UBPC_AmmoBelt_C_OnGrip_Params
	{
	public:
		class UGripMotionControllerComponent*                      GrippingController;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZQQO[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BPC_AmmoBelt.BPC_AmmoBelt_C.ExecuteUbergraph_BPC_AmmoBelt
	 */
	struct UBPC_AmmoBelt_C_ExecuteUbergraph_BPC_AmmoBelt_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
