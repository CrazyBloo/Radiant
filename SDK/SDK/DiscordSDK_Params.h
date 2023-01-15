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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function DiscordSDK.DiscordObject.StopDiscordTimer
	 */
	struct UDiscordObject_StopDiscordTimer_Params
	{	};

	/**
	 * Function DiscordSDK.DiscordObject.StartDiscordTimer
	 */
	struct UDiscordObject_StartDiscordTimer_Params
	{	};

	/**
	 * Function DiscordSDK.DiscordObject.SetState
	 */
	struct UDiscordObject_SetState_Params
	{
	public:
		class FString                                              InNewState;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DiscordSDK.DiscordObject.SetSmallImageText
	 */
	struct UDiscordObject_SetSmallImageText_Params
	{
	public:
		class FString                                              InKeyName;                                               // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DiscordSDK.DiscordObject.SetSmallImage
	 */
	struct UDiscordObject_SetSmallImage_Params
	{
	public:
		class FString                                              InKeyName;                                               // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DiscordSDK.DiscordObject.SetPartySize
	 */
	struct UDiscordObject_SetPartySize_Params
	{
	public:
		int32_t                                                    InNewPartySize;                                          // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DiscordSDK.DiscordObject.SetPartyMax
	 */
	struct UDiscordObject_SetPartyMax_Params
	{
	public:
		int32_t                                                    InNewPartyMax;                                           // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DiscordSDK.DiscordObject.SetPartyId
	 */
	struct UDiscordObject_SetPartyId_Params
	{
	public:
		class FString                                              InNewPartyId;                                            // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DiscordSDK.DiscordObject.SetLargeImageText
	 */
	struct UDiscordObject_SetLargeImageText_Params
	{
	public:
		class FString                                              InKeyName;                                               // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DiscordSDK.DiscordObject.SetLargeImage
	 */
	struct UDiscordObject_SetLargeImage_Params
	{
	public:
		class FString                                              InKeyName;                                               // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DiscordSDK.DiscordObject.SetJoinSecret
	 */
	struct UDiscordObject_SetJoinSecret_Params
	{
	public:
		class FString                                              InNewJoinSecret;                                         // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DiscordSDK.DiscordObject.SetDetails
	 */
	struct UDiscordObject_SetDetails_Params
	{
	public:
		class FString                                              InNewDetails;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DiscordSDK.DiscordObject.GetDiscordResultString
	 */
	struct UDiscordObject_GetDiscordResultString_Params
	{
	public:
		EDiscordReturnResult                                       InDiscordResult;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ZMDM[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DiscordSDK.DiscordObject.GetDiscordObject
	 */
	struct UDiscordObject_GetDiscordObject_Params
	{
	public:
		class UDiscordObject*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function DiscordSDK.DiscordObject.DestroyDiscordObject
	 */
	struct UDiscordObject_DestroyDiscordObject_Params
	{	};

	/**
	 * Function DiscordSDK.DiscordObject.CreateDiscordObject
	 */
	struct UDiscordObject_CreateDiscordObject_Params
	{
	public:
		class FString                                              InClientID;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bRequireDiscordRunning;                                  // 0x0010(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bStartElapsedTimer;                                      // 0x0011(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
