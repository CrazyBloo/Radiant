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
	 * BlueprintGeneratedClass FL_ComponentsHelpers.FL_ComponentsHelpers_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFL_ComponentsHelpers_C : public UBlueprintFunctionLibrary
	{
	public:
		void UpdatePause(class UAudioComponent* Target, bool Pause, class UObject* __WorldContext);
		void GetInfosController(class UObject* __WorldContext, class UObject** Controller);
		void GetYawRotator(class USceneComponent* Target, class UObject* __WorldContext, struct FRotator* Enabled);
		void CallStopAttack(class AActor* Actor, class UObject* __WorldContext, bool* success);
		void KillSceneComponent(class USceneComponent* Target, bool KillChildren, class UObject* __WorldContext);
		void GetSkillRef(class AActor* Actor, ESkillPhase Phase, class UObject* __WorldContext, bool* success, class UObject** SkillRef);
		void SetEnabledToAll(TArray<class UActorComponent*>* Targets, bool Enabled, class UObject* __WorldContext);
		void Disable(class UActorComponent* Target, class UObject* __WorldContext);
		void enable(class UActorComponent* Target, class UObject* __WorldContext);
		void SetEnabled(class UActorComponent* Target, bool Enabled, class UObject* __WorldContext);
		void IsEnabled(class UActorComponent* Target, class UObject* __WorldContext, bool* Enabled);
		void GetCommandsEventedRef(class AActor* Actor, class UObject* __WorldContext, bool* success, class UObject** CommandsEventedRef);
		void GetAnimInstance(class AActor* Actor, class UObject* __WorldContext, bool* success, class UAnimInstance** AnimInstance);
		void GetAttackRef(class AActor* Actor, class UObject* __WorldContext, bool* success, class UObject** AttackRef);
		void KillComponent(class UActorComponent* Target, class UObject* __WorldContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
