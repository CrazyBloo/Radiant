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
	 * 		Name   -> Function FL_TreeTasks.FL_TreeTasks_C.GetCharActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      ControllerActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      CharActor                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_TreeTasks_C::GetCharActor(class AActor* ControllerActor, class UObject* __WorldContext, class AActor** CharActor)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function FL_TreeTasks.FL_TreeTasks_C.GetCharActor");
		
		UFL_TreeTasks_C_GetCharActor_Params params {};
		params.ControllerActor = ControllerActor;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CharActor != nullptr)
			*CharActor = params.CharActor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFL_TreeTasks_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFL_TreeTasks_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass FL_TreeTasks.FL_TreeTasks_C");
		return ptr;
	}

}


