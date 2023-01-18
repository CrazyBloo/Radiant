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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass ALS_Camera_BPI.ALS_Camera_BPI_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UALS_Camera_BPI_C : public UInterface
	{
	public:
		void BPI_Get_3P_TraceParams(struct FVector* TraceOrigin, float* TraceRadius, ETraceTypeQuery* TraceChannel);
		struct FTransform BPI_Get_3P_PivotTarget();
		struct FVector BPI_Get_FP_CameraTarget();
		void BPI_Get_CameraParameters(float* TP_FOV, float* FP_FOV, bool* RightShoulder);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
