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
	 * BlueprintGeneratedClass BPI_ItemInfos.BPI_ItemInfos_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPI_ItemInfos_C : public UInterface
	{
	public:
		void GetInfoObject(bool Left, class ABP_ItemInfo_C** Actor);
		void GetInfoFirstPivot(bool Left, class USceneComponent** Pivot);
		void ToggleInfos();
		void ShowInfo(bool Left, bool toggle);
		void IsInfoShown(bool Left, bool* shown);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
