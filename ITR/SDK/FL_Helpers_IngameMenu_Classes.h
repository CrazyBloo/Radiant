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
	 * BlueprintGeneratedClass FL_Helpers_IngameMenu.FL_Helpers_IngameMenu_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFL_Helpers_IngameMenu_C : public UBlueprintFunctionLibrary
	{
	public:
		void IsIngameMenuActive(class UObject* __WorldContext, bool* Active);
		void CloseIngameMenu(class UObject* __WorldContext);
		void SwitchIngameMenu(class UObject* __WorldContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
