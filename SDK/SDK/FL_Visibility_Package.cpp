/**
 * Name: Into_The_Radius_VR
 * Version: 2.4
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_Visibility.FL_Visibility_C.HideWidgetInQuest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     PCWidget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_Visibility_C::HideWidgetInQuest(class UWidget* PCWidget, class UObject* __WorldContext)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Visibility.FL_Visibility_C.HideWidgetInQuest");
		
		UFL_Visibility_C_HideWidgetInQuest_Params params {};
		params.PCWidget = PCWidget;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_Visibility.FL_Visibility_C.HideWidgetsInQuest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UWidget*>                             PCWidgets                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_Visibility_C::HideWidgetsInQuest(TArray<class UWidget*>* PCWidgets, class UObject* __WorldContext)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Visibility.FL_Visibility_C.HideWidgetsInQuest");
		
		UFL_Visibility_C_HideWidgetsInQuest_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PCWidgets != nullptr)
			*PCWidgets = params.PCWidgets;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_Visibility.FL_Visibility_C.CheckHitsForTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UObject*>                             ObjectsToIgnore                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class AActor*                                      testActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FHitResult>                          Hits                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFL_Visibility_C::CheckHitsForTarget(TArray<class UObject*>* ObjectsToIgnore, class AActor* testActor, TArray<struct FHitResult>* Hits, class UObject* __WorldContext, bool* success)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Visibility.FL_Visibility_C.CheckHitsForTarget");
		
		UFL_Visibility_C_CheckHitsForTarget_Params params {};
		params.testActor = testActor;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ObjectsToIgnore != nullptr)
			*ObjectsToIgnore = params.ObjectsToIgnore;
		if (Hits != nullptr)
			*Hits = params.Hits;
		if (success != nullptr)
			*success = params.success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_Visibility.FL_Visibility_C.FilterStealthHits
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UObject*>                             ObjectsToIgnore                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class AActor*                                      testActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FHitResult>                          Hits                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FHitResult>                          Result                                                     (Parm, OutParm, ContainsInstancedReference)
	 * 		bool                                               success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFL_Visibility_C::FilterStealthHits(TArray<class UObject*>* ObjectsToIgnore, class AActor* testActor, TArray<struct FHitResult>* Hits, class UObject* __WorldContext, TArray<struct FHitResult>* Result, bool* success)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Visibility.FL_Visibility_C.FilterStealthHits");
		
		UFL_Visibility_C_FilterStealthHits_Params params {};
		params.testActor = testActor;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ObjectsToIgnore != nullptr)
			*ObjectsToIgnore = params.ObjectsToIgnore;
		if (Hits != nullptr)
			*Hits = params.Hits;
		if (Result != nullptr)
			*Result = params.Result;
		if (success != nullptr)
			*success = params.success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_Visibility.FL_Visibility_C.IsComponentStealthTagged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         comp                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFL_Visibility_C::IsComponentStealthTagged(class UPrimitiveComponent* comp, class UObject* __WorldContext, bool* Result)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Visibility.FL_Visibility_C.IsComponentStealthTagged");
		
		UFL_Visibility_C_IsComponentStealthTagged_Params params {};
		params.comp = comp;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_Visibility.FL_Visibility_C.CheckHitsForStealth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      testActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FHitResult>                          Hits                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFL_Visibility_C::CheckHitsForStealth(class AActor* testActor, TArray<struct FHitResult>* Hits, class UObject* __WorldContext, bool* Result)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Visibility.FL_Visibility_C.CheckHitsForStealth");
		
		UFL_Visibility_C_CheckHitsForStealth_Params params {};
		params.testActor = testActor;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Hits != nullptr)
			*Hits = params.Hits;
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FL_Visibility.FL_Visibility_C.CheckActorBelonging
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      ReferenceActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      testActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFL_Visibility_C::CheckActorBelonging(class AActor* ReferenceActor, class AActor* testActor, class UObject* __WorldContext, bool* Result)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_Visibility.FL_Visibility_C.CheckActorBelonging");
		
		UFL_Visibility_C_CheckActorBelonging_Params params {};
		params.ReferenceActor = ReferenceActor;
		params.testActor = testActor;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFL_Visibility_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFL_Visibility_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass FL_Visibility.FL_Visibility_C");
		return ptr;
	}

}


