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
	 * Function BPA_Scope.BPA_Scope_C.UpdateCamera
	 */
	struct ABPA_Scope_C_UpdateCamera_Params
	{	};

	/**
	 * Function BPA_Scope.BPA_Scope_C.ReceiveTick
	 */
	struct ABPA_Scope_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Scope.BPA_Scope_C.OnGrip
	 */
	struct ABPA_Scope_C_OnGrip_Params
	{
	public:
		class UGripMotionControllerComponent*                      GrippingController;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OMR3[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BPA_Scope.BPA_Scope_C.OnStart
	 */
	struct ABPA_Scope_C_OnStart_Params
	{	};

	/**
	 * Function BPA_Scope.BPA_Scope_C.TogglePhysCollisions
	 */
	struct ABPA_Scope_C_TogglePhysCollisions_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_Scope.BPA_Scope_C.OnProxyDisabled
	 */
	struct ABPA_Scope_C_OnProxyDisabled_Params
	{	};

	/**
	 * Function BPA_Scope.BPA_Scope_C.OnProxyEnabled
	 */
	struct ABPA_Scope_C_OnProxyEnabled_Params
	{	};

	/**
	 * Function BPA_Scope.BPA_Scope_C.ExecuteUbergraph_BPA_Scope
	 */
	struct ABPA_Scope_C_ExecuteUbergraph_BPA_Scope_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FRBX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
