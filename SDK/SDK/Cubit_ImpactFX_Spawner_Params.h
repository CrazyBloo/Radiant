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
	 * Function Cubit_ImpactFX_Spawner.Cubit_ImpactFX_Spawner_C.ReceiveBeginPlay
	 */
	struct ACubit_ImpactFX_Spawner_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Cubit_ImpactFX_Spawner.Cubit_ImpactFX_Spawner_C.Get FX Type
	 */
	struct ACubit_ImpactFX_Spawner_C_Get_FX_Type_Params
	{	};

	/**
	 * Function Cubit_ImpactFX_Spawner.Cubit_ImpactFX_Spawner_C.ParticleCollisionSounds
	 */
	struct ACubit_ImpactFX_Spawner_C_ParticleCollisionSounds_Params
	{	};

	/**
	 * Function Cubit_ImpactFX_Spawner.Cubit_ImpactFX_Spawner_C.WetSplash
	 */
	struct ACubit_ImpactFX_Spawner_C_WetSplash_Params
	{	};

	/**
	 * Function Cubit_ImpactFX_Spawner.Cubit_ImpactFX_Spawner_C.DrySplash
	 */
	struct ACubit_ImpactFX_Spawner_C_DrySplash_Params
	{	};

	/**
	 * Function Cubit_ImpactFX_Spawner.Cubit_ImpactFX_Spawner_C.SizzleDry
	 */
	struct ACubit_ImpactFX_Spawner_C_SizzleDry_Params
	{	};

	/**
	 * Function Cubit_ImpactFX_Spawner.Cubit_ImpactFX_Spawner_C.SizzleWet
	 */
	struct ACubit_ImpactFX_Spawner_C_SizzleWet_Params
	{	};

	/**
	 * Function Cubit_ImpactFX_Spawner.Cubit_ImpactFX_Spawner_C.SpawnParticleDecals
	 */
	struct ACubit_ImpactFX_Spawner_C_SpawnParticleDecals_Params
	{	};

	/**
	 * Function Cubit_ImpactFX_Spawner.Cubit_ImpactFX_Spawner_C.Sizzle Liquid FX
	 */
	struct ACubit_ImpactFX_Spawner_C_Sizzle_Liquid_FX_Params
	{	};

	/**
	 * Function Cubit_ImpactFX_Spawner.Cubit_ImpactFX_Spawner_C.SpawnParticleCollisionFX
	 */
	struct ACubit_ImpactFX_Spawner_C_SpawnParticleCollisionFX_Params
	{	};

	/**
	 * Function Cubit_ImpactFX_Spawner.Cubit_ImpactFX_Spawner_C.Debris FX Spawn
	 */
	struct ACubit_ImpactFX_Spawner_C_Debris_FX_Spawn_Params
	{	};

	/**
	 * Function Cubit_ImpactFX_Spawner.Cubit_ImpactFX_Spawner_C.Sizzle Dry FX
	 */
	struct ACubit_ImpactFX_Spawner_C_Sizzle_Dry_FX_Params
	{	};

	/**
	 * Function Cubit_ImpactFX_Spawner.Cubit_ImpactFX_Spawner_C.FX Type Chosen
	 */
	struct ACubit_ImpactFX_Spawner_C_FX_Type_Chosen_Params
	{	};

	/**
	 * Function Cubit_ImpactFX_Spawner.Cubit_ImpactFX_Spawner_C.DebrisFXInitialise
	 */
	struct ACubit_ImpactFX_Spawner_C_DebrisFXInitialise_Params
	{	};

	/**
	 * Function Cubit_ImpactFX_Spawner.Cubit_ImpactFX_Spawner_C.Penetration Event
	 */
	struct ACubit_ImpactFX_Spawner_C_Penetration_Event_Params
	{	};

	/**
	 * Function Cubit_ImpactFX_Spawner.Cubit_ImpactFX_Spawner_C.InitiateFXTasks
	 */
	struct ACubit_ImpactFX_Spawner_C_InitiateFXTasks_Params
	{	};

	/**
	 * Function Cubit_ImpactFX_Spawner.Cubit_ImpactFX_Spawner_C.FirePropagation
	 */
	struct ACubit_ImpactFX_Spawner_C_FirePropagation_Params
	{	};

	/**
	 * Function Cubit_ImpactFX_Spawner.Cubit_ImpactFX_Spawner_C.BACKSPLATTER
	 */
	struct ACubit_ImpactFX_Spawner_C_BACKSPLATTER_Params
	{	};

	/**
	 * Function Cubit_ImpactFX_Spawner.Cubit_ImpactFX_Spawner_C.OnParticleCollide_Event
	 */
	struct ACubit_ImpactFX_Spawner_C_OnParticleCollide_Event_Params
	{
	public:
		class FName                                                EventName;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      EmitterTime;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ParticleTime;                                            // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Location;                                                // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Velocity;                                                // 0x001C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Direction;                                               // 0x0028(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Normal;                                                  // 0x0034(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                BoneName;                                                // 0x0040(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPhysicalMaterial*                                   PhysMat;                                                 // 0x0048(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Cubit_ImpactFX_Spawner.Cubit_ImpactFX_Spawner_C.DestroyFXSpawner
	 */
	struct ACubit_ImpactFX_Spawner_C_DestroyFXSpawner_Params
	{	};

	/**
	 * Function Cubit_ImpactFX_Spawner.Cubit_ImpactFX_Spawner_C.SpawnDecals
	 */
	struct ACubit_ImpactFX_Spawner_C_SpawnDecals_Params
	{	};

	/**
	 * Function Cubit_ImpactFX_Spawner.Cubit_ImpactFX_Spawner_C.SpawnSounds
	 */
	struct ACubit_ImpactFX_Spawner_C_SpawnSounds_Params
	{	};

	/**
	 * Function Cubit_ImpactFX_Spawner.Cubit_ImpactFX_Spawner_C.Ricochet_Event
	 */
	struct ACubit_ImpactFX_Spawner_C_Ricochet_Event_Params
	{	};

	/**
	 * Function Cubit_ImpactFX_Spawner.Cubit_ImpactFX_Spawner_C.Impact_Event
	 */
	struct ACubit_ImpactFX_Spawner_C_Impact_Event_Params
	{	};

	/**
	 * Function Cubit_ImpactFX_Spawner.Cubit_ImpactFX_Spawner_C.ExecuteUbergraph_Cubit_ImpactFX_Spawner
	 */
	struct ACubit_ImpactFX_Spawner_C_ExecuteUbergraph_Cubit_ImpactFX_Spawner_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
