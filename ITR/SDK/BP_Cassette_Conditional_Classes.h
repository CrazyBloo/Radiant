﻿#pragma once

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
	 * BlueprintGeneratedClass BP_Cassette_Conditional.BP_Cassette_Conditional_C
	 * Size -> 0x0008 (FullSize[0x0600] - InheritedSize[0x05F8])
	 */
	class ABP_Cassette_Conditional_C : public ABPA_BaseItem_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x05F8(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void OnReconfigure();
		void ExecuteUbergraph_BP_Cassette_Conditional(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
