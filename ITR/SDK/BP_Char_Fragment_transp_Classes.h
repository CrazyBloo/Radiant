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
	 * BlueprintGeneratedClass BP_Char_Fragment_transp.BP_Char_Fragment_transp_C
	 * Size -> 0x0008 (FullSize[0x0900] - InheritedSize[0x08F8])
	 */
	class ABP_Char_Fragment_transp_C : public ABP_Char_Fragment_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x08F8(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
		void LoadAdditionalSettings();
		void ExecuteUbergraph_BP_Char_Fragment_transp(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
