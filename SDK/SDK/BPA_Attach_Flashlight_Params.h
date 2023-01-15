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
	 * Function BPA_Attach_Flashlight.BPA_Attach_Flashlight_C.GetLightItem
	 */
	struct ABPA_Attach_Flashlight_C_GetLightItem_Params
	{
	public:
		bool                                                       IsOn;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ICKQ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABPA_BaseItem_C*                                     Item;                                                    // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Attach_Flashlight.BPA_Attach_Flashlight_C.IsOn
	 */
	struct ABPA_Attach_Flashlight_C_IsOn_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WZQG[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPA_Attach_Flashlight.BPA_Attach_Flashlight_C.LightDetection
	 */
	struct ABPA_Attach_Flashlight_C_LightDetection_Params
	{	};

	/**
	 * Function BPA_Attach_Flashlight.BPA_Attach_Flashlight_C.Off
	 */
	struct ABPA_Attach_Flashlight_C_Off_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_Attach_Flashlight.BPA_Attach_Flashlight_C.ReceiveTick
	 */
	struct ABPA_Attach_Flashlight_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Attach_Flashlight.BPA_Attach_Flashlight_C.OnReconfigure
	 */
	struct ABPA_Attach_Flashlight_C_OnReconfigure_Params
	{	};

	/**
	 * Function BPA_Attach_Flashlight.BPA_Attach_Flashlight_C.OnUsed
	 */
	struct ABPA_Attach_Flashlight_C_OnUsed_Params
	{	};

	/**
	 * Function BPA_Attach_Flashlight.BPA_Attach_Flashlight_C.Hide
	 */
	struct ABPA_Attach_Flashlight_C_Hide_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_Attach_Flashlight.BPA_Attach_Flashlight_C.OnGripRelease
	 */
	struct ABPA_Attach_Flashlight_C_OnGripRelease_Params
	{
	public:
		class UGripMotionControllerComponent*                      ReleasingController;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MR7I[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
		bool                                                       bWasSocketed;                                            // 0x01F0(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_Attach_Flashlight.BPA_Attach_Flashlight_C.ExecuteUbergraph_BPA_Attach_Flashlight
	 */
	struct ABPA_Attach_Flashlight_C_ExecuteUbergraph_BPA_Attach_Flashlight_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
