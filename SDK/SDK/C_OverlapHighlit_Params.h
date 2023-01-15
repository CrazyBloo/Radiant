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
	 * Function C_OverlapHighlit.C_OverlapHighlit_C.ReceiveBeginPlay
	 */
	struct UC_OverlapHighlit_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function C_OverlapHighlit.C_OverlapHighlit_C.LightOn
	 */
	struct UC_OverlapHighlit_C_LightOn_Params
	{
	public:
		class UPrimitiveComponent*                                 PrimToHighlit;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function C_OverlapHighlit.C_OverlapHighlit_C.LightOff
	 */
	struct UC_OverlapHighlit_C_LightOff_Params
	{
	public:
		class UPrimitiveComponent*                                 PrimToHighlight;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function C_OverlapHighlit.C_OverlapHighlit_C.ExecuteUbergraph_C_OverlapHighlit
	 */
	struct UC_OverlapHighlit_C_ExecuteUbergraph_C_OverlapHighlit_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
