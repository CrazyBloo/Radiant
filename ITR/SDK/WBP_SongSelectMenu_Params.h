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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function WBP_SongSelectMenu.WBP_SongSelectMenu_C.PreConstruct
	 */
	struct UWBP_SongSelectMenu_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_SongSelectMenu.WBP_SongSelectMenu_C.InitSongButtons
	 */
	struct UWBP_SongSelectMenu_C_InitSongButtons_Params
	{	};

	/**
	 * Function WBP_SongSelectMenu.WBP_SongSelectMenu_C.SelectSong
	 */
	struct UWBP_SongSelectMenu_C_SelectSong_Params
	{
	public:
		class UWBP_SongButton_C*                                   PressedButton;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_SongSelectMenu.WBP_SongSelectMenu_C.ExecuteUbergraph_WBP_SongSelectMenu
	 */
	struct UWBP_SongSelectMenu_C_ExecuteUbergraph_WBP_SongSelectMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_SongSelectMenu.WBP_SongSelectMenu_C.OnSongSelected__DelegateSignature
	 */
	struct UWBP_SongSelectMenu_C_OnSongSelected__DelegateSignature_Params
	{
	public:
		class FName                                                SongID;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
