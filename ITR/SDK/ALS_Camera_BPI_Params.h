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
	 * Function ALS_Camera_BPI.ALS_Camera_BPI_C.BPI_Get_3P_TraceParams
	 */
	struct UALS_Camera_BPI_C_BPI_Get_3P_TraceParams_Params
	{
	public:
		struct FVector                                             TraceOrigin;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TraceRadius;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ETraceTypeQuery                                            TraceChannel;                                            // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALS_Camera_BPI.ALS_Camera_BPI_C.BPI_Get_3P_PivotTarget
	 */
	struct UALS_Camera_BPI_C_BPI_Get_3P_PivotTarget_Params
	{
	public:
		struct FTransform                                          ReturnValue;                                             // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ALS_Camera_BPI.ALS_Camera_BPI_C.BPI_Get_FP_CameraTarget
	 */
	struct UALS_Camera_BPI_C_BPI_Get_FP_CameraTarget_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ALS_Camera_BPI.ALS_Camera_BPI_C.BPI_Get_CameraParameters
	 */
	struct UALS_Camera_BPI_C_BPI_Get_CameraParameters_Params
	{
	public:
		float                                                      TP_FOV;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      FP_FOV;                                                  // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       RightShoulder;                                           // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
