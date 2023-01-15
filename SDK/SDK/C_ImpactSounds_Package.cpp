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
	 * 		Name   -> Function C_ImpactSounds.C_ImpactSounds_C.SpawnFXFromDT
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPhysicalSurface                                   SurfaceType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Normal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InFloat                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UC_ImpactSounds_C::SpawnFXFromDT(EPhysicalSurface SurfaceType, const struct FVector& Location, const struct FVector& Normal, float InFloat)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function C_ImpactSounds.C_ImpactSounds_C.SpawnFXFromDT");
		
		UC_ImpactSounds_C_SpawnFXFromDT_Params params {};
		params.SurfaceType = SurfaceType;
		params.Location = Location;
		params.Normal = Normal;
		params.InFloat = InFloat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function C_ImpactSounds.C_ImpactSounds_C.PlayDartImpactSound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 * 		struct FVector                                     Impulse                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UC_ImpactSounds_C::PlayDartImpactSound(const struct FHitResult& Hit, const struct FVector& Impulse, class UObject* Actor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function C_ImpactSounds.C_ImpactSounds_C.PlayDartImpactSound");
		
		UC_ImpactSounds_C_PlayDartImpactSound_Params params {};
		params.Hit = Hit;
		params.Impulse = Impulse;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function C_ImpactSounds.C_ImpactSounds_C.PlayItemImpactSound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 * 		struct FVector                                     Impulse                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UC_ImpactSounds_C::PlayItemImpactSound(const struct FHitResult& Hit, const struct FVector& Impulse)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function C_ImpactSounds.C_ImpactSounds_C.PlayItemImpactSound");
		
		UC_ImpactSounds_C_PlayItemImpactSound_Params params {};
		params.Hit = Hit;
		params.Impulse = Impulse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function C_ImpactSounds.C_ImpactSounds_C.PlayKnifeImpactSound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 * 		struct FVector                                     Impulse                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UC_ImpactSounds_C::PlayKnifeImpactSound(const struct FHitResult& Hit, const struct FVector& Impulse, class UObject* Actor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function C_ImpactSounds.C_ImpactSounds_C.PlayKnifeImpactSound");
		
		UC_ImpactSounds_C_PlayKnifeImpactSound_Params params {};
		params.Hit = Hit;
		params.Impulse = Impulse;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function C_ImpactSounds.C_ImpactSounds_C.GetDropSoundFromTable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 * 		class USoundCue*                                   MetallShell                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USoundCue*                                   PlasticShell                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USoundCue*                                   BigItemDrop                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USoundCue*                                   SmallItemDrop                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USoundCue*                                   ItemHit                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UC_ImpactSounds_C::GetDropSoundFromTable(const struct FHitResult& Hit, class USoundCue** MetallShell, class USoundCue** PlasticShell, class USoundCue** BigItemDrop, class USoundCue** SmallItemDrop, class USoundCue** ItemHit)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function C_ImpactSounds.C_ImpactSounds_C.GetDropSoundFromTable");
		
		UC_ImpactSounds_C_GetDropSoundFromTable_Params params {};
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MetallShell != nullptr)
			*MetallShell = params.MetallShell;
		if (PlasticShell != nullptr)
			*PlasticShell = params.PlasticShell;
		if (BigItemDrop != nullptr)
			*BigItemDrop = params.BigItemDrop;
		if (SmallItemDrop != nullptr)
			*SmallItemDrop = params.SmallItemDrop;
		if (ItemHit != nullptr)
			*ItemHit = params.ItemHit;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function C_ImpactSounds.C_ImpactSounds_C.SpawnHitParticles
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPhysicalSurface                                   Selection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ScaleMult                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UC_ImpactSounds_C::SpawnHitParticles(EPhysicalSurface Selection, const struct FVector& Location, float ScaleMult)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function C_ImpactSounds.C_ImpactSounds_C.SpawnHitParticles");
		
		UC_ImpactSounds_C_SpawnHitParticles_Params params {};
		params.Selection = Selection;
		params.Location = Location;
		params.ScaleMult = ScaleMult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function C_ImpactSounds.C_ImpactSounds_C.CalcPitchAndVolumeMod
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      NoiseSourceActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     HitImpulse                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              PitchMult                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              VolumeMult                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UC_ImpactSounds_C::CalcPitchAndVolumeMod(class AActor* NoiseSourceActor, const struct FVector& HitImpulse, float* PitchMult, float* VolumeMult)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function C_ImpactSounds.C_ImpactSounds_C.CalcPitchAndVolumeMod");
		
		UC_ImpactSounds_C_CalcPitchAndVolumeMod_Params params {};
		params.NoiseSourceActor = NoiseSourceActor;
		params.HitImpulse = HitImpulse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PitchMult != nullptr)
			*PitchMult = params.PitchMult;
		if (VolumeMult != nullptr)
			*VolumeMult = params.VolumeMult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function C_ImpactSounds.C_ImpactSounds_C.PlayTargetHitSound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPhysicalSurface                                   Selection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              VolumeMultiplier                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              PitchMultiplier                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     InputPin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UC_ImpactSounds_C::PlayTargetHitSound(EPhysicalSurface Selection, float VolumeMultiplier, float PitchMultiplier, const struct FVector& InputPin)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function C_ImpactSounds.C_ImpactSounds_C.PlayTargetHitSound");
		
		UC_ImpactSounds_C_PlayTargetHitSound_Params params {};
		params.Selection = Selection;
		params.VolumeMultiplier = VolumeMultiplier;
		params.PitchMultiplier = PitchMultiplier;
		params.InputPin = InputPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function C_ImpactSounds.C_ImpactSounds_C.PlaySelfDropSound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPhysicalSurface                                   Selection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              VolumeMultiplier                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              PitchMultiplier                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  HitResult                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void UC_ImpactSounds_C::PlaySelfDropSound(EPhysicalSurface Selection, const struct FVector& Location, float VolumeMultiplier, float PitchMultiplier, const struct FHitResult& HitResult)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function C_ImpactSounds.C_ImpactSounds_C.PlaySelfDropSound");
		
		UC_ImpactSounds_C_PlaySelfDropSound_Params params {};
		params.Selection = Selection;
		params.Location = Location;
		params.VolumeMultiplier = VolumeMultiplier;
		params.PitchMultiplier = PitchMultiplier;
		params.HitResult = HitResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function C_ImpactSounds.C_ImpactSounds_C.PlayItemDropSound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 * 		struct FVector                                     HitImpulse                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      NoiseSourceActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EPhysicalSurface                                   SelfPhysMat                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               SpawnParticles                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UC_ImpactSounds_C::PlayItemDropSound(const struct FHitResult& Hit, const struct FVector& HitImpulse, class AActor* NoiseSourceActor, EPhysicalSurface SelfPhysMat, bool SpawnParticles)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function C_ImpactSounds.C_ImpactSounds_C.PlayItemDropSound");
		
		UC_ImpactSounds_C_PlayItemDropSound_Params params {};
		params.Hit = Hit;
		params.HitImpulse = HitImpulse;
		params.NoiseSourceActor = NoiseSourceActor;
		params.SelfPhysMat = SelfPhysMat;
		params.SpawnParticles = SpawnParticles;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function C_ImpactSounds.C_ImpactSounds_C.DestroySound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UC_ImpactSounds_C::DestroySound(class AActor* NewParam)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function C_ImpactSounds.C_ImpactSounds_C.DestroySound");
		
		UC_ImpactSounds_C_DestroySound_Params params {};
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function C_ImpactSounds.C_ImpactSounds_C.PlayShellHitSound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 * 		struct FVector                                     HitImpulse                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      NoiseSourceActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsMetal                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               AlertAI                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Size                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UC_ImpactSounds_C::PlayShellHitSound(const struct FHitResult& Hit, const struct FVector& HitImpulse, class AActor* NoiseSourceActor, bool IsMetal, bool AlertAI, float Size)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function C_ImpactSounds.C_ImpactSounds_C.PlayShellHitSound");
		
		UC_ImpactSounds_C_PlayShellHitSound_Params params {};
		params.Hit = Hit;
		params.HitImpulse = HitImpulse;
		params.NoiseSourceActor = NoiseSourceActor;
		params.IsMetal = IsMetal;
		params.AlertAI = AlertAI;
		params.Size = Size;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UC_ImpactSounds_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UC_ImpactSounds_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass C_ImpactSounds.C_ImpactSounds_C");
		return ptr;
	}

}


