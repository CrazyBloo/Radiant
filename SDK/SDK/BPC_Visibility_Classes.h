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
	 * BlueprintGeneratedClass BPC_Visibility.BPC_Visibility_C
	 * Size -> 0x0008 (FullSize[0x01A8] - InheritedSize[0x01A0])
	 */
	class UBPC_Visibility_C : public UPRPlayerVisibilityComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01A0(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void OnGameStarted();
		void ExecuteUbergraph_BPC_Visibility(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
