/**
 * Name: Into_The_Radius_VR
 * Version: 2.5.1
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
	 * 		Name   -> Function DiscordSDK.DiscordObject.StopDiscordTimer
	 * 		Flags  -> ()
	 */
	void UDiscordObject::StopDiscordTimer()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function DiscordSDK.DiscordObject.StopDiscordTimer");
		
		UDiscordObject_StopDiscordTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DiscordSDK.DiscordObject.StartDiscordTimer
	 * 		Flags  -> ()
	 */
	void UDiscordObject::StartDiscordTimer()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function DiscordSDK.DiscordObject.StartDiscordTimer");
		
		UDiscordObject_StartDiscordTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DiscordSDK.DiscordObject.SetState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InNewState                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDiscordObject::SetState(const class FString& InNewState)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function DiscordSDK.DiscordObject.SetState");
		
		UDiscordObject_SetState_Params params {};
		params.InNewState = InNewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DiscordSDK.DiscordObject.SetSmallImageText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InKeyName                                                  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDiscordObject::SetSmallImageText(const class FString& InKeyName)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function DiscordSDK.DiscordObject.SetSmallImageText");
		
		UDiscordObject_SetSmallImageText_Params params {};
		params.InKeyName = InKeyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DiscordSDK.DiscordObject.SetSmallImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InKeyName                                                  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDiscordObject::SetSmallImage(const class FString& InKeyName)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function DiscordSDK.DiscordObject.SetSmallImage");
		
		UDiscordObject_SetSmallImage_Params params {};
		params.InKeyName = InKeyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DiscordSDK.DiscordObject.SetPartySize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InNewPartySize                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDiscordObject::SetPartySize(int32_t InNewPartySize)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function DiscordSDK.DiscordObject.SetPartySize");
		
		UDiscordObject_SetPartySize_Params params {};
		params.InNewPartySize = InNewPartySize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DiscordSDK.DiscordObject.SetPartyMax
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InNewPartyMax                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDiscordObject::SetPartyMax(int32_t InNewPartyMax)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function DiscordSDK.DiscordObject.SetPartyMax");
		
		UDiscordObject_SetPartyMax_Params params {};
		params.InNewPartyMax = InNewPartyMax;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DiscordSDK.DiscordObject.SetPartyId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InNewPartyId                                               (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDiscordObject::SetPartyId(const class FString& InNewPartyId)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function DiscordSDK.DiscordObject.SetPartyId");
		
		UDiscordObject_SetPartyId_Params params {};
		params.InNewPartyId = InNewPartyId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DiscordSDK.DiscordObject.SetLargeImageText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InKeyName                                                  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDiscordObject::SetLargeImageText(const class FString& InKeyName)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function DiscordSDK.DiscordObject.SetLargeImageText");
		
		UDiscordObject_SetLargeImageText_Params params {};
		params.InKeyName = InKeyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DiscordSDK.DiscordObject.SetLargeImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InKeyName                                                  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDiscordObject::SetLargeImage(const class FString& InKeyName)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function DiscordSDK.DiscordObject.SetLargeImage");
		
		UDiscordObject_SetLargeImage_Params params {};
		params.InKeyName = InKeyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DiscordSDK.DiscordObject.SetJoinSecret
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InNewJoinSecret                                            (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDiscordObject::SetJoinSecret(const class FString& InNewJoinSecret)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function DiscordSDK.DiscordObject.SetJoinSecret");
		
		UDiscordObject_SetJoinSecret_Params params {};
		params.InNewJoinSecret = InNewJoinSecret;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DiscordSDK.DiscordObject.SetDetails
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InNewDetails                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDiscordObject::SetDetails(const class FString& InNewDetails)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function DiscordSDK.DiscordObject.SetDetails");
		
		UDiscordObject_SetDetails_Params params {};
		params.InNewDetails = InNewDetails;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DiscordSDK.DiscordObject.GetDiscordResultString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDiscordReturnResult                               InDiscordResult                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UDiscordObject::GetDiscordResultString(EDiscordReturnResult InDiscordResult)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function DiscordSDK.DiscordObject.GetDiscordResultString");
		
		UDiscordObject_GetDiscordResultString_Params params {};
		params.InDiscordResult = InDiscordResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DiscordSDK.DiscordObject.GetDiscordObject
	 * 		Flags  -> ()
	 */
	class UDiscordObject* UDiscordObject::GetDiscordObject()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function DiscordSDK.DiscordObject.GetDiscordObject");
		
		UDiscordObject_GetDiscordObject_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DiscordSDK.DiscordObject.DestroyDiscordObject
	 * 		Flags  -> ()
	 */
	void UDiscordObject::DestroyDiscordObject()
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function DiscordSDK.DiscordObject.DestroyDiscordObject");
		
		UDiscordObject_DestroyDiscordObject_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DiscordSDK.DiscordObject.CreateDiscordObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InClientID                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRequireDiscordRunning                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bStartElapsedTimer                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDiscordObject::CreateDiscordObject(const class FString& InClientID, bool bRequireDiscordRunning, bool bStartElapsedTimer)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function DiscordSDK.DiscordObject.CreateDiscordObject");
		
		UDiscordObject_CreateDiscordObject_Params params {};
		params.InClientID = InClientID;
		params.bRequireDiscordRunning = bRequireDiscordRunning;
		params.bStartElapsedTimer = bStartElapsedTimer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDiscordObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDiscordObject::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DiscordSDK.DiscordObject");
		return ptr;
	}

}


