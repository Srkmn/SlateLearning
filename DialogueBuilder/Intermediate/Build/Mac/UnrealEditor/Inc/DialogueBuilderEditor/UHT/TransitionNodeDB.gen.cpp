// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DialogueBuilderEditor/Public/Graphs/Nodes/TransitionNodeDB.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTransitionNodeDB() {}

// Begin Cross Module References
DIALOGUEBUILDEREDITOR_API UClass* Z_Construct_UClass_UTransitionNodeDB();
DIALOGUEBUILDEREDITOR_API UClass* Z_Construct_UClass_UTransitionNodeDB_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
UPackage* Z_Construct_UPackage__Script_DialogueBuilderEditor();
// End Cross Module References

// Begin Class UTransitionNodeDB
void UTransitionNodeDB::StaticRegisterNativesUTransitionNodeDB()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTransitionNodeDB);
UClass* Z_Construct_UClass_UTransitionNodeDB_NoRegister()
{
	return UTransitionNodeDB::StaticClass();
}
struct Z_Construct_UClass_UTransitionNodeDB_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Graphs/Nodes/TransitionNodeDB.h" },
		{ "ModuleRelativePath", "Public/Graphs/Nodes/TransitionNodeDB.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bidirectional_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graphs/Nodes/TransitionNodeDB.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsHasFunction_MetaData[] = {
		{ "Comment", "// Start Connection Variables Part;\n" },
		{ "ModuleRelativePath", "Public/Graphs/Nodes/TransitionNodeDB.h" },
		{ "ToolTip", "Start Connection Variables Part;" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConnectFunctionName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graphs/Nodes/TransitionNodeDB.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FunctionGraph_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graphs/Nodes/TransitionNodeDB.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviousNodeID_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graphs/Nodes/TransitionNodeDB.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextNodeID_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graphs/Nodes/TransitionNodeDB.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Bidirectional_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Bidirectional;
	static void NewProp_IsHasFunction_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsHasFunction;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ConnectFunctionName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FunctionGraph;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PreviousNodeID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NextNodeID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTransitionNodeDB>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UTransitionNodeDB_Statics::NewProp_Bidirectional_SetBit(void* Obj)
{
	((UTransitionNodeDB*)Obj)->Bidirectional = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTransitionNodeDB_Statics::NewProp_Bidirectional = { "Bidirectional", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTransitionNodeDB), &Z_Construct_UClass_UTransitionNodeDB_Statics::NewProp_Bidirectional_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bidirectional_MetaData), NewProp_Bidirectional_MetaData) };
void Z_Construct_UClass_UTransitionNodeDB_Statics::NewProp_IsHasFunction_SetBit(void* Obj)
{
	((UTransitionNodeDB*)Obj)->IsHasFunction = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTransitionNodeDB_Statics::NewProp_IsHasFunction = { "IsHasFunction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTransitionNodeDB), &Z_Construct_UClass_UTransitionNodeDB_Statics::NewProp_IsHasFunction_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsHasFunction_MetaData), NewProp_IsHasFunction_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTransitionNodeDB_Statics::NewProp_ConnectFunctionName = { "ConnectFunctionName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransitionNodeDB, ConnectFunctionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConnectFunctionName_MetaData), NewProp_ConnectFunctionName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTransitionNodeDB_Statics::NewProp_FunctionGraph = { "FunctionGraph", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransitionNodeDB, FunctionGraph), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FunctionGraph_MetaData), NewProp_FunctionGraph_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTransitionNodeDB_Statics::NewProp_PreviousNodeID = { "PreviousNodeID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransitionNodeDB, PreviousNodeID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviousNodeID_MetaData), NewProp_PreviousNodeID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTransitionNodeDB_Statics::NewProp_NextNodeID = { "NextNodeID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTransitionNodeDB, NextNodeID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextNodeID_MetaData), NewProp_NextNodeID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTransitionNodeDB_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransitionNodeDB_Statics::NewProp_Bidirectional,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransitionNodeDB_Statics::NewProp_IsHasFunction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransitionNodeDB_Statics::NewProp_ConnectFunctionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransitionNodeDB_Statics::NewProp_FunctionGraph,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransitionNodeDB_Statics::NewProp_PreviousNodeID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransitionNodeDB_Statics::NewProp_NextNodeID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTransitionNodeDB_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTransitionNodeDB_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
	(UObject* (*)())Z_Construct_UPackage__Script_DialogueBuilderEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTransitionNodeDB_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTransitionNodeDB_Statics::ClassParams = {
	&UTransitionNodeDB::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTransitionNodeDB_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTransitionNodeDB_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTransitionNodeDB_Statics::Class_MetaDataParams), Z_Construct_UClass_UTransitionNodeDB_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTransitionNodeDB()
{
	if (!Z_Registration_Info_UClass_UTransitionNodeDB.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTransitionNodeDB.OuterSingleton, Z_Construct_UClass_UTransitionNodeDB_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTransitionNodeDB.OuterSingleton;
}
template<> DIALOGUEBUILDEREDITOR_API UClass* StaticClass<UTransitionNodeDB>()
{
	return UTransitionNodeDB::StaticClass();
}
UTransitionNodeDB::UTransitionNodeDB(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTransitionNodeDB);
UTransitionNodeDB::~UTransitionNodeDB() {}
// End Class UTransitionNodeDB

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilderEditor_Public_Graphs_Nodes_TransitionNodeDB_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTransitionNodeDB, UTransitionNodeDB::StaticClass, TEXT("UTransitionNodeDB"), &Z_Registration_Info_UClass_UTransitionNodeDB, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTransitionNodeDB), 3366246971U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilderEditor_Public_Graphs_Nodes_TransitionNodeDB_h_3568920724(TEXT("/Script/DialogueBuilderEditor"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilderEditor_Public_Graphs_Nodes_TransitionNodeDB_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilderEditor_Public_Graphs_Nodes_TransitionNodeDB_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
