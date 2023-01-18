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
	 * BlueprintGeneratedClass BP_ProfilingCameraPlacement.BP_ProfilingCameraPlacement_C
	 * Size -> 0x0009 (FullSize[0x0819] - InheritedSize[0x0810])
	 */
	class ABP_ProfilingCameraPlacement_C : public ARadiusProfilingCamera
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0810(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       bPcCamera;                                               // 0x0818(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_ProfilingCameraPlacement(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
