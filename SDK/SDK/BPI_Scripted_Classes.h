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
	 * BlueprintGeneratedClass BPI_Scripted.BPI_Scripted_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPI_Scripted_C : public UInterface
	{
	public:
		void SetControll(class ABP_Tutorial_Mission_C* TutSeq);
		void ResetSpeed();
		void Trigger();
		void SetCrouch(bool Crouch);
		void SetSpeed(float NewSpeed);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
