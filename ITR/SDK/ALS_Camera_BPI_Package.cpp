/**
 * Name: Into_The_Radius_VR
 * Version: 2.5.1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ALS_Camera_BPI.ALS_Camera_BPI_C.BPI_Get_3P_TraceParams
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     TraceOrigin                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TraceRadius                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ETraceTypeQuery                                    TraceChannel                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UALS_Camera_BPI_C::BPI_Get_3P_TraceParams(struct FVector* TraceOrigin, float* TraceRadius, ETraceTypeQuery* TraceChannel)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ALS_Camera_BPI.ALS_Camera_BPI_C.BPI_Get_3P_TraceParams");
		
		UALS_Camera_BPI_C_BPI_Get_3P_TraceParams_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TraceOrigin != nullptr)
			*TraceOrigin = params.TraceOrigin;
		if (TraceRadius != nullptr)
			*TraceRadius = params.TraceRadius;
		if (TraceChannel != nullptr)
			*TraceChannel = params.TraceChannel;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ALS_Camera_BPI.ALS_Camera_BPI_C.BPI_Get_3P_PivotTarget
	 * 		Flags  -> ()
	 */
	struct FTransform UALS_Camera_BPI_C::BPI_Get_3P_PivotTarget()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ALS_Camera_BPI.ALS_Camera_BPI_C.BPI_Get_3P_PivotTarget");
		
		UALS_Camera_BPI_C_BPI_Get_3P_PivotTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ALS_Camera_BPI.ALS_Camera_BPI_C.BPI_Get_FP_CameraTarget
	 * 		Flags  -> ()
	 */
	struct FVector UALS_Camera_BPI_C::BPI_Get_FP_CameraTarget()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ALS_Camera_BPI.ALS_Camera_BPI_C.BPI_Get_FP_CameraTarget");
		
		UALS_Camera_BPI_C_BPI_Get_FP_CameraTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ALS_Camera_BPI.ALS_Camera_BPI_C.BPI_Get_CameraParameters
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TP_FOV                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              FP_FOV                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               RightShoulder                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UALS_Camera_BPI_C::BPI_Get_CameraParameters(float* TP_FOV, float* FP_FOV, bool* RightShoulder)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ALS_Camera_BPI.ALS_Camera_BPI_C.BPI_Get_CameraParameters");
		
		UALS_Camera_BPI_C_BPI_Get_CameraParameters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TP_FOV != nullptr)
			*TP_FOV = params.TP_FOV;
		if (FP_FOV != nullptr)
			*FP_FOV = params.FP_FOV;
		if (RightShoulder != nullptr)
			*RightShoulder = params.RightShoulder;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UALS_Camera_BPI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UALS_Camera_BPI_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass ALS_Camera_BPI.ALS_Camera_BPI_C");
		return ptr;
	}

}


