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
	 * Class DiscordSDK.DiscordObject
	 * Size -> 0x00D0 (FullSize[0x00F8] - InheritedSize[0x0028])
	 */
	class UDiscordObject : public UObject
	{
	public:
		unsigned char                                              UnknownData_9WCT[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnStateSet;                                              // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnDetailsSet;                                            // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnLargeImageSet;                                         // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSmallImageSet;                                         // 0x0068(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPartyIdSet;                                            // 0x0078(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPartySizeSet;                                          // 0x0088(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPartyMaxSet;                                           // 0x0098(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnJoinSecretSet;                                         // 0x00A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnLargeTextSet;                                          // 0x00B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSmallTextSet;                                          // 0x00C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTimerStart;                                            // 0x00D8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTimerEnd;                                              // 0x00E8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void StopDiscordTimer();
		void StartDiscordTimer();
		void SetState(const class FString& InNewState);
		void SetSmallImageText(const class FString& InKeyName);
		void SetSmallImage(const class FString& InKeyName);
		void SetPartySize(int32_t InNewPartySize);
		void SetPartyMax(int32_t InNewPartyMax);
		void SetPartyId(const class FString& InNewPartyId);
		void SetLargeImageText(const class FString& InKeyName);
		void SetLargeImage(const class FString& InKeyName);
		void SetJoinSecret(const class FString& InNewJoinSecret);
		void SetDetails(const class FString& InNewDetails);
		class FString GetDiscordResultString(EDiscordReturnResult InDiscordResult);
		class UDiscordObject* GetDiscordObject();
		void DestroyDiscordObject();
		void CreateDiscordObject(const class FString& InClientID, bool bRequireDiscordRunning, bool bStartElapsedTimer);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
