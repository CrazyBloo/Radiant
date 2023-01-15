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
	 * Class OnlineSubsystemOculus.OculusCreateSessionCallbackProxy
	 * Size -> 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
	 */
	class UOculusCreateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VI0S[0x48];                                  // 0x0050(0x0048) MISSED OFFSET (PADDING)

	public:
		class UOculusCreateSessionCallbackProxy* CreateSession(int32_t PublicConnections, const class FString& OculusMatchmakingPool);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemOculus.OculusEntitlementCallbackProxy
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UOculusEntitlementCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class UOculusEntitlementCallbackProxy* VerifyEntitlement();
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemOculus.OculusFindSessionsCallbackProxy
	 * Size -> 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
	 */
	class UOculusFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5Z79[0x48];                                  // 0x0050(0x0048) MISSED OFFSET (PADDING)

	public:
		class UOculusFindSessionsCallbackProxy* FindModeratedSessions(int32_t MaxResults);
		class UOculusFindSessionsCallbackProxy* FindMatchmakingSessions(int32_t MaxResults, const class FString& OculusMatchmakingPool);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemOculus.OculusIdentityCallbackProxy
	 * Size -> 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
	 */
	class UOculusIdentityCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_26RS[0x10];                                  // 0x0050(0x0010) MISSED OFFSET (PADDING)

	public:
		class UOculusIdentityCallbackProxy* GetOculusIdentity(int32_t LocalUserNum);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemOculus.OculusNetConnection
	 * Size -> 0x0010 (FullSize[0x1C58] - InheritedSize[0x1C48])
	 */
	class UOculusNetConnection : public UIpConnection
	{
	public:
		unsigned char                                              UnknownData_XMJJ[0x10];                                  // 0x1C48(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemOculus.OculusNetDriver
	 * Size -> 0x00B8 (FullSize[0x0888] - InheritedSize[0x07D0])
	 */
	class UOculusNetDriver : public UIpNetDriver
	{
	public:
		unsigned char                                              UnknownData_N36O[0xB8];                                  // 0x07D0(0x00B8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemOculus.OculusUpdateSessionCallbackProxy
	 * Size -> 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
	 */
	class UOculusUpdateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WWLS[0x20];                                  // 0x0050(0x0020) MISSED OFFSET (PADDING)

	public:
		class UOculusUpdateSessionCallbackProxy* SetSessionEnqueue(bool bShouldEnqueueInMatchmakingPool);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
