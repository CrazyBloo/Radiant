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
	 * BlueprintGeneratedClass BP_HandheldMap.BP_HandheldMap_C
	 * Size -> 0x0150 (FullSize[0x0498] - InheritedSize[0x0348])
	 */
	class ABP_HandheldMap_C : public ABPA_PRItemActor_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0348(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                SM_Compass;                                              // 0x0350(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                SM_CompassArrow;                                         // 0x0358(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    WC_Missions;                                             // 0x0360(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UChildActorComponent*                                BP_Map_Global;                                           // 0x0368(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     TabMapGlobal;                                            // 0x0370(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    WidgetMapGlobalButton;                                   // 0x0378(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    WidgetJournalButton;                                     // 0x0380(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    WidgetMissionButton;                                     // 0x0388(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    WidgetMapButton;                                         // 0x0390(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UVRButtonComponent*                                  VRButton_MapGlobal;                                      // 0x0398(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UVRButtonComponent*                                  VRButton_Map;                                            // 0x03A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UVRButtonComponent*                                  VRButton_Mission;                                        // 0x03A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UVRButtonComponent*                                  VRButton_Journal;                                        // 0x03B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     TabButtons;                                              // 0x03B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    WC_Journal;                                              // 0x03C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UVRButtonComponent*                                  VRButton_AlarmTurnOff;                                   // 0x03C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UChildActorComponent*                                BP_TideClock;                                            // 0x03D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       Box_LightOnOff_Overlap1;                                 // 0x03D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     TabMap;                                                  // 0x03E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Pivot_Pen;                                               // 0x03E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPointLightComponent*                                PointLight;                                              // 0x03F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UVRButtonComponent*                                  VRButton_Light;                                          // 0x03F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       Box_LightOnOff_Overlap;                                  // 0x0400(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     AC_PageTurn;                                             // 0x0408(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                SM_MapFolderBookMarkBig_001;                             // 0x0410(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UChildActorComponent*                                BP_Dictophone_Map;                                       // 0x0418(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     MapContents;                                             // 0x0420(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UChildActorComponent*                                BP_Map_CurrentLevel;                                     // 0x0428(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                SM_MapFolder05_closed;                                   // 0x0430(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class ABP_Map_CurrentLevel_C*                              mapCurrent;                                              // 0x0438(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Map_Global_C*                                    mapGlobal;                                               // 0x0440(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class ABP_Dictophone_Map_C*                                dictophone;                                              // 0x0448(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWBP_HMap_Journal_C*                                 widgetJournal;                                           // 0x0450(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class ABP_Environment_C*                                   environmentRef;                                          // 0x0458(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ButtonDelay;                                             // 0x0460(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_I0RK[0x7];                                   // 0x0461(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_Pencil_C*                                        pen;                                                     // 0x0468(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UVRGripScriptBase*>                           GripLogicScripts;                                        // 0x0470(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class UGS_LerpToHand*                                      LerptoHandScript;                                        // 0x0480(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ShowMissionTips;                                         // 0x0488(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_94FG[0x7];                                   // 0x0489(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWBP_HMap_Missions_C*                                WidgetMissions;                                          // 0x0490(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetLightItem(bool* IsOn, class ABPA_BaseItem_C** Item);
		void DenyHolstering(bool* Deny);
		void GetGSLerpToHand(class UGS_LerpToHand** LerpToHandScript);
		void IsItemActorAttachmentsLocked(bool* Result);
		void IsOn(bool* On);
		void SetUICollision(bool Enabled);
		void SelectTab(class UVRButtonComponent* Tab);
		bool GetGripScripts(TArray<class UVRGripScriptBase*>* ArrayReference);
		void PlayPageSound();
		void PlayerInteract(EHand_EHand hand, class UPrimitiveComponent* Controller);
		void EjectMag();
		void ThumbUp();
		void Bind();
		void ThumbLeft();
		void ThumbRight();
		void Inspect(bool On);
		void Unbind();
		void Use();
		void TutLock();
		void TutUnlock();
		void SetItemActorAttachmentsLock(bool lock);
		void DropEjectedMag();
		void NightGlow(bool On);
		void SecondaryTrigger(float AxisValue);
		void RequestRecoil(const struct FVector& Recoil);
		void RequestPositionCheck(bool On);
		void BeginItemPositionChecks();
		void SetDenyGrip(bool DenyGrip);
		void TakenByHolder(const class FString& Name);
		void SetAttachedCollision(bool Attached);
		void GameplayTrigger();
		void ToggleAttachments();
		void PrimaryTrigger(float AxisValue);
		void OnGrip(class UGripMotionControllerComponent* GrippingController, const struct FBPActorGripInformation& GripInformation);
		void OnGripRelease(class UGripMotionControllerComponent* ReleasingController, const struct FBPActorGripInformation& GripInformation, bool bWasSocketed);
		void ReceiveTick(float DeltaSeconds);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void OnLevelStarted(const struct FGameplayTag& LevelTag);
		void ReceiveBeginPlay();
		void BndEvt__VRButton_K2Node_ComponentBoundEvent_1_VRButtonStateChangedSignature__DelegateSignature(bool ButtonState, class AActor* InteractingActor, class UPrimitiveComponent* InteractingComponent);
		void PenReset(const struct FGameplayTag& Value);
		void RequestPhysicsCollision(bool On, const class FName& Requestor);
		void BndEvt__BP_HandheldMap_VRButton_AlarmTurnOff_K2Node_ComponentBoundEvent_0_VRButtonStateChangedSignature__DelegateSignature(bool ButtonState, class AActor* InteractingActor, class UPrimitiveComponent* InteractingComponent);
		void Hide(bool Show);
		void OnMapEvent();
		void OnMissionEvent();
		void OnJournalEvent();
		void BndEvt__VRButton_Map_K2Node_ComponentBoundEvent_0_VRButtonStateChangedSignature__DelegateSignature(bool ButtonState, class AActor* InteractingActor, class UPrimitiveComponent* InteractingComponent);
		void BndEvt__VRButton_Mission_K2Node_ComponentBoundEvent_2_VRButtonStateChangedSignature__DelegateSignature(bool ButtonState, class AActor* InteractingActor, class UPrimitiveComponent* InteractingComponent);
		void BndEvt__VRButton_Journal_K2Node_ComponentBoundEvent_3_VRButtonStateChangedSignature__DelegateSignature(bool ButtonState, class AActor* InteractingActor, class UPrimitiveComponent* InteractingComponent);
		void BndEvt__BP_HandheldMap_VRButton_MapGlobal_K2Node_ComponentBoundEvent_2_VRButtonStateChangedSignature__DelegateSignature(bool ButtonState, class AActor* InteractingActor, class UPrimitiveComponent* InteractingComponent);
		void OnMapGlobalEvent();
		void OnAnyLevelStarted(const struct FGameplayTag& Value);
		void PenReleased();
		void ExecuteUbergraph_BP_HandheldMap(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
