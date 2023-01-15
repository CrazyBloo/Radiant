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
	 * 		Name   -> Function OnlineSubsystemOculus.OculusCreateSessionCallbackProxy.CreateSession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PublicConnections                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      OculusMatchmakingPool                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UOculusCreateSessionCallbackProxy* UOculusCreateSessionCallbackProxy::CreateSession(int32_t PublicConnections, const class FString& OculusMatchmakingPool)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OnlineSubsystemOculus.OculusCreateSessionCallbackProxy.CreateSession");
		
		UOculusCreateSessionCallbackProxy_CreateSession_Params params {};
		params.PublicConnections = PublicConnections;
		params.OculusMatchmakingPool = OculusMatchmakingPool;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOculusCreateSessionCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOculusCreateSessionCallbackProxy::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemOculus.OculusCreateSessionCallbackProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineSubsystemOculus.OculusEntitlementCallbackProxy.VerifyEntitlement
	 * 		Flags  -> ()
	 */
	class UOculusEntitlementCallbackProxy* UOculusEntitlementCallbackProxy::VerifyEntitlement()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OnlineSubsystemOculus.OculusEntitlementCallbackProxy.VerifyEntitlement");
		
		UOculusEntitlementCallbackProxy_VerifyEntitlement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOculusEntitlementCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOculusEntitlementCallbackProxy::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemOculus.OculusEntitlementCallbackProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineSubsystemOculus.OculusFindSessionsCallbackProxy.FindModeratedSessions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MaxResults                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UOculusFindSessionsCallbackProxy* UOculusFindSessionsCallbackProxy::FindModeratedSessions(int32_t MaxResults)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OnlineSubsystemOculus.OculusFindSessionsCallbackProxy.FindModeratedSessions");
		
		UOculusFindSessionsCallbackProxy_FindModeratedSessions_Params params {};
		params.MaxResults = MaxResults;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineSubsystemOculus.OculusFindSessionsCallbackProxy.FindMatchmakingSessions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MaxResults                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      OculusMatchmakingPool                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UOculusFindSessionsCallbackProxy* UOculusFindSessionsCallbackProxy::FindMatchmakingSessions(int32_t MaxResults, const class FString& OculusMatchmakingPool)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OnlineSubsystemOculus.OculusFindSessionsCallbackProxy.FindMatchmakingSessions");
		
		UOculusFindSessionsCallbackProxy_FindMatchmakingSessions_Params params {};
		params.MaxResults = MaxResults;
		params.OculusMatchmakingPool = OculusMatchmakingPool;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOculusFindSessionsCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOculusFindSessionsCallbackProxy::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemOculus.OculusFindSessionsCallbackProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineSubsystemOculus.OculusIdentityCallbackProxy.GetOculusIdentity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            LocalUserNum                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UOculusIdentityCallbackProxy* UOculusIdentityCallbackProxy::GetOculusIdentity(int32_t LocalUserNum)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OnlineSubsystemOculus.OculusIdentityCallbackProxy.GetOculusIdentity");
		
		UOculusIdentityCallbackProxy_GetOculusIdentity_Params params {};
		params.LocalUserNum = LocalUserNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOculusIdentityCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOculusIdentityCallbackProxy::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemOculus.OculusIdentityCallbackProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOculusNetConnection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOculusNetConnection::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemOculus.OculusNetConnection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOculusNetDriver.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOculusNetDriver::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemOculus.OculusNetDriver");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineSubsystemOculus.OculusUpdateSessionCallbackProxy.SetSessionEnqueue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bShouldEnqueueInMatchmakingPool                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UOculusUpdateSessionCallbackProxy* UOculusUpdateSessionCallbackProxy::SetSessionEnqueue(bool bShouldEnqueueInMatchmakingPool)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function OnlineSubsystemOculus.OculusUpdateSessionCallbackProxy.SetSessionEnqueue");
		
		UOculusUpdateSessionCallbackProxy_SetSessionEnqueue_Params params {};
		params.bShouldEnqueueInMatchmakingPool = bShouldEnqueueInMatchmakingPool;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOculusUpdateSessionCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOculusUpdateSessionCallbackProxy::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemOculus.OculusUpdateSessionCallbackProxy");
		return ptr;
	}

}


