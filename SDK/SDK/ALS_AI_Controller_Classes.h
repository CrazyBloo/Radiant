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
	 * BlueprintGeneratedClass ALS_AI_Controller.ALS_AI_Controller_C
	 * Size -> 0x0008 (FullSize[0x03A0] - InheritedSize[0x0398])
	 */
	class AALS_AI_Controller_C : public AAIController
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0398(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void ReceivePossess(class APawn* PossessedPawn);
		void ExecuteUbergraph_ALS_AI_Controller(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
