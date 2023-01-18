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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_Guitar.BP_Guitar_C.MuteStrings
	 */
	struct ABP_Guitar_C_MuteStrings_Params
	{
	public:
		bool                                                       bShouldMute;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FGPP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Guitar.BP_Guitar_C.OnPickTriggered
	 */
	struct ABP_Guitar_C_OnPickTriggered_Params
	{
	public:
		bool                                                       bIsPrimary;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Guitar.BP_Guitar_C.ChangeHandPose
	 */
	struct ABP_Guitar_C_ChangeHandPose_Params
	{
	public:
		int32_t                                                    ChordID;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Guitar.BP_Guitar_C.IsOn
	 */
	struct ABP_Guitar_C_IsOn_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_80E6[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Guitar.BP_Guitar_C.GetAttachmentsList
	 */
	struct ABP_Guitar_C_GetAttachmentsList_Params
	{
	public:
		TArray<class FString>                                      Attachments;                                             // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BP_Guitar.BP_Guitar_C.GetCoinSlot
	 */
	struct ABP_Guitar_C_GetCoinSlot_Params
	{
	public:
		class UAttachmentSlotComponent*                            CoinSlot;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Guitar.BP_Guitar_C.OnAttachChanged
	 */
	struct ABP_Guitar_C_OnAttachChanged_Params
	{
	public:
		bool                                                       bIsAttached;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Guitar.BP_Guitar_C.GetPRPlayerController
	 */
	struct ABP_Guitar_C_GetPRPlayerController_Params
	{
	public:
		class ABP_PRPlayerController_C*                            PRPlayerController;                                      // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsSuccess;                                              // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Guitar.BP_Guitar_C.PrepareHand
	 */
	struct ABP_Guitar_C_PrepareHand_Params
	{
	public:
		bool                                                       bIsRightHand;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MML1[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Guitar.BP_Guitar_C.IsRightController
	 */
	struct ABP_Guitar_C_IsRightController_Params
	{
	public:
		class UMotionControllerComponent*                          Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Guitar.BP_Guitar_C.Init Other Item Pick
	 */
	struct ABP_Guitar_C_InitOtherItemPick_Params
	{
	public:
		class AActor*                                              ActorReference;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Guitar.BP_Guitar_C.UpdateOtherHandItem
	 */
	struct ABP_Guitar_C_UpdateOtherHandItem_Params
	{
	public:
		class UInventoryItem*                                      InventoryItem;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Guitar.BP_Guitar_C.IsPickInHand
	 */
	struct ABP_Guitar_C_IsPickInHand_Params
	{
	public:
		class AActor*                                              PickActor;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInHand;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_O31V[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Guitar.BP_Guitar_C.On Song Changed
	 */
	struct ABP_Guitar_C_OnSongChanged_Params
	{
	public:
		class FName                                                SongID;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Guitar.BP_Guitar_C.OutlineNextMinigameChord
	 */
	struct ABP_Guitar_C_OutlineNextMinigameChord_Params
	{	};

	/**
	 * Function BP_Guitar.BP_Guitar_C.ResetGame
	 */
	struct ABP_Guitar_C_ResetGame_Params
	{	};

	/**
	 * Function BP_Guitar.BP_Guitar_C.SongTick
	 */
	struct ABP_Guitar_C_SongTick_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_68BK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Guitar.BP_Guitar_C.MoveToNextChord
	 */
	struct ABP_Guitar_C_MoveToNextChord_Params
	{
	public:
		bool                                                       ForceMove;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Guitar.BP_Guitar_C.GetNextChordName
	 */
	struct ABP_Guitar_C_GetNextChordName_Params
	{
	public:
		class FString                                              ChordName;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Guitar.BP_Guitar_C.GetInitialTimeShift
	 */
	struct ABP_Guitar_C_GetInitialTimeShift_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Guitar.BP_Guitar_C.Get Chord Frequency
	 */
	struct ABP_Guitar_C_GetChordFrequency_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Guitar.BP_Guitar_C.CreateChordTimeMap
	 */
	struct ABP_Guitar_C_CreateChordTimeMap_Params
	{	};

	/**
	 * Function BP_Guitar.BP_Guitar_C.GetChordIDByName
	 */
	struct ABP_Guitar_C_GetChordIDByName_Params
	{
	public:
		class FString                                              ChordName;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
		int32_t                                                    ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Guitar.BP_Guitar_C.Update Next Play Time and Chord ID
	 */
	struct ABP_Guitar_C_UpdateNextPlayTimeandChordID_Params
	{
	public:
		float                                                      TimeToNextChord;                                         // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ChordID;                                                 // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Guitar.BP_Guitar_C.Cycle Increment Int
	 */
	struct ABP_Guitar_C_CycleIncrementInt_Params
	{
	public:
		int32_t                                                    MaxValue;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ValueToIncrement;                                        // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bNewCycle;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8C0E[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Guitar.BP_Guitar_C.GetGuitarWidget
	 */
	struct ABP_Guitar_C_GetGuitarWidget_Params
	{
	public:
		class UWBP_GuitarChordSet_C*                               AsWBPGuitarChordSet;                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Guitar.BP_Guitar_C.HandVelocityAngle
	 */
	struct ABP_Guitar_C_HandVelocityAngle_Params
	{
	public:
		class USceneComponent*                                     DeckComponent;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USceneComponent*                                     HandComponent;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      XAngle;                                                  // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      YAngle;                                                  // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Guitar.BP_Guitar_C.UpdateChordHighlights
	 */
	struct ABP_Guitar_C_UpdateChordHighlights_Params
	{	};

	/**
	 * Function BP_Guitar.BP_Guitar_C.UpdateChordWidget
	 */
	struct ABP_Guitar_C_UpdateChordWidget_Params
	{
	public:
		bool                                                       bIsFirstSet;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LI7T[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Guitar.BP_Guitar_C.GetIK4Player
	 */
	struct ABP_Guitar_C_GetIK4Player_Params
	{
	public:
		class APRPlayerCharacter*                                  IK4PlayerChar;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bSuccess;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Guitar.BP_Guitar_C.Update CUE Chord
	 */
	struct ABP_Guitar_C_UpdateCUEChord_Params
	{
	public:
		float                                                      Angle;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Guitar.BP_Guitar_C.SetPlayMode
	 */
	struct ABP_Guitar_C_SetPlayMode_Params
	{
	public:
		bool                                                       bIsPlayMode;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1Q0L[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Guitar.BP_Guitar_C.GetChordSetAdjustment
	 */
	struct ABP_Guitar_C_GetChordSetAdjustment_Params
	{
	public:
		int32_t                                                    ChordIDAdjustment;                                       // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Guitar.BP_Guitar_C.UpdateHighlightedChordID
	 */
	struct ABP_Guitar_C_UpdateHighlightedChordID_Params
	{
	public:
		float                                                      HorizontalAxis;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      VerticalAxis;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsNewChord;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VHQG[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Guitar.BP_Guitar_C.OnLoaded_BF4A33A343FBD34F5DC7FC89B985FB20
	 */
	struct ABP_Guitar_C_OnLoaded_BF4A33A343FBD34F5DC7FC89B985FB20_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Guitar.BP_Guitar_C.OnGrip
	 */
	struct ABP_Guitar_C_OnGrip_Params
	{
	public:
		class UGripMotionControllerComponent*                      GrippingController;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RPOE[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Guitar.BP_Guitar_C.OnGripRelease
	 */
	struct ABP_Guitar_C_OnGripRelease_Params
	{
	public:
		class UGripMotionControllerComponent*                      ReleasingController;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_B7T8[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBPActorGripInformation                             GripInformation;                                         // 0x0010(0x01E0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
		bool                                                       bWasSocketed;                                            // 0x01F0(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Guitar.BP_Guitar_C.ThumbLeft
	 */
	struct ABP_Guitar_C_ThumbLeft_Params
	{	};

	/**
	 * Function BP_Guitar.BP_Guitar_C.PrimaryTrigger
	 */
	struct ABP_Guitar_C_PrimaryTrigger_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Guitar.BP_Guitar_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_Guitar_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LUNO[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_Guitar.BP_Guitar_C.ReceiveTick
	 */
	struct ABP_Guitar_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Guitar.BP_Guitar_C.InitSong
	 */
	struct ABP_Guitar_C_InitSong_Params
	{
	public:
		struct FBP_SongSettings_Structure                          SongParams;                                              // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Guitar.BP_Guitar_C.PlayChord
	 */
	struct ABP_Guitar_C_PlayChord_Params
	{
	public:
		float                                                      XAngle;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Guitar.BP_Guitar_C.BndEvt__BP_Guitar_StringCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct ABP_Guitar_C_BndEvt__BP_Guitar_StringCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Guitar.BP_Guitar_C.TickChord
	 */
	struct ABP_Guitar_C_TickChord_Params
	{	};

	/**
	 * Function BP_Guitar.BP_Guitar_C.StartSongGame
	 */
	struct ABP_Guitar_C_StartSongGame_Params
	{	};

	/**
	 * Function BP_Guitar.BP_Guitar_C.EjectMag
	 */
	struct ABP_Guitar_C_EjectMag_Params
	{	};

	/**
	 * Function BP_Guitar.BP_Guitar_C.StopSongGame
	 */
	struct ABP_Guitar_C_StopSongGame_Params
	{	};

	/**
	 * Function BP_Guitar.BP_Guitar_C.CustomEvent_2
	 */
	struct ABP_Guitar_C_CustomEvent_2_Params
	{
	public:
		class UInventoryItem*                                      InventoryItem;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Guitar.BP_Guitar_C.ReceiveBeginPlay
	 */
	struct ABP_Guitar_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Guitar.BP_Guitar_C.OnReconfigure
	 */
	struct ABP_Guitar_C_OnReconfigure_Params
	{	};

	/**
	 * Function BP_Guitar.BP_Guitar_C.UpdateAttachmentSlots
	 */
	struct ABP_Guitar_C_UpdateAttachmentSlots_Params
	{	};

	/**
	 * Function BP_Guitar.BP_Guitar_C.ExecuteUbergraph_BP_Guitar
	 */
	struct ABP_Guitar_C_ExecuteUbergraph_BP_Guitar_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
