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
	 * BlueprintGeneratedClass BPI_PRPlayerPawn.BPI_PRPlayerPawn_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPI_PRPlayerPawn_C : public UInterface
	{
	public:
		void GetPostProcesscomp(class UBPC_PlayerPostProcess_C** PPcomp);
		void Gasmask(bool PutOn);
		void GetOverlapGrips(EPRHand hand, struct FGripOverlap* Grip, struct FGripOverlap* selectedGrip);
		void IsRunning(bool* running);
		void GetAudioCaptureRef(class UAudioCaptureComponent** Ref);
		void IsLeaning(bool* IsLeaning);
		void GetCalculatedBodyRotation(float* BodyYaw);
		void getNetSmoother(class USceneComponent** comp);
		void SwitchPlayerMesh();
		void GetMovementDirection(struct FVector* MovementVector);
		void SetStats(int32_t HealthPercent, int32_t RestPercent, int32_t StaminaPercent, int32_t HungerPercent);
		void ChangeRestByPercent(int32_t Percent);
		void ChangeHealthByPercent(int32_t Percent);
		void GetTargetingInfo(struct FTransform* BodyTransform, struct FVector* Velocity);
		void RestoreAfterDeath(bool ShowNormalBody);
		void GetPlayerControllerType(EPRControllerType* Controller);
		void ShowDirectionHint(const struct FVector& LookTo, bool Show);
		void GetControllerVelocity(float* LeftVel, float* RightVel);
		void AudioFootstep();
		void GetStepsCount(int32_t* Steps);
		void IsBackpackEquipped(bool* equipped);
		void ToggleCrouch();
		void SetCrouch(bool Crouch);
		void GetMoveSpeedCoefficient(float* Coefficient);
		void Unstuck();
		void GetMarkerMesh(class UStaticMeshComponent** Mesh);
		void SetDPadVelocityScale(float DPadVelocityScale);
		void GetHolsterIndicatorRef(class UWidgetComponent** Indicator);
		void IsActorClassInHands(class UClass* ActorClass, bool* Result);
		void Sleep(bool UntilRested, bool UntilHealed, bool Healing, float WakeUpTime);
		void SetControllersVisibility(bool Visible);
		void SetUnderwaterState(bool HeadUnderwater, bool BodyUnderwater);
		void GetUnderwaterState(bool* HeadUnderwater, bool* BodyUnderwater);
		void AudioDrowning(bool PlayOrStop, bool ForcePlay);
		void AudioUnderwater(bool PlayOrStop, bool ForcePlay);
		void BuffRest(float Amount, float Time);
		void ChangeNutrition(float ChangeBy);
		void ChangeStamina(float ChangeBy);
		void GetStats(float* Health, float* HealthPercent, float* Stamina, float* StaminaPercent, float* Rest, float* RestPercent, float* Nutrition, float* NutritionPercent);
		void GetLastDamageData(class UDamageType** DamageType, class AController** Instigator, class AActor** causer, class FText* CauserName);
		void AudioGasMask(bool PlayOrStop, bool ForcePlay);
		void DropFirstGrip(class UGripMotionControllerComponent* Controller);
		void SetSecondaryGripController(class USceneComponent* SecondaryController);
		void IsActorInHands(class AActor** Actor, bool* Result);
		void SetMoveSpeedCoefficient(ESpeedCoefficient Source, float Coefficient);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
