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
	 * Function BPA_Ammo.BPA_Ammo_C.GetPhysicsRootComponent
	 */
	struct ABPA_Ammo_C_GetPhysicsRootComponent_Params
	{
	public:
		class UPrimitiveComponent*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_Ammo.BPA_Ammo_C.GetAmmoInfo
	 */
	struct ABPA_Ammo_C_GetAmmoInfo_Params
	{
	public:
		struct FAmmoInfo                                           ReturnValue;                                             // 0x0000(0x0058)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BPA_Ammo.BPA_Ammo_C.UserConstructionScript
	 */
	struct ABPA_Ammo_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BPA_Ammo.BPA_Ammo_C.AmmoShot
	 */
	struct ABPA_Ammo_C_AmmoShot_Params
	{	};

	/**
	 * Function BPA_Ammo.BPA_Ammo_C.PlayDropSounds
	 */
	struct ABPA_Ammo_C_PlayDropSounds_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		struct FVector                                             HitImpulse;                                              // 0x0088(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsHeld;                                                  // 0x0094(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_Ammo.BPA_Ammo_C.OnReconfigure
	 */
	struct ABPA_Ammo_C_OnReconfigure_Params
	{	};

	/**
	 * Function BPA_Ammo.BPA_Ammo_C.UpdateMesh
	 */
	struct ABPA_Ammo_C_UpdateMesh_Params
	{	};

	/**
	 * Function BPA_Ammo.BPA_Ammo_C.HealthEndedOverride
	 */
	struct ABPA_Ammo_C_HealthEndedOverride_Params
	{	};

	/**
	 * Function BPA_Ammo.BPA_Ammo_C.ExecuteUbergraph_BPA_Ammo
	 */
	struct ABPA_Ammo_C_ExecuteUbergraph_BPA_Ammo_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
