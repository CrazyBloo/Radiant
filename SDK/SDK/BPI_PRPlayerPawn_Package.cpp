/**
 * Name: Into_The_Radius_VR
 * Version: 2.4
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.GetPostProcesscomp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBPC_PlayerPostProcess_C*                    PPcomp                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_PRPlayerPawn_C::GetPostProcesscomp(class UBPC_PlayerPostProcess_C** PPcomp)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.GetPostProcesscomp");
		
		UBPI_PRPlayerPawn_C_GetPostProcesscomp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PPcomp != nullptr)
			*PPcomp = params.PPcomp;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.Gasmask
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               PutOn                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_PRPlayerPawn_C::Gasmask(bool PutOn)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.Gasmask");
		
		UBPI_PRPlayerPawn_C_Gasmask_Params params {};
		params.PutOn = PutOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.GetOverlapGrips
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPRHand                                            hand                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGripOverlap                                Grip                                                       (Parm, OutParm, NoDestructor, ContainsInstancedReference)
	 * 		struct FGripOverlap                                selectedGrip                                               (Parm, OutParm, NoDestructor, ContainsInstancedReference)
	 */
	void UBPI_PRPlayerPawn_C::GetOverlapGrips(EPRHand hand, struct FGripOverlap* Grip, struct FGripOverlap* selectedGrip)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.GetOverlapGrips");
		
		UBPI_PRPlayerPawn_C_GetOverlapGrips_Params params {};
		params.hand = hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Grip != nullptr)
			*Grip = params.Grip;
		if (selectedGrip != nullptr)
			*selectedGrip = params.selectedGrip;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.IsRunning
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               running                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_PRPlayerPawn_C::IsRunning(bool* running)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.IsRunning");
		
		UBPI_PRPlayerPawn_C_IsRunning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (running != nullptr)
			*running = params.running;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.GetAudioCaptureRef
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAudioCaptureComponent*                      Ref                                                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_PRPlayerPawn_C::GetAudioCaptureRef(class UAudioCaptureComponent** Ref)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.GetAudioCaptureRef");
		
		UBPI_PRPlayerPawn_C_GetAudioCaptureRef_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ref != nullptr)
			*Ref = params.Ref;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.IsLeaning
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsLeaning                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_PRPlayerPawn_C::IsLeaning(bool* IsLeaning)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.IsLeaning");
		
		UBPI_PRPlayerPawn_C_IsLeaning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsLeaning != nullptr)
			*IsLeaning = params.IsLeaning;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.GetCalculatedBodyRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              BodyYaw                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_PRPlayerPawn_C::GetCalculatedBodyRotation(float* BodyYaw)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.GetCalculatedBodyRotation");
		
		UBPI_PRPlayerPawn_C_GetCalculatedBodyRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BodyYaw != nullptr)
			*BodyYaw = params.BodyYaw;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.getNetSmoother
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             comp                                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_PRPlayerPawn_C::getNetSmoother(class USceneComponent** comp)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.getNetSmoother");
		
		UBPI_PRPlayerPawn_C_getNetSmoother_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (comp != nullptr)
			*comp = params.comp;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.SwitchPlayerMesh
	 * 		Flags  -> ()
	 */
	void UBPI_PRPlayerPawn_C::SwitchPlayerMesh()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.SwitchPlayerMesh");
		
		UBPI_PRPlayerPawn_C_SwitchPlayerMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.GetMovementDirection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     MovementVector                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_PRPlayerPawn_C::GetMovementDirection(struct FVector* MovementVector)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.GetMovementDirection");
		
		UBPI_PRPlayerPawn_C_GetMovementDirection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MovementVector != nullptr)
			*MovementVector = params.MovementVector;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.SetStats
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            HealthPercent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            RestPercent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            StaminaPercent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            HungerPercent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_PRPlayerPawn_C::SetStats(int32_t HealthPercent, int32_t RestPercent, int32_t StaminaPercent, int32_t HungerPercent)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.SetStats");
		
		UBPI_PRPlayerPawn_C_SetStats_Params params {};
		params.HealthPercent = HealthPercent;
		params.RestPercent = RestPercent;
		params.StaminaPercent = StaminaPercent;
		params.HungerPercent = HungerPercent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.ChangeRestByPercent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Percent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_PRPlayerPawn_C::ChangeRestByPercent(int32_t Percent)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.ChangeRestByPercent");
		
		UBPI_PRPlayerPawn_C_ChangeRestByPercent_Params params {};
		params.Percent = Percent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.ChangeHealthByPercent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Percent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_PRPlayerPawn_C::ChangeHealthByPercent(int32_t Percent)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.ChangeHealthByPercent");
		
		UBPI_PRPlayerPawn_C_ChangeHealthByPercent_Params params {};
		params.Percent = Percent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.GetTargetingInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                                  BodyTransform                                              (Parm, OutParm, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Velocity                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_PRPlayerPawn_C::GetTargetingInfo(struct FTransform* BodyTransform, struct FVector* Velocity)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.GetTargetingInfo");
		
		UBPI_PRPlayerPawn_C_GetTargetingInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BodyTransform != nullptr)
			*BodyTransform = params.BodyTransform;
		if (Velocity != nullptr)
			*Velocity = params.Velocity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.RestoreAfterDeath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShowNormalBody                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_PRPlayerPawn_C::RestoreAfterDeath(bool ShowNormalBody)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.RestoreAfterDeath");
		
		UBPI_PRPlayerPawn_C_RestoreAfterDeath_Params params {};
		params.ShowNormalBody = ShowNormalBody;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.GetPlayerControllerType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPRControllerType                                  Controller                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_PRPlayerPawn_C::GetPlayerControllerType(EPRControllerType* Controller)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.GetPlayerControllerType");
		
		UBPI_PRPlayerPawn_C_GetPlayerControllerType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Controller != nullptr)
			*Controller = params.Controller;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.ShowDirectionHint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     LookTo                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_PRPlayerPawn_C::ShowDirectionHint(const struct FVector& LookTo, bool Show)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.ShowDirectionHint");
		
		UBPI_PRPlayerPawn_C_ShowDirectionHint_Params params {};
		params.LookTo = LookTo;
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.GetControllerVelocity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              LeftVel                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              RightVel                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_PRPlayerPawn_C::GetControllerVelocity(float* LeftVel, float* RightVel)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.GetControllerVelocity");
		
		UBPI_PRPlayerPawn_C_GetControllerVelocity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LeftVel != nullptr)
			*LeftVel = params.LeftVel;
		if (RightVel != nullptr)
			*RightVel = params.RightVel;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.AudioFootstep
	 * 		Flags  -> ()
	 */
	void UBPI_PRPlayerPawn_C::AudioFootstep()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.AudioFootstep");
		
		UBPI_PRPlayerPawn_C_AudioFootstep_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.GetStepsCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Steps                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_PRPlayerPawn_C::GetStepsCount(int32_t* Steps)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.GetStepsCount");
		
		UBPI_PRPlayerPawn_C_GetStepsCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Steps != nullptr)
			*Steps = params.Steps;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.IsBackpackEquipped
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               equipped                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_PRPlayerPawn_C::IsBackpackEquipped(bool* equipped)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.IsBackpackEquipped");
		
		UBPI_PRPlayerPawn_C_IsBackpackEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (equipped != nullptr)
			*equipped = params.equipped;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.ToggleCrouch
	 * 		Flags  -> ()
	 */
	void UBPI_PRPlayerPawn_C::ToggleCrouch()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.ToggleCrouch");
		
		UBPI_PRPlayerPawn_C_ToggleCrouch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.SetCrouch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Crouch                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_PRPlayerPawn_C::SetCrouch(bool Crouch)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.SetCrouch");
		
		UBPI_PRPlayerPawn_C_SetCrouch_Params params {};
		params.Crouch = Crouch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.GetMoveSpeedCoefficient
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Coefficient                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_PRPlayerPawn_C::GetMoveSpeedCoefficient(float* Coefficient)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.GetMoveSpeedCoefficient");
		
		UBPI_PRPlayerPawn_C_GetMoveSpeedCoefficient_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Coefficient != nullptr)
			*Coefficient = params.Coefficient;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.Unstuck
	 * 		Flags  -> ()
	 */
	void UBPI_PRPlayerPawn_C::Unstuck()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.Unstuck");
		
		UBPI_PRPlayerPawn_C_Unstuck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.GetMarkerMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStaticMeshComponent*                        Mesh                                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_PRPlayerPawn_C::GetMarkerMesh(class UStaticMeshComponent** Mesh)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.GetMarkerMesh");
		
		UBPI_PRPlayerPawn_C_GetMarkerMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Mesh != nullptr)
			*Mesh = params.Mesh;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.SetDPadVelocityScale
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DPadVelocityScale                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_PRPlayerPawn_C::SetDPadVelocityScale(float DPadVelocityScale)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.SetDPadVelocityScale");
		
		UBPI_PRPlayerPawn_C_SetDPadVelocityScale_Params params {};
		params.DPadVelocityScale = DPadVelocityScale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.GetHolsterIndicatorRef
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetComponent*                            Indicator                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_PRPlayerPawn_C::GetHolsterIndicatorRef(class UWidgetComponent** Indicator)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.GetHolsterIndicatorRef");
		
		UBPI_PRPlayerPawn_C_GetHolsterIndicatorRef_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Indicator != nullptr)
			*Indicator = params.Indicator;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.IsActorClassInHands
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      ActorClass                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_PRPlayerPawn_C::IsActorClassInHands(class UClass* ActorClass, bool* Result)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.IsActorClassInHands");
		
		UBPI_PRPlayerPawn_C_IsActorClassInHands_Params params {};
		params.ActorClass = ActorClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.Sleep
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               UntilRested                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               UntilHealed                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Healing                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              WakeUpTime                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_PRPlayerPawn_C::Sleep(bool UntilRested, bool UntilHealed, bool Healing, float WakeUpTime)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.Sleep");
		
		UBPI_PRPlayerPawn_C_Sleep_Params params {};
		params.UntilRested = UntilRested;
		params.UntilHealed = UntilHealed;
		params.Healing = Healing;
		params.WakeUpTime = WakeUpTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.SetControllersVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_PRPlayerPawn_C::SetControllersVisibility(bool Visible)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.SetControllersVisibility");
		
		UBPI_PRPlayerPawn_C_SetControllersVisibility_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.SetUnderwaterState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HeadUnderwater                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               BodyUnderwater                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_PRPlayerPawn_C::SetUnderwaterState(bool HeadUnderwater, bool BodyUnderwater)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.SetUnderwaterState");
		
		UBPI_PRPlayerPawn_C_SetUnderwaterState_Params params {};
		params.HeadUnderwater = HeadUnderwater;
		params.BodyUnderwater = BodyUnderwater;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.GetUnderwaterState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HeadUnderwater                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               BodyUnderwater                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_PRPlayerPawn_C::GetUnderwaterState(bool* HeadUnderwater, bool* BodyUnderwater)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.GetUnderwaterState");
		
		UBPI_PRPlayerPawn_C_GetUnderwaterState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HeadUnderwater != nullptr)
			*HeadUnderwater = params.HeadUnderwater;
		if (BodyUnderwater != nullptr)
			*BodyUnderwater = params.BodyUnderwater;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.AudioDrowning
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               PlayOrStop                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ForcePlay                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_PRPlayerPawn_C::AudioDrowning(bool PlayOrStop, bool ForcePlay)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.AudioDrowning");
		
		UBPI_PRPlayerPawn_C_AudioDrowning_Params params {};
		params.PlayOrStop = PlayOrStop;
		params.ForcePlay = ForcePlay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.AudioUnderwater
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               PlayOrStop                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ForcePlay                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_PRPlayerPawn_C::AudioUnderwater(bool PlayOrStop, bool ForcePlay)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.AudioUnderwater");
		
		UBPI_PRPlayerPawn_C_AudioUnderwater_Params params {};
		params.PlayOrStop = PlayOrStop;
		params.ForcePlay = ForcePlay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.BuffRest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_PRPlayerPawn_C::BuffRest(float Amount, float Time)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.BuffRest");
		
		UBPI_PRPlayerPawn_C_BuffRest_Params params {};
		params.Amount = Amount;
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.ChangeNutrition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ChangeBy                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_PRPlayerPawn_C::ChangeNutrition(float ChangeBy)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.ChangeNutrition");
		
		UBPI_PRPlayerPawn_C_ChangeNutrition_Params params {};
		params.ChangeBy = ChangeBy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.ChangeStamina
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ChangeBy                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_PRPlayerPawn_C::ChangeStamina(float ChangeBy)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.ChangeStamina");
		
		UBPI_PRPlayerPawn_C_ChangeStamina_Params params {};
		params.ChangeBy = ChangeBy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.GetStats
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Health                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              HealthPercent                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Stamina                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              StaminaPercent                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Rest                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              RestPercent                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Nutrition                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              NutritionPercent                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_PRPlayerPawn_C::GetStats(float* Health, float* HealthPercent, float* Stamina, float* StaminaPercent, float* Rest, float* RestPercent, float* Nutrition, float* NutritionPercent)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.GetStats");
		
		UBPI_PRPlayerPawn_C_GetStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Health != nullptr)
			*Health = params.Health;
		if (HealthPercent != nullptr)
			*HealthPercent = params.HealthPercent;
		if (Stamina != nullptr)
			*Stamina = params.Stamina;
		if (StaminaPercent != nullptr)
			*StaminaPercent = params.StaminaPercent;
		if (Rest != nullptr)
			*Rest = params.Rest;
		if (RestPercent != nullptr)
			*RestPercent = params.RestPercent;
		if (Nutrition != nullptr)
			*Nutrition = params.Nutrition;
		if (NutritionPercent != nullptr)
			*NutritionPercent = params.NutritionPercent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.GetLastDamageData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDamageType*                                 DamageType                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AController*                                 Instigator                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      causer                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        CauserName                                                 (Parm, OutParm)
	 */
	void UBPI_PRPlayerPawn_C::GetLastDamageData(class UDamageType** DamageType, class AController** Instigator, class AActor** causer, class FText* CauserName)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.GetLastDamageData");
		
		UBPI_PRPlayerPawn_C_GetLastDamageData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DamageType != nullptr)
			*DamageType = params.DamageType;
		if (Instigator != nullptr)
			*Instigator = params.Instigator;
		if (causer != nullptr)
			*causer = params.causer;
		if (CauserName != nullptr)
			*CauserName = params.CauserName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.AudioGasMask
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               PlayOrStop                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ForcePlay                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_PRPlayerPawn_C::AudioGasMask(bool PlayOrStop, bool ForcePlay)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.AudioGasMask");
		
		UBPI_PRPlayerPawn_C_AudioGasMask_Params params {};
		params.PlayOrStop = PlayOrStop;
		params.ForcePlay = ForcePlay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.DropFirstGrip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGripMotionControllerComponent*              Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_PRPlayerPawn_C::DropFirstGrip(class UGripMotionControllerComponent* Controller)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.DropFirstGrip");
		
		UBPI_PRPlayerPawn_C_DropFirstGrip_Params params {};
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.SetSecondaryGripController
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneComponent*                             SecondaryController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_PRPlayerPawn_C::SetSecondaryGripController(class USceneComponent* SecondaryController)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.SetSecondaryGripController");
		
		UBPI_PRPlayerPawn_C_SetSecondaryGripController_Params params {};
		params.SecondaryController = SecondaryController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.IsActorInHands
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_PRPlayerPawn_C::IsActorInHands(class AActor** Actor, bool* Result)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.IsActorInHands");
		
		UBPI_PRPlayerPawn_C_IsActorInHands_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Actor != nullptr)
			*Actor = params.Actor;
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.SetMoveSpeedCoefficient
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESpeedCoefficient                                  Source                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Coefficient                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_PRPlayerPawn_C::SetMoveSpeedCoefficient(ESpeedCoefficient Source, float Coefficient)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PRPlayerPawn.BPI_PRPlayerPawn_C.SetMoveSpeedCoefficient");
		
		UBPI_PRPlayerPawn_C_SetMoveSpeedCoefficient_Params params {};
		params.Source = Source;
		params.Coefficient = Coefficient;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_PRPlayerPawn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_PRPlayerPawn_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPI_PRPlayerPawn.BPI_PRPlayerPawn_C");
		return ptr;
	}

}


