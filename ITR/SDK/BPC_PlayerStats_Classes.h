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
	 * BlueprintGeneratedClass BPC_PlayerStats.BPC_PlayerStats_C
	 * Size -> 0x0048 (FullSize[0x0180] - InheritedSize[0x0138])
	 */
	class UBPC_PlayerStats_C : public UPlayerStatsComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0138(0x0008) ZeroConstructor, Transient, DuplicateTransient
		float                                                      HungerSpeed;                                             // 0x0140(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Thirst;                                                  // 0x0144(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ThirstSpeed;                                             // 0x0148(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ThirstMax;                                               // 0x014C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ThirstEnded;                                             // 0x0150(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TIBJ[0x7];                                   // 0x0151(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             ThirstEnd;                                               // 0x0158(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       StaminaUse;                                              // 0x0168(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4SMX[0x3];                                   // 0x0169(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HungerThristDamageValue;                                 // 0x016C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       PrintStats;                                              // 0x0170(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Resting;                                                 // 0x0171(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       BlackedOut;                                              // 0x0172(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_04I3[0x1];                                   // 0x0173(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AmmountToBuff;                                           // 0x0174(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PrevSeconds;                                             // 0x0178(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      StaminaUseMultiplier;                                    // 0x017C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetTimePassed(float DeltaSeconds, float RealDeltaSeconds);
		void BuffEnd();
		void BuffStart(float AmmountToBoost, float ActiveTimeSec);
		void CalculateRest(bool Resting, float DeltaSeconds);
		void ChangeThirst(float Value);
		void IsLackOfNeeds(bool* Lack);
		void HungerThirstDamage();
		void CalculateStamina(bool Use, float DeltaSeconds);
		void CalculateThirst();
		void CalculateNutrition(float DeltaSeconds);
		void DisplayStats();
		void OnGameStarted();
		void UseStamina(bool Use, float StaminaUseMult);
		void ReceiveTick(float DeltaSeconds);
		void ExecuteUbergraph_BPC_PlayerStats(int32_t EntryPoint);
		void ThirstEnd__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
