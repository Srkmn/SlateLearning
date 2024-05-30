// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DialogueBuilderInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DIALOGUEBUILDER_DialogueBuilderInterface_generated_h
#error "DialogueBuilderInterface.generated.h already included, missing '#pragma once' in DialogueBuilderInterface.h"
#endif
#define DIALOGUEBUILDER_DialogueBuilderInterface_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilder_Public_DialogueBuilderInterface_h_13_CALLBACK_WRAPPERS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilder_Public_DialogueBuilderInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DIALOGUEBUILDER_API UDialogueBuilderInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDialogueBuilderInterface(UDialogueBuilderInterface&&); \
	UDialogueBuilderInterface(const UDialogueBuilderInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DIALOGUEBUILDER_API, UDialogueBuilderInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogueBuilderInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDialogueBuilderInterface) \
	DIALOGUEBUILDER_API virtual ~UDialogueBuilderInterface();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilder_Public_DialogueBuilderInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDialogueBuilderInterface(); \
	friend struct Z_Construct_UClass_UDialogueBuilderInterface_Statics; \
public: \
	DECLARE_CLASS(UDialogueBuilderInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DialogueBuilder"), DIALOGUEBUILDER_API) \
	DECLARE_SERIALIZER(UDialogueBuilderInterface)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilder_Public_DialogueBuilderInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilder_Public_DialogueBuilderInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilder_Public_DialogueBuilderInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilder_Public_DialogueBuilderInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDialogueBuilderInterface() {} \
public: \
	typedef UDialogueBuilderInterface UClassType; \
	typedef IDialogueBuilderInterface ThisClass; \
	static void Execute_BreakDialogueNodeDelay(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilder_Public_DialogueBuilderInterface_h_10_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilder_Public_DialogueBuilderInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilder_Public_DialogueBuilderInterface_h_13_CALLBACK_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilder_Public_DialogueBuilderInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DIALOGUEBUILDER_API UClass* StaticClass<class UDialogueBuilderInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilder_Public_DialogueBuilderInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
