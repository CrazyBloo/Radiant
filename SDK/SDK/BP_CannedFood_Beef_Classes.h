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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_CannedFood_Beef.BP_CannedFood_Beef_C
	 * Size -> 0x0008 (FullSize[0x0630] - InheritedSize[0x0628])
	 */
	class ABP_CannedFood_Beef_C : public ABPA_CannedFood_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0628(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void SetFoodLvl();
		void ExecuteUbergraph_BP_CannedFood_Beef(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
