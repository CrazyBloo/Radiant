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
	 * Function BPA_BaseItem_Throwable.BPA_BaseItem_Throwable_C.GetThrowVelocity
	 */
	struct ABPA_BaseItem_Throwable_C_GetThrowVelocity_Params
	{
	public:
		float                                                      Multiplier;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             CurrentAvrgLinVel;                                       // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             CurentAvrgAnglVel;                                       // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_BaseItem_Throwable.BPA_BaseItem_Throwable_C.CacheVelocity
	 */
	struct ABPA_BaseItem_Throwable_C_CacheVelocity_Params
	{	};

	/**
	 * Function BPA_BaseItem_Throwable.BPA_BaseItem_Throwable_C.StartCacheVelocity
	 */
	struct ABPA_BaseItem_Throwable_C_StartCacheVelocity_Params
	{	};

	/**
	 * Function BPA_BaseItem_Throwable.BPA_BaseItem_Throwable_C.CacheTick
	 */
	struct ABPA_BaseItem_Throwable_C_CacheTick_Params
	{	};

	/**
	 * Function BPA_BaseItem_Throwable.BPA_BaseItem_Throwable_C.ThrowItem
	 */
	struct ABPA_BaseItem_Throwable_C_ThrowItem_Params
	{	};

	/**
	 * Function BPA_BaseItem_Throwable.BPA_BaseItem_Throwable_C.OnGrip
	 */
	struct ABPA_BaseItem_Throwable_C_OnGrip_Params
	{
	public:
		class UGripMotionControllerComponent*                      GrippingController;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RQL7[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BPA_BaseItem_Throwable.BPA_BaseItem_Throwable_C.Debug_TraceTick
	 */
	struct ABPA_BaseItem_Throwable_C_Debug_TraceTick_Params
	{	};

	/**
	 * Function BPA_BaseItem_Throwable.BPA_BaseItem_Throwable_C.StopCacheVeloclity
	 */
	struct ABPA_BaseItem_Throwable_C_StopCacheVeloclity_Params
	{	};

	/**
	 * Function BPA_BaseItem_Throwable.BPA_BaseItem_Throwable_C.ExecuteUbergraph_BPA_BaseItem_Throwable
	 */
	struct ABPA_BaseItem_Throwable_C_ExecuteUbergraph_BPA_BaseItem_Throwable_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
