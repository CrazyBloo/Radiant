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
	 * BlueprintGeneratedClass C_ImpactSounds.C_ImpactSounds_C
	 * Size -> 0x0020 (FullSize[0x0100] - InheritedSize[0x00E0])
	 */
	class UC_ImpactSounds_C : public UActorComponent
	{
	public:
		class USoundBase*                                          SurfaceImpactSound;                                      // 0x00E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          DropSoundSelf;                                           // 0x00E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SpawnsParticles;                                         // 0x00F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OFVD[0x7];                                   // 0x00F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundBase*                                          ImpactSoundSelf;                                         // 0x00F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SpawnFXFromDT(EPhysicalSurface SurfaceType, const struct FVector& Location, const struct FVector& Normal, float InFloat);
		void PlayDartImpactSound(const struct FHitResult& Hit, const struct FVector& Impulse, class UObject* Actor);
		void PlayItemImpactSound(const struct FHitResult& Hit, const struct FVector& Impulse);
		void PlayKnifeImpactSound(const struct FHitResult& Hit, const struct FVector& Impulse, class UObject* Actor);
		void GetDropSoundFromTable(const struct FHitResult& Hit, class USoundCue** MetallShell, class USoundCue** PlasticShell, class USoundCue** BigItemDrop, class USoundCue** SmallItemDrop, class USoundCue** ItemHit);
		void SpawnHitParticles(EPhysicalSurface Selection, const struct FVector& Location, float ScaleMult);
		void CalcPitchAndVolumeMod(class AActor* NoiseSourceActor, const struct FVector& HitImpulse, float* PitchMult, float* VolumeMult);
		void PlayTargetHitSound(EPhysicalSurface Selection, float VolumeMultiplier, float PitchMultiplier, const struct FVector& InputPin);
		void PlaySelfDropSound(EPhysicalSurface Selection, const struct FVector& Location, float VolumeMultiplier, float PitchMultiplier, const struct FHitResult& HitResult);
		void PlayItemDropSound(const struct FHitResult& Hit, const struct FVector& HitImpulse, class AActor* NoiseSourceActor, EPhysicalSurface SelfPhysMat, bool SpawnParticles);
		void DestroySound(class AActor* NewParam);
		void PlayShellHitSound(const struct FHitResult& Hit, const struct FVector& HitImpulse, class AActor* NoiseSourceActor, bool IsMetal, bool AlertAI, float Size);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
