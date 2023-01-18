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
	 * BlueprintGeneratedClass BP_Char_Mimic.BP_Char_Mimic_C
	 * Size -> 0x0214 (FullSize[0x0D2D] - InheritedSize[0x0B19])
	 */
	class ABP_Char_Mimic_C : public ABP_ALSBase_C
	{
	public:
		unsigned char                                              UnknownData_A9V8[0x7];                                   // 0x0B19(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0B20(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAudioComponent*                                     AudioFootsteps;                                          // 0x0B28(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBotShootingComponent_C*                             BotShootingComponent;                                    // 0x0B30(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Footsteps_Sprinting__Direction_B772941C4144865693024C9B480C4569; // 0x0B38(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_H8BY[0x7];                                   // 0x0B39(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  FootstepsSprinting;                                      // 0x0B40(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Footsteps_RUnning__Direction_0C6981244D30B30F79143888BCB60D3C; // 0x0B48(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_C1DK[0x7];                                   // 0x0B49(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  FootstepsRUnning;                                        // 0x0B50(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Footsteps_Walking__Direction_03F4175F42744627FCF5A3BFF1E313ED; // 0x0B58(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_3CQD[0x7];                                   // 0x0B59(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  FootstepsWalking;                                        // 0x0B60(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_0_NewTrack_0_E42CA6504788E4A20EB7E991D53E50E1;  // 0x0B68(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_0__Direction_E42CA6504788E4A20EB7E991D53E50E1;  // 0x0B6C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0HSE[0x3];                                   // 0x0B6D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_1;                                              // 0x0B70(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FMantle_Asset_FMantle_Asset                         Mantle_2m_Default;                                       // 0x0B78(0x0038) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FMantle_Asset_FMantle_Asset                         Mantle_1m_Default;                                       // 0x0BB0(0x0038) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FMantle_Asset_FMantle_Asset                         Mantle_1m_RH;                                            // 0x0BE8(0x0038) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FMantle_Asset_FMantle_Asset                         Mantle_1m_LH;                                            // 0x0C20(0x0038) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FMantle_Asset_FMantle_Asset                         Mantle_1m_2H;                                            // 0x0C58(0x0038) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FMantle_Asset_FMantle_Asset                         Mantle_1m_Box;                                           // 0x0C90(0x0038) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        LandRoll_Default;                                        // 0x0CC8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        GetUpFront_Default;                                      // 0x0CD0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        LandRoll_RH;                                             // 0x0CD8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        LandRoll_LH;                                             // 0x0CE0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        LandRoll_2H;                                             // 0x0CE8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        GetUpFront_RH;                                           // 0x0CF0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        GetUpFront_LH;                                           // 0x0CF8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        GetUpFront_2H;                                           // 0x0D00(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        GetUpBack_Default;                                       // 0x0D08(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        GetUpBack_RH;                                            // 0x0D10(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        GetUpBack_LH;                                            // 0x0D18(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        GetUpBack_2H;                                            // 0x0D20(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      OptimalShootRange;                                       // 0x0D28(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EBotMovementMode                                           BotMovementMode;                                         // 0x0D2C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetCommand(ECharCommand* CurrentCommand);
		void SetBotMovementMode(EBotMovementMode MovementMode, bool* Changed);
		EBotMovementMode GetBotMovementMode();
		class UActorComponent* GetBotShootingComponent();
		class USplineComponent* GetPatrolPath();
		struct FTransform GetBoneTransform(const class FName& BoneName);
		class UActorComponent* GetAliveStats();
		float GetIdleWalkDistance();
		float GetStealth();
		class AActor* GetSelection();
		float GetOptimalRange();
		class UPRNpcPerceptionComponent* GetPerception();
		void MantleStart(float MantleHeight, const struct FALS_ComponentAndTransform& MantleLedgeWS, EMantleType MantleType);
		void RagdollEnd();
		void RagdollStart();
		class UAnimMontage* GetGetUpAnimation(bool RagdollFaceUp);
		void MantleEnd();
		class UAnimMontage* GetRollAnimation();
		void OnOverlayStateChanged(EOverlayState NewOverLayState);
		void BPI_Get_3P_TraceParams(struct FVector* TraceOrigin, float* TraceRadius, ETraceTypeQuery* TraceChannel);
		struct FMantle_Asset_FMantle_Asset GetMantleAsset(EMantleType MantleType);
		struct FVector BPI_Get_FP_CameraTarget();
		struct FTransform BPI_Get_3P_PivotTarget();
		void Timeline_0__FinishedFunc();
		void Timeline_0__UpdateFunc();
		void FootstepsWalking__FinishedFunc();
		void FootstepsWalking__UpdateFunc();
		void FootstepsWalking__Playfootstep__EventFunc();
		void FootstepsRUnning__FinishedFunc();
		void FootstepsRUnning__UpdateFunc();
		void FootstepsRUnning__PlayFootstep__EventFunc();
		void FootstepsSprinting__FinishedFunc();
		void FootstepsSprinting__UpdateFunc();
		void FootstepsSprinting__PlayFootstep__EventFunc();
		void OnStart();
		void ReceiveTick(float DeltaSeconds);
		void OnDeath(bool EnableRagdoll);
		void PlayFootstepSound();
		void SetEnableAdditionalThings(bool enable);
		void SaveGameData();
		void StartFootstepLoop();
		void StopFootstepLoop();
		void ExecuteUbergraph_BP_Char_Mimic(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
