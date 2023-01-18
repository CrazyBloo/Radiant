/**
 * Name: Into_The_Radius_VR
 * Version: 2.5.1
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
	 * 		Name   -> Function BP_ImpactFX.BP_ImpactFX_C.ActivateDecal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMaterialInstance*                           ParentMaterial                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTransform                                  Transform                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		class USceneComponent*                             AttachTo                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ImpactFX_C::ActivateDecal(class UMaterialInstance* ParentMaterial, const struct FTransform& Transform, class USceneComponent* AttachTo)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ImpactFX.BP_ImpactFX_C.ActivateDecal");
		
		ABP_ImpactFX_C_ActivateDecal_Params params {};
		params.ParentMaterial = ParentMaterial;
		params.Transform = Transform;
		params.AttachTo = AttachTo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ImpactFX.BP_ImpactFX_C.ActiveEmitter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UParticleSystem*                             EmitterTemplate                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     ReflectionVector                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UParticleSystemComponent*                    ParticalComponentRef                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ImpactFX_C::ActiveEmitter(class UParticleSystem* EmitterTemplate, const struct FVector& ReflectionVector, class UParticleSystemComponent** ParticalComponentRef)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ImpactFX.BP_ImpactFX_C.ActiveEmitter");
		
		ABP_ImpactFX_C_ActiveEmitter_Params params {};
		params.EmitterTemplate = EmitterTemplate;
		params.ReflectionVector = ReflectionVector;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ParticalComponentRef != nullptr)
			*ParticalComponentRef = params.ParticalComponentRef;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ImpactFX.BP_ImpactFX_C.ActivateAudio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Distance                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USoundBase*                                  Sound                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              VolumeMult                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MinDelay                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ImpactFX_C::ActivateAudio(float Distance, class USoundBase* Sound, float VolumeMult, float MinDelay)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ImpactFX.BP_ImpactFX_C.ActivateAudio");
		
		ABP_ImpactFX_C_ActivateAudio_Params params {};
		params.Distance = Distance;
		params.Sound = Sound;
		params.VolumeMult = VolumeMult;
		params.MinDelay = MinDelay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ImpactFX.BP_ImpactFX_C.Setup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRadiusImpactInfo                           Info                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_ImpactFX_C::Setup(const struct FRadiusImpactInfo& Info)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ImpactFX.BP_ImpactFX_C.Setup");
		
		ABP_ImpactFX_C_Setup_Params params {};
		params.Info = Info;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ImpactFX.BP_ImpactFX_C.ExecuteUbergraph_BP_ImpactFX
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ImpactFX_C::ExecuteUbergraph_BP_ImpactFX(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ImpactFX.BP_ImpactFX_C.ExecuteUbergraph_BP_ImpactFX");
		
		ABP_ImpactFX_C_ExecuteUbergraph_BP_ImpactFX_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_ImpactFX_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ImpactFX_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_ImpactFX.BP_ImpactFX_C");
		return ptr;
	}

}


