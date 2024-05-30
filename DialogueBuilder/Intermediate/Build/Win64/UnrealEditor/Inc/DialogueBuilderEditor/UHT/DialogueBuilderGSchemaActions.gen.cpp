// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DialogueBuilderEditor/Public/Graphs/DialogueBuilderGSchemaActions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueBuilderGSchemaActions() {}

// Begin Cross Module References
DIALOGUEBUILDEREDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueBGSchemaGraphCommentActions();
DIALOGUEBUILDEREDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueBGSchemaGraphNodeActions();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
UPackage* Z_Construct_UPackage__Script_DialogueBuilderEditor();
// End Cross Module References

// Begin ScriptStruct FDialogueBGSchemaGraphNodeActions
static_assert(std::is_polymorphic<FDialogueBGSchemaGraphNodeActions>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FDialogueBGSchemaGraphNodeActions cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DialogueBGSchemaGraphNodeActions;
class UScriptStruct* FDialogueBGSchemaGraphNodeActions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DialogueBGSchemaGraphNodeActions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DialogueBGSchemaGraphNodeActions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialogueBGSchemaGraphNodeActions, (UObject*)Z_Construct_UPackage__Script_DialogueBuilderEditor(), TEXT("DialogueBGSchemaGraphNodeActions"));
	}
	return Z_Registration_Info_UScriptStruct_DialogueBGSchemaGraphNodeActions.OuterSingleton;
}
template<> DIALOGUEBUILDEREDITOR_API UScriptStruct* StaticStruct<FDialogueBGSchemaGraphNodeActions>()
{
	return FDialogueBGSchemaGraphNodeActions::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDialogueBGSchemaGraphNodeActions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// This class represents what will happen with creating a nodes\n" },
		{ "ModuleRelativePath", "Public/Graphs/DialogueBuilderGSchemaActions.h" },
		{ "ToolTip", "This class represents what will happen with creating a nodes" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialogueBGSchemaGraphNodeActions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDialogueBGSchemaGraphNodeActions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DialogueBuilderEditor,
	Z_Construct_UScriptStruct_FEdGraphSchemaAction,
	&NewStructOps,
	"DialogueBGSchemaGraphNodeActions",
	nullptr,
	0,
	sizeof(FDialogueBGSchemaGraphNodeActions),
	alignof(FDialogueBGSchemaGraphNodeActions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueBGSchemaGraphNodeActions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDialogueBGSchemaGraphNodeActions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDialogueBGSchemaGraphNodeActions()
{
	if (!Z_Registration_Info_UScriptStruct_DialogueBGSchemaGraphNodeActions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DialogueBGSchemaGraphNodeActions.InnerSingleton, Z_Construct_UScriptStruct_FDialogueBGSchemaGraphNodeActions_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DialogueBGSchemaGraphNodeActions.InnerSingleton;
}
// End ScriptStruct FDialogueBGSchemaGraphNodeActions

// Begin ScriptStruct FDialogueBGSchemaGraphCommentActions
static_assert(std::is_polymorphic<FDialogueBGSchemaGraphCommentActions>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FDialogueBGSchemaGraphCommentActions cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DialogueBGSchemaGraphCommentActions;
class UScriptStruct* FDialogueBGSchemaGraphCommentActions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DialogueBGSchemaGraphCommentActions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DialogueBGSchemaGraphCommentActions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialogueBGSchemaGraphCommentActions, (UObject*)Z_Construct_UPackage__Script_DialogueBuilderEditor(), TEXT("DialogueBGSchemaGraphCommentActions"));
	}
	return Z_Registration_Info_UScriptStruct_DialogueBGSchemaGraphCommentActions.OuterSingleton;
}
template<> DIALOGUEBUILDEREDITOR_API UScriptStruct* StaticStruct<FDialogueBGSchemaGraphCommentActions>()
{
	return FDialogueBGSchemaGraphCommentActions::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDialogueBGSchemaGraphCommentActions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Graphs/DialogueBuilderGSchemaActions.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialogueBGSchemaGraphCommentActions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDialogueBGSchemaGraphCommentActions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DialogueBuilderEditor,
	Z_Construct_UScriptStruct_FEdGraphSchemaAction,
	&NewStructOps,
	"DialogueBGSchemaGraphCommentActions",
	nullptr,
	0,
	sizeof(FDialogueBGSchemaGraphCommentActions),
	alignof(FDialogueBGSchemaGraphCommentActions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueBGSchemaGraphCommentActions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDialogueBGSchemaGraphCommentActions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDialogueBGSchemaGraphCommentActions()
{
	if (!Z_Registration_Info_UScriptStruct_DialogueBGSchemaGraphCommentActions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DialogueBGSchemaGraphCommentActions.InnerSingleton, Z_Construct_UScriptStruct_FDialogueBGSchemaGraphCommentActions_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DialogueBGSchemaGraphCommentActions.InnerSingleton;
}
// End ScriptStruct FDialogueBGSchemaGraphCommentActions

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilderEditor_Public_Graphs_DialogueBuilderGSchemaActions_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDialogueBGSchemaGraphNodeActions::StaticStruct, Z_Construct_UScriptStruct_FDialogueBGSchemaGraphNodeActions_Statics::NewStructOps, TEXT("DialogueBGSchemaGraphNodeActions"), &Z_Registration_Info_UScriptStruct_DialogueBGSchemaGraphNodeActions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDialogueBGSchemaGraphNodeActions), 3068355830U) },
		{ FDialogueBGSchemaGraphCommentActions::StaticStruct, Z_Construct_UScriptStruct_FDialogueBGSchemaGraphCommentActions_Statics::NewStructOps, TEXT("DialogueBGSchemaGraphCommentActions"), &Z_Registration_Info_UScriptStruct_DialogueBGSchemaGraphCommentActions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDialogueBGSchemaGraphCommentActions), 2638136034U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilderEditor_Public_Graphs_DialogueBuilderGSchemaActions_h_3500164157(TEXT("/Script/DialogueBuilderEditor"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilderEditor_Public_Graphs_DialogueBuilderGSchemaActions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilderEditor_Public_Graphs_DialogueBuilderGSchemaActions_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
