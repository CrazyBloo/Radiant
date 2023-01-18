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
	 * Function BPI_Weapon.BPI_Weapon_C.GetSmoothingScript
	 */
	struct UBPI_Weapon_C_GetSmoothingScript_Params
	{
	public:
		class UGS_Smoothing_C*                                     SmoothingScript;                                         // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_Weapon.BPI_Weapon_C.UpdateSmoothingAttachment
	 */
	struct UBPI_Weapon_C_UpdateSmoothingAttachment_Params
	{
	public:
		bool                                                       bUseLocalAlpha;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SG8F[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      NewMaxSmoothAlpha;                                       // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsAdd;                                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_Weapon.BPI_Weapon_C.SmoothingToggle
	 */
	struct UBPI_Weapon_C_SmoothingToggle_Params
	{	};

	/**
	 * Function BPI_Weapon.BPI_Weapon_C.SetAdditionalSmoothing
	 */
	struct UBPI_Weapon_C_SetAdditionalSmoothing_Params
	{
	public:
		float                                                      SmoothAlpha;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_Weapon.BPI_Weapon_C.GetCleaningBarrelLength
	 */
	struct UBPI_Weapon_C_GetCleaningBarrelLength_Params
	{
	public:
		float                                                      Length;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_Weapon.BPI_Weapon_C.GetShootingPointTransform
	 */
	struct UBPI_Weapon_C_GetShootingPointTransform_Params
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 Parent;                                                  // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_Weapon.BPI_Weapon_C.VirtualStockToggle
	 */
	struct UBPI_Weapon_C_VirtualStockToggle_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_Weapon.BPI_Weapon_C.AttachmentDetached
	 */
	struct UBPI_Weapon_C_AttachmentDetached_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_Weapon.BPI_Weapon_C.AttachmentAttached
	 */
	struct UBPI_Weapon_C_AttachmentAttached_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_Weapon.BPI_Weapon_C.UpdateTargetLoc
	 */
	struct UBPI_Weapon_C_UpdateTargetLoc_Params
	{
	public:
		struct FVector                                             TargetLoc;                                               // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_Weapon.BPI_Weapon_C.PlayerWeaponFired
	 */
	struct UBPI_Weapon_C_PlayerWeaponFired_Params
	{	};

	/**
	 * Function BPI_Weapon.BPI_Weapon_C.ReloadFinished
	 */
	struct UBPI_Weapon_C_ReloadFinished_Params
	{	};

	/**
	 * Function BPI_Weapon.BPI_Weapon_C.OutOfAmmo
	 */
	struct UBPI_Weapon_C_OutOfAmmo_Params
	{	};

	/**
	 * Function BPI_Weapon.BPI_Weapon_C.StopFire
	 */
	struct UBPI_Weapon_C_StopFire_Params
	{	};

	/**
	 * Function BPI_Weapon.BPI_Weapon_C.FireGun
	 */
	struct UBPI_Weapon_C_FireGun_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Diviation;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       BurstFire;                                               // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_T259[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             TargetLoc;                                               // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      FireRateMult;                                            // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    BurstModeCount;                                          // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
