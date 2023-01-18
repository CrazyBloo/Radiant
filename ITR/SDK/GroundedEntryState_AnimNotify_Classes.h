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
	 * BlueprintGeneratedClass GroundedEntryState_AnimNotify.GroundedEntryState_AnimNotify_C
	 * Size -> 0x0001 (FullSize[0x0039] - InheritedSize[0x0038])
	 */
	class UGroundedEntryState_AnimNotify_C : public UAnimNotify
	{
	public:
		EGroundedEntryState                                        GroundedEntryState;                                      // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		class FString GetNotifyName();
		bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
