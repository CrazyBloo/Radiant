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
	 * BlueprintGeneratedClass FL_Helpers_Subtitles.FL_Helpers_Subtitles_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFL_Helpers_Subtitles_C : public UBlueprintFunctionLibrary
	{
	public:
		void ShowSaveIcon(bool bAutoSave, class UObject* __WorldContext);
		void HideSubtitles(class UObject* __WorldContext);
		void ShowSubtitles(const class FText& Text, float Duration, EPRSubtitleType Type, bool bSwitchable, class UObject* __WorldContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
