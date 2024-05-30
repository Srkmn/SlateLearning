// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DialogueBuilder/Public/DialogueBuilderBlueprint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueBuilderBlueprint() {}

// Begin Cross Module References
DIALOGUEBUILDER_API UClass* Z_Construct_UClass_UDialogueBuilderBlueprint();
DIALOGUEBUILDER_API UClass* Z_Construct_UClass_UDialogueBuilderBlueprint_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprint();
ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
UPackage* Z_Construct_UPackage__Script_DialogueBuilder();
// End Cross Module References

// Begin Class UDialogueBuilderBlueprint
void UDialogueBuilderBlueprint::StaticRegisterNativesUDialogueBuilderBlueprint()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogueBuilderBlueprint);
UClass* Z_Construct_UClass_UDialogueBuilderBlueprint_NoRegister()
{
	return UDialogueBuilderBlueprint::StaticClass();
}
struct Z_Construct_UClass_UDialogueBuilderBlueprint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DialogueBuilderBlueprint.h" },
		{ "ModuleRelativePath", "Public/DialogueBuilderBlueprint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueBuilderGraph_MetaData[] = {
		{ "Comment", "// Pointers of UEdGraphs to check that blueprint is created;\n" },
		{ "ModuleRelativePath", "Public/DialogueBuilderBlueprint.h" },
		{ "ToolTip", "Pointers of UEdGraphs to check that blueprint is created;" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EvenGraphRef_MetaData[] = {
		{ "ModuleRelativePath", "Public/DialogueBuilderBlueprint.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueBuilderGraph;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EvenGraphRef;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueBuilderBlueprint>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueBuilderBlueprint_Statics::NewProp_DialogueBuilderGraph = { "DialogueBuilderGraph", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueBuilderBlueprint, DialogueBuilderGraph), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueBuilderGraph_MetaData), NewProp_DialogueBuilderGraph_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueBuilderBlueprint_Statics::NewProp_EvenGraphRef = { "EvenGraphRef", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueBuilderBlueprint, EvenGraphRef), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EvenGraphRef_MetaData), NewProp_EvenGraphRef_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogueBuilderBlueprint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueBuilderBlueprint_Statics::NewProp_DialogueBuilderGraph,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueBuilderBlueprint_Statics::NewProp_EvenGraphRef,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueBuilderBlueprint_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDialogueBuilderBlueprint_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprint,
	(UObject* (*)())Z_Construct_UPackage__Script_DialogueBuilder,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueBuilderBlueprint_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueBuilderBlueprint_Statics::ClassParams = {
	&UDialogueBuilderBlueprint::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDialogueBuilderBlueprint_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueBuilderBlueprint_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueBuilderBlueprint_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogueBuilderBlueprint_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDialogueBuilderBlueprint()
{
	if (!Z_Registration_Info_UClass_UDialogueBuilderBlueprint.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueBuilderBlueprint.OuterSingleton, Z_Construct_UClass_UDialogueBuilderBlueprint_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogueBuilderBlueprint.OuterSingleton;
}
template<> DIALOGUEBUILDER_API UClass* StaticClass<UDialogueBuilderBlueprint>()
{
	return UDialogueBuilderBlueprint::StaticClass();
}
UDialogueBuilderBlueprint::UDialogueBuilderBlueprint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueBuilderBlueprint);
UDialogueBuilderBlueprint::~UDialogueBuilderBlueprint() {}
// End Class UDialogueBuilderBlueprint

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilder_Public_DialogueBuilderBlueprint_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueBuilderBlueprint, UDialogueBuilderBlueprint::StaticClass, TEXT("UDialogueBuilderBlueprint"), &Z_Registration_Info_UClass_UDialogueBuilderBlueprint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueBuilderBlueprint), 759583482U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilder_Public_DialogueBuilderBlueprint_h_994955840(TEXT("/Script/DialogueBuilder"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilder_Public_DialogueBuilderBlueprint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilder_Public_DialogueBuilderBlueprint_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
