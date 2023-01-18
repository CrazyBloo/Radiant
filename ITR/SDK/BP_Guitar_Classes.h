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
	 * BlueprintGeneratedClass BP_Guitar.BP_Guitar_C
	 * Size -> 0x01CA (FullSize[0x07C2] - InheritedSize[0x05F8])
	 */
	class ABP_Guitar_C : public ABPA_BaseItem_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x05F8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBPC_CoinAttachSlot_C*                               BPC_CoinAttachSlot;                                      // 0x0600(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    WidgetComp;                                              // 0x0608(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     WidgetPivotPoint;                                        // 0x0610(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     A_Guitar_All_Chords;                                     // 0x0618(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       StringCollision;                                         // 0x0620(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPrimitiveComponent*                                 Component;                                               // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsPlayMode;                                             // 0x0630(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsFirstSet;                                             // 0x0631(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PMP8[0x2];                                   // 0x0632(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    HighlightedChord;                                        // 0x0634(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TiltThreshold;                                           // 0x0638(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZZMP[0x4];                                   // 0x063C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APRPlayerCharacter*                                  IK4PlayerChar;                                           // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FBP_ChordSettings_Structure                         LoadedChords;                                            // 0x0648(0x0038) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FDataTableRowHandle                                 SelectedSong;                                            // 0x0680(0x0010) Edit, BlueprintVisible, NoDestructor
		int32_t                                                    CurrentSequencedChord;                                   // 0x0690(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_V9C4[0x4];                                   // 0x0694(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              NextChordToPlay;                                         // 0x0698(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class UPrimitiveComponent*                                 OverlappedPick;                                          // 0x06A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWBP_GuitarChordSet_C*                               GuitarWidget;                                            // 0x06B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NextChordToLoad;                                         // 0x06B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsGameOn;                                               // 0x06BC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RKU4[0x3];                                   // 0x06BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<int32_t, float>                                       SongTimeMap;                                             // 0x06C0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		struct FTimerHandle                                        ChordTick_TimerHandle;                                   // 0x0710(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		float                                                      NextChordTime;                                           // 0x0718(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CurrentSongTime;                                         // 0x071C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FBP_SongSettings_Structure                          SongParams;                                              // 0x0720(0x0040) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		float                                                      ErrorSpan;                                               // 0x0760(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsProMode;                                              // 0x0764(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsHandEmpty;                                            // 0x0765(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TRBH[0x2];                                   // 0x0766(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABPA_BaseItem_C*                                     CurrentPick;                                             // 0x0768(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDateTime                                           TimeStartedPlay;                                         // 0x0770(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_GG4T[0x8];                                   // 0x0778(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          CoinTransform;                                           // 0x0780(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsCoinInhand;                                           // 0x07B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsRightHand;                                            // 0x07B1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5CJ0[0x6];                                   // 0x07B2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_PRPlayerController_C*                            PRPlayerController;                                      // 0x07B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       AttachmentsLocked;                                       // 0x07C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsMuted;                                                // 0x07C1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void MuteStrings(bool bShouldMute);
		void OnPickTriggered(bool bIsPrimary);
		void ChangeHandPose(int32_t ChordID);
		void IsOn(bool* On);
		void GetAttachmentsList(TArray<class FString>* Attachments);
		void GetCoinSlot(class UAttachmentSlotComponent** CoinSlot);
		void OnAttachChanged(bool bIsAttached);
		void GetPRPlayerController(class ABP_PRPlayerController_C** PRPlayerController, bool* bIsSuccess);
		void PrepareHand(bool bIsRightHand);
		bool IsRightController(class UMotionControllerComponent* Controller);
		void InitOtherItemPick(class AActor* ActorReference);
		void UpdateOtherHandItem(class UInventoryItem* InventoryItem);
		void IsPickInHand(class AActor** PickActor, bool* bInHand);
		void OnSongChanged(const class FName& SongID);
		void OutlineNextMinigameChord();
		void ResetGame();
		void SongTick(float DeltaTime);
		void MoveToNextChord(bool ForceMove);
		void GetNextChordName(class FString* ChordName);
		float GetInitialTimeShift();
		float GetChordFrequency();
		void CreateChordTimeMap();
		int32_t GetChordIDByName(const class FString& ChordName);
		void UpdateNextPlayTimeandChordID(float* TimeToNextChord, int32_t* ChordID);
		void CycleIncrementInt(int32_t MaxValue, int32_t* ValueToIncrement, bool* bNewCycle);
		void GetGuitarWidget(class UWBP_GuitarChordSet_C** AsWBPGuitarChordSet);
		void HandVelocityAngle(class USceneComponent* DeckComponent, class USceneComponent* HandComponent, float* XAngle, float* YAngle);
		void UpdateChordHighlights();
		void UpdateChordWidget(bool bIsFirstSet);
		void GetIK4Player(class APRPlayerCharacter** IK4PlayerChar, bool* bSuccess);
		void UpdateCUEChord(float Angle);
		void SetPlayMode(bool bIsPlayMode);
		void GetChordSetAdjustment(int32_t* ChordIDAdjustment);
		int32_t UpdateHighlightedChordID(float HorizontalAxis, float VerticalAxis, bool* bIsNewChord);
		void OnLoaded_BF4A33A343FBD34F5DC7FC89B985FB20(class UObject* Loaded);
		void OnGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation);
		void OnGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed);
		void ThumbLeft();
		void PrimaryTrigger(float AxisValue);
		void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void ReceiveTick(float DeltaSeconds);
		void InitSong(const struct FBP_SongSettings_Structure& SongParams);
		void PlayChord(float XAngle);
		void BndEvt__BP_Guitar_StringCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void TickChord();
		void StartSongGame();
		void EjectMag();
		void StopSongGame();
		void CustomEvent_2(class UInventoryItem* InventoryItem);
		void ReceiveBeginPlay();
		void OnReconfigure();
		void UpdateAttachmentSlots();
		void ExecuteUbergraph_BP_Guitar(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
