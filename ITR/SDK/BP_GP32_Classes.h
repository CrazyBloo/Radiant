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
	 * BlueprintGeneratedClass BP_GP32.BP_GP32_C
	 * Size -> 0x0010 (FullSize[0x0690] - InheritedSize[0x0680])
	 */
	class ABP_GP32_C : public ABPA_GrenadeLauncher_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0680(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UVRDialComponent*                                    VRDial;                                                  // 0x0688(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void Fire();
		void ExecuteUbergraph_BP_GP32(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
