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
	 * Function BP_WeatherMonitor.BP_WeatherMonitor_C.OnGrip
	 */
	struct ABP_WeatherMonitor_C_OnGrip_Params
	{
	public:
		class UGripMotionControllerComponent*                      GrippingController;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DNYM[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_WeatherMonitor.BP_WeatherMonitor_C.OnReconfigure
	 */
	struct ABP_WeatherMonitor_C_OnReconfigure_Params
	{	};

	/**
	 * Function BP_WeatherMonitor.BP_WeatherMonitor_C.ChangeState
	 */
	struct ABP_WeatherMonitor_C_ChangeState_Params
	{	};

	/**
	 * Function BP_WeatherMonitor.BP_WeatherMonitor_C.ExecuteUbergraph_BP_WeatherMonitor
	 */
	struct ABP_WeatherMonitor_C_ExecuteUbergraph_BP_WeatherMonitor_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
