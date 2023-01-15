﻿#pragma once

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
	 * Class ControlRig.ControlRig
	 * Size -> 0x0628 (FullSize[0x0650] - InheritedSize[0x0028])
	 */
	class UControlRig : public UObject
	{
	public:
		unsigned char                                              UnknownData_MWPR[0x1D];                                  // 0x0028(0x001D) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ERigExecutionType                                          ExecutionType;                                           // 0x0045(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FAL7[0x2];                                   // 0x0046(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class URigVM*                                              VM;                                                      // 0x0048(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FRigHierarchyContainer                              Hierarchy;                                               // 0x0050(0x0368) NativeAccessSpecifierPrivate
		unsigned char                                              GizmoLibrary[0x28];                                      // 0x03B8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              UnknownData_KXGM[0x10];                                  // 0x03E0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FName, struct FCachedPropertyPath>              InputProperties;                                         // 0x03F0(0x0050) Deprecated, NativeAccessSpecifierPrivate
		TMap<class FName, struct FCachedPropertyPath>              OutputProperties;                                        // 0x0440(0x0050) Deprecated, NativeAccessSpecifierPrivate
		struct FControlRigDrawContainer                            DrawContainer;                                           // 0x0490(0x0018) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LYYQ[0x18];                                  // 0x04A8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimationDataSourceRegistry*                        DataSourceRegistry;                                      // 0x04C0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class FName>                                        EventQueue;                                              // 0x04C8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WLO0[0x78];                                  // 0x04D8(0x0078) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigInfluenceMapPerEvent                            Influences;                                              // 0x0550(0x0060) NativeAccessSpecifierPrivate
		class UControlRig*                                         InteractionRig;                                          // 0x05B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              InteractionRigClass;                                     // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UAssetUserData*>                              AssetUserData;                                           // 0x05C0(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XF0I[0x80];                                  // 0x05D0(0x0080) MISSED OFFSET (PADDING)

	public:
		void SetInteractionRigClass(class UClass* InInteractionRigClass);
		void SetInteractionRig(class UControlRig* InInteractionRig);
		class UClass* GetInteractionRigClass();
		class UControlRig* GetInteractionRig();
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.AdditiveControlRig
	 * Size -> 0x0010 (FullSize[0x0660] - InheritedSize[0x0650])
	 */
	class UAdditiveControlRig : public UControlRig
	{
	public:
		unsigned char                                              UnknownData_JLKW[0x10];                                  // 0x0650(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.ControlRigAnimInstance
	 * Size -> 0x0008 (FullSize[0x02C0] - InheritedSize[0x02B8])
	 */
	class UControlRigAnimInstance : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_RE0I[0x8];                                   // 0x02B8(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.ControlRigBlueprintGeneratedClass
	 * Size -> 0x0000 (FullSize[0x0328] - InheritedSize[0x0328])
	 */
	class UControlRigBlueprintGeneratedClass : public UBlueprintGeneratedClass
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.ControlRigComponent
	 * Size -> 0x00E0 (FullSize[0x0560] - InheritedSize[0x0480])
	 */
	class UControlRigComponent : public UPrimitiveComponent
	{
	public:
		class UClass*                                              ControlRigClass;                                         // 0x0480(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPostInitializeDelegate;                                // 0x0488(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPreSetupDelegate;                                      // 0x0498(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPostSetupDelegate;                                     // 0x04A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPreUpdateDelegate;                                     // 0x04B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPostUpdateDelegate;                                    // 0x04C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		TArray<struct FControlRigComponentMappedElement>           MappedElements;                                          // 0x04D8(0x0010) Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bResetTransformBeforeTick;                               // 0x04E8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bResetInitialsBeforeSetup;                               // 0x04E9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUpdateRigOnTick;                                        // 0x04EA(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUpdateInEditor;                                         // 0x04EB(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDrawBones;                                              // 0x04EC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowDebugDrawing;                                       // 0x04ED(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O97S[0x2];                                   // 0x04EE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UControlRig*                                         ControlRig;                                              // 0x04F0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0V5A[0x68];                                  // 0x04F8(0x0068) MISSED OFFSET (PADDING)

	public:
		void Update(float DeltaTime);
		void SetMappedElements(TArray<struct FControlRigComponentMappedElement> NewMappedElements);
		void SetInitialSpaceTransform(const class FName& SpaceName, const struct FTransform& InitialTransform, EControlRigComponentSpace Space);
		void SetInitialBoneTransform(const class FName& BoneName, const struct FTransform& InitialTransform, EControlRigComponentSpace Space, bool bPropagateToChildren);
		void SetControlVector2D(const class FName& ControlName, const struct FVector2D& Value);
		void SetControlTransform(const class FName& ControlName, const struct FTransform& Value, EControlRigComponentSpace Space);
		void SetControlScale(const class FName& ControlName, const struct FVector& Value, EControlRigComponentSpace Space);
		void SetControlRotator(const class FName& ControlName, const struct FRotator& Value, EControlRigComponentSpace Space);
		void SetControlPosition(const class FName& ControlName, const struct FVector& Value, EControlRigComponentSpace Space);
		void SetControlOffset(const class FName& ControlName, const struct FTransform& OffsetTransform, EControlRigComponentSpace Space);
		void SetControlInt(const class FName& ControlName, int32_t Value);
		void SetControlFloat(const class FName& ControlName, float Value);
		void SetControlBool(const class FName& ControlName, bool Value);
		void SetBoneTransform(const class FName& BoneName, const struct FTransform& Transform, EControlRigComponentSpace Space, float Weight, bool bPropagateToChildren);
		void SetBoneInitialTransformsFromSkeletalMesh(class USkeletalMesh* InSkeletalMesh);
		void OnPreUpdate(class UControlRigComponent* Component);
		void OnPreSetup(class UControlRigComponent* Component);
		void OnPostUpdate(class UControlRigComponent* Component);
		void OnPostSetup(class UControlRigComponent* Component);
		void OnPostInitialize(class UControlRigComponent* Component);
		void Initialize();
		struct FTransform GetSpaceTransform(const class FName& SpaceName, EControlRigComponentSpace Space);
		struct FTransform GetInitialSpaceTransform(const class FName& SpaceName, EControlRigComponentSpace Space);
		struct FTransform GetInitialBoneTransform(const class FName& BoneName, EControlRigComponentSpace Space);
		TArray<class FName> GetElementNames(ERigElementType ElementType);
		struct FVector2D GetControlVector2D(const class FName& ControlName);
		struct FTransform GetControlTransform(const class FName& ControlName, EControlRigComponentSpace Space);
		struct FVector GetControlScale(const class FName& ControlName, EControlRigComponentSpace Space);
		struct FRotator GetControlRotator(const class FName& ControlName, EControlRigComponentSpace Space);
		class UControlRig* GetControlRig();
		struct FVector GetControlPosition(const class FName& ControlName, EControlRigComponentSpace Space);
		struct FTransform GetControlOffset(const class FName& ControlName, EControlRigComponentSpace Space);
		int32_t GetControlInt(const class FName& ControlName);
		float GetControlFloat(const class FName& ControlName);
		bool GetControlBool(const class FName& ControlName);
		struct FTransform GetBoneTransform(const class FName& BoneName, EControlRigComponentSpace Space);
		float GetAbsoluteTime();
		bool DoesElementExist(const class FName& Name, ERigElementType ElementType);
		void ClearMappedElements();
		void AddMappedSkeletalMesh(class USkeletalMeshComponent* SkeletalMeshComponent, TArray<struct FControlRigComponentMappedBone> Bones, TArray<struct FControlRigComponentMappedCurve> Curves);
		void AddMappedElements(TArray<struct FControlRigComponentMappedElement> NewMappedElements);
		void AddMappedComponents(TArray<struct FControlRigComponentMappedComponent> Components);
		void AddMappedCompleteSkeletalMesh(class USkeletalMeshComponent* SkeletalMeshComponent);
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.ControlRigControlActor
	 * Size -> 0x0098 (FullSize[0x0318] - InheritedSize[0x0280])
	 */
	class AControlRigControlActor : public AActor
	{
	public:
		class AActor*                                              ActorToTrack;                                            // 0x0280(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ControlRigClass;                                         // 0x0288(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRefreshOnTick;                                          // 0x0290(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsSelectable;                                           // 0x0291(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P2R5[0x6];                                   // 0x0292(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  MaterialOverride;                                        // 0x0298(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ColorParameter;                                          // 0x02A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCastShadows;                                            // 0x02B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ODIM[0x7];                                   // 0x02B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     ActorRootComponent;                                      // 0x02B8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UControlRig*                                         ControlRig;                                              // 0x02C0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class FName>                                        ControlNames;                                            // 0x02C8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<struct FTransform>                                  GizmoTransforms;                                         // 0x02D8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<class UStaticMeshComponent*>                        Components;                                              // 0x02E8(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<class UMaterialInstanceDynamic*>                    Materials;                                               // 0x02F8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		class FName                                                ColorParameterName;                                      // 0x0308(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_R3BQ[0x8];                                   // 0x0310(0x0008) MISSED OFFSET (PADDING)

	public:
		void Refresh();
		void Clear();
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.ControlRigGizmoActor
	 * Size -> 0x0028 (FullSize[0x02A8] - InheritedSize[0x0280])
	 */
	class AControlRigGizmoActor : public AActor
	{
	public:
		class USceneComponent*                                     ActorRootComponent;                                      // 0x0280(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMeshComponent*                                StaticMeshComponent;                                     // 0x0288(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   ControlRigIndex;                                         // 0x0290(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ControlName;                                             // 0x0294(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ColorParameterName;                                      // 0x029C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEnabled : 1;                                            // 0x02A4(0x0001) BIT_FIELD BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bSelected : 1;                                           // 0x02A4(0x0001) BIT_FIELD BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bSelectable : 1;                                         // 0x02A4(0x0001) BIT_FIELD BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bHovered : 1;                                            // 0x02A4(0x0001) BIT_FIELD BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_D15M[0x3];                                   // 0x02A5(0x0003) MISSED OFFSET (PADDING)

	public:
		void SetSelected(bool bInSelected);
		void SetSelectable(bool bInSelectable);
		void SetHovered(bool bInHovered);
		void SetGlobalTransform(const struct FTransform& InTransform);
		void SetEnabled(bool bInEnabled);
		void OnTransformChanged(const struct FTransform& NewTransform);
		void OnSelectionChanged(bool bIsSelected);
		void OnManipulatingChanged(bool bIsManipulating);
		void OnHoveredChanged(bool bIsSelected);
		void OnEnabledChanged(bool bIsEnabled);
		bool IsSelectedInEditor();
		bool IsHovered();
		bool IsEnabled();
		struct FTransform GetGlobalTransform();
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.ControlRigGizmoLibrary
	 * Size -> 0x00B8 (FullSize[0x00E0] - InheritedSize[0x0028])
	 */
	class UControlRigGizmoLibrary : public UObject
	{
	public:
		unsigned char                                              UnknownData_WESZ[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FControlRigGizmoDefinition                          DefaultGizmo;                                            // 0x0030(0x0060) Edit, NativeAccessSpecifierPublic
		unsigned char                                              DefaultMaterial[0x28];                                   // 0x0090(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class FName                                                MaterialColorParameter;                                  // 0x00B8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FControlRigGizmoDefinition>                  Gizmos;                                                  // 0x00C0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WPFH[0x10];                                  // 0x00D0(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.ControlRigLayerInstance
	 * Size -> 0x0008 (FullSize[0x02C0] - InheritedSize[0x02B8])
	 */
	class UControlRigLayerInstance : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_VJUD[0x8];                                   // 0x02B8(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.ControlRigValidationPass
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UControlRigValidationPass : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.ControlRigNumericalValidationPass
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UControlRigNumericalValidationPass : public UControlRigValidationPass
	{
	public:
		bool                                                       bCheckControls;                                          // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCheckBones;                                             // 0x0029(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCheckCurves;                                            // 0x002A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8EHF[0x1];                                   // 0x002B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TranslationPrecision;                                    // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RotationPrecision;                                       // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ScalePrecision;                                          // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurvePrecision;                                          // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                EventNameA;                                              // 0x003C(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                EventNameB;                                              // 0x0044(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6AIT[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigPose                                            Pose;                                                    // 0x0050(0x0010) Transient, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.ControlRigObjectHolder
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UControlRigObjectHolder : public UObject
	{
	public:
		TArray<class UObject*>                                     Objects;                                                 // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.ControlRigSequence
	 * Size -> 0x0058 (FullSize[0x0220] - InheritedSize[0x01C8])
	 */
	class UControlRigSequence : public ULevelSequence
	{
	public:
		unsigned char                                              LastExportedToAnimationSequence[0x28];                   // 0x01C8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              LastExportedUsingSkeletalMesh[0x28];                     // 0x01F0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		float                                                      LastExportedFrameRate;                                   // 0x0218(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I90O[0x4];                                   // 0x021C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.ControlRigSequencerAnimInstance
	 * Size -> 0x0010 (FullSize[0x02D0] - InheritedSize[0x02C0])
	 */
	class UControlRigSequencerAnimInstance : public UAnimSequencerInstance
	{
	public:
		unsigned char                                              UnknownData_1FSS[0x10];                                  // 0x02C0(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.ControlRigSettings
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UControlRigSettings : public UDeveloperSettings
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.ControlRigValidator
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UControlRigValidator : public UObject
	{
	public:
		TArray<class UControlRigValidationPass*>                   Passes;                                                  // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FBA2[0x30];                                  // 0x0038(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.FKControlRig
	 * Size -> 0x0018 (FullSize[0x0668] - InheritedSize[0x0650])
	 */
	class UFKControlRig : public UControlRig
	{
	public:
		TArray<bool>                                               IsControlActive;                                         // 0x0650(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		EControlRigFKRigExecuteMode                                ApplyMode;                                               // 0x0660(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5RYS[0x7];                                   // 0x0661(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.MovieSceneControlRigParameterSection
	 * Size -> 0x01A0 (FullSize[0x02E8] - InheritedSize[0x0148])
	 */
	class UMovieSceneControlRigParameterSection : public UMovieSceneParameterSection
	{
	public:
		class UControlRig*                                         ControlRig;                                              // 0x0148(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              ControlRigClass;                                         // 0x0150(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<bool>                                               ControlsMask;                                            // 0x0158(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FMovieSceneTransformMask                            TransformMask;                                           // 0x0168(0x0004) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MN3X[0x4];                                   // 0x016C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneFloatChannel                             Weight;                                                  // 0x0170(0x00A0) NativeAccessSpecifierPublic
		TMap<class FName, struct FChannelMapInfo>                  ControlChannelMap;                                       // 0x0210(0x0050) NativeAccessSpecifierPublic
		TArray<struct FEnumParameterNameAndCurve>                  EnumParameterNamesAndCurves;                             // 0x0260(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FIntegerParameterNameAndCurve>               IntegerParameterNamesAndCurves;                          // 0x0270(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_O8D0[0x68];                                  // 0x0280(0x0068) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ControlRig.MovieSceneControlRigParameterTrack
	 * Size -> 0x0038 (FullSize[0x00C8] - InheritedSize[0x0090])
	 */
	class UMovieSceneControlRigParameterTrack : public UMovieSceneNameableTrack
	{
	public:
		unsigned char                                              UnknownData_T83P[0x10];                                  // 0x0090(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UControlRig*                                         ControlRig;                                              // 0x00A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMovieSceneSection*                                  SectionToKey;                                            // 0x00A8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UMovieSceneSection*>                          Sections;                                                // 0x00B0(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		class FName                                                TrackName;                                               // 0x00C0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
