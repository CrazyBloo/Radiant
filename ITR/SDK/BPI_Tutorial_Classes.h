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
	 * BlueprintGeneratedClass BPI_Tutorial.BPI_Tutorial_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPI_Tutorial_C : public UInterface
	{
	public:
		void TargetActorHeldInHand(bool IsHeld, bool HeldInLeft);
		void ItemREmovedFromBin();
		void ItemPutToBin();
		void LockFunctions(bool lock);
		void SetControllActor(class ABPA_TutorStep_C* Ref);
		void ItemsBought();
		void ItemsSold();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
