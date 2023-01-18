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
	 * WidgetBlueprintGeneratedClass WBPA_Page.WBPA_Page_C
	 * Size -> 0x0010 (FullSize[0x0278] - InheritedSize[0x0268])
	 */
	class UWBPA_Page_C : public UWPage
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0268(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ABP_MissionComputer_C*                               ComputerRef;                                             // 0x0270(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetComputerRef(class ABP_MissionComputer_C** ComputerRef);
		void Construct();
		void ShowPage();
		void PageTick();
		void HidePage();
		void ExecuteUbergraph_WBPA_Page(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
