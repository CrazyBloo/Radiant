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
	 * Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.GetPostProcesscomp
	 */
	struct UBPI_PRPlayerPawn_C_GetPostProcesscomp_Params
	{
	public:
		class UBPC_PlayerPostProcess_C*                            PPcomp;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.Gasmask
	 */
	struct UBPI_PRPlayerPawn_C_Gasmask_Params
	{
	public:
		bool                                                       PutOn;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.GetOverlapGrips
	 */
	struct UBPI_PRPlayerPawn_C_GetOverlapGrips_Params
	{
	public:
		EPRHand                                                    hand;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_O5HA[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGripOverlap                                        Grip;                                                    // 0x0010(0x0110)  (Parm, OutParm, NoDestructor, ContainsInstancedReference)
		struct FGripOverlap                                        selectedGrip;                                            // 0x0120(0x0110)  (Parm, OutParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.IsRunning
	 */
	struct UBPI_PRPlayerPawn_C_IsRunning_Params
	{
	public:
		bool                                                       running;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.GetAudioCaptureRef
	 */
	struct UBPI_PRPlayerPawn_C_GetAudioCaptureRef_Params
	{
	public:
		class UAudioCaptureComponent*                              Ref;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.IsLeaning
	 */
	struct UBPI_PRPlayerPawn_C_IsLeaning_Params
	{
	public:
		bool                                                       IsLeaning;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.GetCalculatedBodyRotation
	 */
	struct UBPI_PRPlayerPawn_C_GetCalculatedBodyRotation_Params
	{
	public:
		float                                                      BodyYaw;                                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.getNetSmoother
	 */
	struct UBPI_PRPlayerPawn_C_getNetSmoother_Params
	{
	public:
		class USceneComponent*                                     comp;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.SwitchPlayerMesh
	 */
	struct UBPI_PRPlayerPawn_C_SwitchPlayerMesh_Params
	{	};

	/**
	 * Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.GetMovementDirection
	 */
	struct UBPI_PRPlayerPawn_C_GetMovementDirection_Params
	{
	public:
		struct FVector                                             MovementVector;                                          // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.SetStats
	 */
	struct UBPI_PRPlayerPawn_C_SetStats_Params
	{
	public:
		int32_t                                                    HealthPercent;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    RestPercent;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    StaminaPercent;                                          // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    HungerPercent;                                           // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.ChangeRestByPercent
	 */
	struct UBPI_PRPlayerPawn_C_ChangeRestByPercent_Params
	{
	public:
		int32_t                                                    Percent;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.ChangeHealthByPercent
	 */
	struct UBPI_PRPlayerPawn_C_ChangeHealthByPercent_Params
	{
	public:
		int32_t                                                    Percent;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.GetTargetingInfo
	 */
	struct UBPI_PRPlayerPawn_C_GetTargetingInfo_Params
	{
	public:
		struct FTransform                                          BodyTransform;                                           // 0x0000(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
		struct FVector                                             Velocity;                                                // 0x0030(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.RestoreAfterDeath
	 */
	struct UBPI_PRPlayerPawn_C_RestoreAfterDeath_Params
	{
	public:
		bool                                                       ShowNormalBody;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.GetPlayerControllerType
	 */
	struct UBPI_PRPlayerPawn_C_GetPlayerControllerType_Params
	{
	public:
		EPRControllerType                                          Controller;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.ShowDirectionHint
	 */
	struct UBPI_PRPlayerPawn_C_ShowDirectionHint_Params
	{
	public:
		struct FVector                                             LookTo;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Show;                                                    // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.GetControllerVelocity
	 */
	struct UBPI_PRPlayerPawn_C_GetControllerVelocity_Params
	{
	public:
		float                                                      LeftVel;                                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      RightVel;                                                // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.AudioFootstep
	 */
	struct UBPI_PRPlayerPawn_C_AudioFootstep_Params
	{	};

	/**
	 * Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.GetStepsCount
	 */
	struct UBPI_PRPlayerPawn_C_GetStepsCount_Params
	{
	public:
		int32_t                                                    Steps;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.IsBackpackEquipped
	 */
	struct UBPI_PRPlayerPawn_C_IsBackpackEquipped_Params
	{
	public:
		bool                                                       equipped;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.ToggleCrouch
	 */
	struct UBPI_PRPlayerPawn_C_ToggleCrouch_Params
	{	};

	/**
	 * Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.SetCrouch
	 */
	struct UBPI_PRPlayerPawn_C_SetCrouch_Params
	{
	public:
		bool                                                       Crouch;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.GetMoveSpeedCoefficient
	 */
	struct UBPI_PRPlayerPawn_C_GetMoveSpeedCoefficient_Params
	{
	public:
		float                                                      Coefficient;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.Unstuck
	 */
	struct UBPI_PRPlayerPawn_C_Unstuck_Params
	{	};

	/**
	 * Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.GetMarkerMesh
	 */
	struct UBPI_PRPlayerPawn_C_GetMarkerMesh_Params
	{
	public:
		class UStaticMeshComponent*                                Mesh;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.SetDPadVelocityScale
	 */
	struct UBPI_PRPlayerPawn_C_SetDPadVelocityScale_Params
	{
	public:
		float                                                      DPadVelocityScale;                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.GetHolsterIndicatorRef
	 */
	struct UBPI_PRPlayerPawn_C_GetHolsterIndicatorRef_Params
	{
	public:
		class UWidgetComponent*                                    Indicator;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.IsActorClassInHands
	 */
	struct UBPI_PRPlayerPawn_C_IsActorClassInHands_Params
	{
	public:
		class UClass*                                              ActorClass;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Result;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.Sleep
	 */
	struct UBPI_PRPlayerPawn_C_Sleep_Params
	{
	public:
		bool                                                       UntilRested;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       UntilHealed;                                             // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Healing;                                                 // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7M7R[0x1];                                   // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      WakeUpTime;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.SetControllersVisibility
	 */
	struct UBPI_PRPlayerPawn_C_SetControllersVisibility_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.SetUnderwaterState
	 */
	struct UBPI_PRPlayerPawn_C_SetUnderwaterState_Params
	{
	public:
		bool                                                       HeadUnderwater;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       BodyUnderwater;                                          // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.GetUnderwaterState
	 */
	struct UBPI_PRPlayerPawn_C_GetUnderwaterState_Params
	{
	public:
		bool                                                       HeadUnderwater;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       BodyUnderwater;                                          // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.AudioDrowning
	 */
	struct UBPI_PRPlayerPawn_C_AudioDrowning_Params
	{
	public:
		bool                                                       PlayOrStop;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ForcePlay;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.AudioUnderwater
	 */
	struct UBPI_PRPlayerPawn_C_AudioUnderwater_Params
	{
	public:
		bool                                                       PlayOrStop;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ForcePlay;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.BuffRest
	 */
	struct UBPI_PRPlayerPawn_C_BuffRest_Params
	{
	public:
		float                                                      Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Time;                                                    // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.ChangeNutrition
	 */
	struct UBPI_PRPlayerPawn_C_ChangeNutrition_Params
	{
	public:
		float                                                      ChangeBy;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.ChangeStamina
	 */
	struct UBPI_PRPlayerPawn_C_ChangeStamina_Params
	{
	public:
		float                                                      ChangeBy;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.GetStats
	 */
	struct UBPI_PRPlayerPawn_C_GetStats_Params
	{
	public:
		float                                                      Health;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      HealthPercent;                                           // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Stamina;                                                 // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      StaminaPercent;                                          // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Rest;                                                    // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      RestPercent;                                             // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Nutrition;                                               // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      NutritionPercent;                                        // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.GetLastDamageData
	 */
	struct UBPI_PRPlayerPawn_C_GetLastDamageData_Params
	{
	public:
		class UDamageType*                                         DamageType;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AController*                                         Instigator;                                              // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              causer;                                                  // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                CauserName;                                              // 0x0018(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.AudioGasMask
	 */
	struct UBPI_PRPlayerPawn_C_AudioGasMask_Params
	{
	public:
		bool                                                       PlayOrStop;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ForcePlay;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.DropFirstGrip
	 */
	struct UBPI_PRPlayerPawn_C_DropFirstGrip_Params
	{
	public:
		class UGripMotionControllerComponent*                      Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.SetSecondaryGripController
	 */
	struct UBPI_PRPlayerPawn_C_SetSecondaryGripController_Params
	{
	public:
		class USceneComponent*                                     SecondaryController;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.IsActorInHands
	 */
	struct UBPI_PRPlayerPawn_C_IsActorInHands_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Result;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.SetMoveSpeedCoefficient
	 */
	struct UBPI_PRPlayerPawn_C_SetMoveSpeedCoefficient_Params
	{
	public:
		ESpeedCoefficient                                          Source;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FE9V[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Coefficient;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
