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
	 * BlueprintGeneratedClass FL_Helpers_Player.FL_Helpers_Player_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFL_Helpers_Player_C : public UBlueprintFunctionLibrary
	{
	public:
		void SwitchInventoryMode(class UObject* __WorldContext);
		void SetInventoryMode(EInventoryMode , class UObject* __WorldContext);
		void GetInventoryMode(class UObject* __WorldContext, EInventoryMode* );
		void IsDressingMode(class UObject* __WorldContext, bool* );
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
