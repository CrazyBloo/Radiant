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
	 * BlueprintGeneratedClass BP_Char_ScriptedSemyonich.BP_Char_ScriptedSemyonich_C
	 * Size -> 0x002B (FullSize[0x0854] - InheritedSize[0x0829])
	 */
	class ABP_Char_ScriptedSemyonich_C : public ABPA_Char_C
	{
	public:
		unsigned char                                              UnknownData_W0ZO[0x7];                                   // 0x0829(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0830(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UFireArmedComponent_C*                               FireArmedComponent;                                      // 0x0838(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     SpeechAudio;                                             // 0x0840(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAnimInstance*                                       AnimInstance;                                            // 0x0848(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AttackMoveRadius;                                        // 0x0850(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void LoadAdditionalSettings();
		void SetControll(class ABP_Tutorial_Mission_C* TutSeq);
		void SetEnableAdditionalThings(bool enable);
		void Trigger();
		void ProcessNoise(const class FName& Tag, const struct FVector& Location);
		void SetCrouch(bool Crouch);
		void OnStart();
		void ReceiveDestroyed();
		void ResetSpeed();
		void SetSpeed(float NewSpeed);
		void OnAttackCommandStarted();
		void ExecuteUbergraph_BP_Char_ScriptedSemyonich(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
