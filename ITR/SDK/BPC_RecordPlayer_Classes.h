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
	 * BlueprintGeneratedClass BPC_RecordPlayer.BPC_RecordPlayer_C
	 * Size -> 0x00B4 (FullSize[0x0194] - InheritedSize[0x00E0])
	 */
	class UBPC_RecordPlayer_C : public UActorComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00E0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FDialogue                                           Record;                                                  // 0x00E8(0x0060) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		int32_t                                                    recordLineIndex;                                         // 0x0148(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      recordLineTime;                                          // 0x014C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDialogueLine                                       recordLine;                                              // 0x0150(0x0020) Edit, BlueprintVisible, DisableEditOnInstance
		class UAudioComponent*                                     audioRef;                                                // 0x0170(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Playing;                                                 // 0x0178(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       DeleteAudio;                                             // 0x0179(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_P1EB[0x6];                                   // 0x017A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnRecordFinished;                                        // 0x0180(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		float                                                      audioDuration;                                           // 0x0190(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void PlayRecord(const struct FDialogue& Record, class UAudioComponent* audioRef);
		void StopRecord();
		void OnGamePaused_Event_1(bool Value);
		void PlayRecordLine();
		void ExecuteUbergraph_BPC_RecordPlayer(int32_t EntryPoint);
		void OnRecordFinished__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
