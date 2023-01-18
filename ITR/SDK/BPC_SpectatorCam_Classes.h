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
	 * BlueprintGeneratedClass BPC_SpectatorCam.BPC_SpectatorCam_C
	 * Size -> 0x0018 (FullSize[0x00F8] - InheritedSize[0x00E0])
	 */
	class UBPC_SpectatorCam_C : public UActorComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00E0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCameraComponent*                                    PlayerCameraRef;                                         // 0x00E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_SpectatorCapture_C*                              SpectatorActorRef;                                       // 0x00F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Init();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BPC_SpectatorCam(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
