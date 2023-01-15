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
	 * Function BP_Map_CurrentLevel.BP_Map_CurrentLevel_C.GetRT
	 */
	struct ABP_Map_CurrentLevel_C_GetRT_Params
	{
	public:
		class UTextureRenderTarget2D*                              RenderTarget;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Map_CurrentLevel.BP_Map_CurrentLevel_C.GetMaterialInterface
	 */
	struct ABP_Map_CurrentLevel_C_GetMaterialInterface_Params
	{
	public:
		bool                                                       Empty;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CHS9[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UMaterialInterface*                                  MaterialInterface;                                       // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Map_CurrentLevel.BP_Map_CurrentLevel_C.UpdateMap
	 */
	struct ABP_Map_CurrentLevel_C_UpdateMap_Params
	{	};

	/**
	 * Function BP_Map_CurrentLevel.BP_Map_CurrentLevel_C.UpdateLevelTag
	 */
	struct ABP_Map_CurrentLevel_C_UpdateLevelTag_Params
	{	};

	/**
	 * Function BP_Map_CurrentLevel.BP_Map_CurrentLevel_C.ReceiveTick
	 */
	struct ABP_Map_CurrentLevel_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Map_CurrentLevel.BP_Map_CurrentLevel_C.ExecuteUbergraph_BP_Map_CurrentLevel
	 */
	struct ABP_Map_CurrentLevel_C_ExecuteUbergraph_BP_Map_CurrentLevel_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
