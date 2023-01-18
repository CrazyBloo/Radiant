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
	 * BlueprintGeneratedClass BP_Map_Level.BP_Map_Level_C
	 * Size -> 0x0120 (FullSize[0x03B8] - InheritedSize[0x0298])
	 */
	class ABP_Map_Level_C : public APRBasicActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0298(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                SM_Map;                                                  // 0x02A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    Widget;                                                  // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Scene;                                                   // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<class UMissionData*>                                MissionsData;                                            // 0x02B8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FGameplayTag                                        MapLevelTag;                                             // 0x02C8(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash
		struct FVector                                             markersScale;                                            // 0x02D0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_O90L[0x4];                                   // 0x02DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EMapMarker, float>                                    bigMarkersScaleByType;                                   // 0x02E0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		struct FMinMaxFloat                                        MapRange;                                                // 0x0330(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		class UWidgetComponent*                                    MarkerPlayerPosition;                                    // 0x0338(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             levelCenterLocation;                                     // 0x0340(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RotationAngle;                                           // 0x034C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            mapDynamicMaterial;                                      // 0x0350(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       NoMap;                                                   // 0x0358(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ShowPlayer;                                              // 0x0359(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       BigIcons;                                                // 0x035A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PDHA[0x1];                                   // 0x035B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MapScale;                                                // 0x035C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           MapSizeMin;                                              // 0x0360(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           MapSizeMax;                                              // 0x0368(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMissionData*                                        PreviewMissionData;                                      // 0x0370(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    MarkerDeath;                                             // 0x0378(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    MarkerCamp;                                              // 0x0380(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    MarkerGateHub;                                           // 0x0388(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    MarkerGateShortcut;                                      // 0x0390(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UWidgetComponent*>                            MarkersGates;                                            // 0x0398(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class UWidgetComponent*>                            MarkersObjectives;                                       // 0x03A8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference

	public:
		void HideMarkers();
		bool ShowPlayerPositionMarker();
		void CreateMarker(EMapMarker Marker, class UWidgetComponent** WidgetComponent);
		void UpdateMarker(class UWidgetComponent* markerWidget, EMapMarker MarkerType, const struct FVector& Location, float ScaleMultiplier);
		void RemapLocation(const struct FVector& relativeRealLocation, struct FVector* relativeMapLocation);
		void GetMaterialInterface(bool* Empty, class UMaterialInterface** MaterialInterface);
		void UpdateLevelTag();
		void UpdateMapPicture();
		void UpdatePlayerPosition();
		void SetupMarkers(TArray<class UMissionData*>* MissionsData);
		void UpdateMap();
		void UserConstructionScript();
		void OnGameStarted();
		void OnMissionEvent(class UMissionData* MissionData);
		void OnLevelStartedEvent(const struct FGameplayTag& Value);
		void OnCustomMapMarkPassed(const struct FGameplayTag& Value);
		void OnPreview(class UMissionData* MissionData);
		void ExecuteUbergraph_BP_Map_Level(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
