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
	 * Function BPA_GrenadeLauncher.BPA_GrenadeLauncher_C.GetWeaponInfo
	 */
	struct ABPA_GrenadeLauncher_C_GetWeaponInfo_Params
	{
	public:
		struct FWeaponInfo                                         ReturnValue;                                             // 0x0000(0x0108)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BPA_GrenadeLauncher.BPA_GrenadeLauncher_C.UserConstructionScript
	 */
	struct ABPA_GrenadeLauncher_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BPA_GrenadeLauncher.BPA_GrenadeLauncher_C.OnReconfigure
	 */
	struct ABPA_GrenadeLauncher_C_OnReconfigure_Params
	{	};

	/**
	 * Function BPA_GrenadeLauncher.BPA_GrenadeLauncher_C.Fire
	 */
	struct ABPA_GrenadeLauncher_C_Fire_Params
	{	};

	/**
	 * Function BPA_GrenadeLauncher.BPA_GrenadeLauncher_C.DestroyComp
	 */
	struct ABPA_GrenadeLauncher_C_DestroyComp_Params
	{
	public:
		class USceneComponent*                                     SceneComponent;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_GrenadeLauncher.BPA_GrenadeLauncher_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABPA_GrenadeLauncher_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OPX6[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BPA_GrenadeLauncher.BPA_GrenadeLauncher_C.OnUsed
	 */
	struct ABPA_GrenadeLauncher_C_OnUsed_Params
	{	};

	/**
	 * Function BPA_GrenadeLauncher.BPA_GrenadeLauncher_C.ExecuteUbergraph_BPA_GrenadeLauncher
	 */
	struct ABPA_GrenadeLauncher_C_ExecuteUbergraph_BPA_GrenadeLauncher_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
