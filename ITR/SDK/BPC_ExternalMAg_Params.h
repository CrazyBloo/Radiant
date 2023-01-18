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
	 * Function BPC_ExternalMAg.BPC_ExternalMAg_C.IsHolded
	 */
	struct UBPC_ExternalMAg_C_IsHolded_Params
	{
	public:
		bool                                                       State;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FKHC[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_ExternalMAg.BPC_ExternalMAg_C.GetNextAmmoInMag
	 */
	struct UBPC_ExternalMAg_C_GetNextAmmoInMag_Params
	{
	public:
		bool                                                       HasAmmo;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZMWG[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayTag                                        AmmoTag;                                                 // 0x0004(0x0008)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_C3Q4[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_ExternalMAg.BPC_ExternalMAg_C.GetAmmoInMag
	 */
	struct UBPC_ExternalMAg_C_GetAmmoInMag_Params
	{
	public:
		int32_t                                                    NewParam;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SWAD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPC_ExternalMAg.BPC_ExternalMAg_C.Get Mag in Weapon
	 */
	struct UBPC_ExternalMAg_C_GetMaginWeapon_Params
	{
	public:
		bool                                                       Valid;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_73KA[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              ActorReference;                                          // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_ExternalMAg.BPC_ExternalMAg_C.DoAttachMag
	 */
	struct UBPC_ExternalMAg_C_DoAttachMag_Params
	{
	public:
		class AActor*                                              Actr;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_ExternalMAg.BPC_ExternalMAg_C.AttachMag
	 */
	struct UBPC_ExternalMAg_C_AttachMag_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_ExternalMAg.BPC_ExternalMAg_C.EjectMag
	 */
	struct UBPC_ExternalMAg_C_EjectMag_Params
	{	};

	/**
	 * Function BPC_ExternalMAg.BPC_ExternalMAg_C.AnimMagInsert
	 */
	struct UBPC_ExternalMAg_C_AnimMagInsert_Params
	{	};

	/**
	 * Function BPC_ExternalMAg.BPC_ExternalMAg_C.DropEjectedMag
	 */
	struct UBPC_ExternalMAg_C_DropEjectedMag_Params
	{	};

	/**
	 * Function BPC_ExternalMAg.BPC_ExternalMAg_C.DropMag
	 */
	struct UBPC_ExternalMAg_C_DropMag_Params
	{	};

	/**
	 * Function BPC_ExternalMAg.BPC_ExternalMAg_C.MagEjectDelayTimer
	 */
	struct UBPC_ExternalMAg_C_MagEjectDelayTimer_Params
	{	};

	/**
	 * Function BPC_ExternalMAg.BPC_ExternalMAg_C.blockMainGrip
	 */
	struct UBPC_ExternalMAg_C_blockMainGrip_Params
	{
	public:
		bool                                                       bLock;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPC_ExternalMAg.BPC_ExternalMAg_C.Overlap
	 */
	struct UBPC_ExternalMAg_C_Overlap_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_45PU[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BPC_ExternalMAg.BPC_ExternalMAg_C.EndOverlap
	 */
	struct UBPC_ExternalMAg_C_EndOverlap_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_ExternalMAg.BPC_ExternalMAg_C.InitComponent
	 */
	struct UBPC_ExternalMAg_C_InitComponent_Params
	{	};

	/**
	 * Function BPC_ExternalMAg.BPC_ExternalMAg_C.DecreaseMagDurability
	 */
	struct UBPC_ExternalMAg_C_DecreaseMagDurability_Params
	{	};

	/**
	 * Function BPC_ExternalMAg.BPC_ExternalMAg_C.RunMagEjectDelay
	 */
	struct UBPC_ExternalMAg_C_RunMagEjectDelay_Params
	{	};

	/**
	 * Function BPC_ExternalMAg.BPC_ExternalMAg_C.MagQuickReleaseTest
	 */
	struct UBPC_ExternalMAg_C_MagQuickReleaseTest_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPC_ExternalMAg.BPC_ExternalMAg_C.QuickDetach
	 */
	struct UBPC_ExternalMAg_C_QuickDetach_Params
	{	};

	/**
	 * Function BPC_ExternalMAg.BPC_ExternalMAg_C.MoveMag
	 */
	struct UBPC_ExternalMAg_C_MoveMag_Params
	{	};

	/**
	 * Function BPC_ExternalMAg.BPC_ExternalMAg_C.ExecuteUbergraph_BPC_ExternalMAg
	 */
	struct UBPC_ExternalMAg_C_ExecuteUbergraph_BPC_ExternalMAg_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GKUL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
