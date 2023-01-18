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
	 * BlueprintGeneratedClass AIC_NPC.AIC_NPC_C
	 * Size -> 0x0000 (FullSize[0x0398] - InheritedSize[0x0398])
	 */
	class AAIC_NPC_C : public ADetourCrowdAIController
	{
	public:
		class FText GetDamageDealerName();
		struct FGameplayTag GetDamageDealerTag();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
