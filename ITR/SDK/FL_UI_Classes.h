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
	 * BlueprintGeneratedClass FL_UI.FL_UI_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFL_UI_C : public UBlueprintFunctionLibrary
	{
	public:
		void GetDurabiltiyRange(EItemDurability Durability, class UObject* __WorldContext, struct FMinMaxFloat* DuraRange, class FName* ParameterName);
		void FindDurParamName(float Durability, class UObject* __WorldContext, class FName* ParameterName);
		void PlayButtonSfx(class UObject* __WorldContext);
		void FindNearShopShowcase(const struct FVector& Location, class UObject* __WorldContext, class ABP_ShopShowcase_C** showcaseRef);
		void FindNearShopComputer(const struct FVector& Location, class UObject* __WorldContext, class ABP_ShopComputer_C** ShopCompRef);
		void FindNearShopBin(const struct FVector& Location, class UObject* __WorldContext, class ABP_ShopBin_C** shopBinRef);
		void InitTutorialButton(class UWidgetComponent* Button, const class FText& Text, bool Highlight, const class FScriptDelegate& OnButtonClicked, class UObject* __WorldContext);
		void SetDurabilityProgress(class UProgressBar* Progress, float Percent, class UObject* __WorldContext);
		void UpdateButtonTextColor(class UButton* Button, class UTextBlock* Text, class UObject* __WorldContext);
		void UpdateButtonStyle(class UButton* Button, bool selected, class UObject* __WorldContext);
		void FindTrainStorage(class UObject* __WorldContext, class ABP_TrainStorage_C** trainStorageRef);
		void FindMissionComputer(class UObject* __WorldContext, class ABP_MissionComputer_C** missionCompRef);
		void FindHealthBoothRef(class UObject* __WorldContext, class ABP_HealthBooth_C** healthBoothRef);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
