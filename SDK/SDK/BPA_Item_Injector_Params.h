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
	 * Function BPA_Item_Injector.BPA_Item_Injector_C.GetNearestSocket
	 */
	struct ABPA_Item_Injector_C_GetNearestSocket_Params
	{
	public:
		class UObject*                                             Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                Output;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Item_Injector.BPA_Item_Injector_C.MakeReady
	 */
	struct ABPA_Item_Injector_C_MakeReady_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_Item_Injector.BPA_Item_Injector_C.CheckForINJECT
	 */
	struct ABPA_Item_Injector_C_CheckForINJECT_Params
	{	};

	/**
	 * Function BPA_Item_Injector.BPA_Item_Injector_C.OnUsed
	 */
	struct ABPA_Item_Injector_C_OnUsed_Params
	{	};

	/**
	 * Function BPA_Item_Injector.BPA_Item_Injector_C.OnInject
	 */
	struct ABPA_Item_Injector_C_OnInject_Params
	{	};

	/**
	 * Function BPA_Item_Injector.BPA_Item_Injector_C.OnEffectFinish
	 */
	struct ABPA_Item_Injector_C_OnEffectFinish_Params
	{	};

	/**
	 * Function BPA_Item_Injector.BPA_Item_Injector_C.OnReconfigure
	 */
	struct ABPA_Item_Injector_C_OnReconfigure_Params
	{	};

	/**
	 * Function BPA_Item_Injector.BPA_Item_Injector_C.OnGripRelease
	 */
	struct ABPA_Item_Injector_C_OnGripRelease_Params
	{
	public:
		class UGripMotionControllerComponent*                      ReleasingController;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_T3FR[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
		bool                                                       bWasSocketed;                                            // 0x01F0(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_Item_Injector.BPA_Item_Injector_C.ExecuteUbergraph_BPA_Item_Injector
	 */
	struct ABPA_Item_Injector_C_ExecuteUbergraph_BPA_Item_Injector_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_U5S5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
