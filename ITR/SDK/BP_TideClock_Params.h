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
	 * Function BP_TideClock.BP_TideClock_C.GetPhysicsRootComponent
	 */
	struct ABP_TideClock_C_GetPhysicsRootComponent_Params
	{
	public:
		class UPrimitiveComponent*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TideClock.BP_TideClock_C.ReceiveTick
	 */
	struct ABP_TideClock_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TideClock.BP_TideClock_C.ReceiveBeginPlay
	 */
	struct ABP_TideClock_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_TideClock.BP_TideClock_C.OnSleep
	 */
	struct ABP_TideClock_C_OnSleep_Params
	{
	public:
		float                                                      Seconds;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       isBlackout;                                              // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_TideClock.BP_TideClock_C.TurnOffSignal
	 */
	struct ABP_TideClock_C_TurnOffSignal_Params
	{	};

	/**
	 * Function BP_TideClock.BP_TideClock_C.ExecuteUbergraph_BP_TideClock
	 */
	struct ABP_TideClock_C_ExecuteUbergraph_BP_TideClock_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
