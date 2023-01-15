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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BPI_Skill.BPI_Skill_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPI_Skill_C : public UInterface
	{
	public:
		void GetSkillPhases(TArray<ESkillPhase>* Phases);
		void NeedWaitForReadyAfter(bool* NeedWait);
		void NeedWaitForReadyBefore(bool* NeedWait);
		void IsSkillInProgress(bool* InProgress);
		void UseSkill(bool* success);
		void IsSkillReady(bool* SkillReady, float* CooldownLeft);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
