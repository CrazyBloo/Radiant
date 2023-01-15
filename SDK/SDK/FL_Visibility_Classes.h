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
	 * BlueprintGeneratedClass FL_Visibility.FL_Visibility_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFL_Visibility_C : public UBlueprintFunctionLibrary
	{
	public:
		void HideWidgetInQuest(class UWidget* PCWidget, class UObject* __WorldContext);
		void HideWidgetsInQuest(TArray<class UWidget*>* PCWidgets, class UObject* __WorldContext);
		void CheckHitsForTarget(TArray<class UObject*>* ObjectsToIgnore, class AActor* testActor, TArray<struct FHitResult>* Hits, class UObject* __WorldContext, bool* success);
		void FilterStealthHits(TArray<class UObject*>* ObjectsToIgnore, class AActor* testActor, TArray<struct FHitResult>* Hits, class UObject* __WorldContext, TArray<struct FHitResult>* Result, bool* success);
		void IsComponentStealthTagged(class UPrimitiveComponent* comp, class UObject* __WorldContext, bool* Result);
		void CheckHitsForStealth(class AActor* testActor, TArray<struct FHitResult>* Hits, class UObject* __WorldContext, bool* Result);
		void CheckActorBelonging(class AActor* ReferenceActor, class AActor* testActor, class UObject* __WorldContext, bool* Result);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
