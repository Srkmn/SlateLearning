// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DialogueBuilderEditor/Public/Graphs/DialogueBuilderEdGraph.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueBuilderEdGraph() {}

// Begin Cross Module References
DIALOGUEBUILDER_API UClass* Z_Construct_UClass_UDialogueBuilderObject_NoRegister();
DIALOGUEBUILDEREDITOR_API UClass* Z_Construct_UClass_UDialogueBuilderEdGraph();
DIALOGUEBUILDEREDITOR_API UClass* Z_Construct_UClass_UDialogueBuilderEdGraph_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UEdGraph();
ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode_NoRegister();
UPackage* Z_Construct_UPackage__Script_DialogueBuilderEditor();
// End Cross Module References

// Begin Class UDialogueBuilderEdGraph
void UDialogueBuilderEdGraph::StaticRegisterNativesUDialogueBuilderEdGraph()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogueBuilderEdGraph);
UClass* Z_Construct_UClass_UDialogueBuilderEdGraph_NoRegister()
{
	return UDialogueBuilderEdGraph::StaticClass();
}
struct Z_Construct_UClass_UDialogueBuilderEdGraph_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Graphs/DialogueBuilderEdGraph.h" },
		{ "ModuleRelativePath", "Public/Graphs/DialogueBuilderEdGraph.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entry_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graphs/DialogueBuilderEdGraph.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueBuilderObject_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Graphs/DialogueBuilderEdGraph.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeIdCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graphs/DialogueBuilderEdGraph.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Entry;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueBuilderObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NodeIdCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueBuilderEdGraph>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueBuilderEdGraph_Statics::NewProp_Entry = { "Entry", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueBuilderEdGraph, Entry), Z_Construct_UClass_UEdGraphNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entry_MetaData), NewProp_Entry_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueBuilderEdGraph_Statics::NewProp_DialogueBuilderObject = { "DialogueBuilderObject", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueBuilderEdGraph, DialogueBuilderObject), Z_Construct_UClass_UDialogueBuilderObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueBuilderObject_MetaData), NewProp_DialogueBuilderObject_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDialogueBuilderEdGraph_Statics::NewProp_NodeIdCount = { "NodeIdCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueBuilderEdGraph, NodeIdCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeIdCount_MetaData), NewProp_NodeIdCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogueBuilderEdGraph_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueBuilderEdGraph_Statics::NewProp_Entry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueBuilderEdGraph_Statics::NewProp_DialogueBuilderObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueBuilderEdGraph_Statics::NewProp_NodeIdCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueBuilderEdGraph_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDialogueBuilderEdGraph_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdGraph,
	(UObject* (*)())Z_Construct_UPackage__Script_DialogueBuilderEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueBuilderEdGraph_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueBuilderEdGraph_Statics::ClassParams = {
	&UDialogueBuilderEdGraph::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDialogueBuilderEdGraph_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueBuilderEdGraph_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueBuilderEdGraph_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogueBuilderEdGraph_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDialogueBuilderEdGraph()
{
	if (!Z_Registration_Info_UClass_UDialogueBuilderEdGraph.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueBuilderEdGraph.OuterSingleton, Z_Construct_UClass_UDialogueBuilderEdGraph_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogueBuilderEdGraph.OuterSingleton;
}
template<> DIALOGUEBUILDEREDITOR_API UClass* StaticClass<UDialogueBuilderEdGraph>()
{
	return UDialogueBuilderEdGraph::StaticClass();
}
UDialogueBuilderEdGraph::UDialogueBuilderEdGraph(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueBuilderEdGraph);
UDialogueBuilderEdGraph::~UDialogueBuilderEdGraph() {}
// End Class UDialogueBuilderEdGraph

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilderEditor_Public_Graphs_DialogueBuilderEdGraph_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueBuilderEdGraph, UDialogueBuilderEdGraph::StaticClass, TEXT("UDialogueBuilderEdGraph"), &Z_Registration_Info_UClass_UDialogueBuilderEdGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueBuilderEdGraph), 2152480407U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilderEditor_Public_Graphs_DialogueBuilderEdGraph_h_2890951313(TEXT("/Script/DialogueBuilderEditor"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilderEditor_Public_Graphs_DialogueBuilderEdGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilderEditor_Public_Graphs_DialogueBuilderEdGraph_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
