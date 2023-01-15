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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BPA_TutorStep.BPA_TutorStep_C.HaveSubtitles
	 */
	struct ABPA_TutorStep_C_HaveSubtitles_Params
	{
	public:
		bool                                                       haveText;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_TutorStep.BPA_TutorStep_C.RePrepareStep
	 */
	struct ABPA_TutorStep_C_RePrepareStep_Params
	{	};

	/**
	 * Function BPA_TutorStep.BPA_TutorStep_C.isPrepared
	 */
	struct ABPA_TutorStep_C_isPrepared_Params
	{
	public:
		bool                                                       prepared;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_TutorStep.BPA_TutorStep_C.OccupyWidget
	 */
	struct ABPA_TutorStep_C_OccupyWidget_Params
	{	};

	/**
	 * Function BPA_TutorStep.BPA_TutorStep_C.haveText
	 */
	struct ABPA_TutorStep_C_haveText_Params
	{
	public:
		bool                                                       haveText;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_TutorStep.BPA_TutorStep_C.IsRunning
	 */
	struct ABPA_TutorStep_C_IsRunning_Params
	{
	public:
		bool                                                       running;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_TutorStep.BPA_TutorStep_C.DoPrepare
	 */
	struct ABPA_TutorStep_C_DoPrepare_Params
	{	};

	/**
	 * Function BPA_TutorStep.BPA_TutorStep_C.PrepareStep
	 */
	struct ABPA_TutorStep_C_PrepareStep_Params
	{
	public:
		class ABP_Tutorial_Mission_C*                              sequencer;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ABPA_Tutorial_C*                                     Tutorial;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_TutorStep.BPA_TutorStep_C.UpdateTargetBeam
	 */
	struct ABPA_TutorStep_C_UpdateTargetBeam_Params
	{
	public:
		struct FVector                                             Target;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_TutorStep.BPA_TutorStep_C.Finish
	 */
	struct ABPA_TutorStep_C_Finish_Params
	{	};

	/**
	 * Function BPA_TutorStep.BPA_TutorStep_C.EdRefresh
	 */
	struct ABPA_TutorStep_C_EdRefresh_Params
	{	};

	/**
	 * Function BPA_TutorStep.BPA_TutorStep_C.EdFinish
	 */
	struct ABPA_TutorStep_C_EdFinish_Params
	{	};

	/**
	 * Function BPA_TutorStep.BPA_TutorStep_C.DoStop
	 */
	struct ABPA_TutorStep_C_DoStop_Params
	{	};

	/**
	 * Function BPA_TutorStep.BPA_TutorStep_C.StopStep
	 */
	struct ABPA_TutorStep_C_StopStep_Params
	{	};

	/**
	 * Function BPA_TutorStep.BPA_TutorStep_C.ReplaceControlName
	 */
	struct ABPA_TutorStep_C_ReplaceControlName_Params
	{	};

	/**
	 * Function BPA_TutorStep.BPA_TutorStep_C.UpdateText
	 */
	struct ABPA_TutorStep_C_UpdateText_Params
	{	};

	/**
	 * Function BPA_TutorStep.BPA_TutorStep_C.DoExecute
	 */
	struct ABPA_TutorStep_C_DoExecute_Params
	{	};

	/**
	 * Function BPA_TutorStep.BPA_TutorStep_C.ExecuteStep
	 */
	struct ABPA_TutorStep_C_ExecuteStep_Params
	{	};

	/**
	 * Function BPA_TutorStep.BPA_TutorStep_C.UserConstructionScript
	 */
	struct ABPA_TutorStep_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BPA_TutorStep.BPA_TutorStep_C.ItemsSold
	 */
	struct ABPA_TutorStep_C_ItemsSold_Params
	{	};

	/**
	 * Function BPA_TutorStep.BPA_TutorStep_C.ItemsBought
	 */
	struct ABPA_TutorStep_C_ItemsBought_Params
	{	};

	/**
	 * Function BPA_TutorStep.BPA_TutorStep_C.SetControllActor
	 */
	struct ABPA_TutorStep_C_SetControllActor_Params
	{
	public:
		class ABPA_TutorStep_C*                                    Ref;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_TutorStep.BPA_TutorStep_C.LockFunctions
	 */
	struct ABPA_TutorStep_C_LockFunctions_Params
	{
	public:
		bool                                                       lock;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_TutorStep.BPA_TutorStep_C.ItemPutToBin
	 */
	struct ABPA_TutorStep_C_ItemPutToBin_Params
	{	};

	/**
	 * Function BPA_TutorStep.BPA_TutorStep_C.ItemREmovedFromBin
	 */
	struct ABPA_TutorStep_C_ItemREmovedFromBin_Params
	{	};

	/**
	 * Function BPA_TutorStep.BPA_TutorStep_C.TargetActorHeldInHand
	 */
	struct ABPA_TutorStep_C_TargetActorHeldInHand_Params
	{
	public:
		bool                                                       IsHeld;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       HeldInLeft;                                              // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPA_TutorStep.BPA_TutorStep_C.ReceiveBeginPlay
	 */
	struct ABPA_TutorStep_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BPA_TutorStep.BPA_TutorStep_C.ReceiveTick
	 */
	struct ABPA_TutorStep_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_TutorStep.BPA_TutorStep_C.updateTransform
	 */
	struct ABPA_TutorStep_C_updateTransform_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_TutorStep.BPA_TutorStep_C.OnLevelPrepare
	 */
	struct ABPA_TutorStep_C_OnLevelPrepare_Params
	{
	public:
		struct FGameplayTag                                        LevelTag;                                                // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_TutorStep.BPA_TutorStep_C.SkipStep
	 */
	struct ABPA_TutorStep_C_SkipStep_Params
	{	};

	/**
	 * Function BPA_TutorStep.BPA_TutorStep_C.ExecuteUbergraph_BPA_TutorStep
	 */
	struct ABPA_TutorStep_C_ExecuteUbergraph_BPA_TutorStep_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPA_TutorStep.BPA_TutorStep_C.OnTutorialStepFinish__DelegateSignature
	 */
	struct ABPA_TutorStep_C_OnTutorialStepFinish__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
