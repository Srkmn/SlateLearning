// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DialogueBuilderEditor/Public/Graphs/Nodes/EntryNodeDB.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEntryNodeDB() {}

// Begin Cross Module References
DIALOGUEBUILDEREDITOR_API UClass* Z_Construct_UClass_UEntryNodeDB();
DIALOGUEBUILDEREDITOR_API UClass* Z_Construct_UClass_UEntryNodeDB_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
UPackage* Z_Construct_UPackage__Script_DialogueBuilderEditor();
// End Cross Module References

// Begin Class UEntryNodeDB
void UEntryNodeDB::StaticRegisterNativesUEntryNodeDB()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEntryNodeDB);
UClass* Z_Construct_UClass_UEntryNodeDB_NoRegister()
{
	return UEntryNodeDB::StaticClass();
}
struct Z_Construct_UClass_UEntryNodeDB_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Graphs/Nodes/EntryNodeDB.h" },
		{ "ModuleRelativePath", "Public/Graphs/Nodes/EntryNodeDB.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntryNodeId_MetaData[] = {
		{ "Comment", "//Start Dialogue Data Part;\n" },
		{ "ModuleRelativePath", "Public/Graphs/Nodes/EntryNodeDB.h" },
		{ "ToolTip", "Start Dialogue Data Part;" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntryNodeText_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graphs/Nodes/EntryNodeDB.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextNodesId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graphs/Nodes/EntryNodeDB.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_EntryNodeId;
	static const UECodeGen_Private::FTextPropertyParams NewProp_EntryNodeText;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NextNodesId_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NextNodesId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEntryNodeDB>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEntryNodeDB_Statics::NewProp_EntryNodeId = { "EntryNodeId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEntryNodeDB, EntryNodeId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntryNodeId_MetaData), NewProp_EntryNodeId_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UEntryNodeDB_Statics::NewProp_EntryNodeText = { "EntryNodeText", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEntryNodeDB, EntryNodeText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntryNodeText_MetaData), NewProp_EntryNodeText_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEntryNodeDB_Statics::NewProp_NextNodesId_Inner = { "NextNodesId", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEntryNodeDB_Statics::NewProp_NextNodesId = { "NextNodesId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEntryNodeDB, NextNodesId), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextNodesId_MetaData), NewProp_NextNodesId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEntryNodeDB_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEntryNodeDB_Statics::NewProp_EntryNodeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEntryNodeDB_Statics::NewProp_EntryNodeText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEntryNodeDB_Statics::NewProp_NextNodesId_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEntryNodeDB_Statics::NewProp_NextNodesId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEntryNodeDB_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEntryNodeDB_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
	(UObject* (*)())Z_Construct_UPackage__Script_DialogueBuilderEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEntryNodeDB_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEntryNodeDB_Statics::ClassParams = {
	&UEntryNodeDB::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEntryNodeDB_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEntryNodeDB_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEntryNodeDB_Statics::Class_MetaDataParams), Z_Construct_UClass_UEntryNodeDB_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEntryNodeDB()
{
	if (!Z_Registration_Info_UClass_UEntryNodeDB.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEntryNodeDB.OuterSingleton, Z_Construct_UClass_UEntryNodeDB_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEntryNodeDB.OuterSingleton;
}
template<> DIALOGUEBUILDEREDITOR_API UClass* StaticClass<UEntryNodeDB>()
{
	return UEntryNodeDB::StaticClass();
}
UEntryNodeDB::UEntryNodeDB(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEntryNodeDB);
UEntryNodeDB::~UEntryNodeDB() {}
// End Class UEntryNodeDB

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilderEditor_Public_Graphs_Nodes_EntryNodeDB_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEntryNodeDB, UEntryNodeDB::StaticClass, TEXT("UEntryNodeDB"), &Z_Registration_Info_UClass_UEntryNodeDB, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEntryNodeDB), 2366338159U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilderEditor_Public_Graphs_Nodes_EntryNodeDB_h_3591061502(TEXT("/Script/DialogueBuilderEditor"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilderEditor_Public_Graphs_Nodes_EntryNodeDB_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilderEditor_Public_Graphs_Nodes_EntryNodeDB_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
