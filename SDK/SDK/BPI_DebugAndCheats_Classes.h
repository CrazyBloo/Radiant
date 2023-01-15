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
	 * BlueprintGeneratedClass BPI_DebugAndCheats.BPI_DebugAndCheats_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPI_DebugAndCheats_C : public UInterface
	{
	public:
		void CheatShowActorsOfClass(class UClass* Class);
		void SwitchCheatShowClimableActors();
		void GetCheatShowClimabledistance(int32_t* Distance);
		void SwitchNightVision();
		void SwitchCheatShowItems();
		void SetCheatShowItems(int32_t Value);
		void GetCheatShowItems(int32_t* Value);
		void SwitchCheatSpeed();
		void SetCheatSpeed(bool Value);
		void GetCheatSpeed(bool* Value);
		void SwitchCheatShowNearbyNPCs();
		void SetCheatShowNearbyNPCs(bool Value);
		void GetCheatShowNearbyNPCs(bool* Value);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
