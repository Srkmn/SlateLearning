// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DialogueBuilderEditor/Public/Graphs/DialogueBuilderGraphSchema.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueBuilderGraphSchema() {}

// Begin Cross Module References
DIALOGUEBUILDEREDITOR_API UClass* Z_Construct_UClass_UDialogueBuilderGraphSchema();
DIALOGUEBUILDEREDITOR_API UClass* Z_Construct_UClass_UDialogueBuilderGraphSchema_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema();
UPackage* Z_Construct_UPackage__Script_DialogueBuilderEditor();
// End Cross Module References

// Begin Class UDialogueBuilderGraphSchema
void UDialogueBuilderGraphSchema::StaticRegisterNativesUDialogueBuilderGraphSchema()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogueBuilderGraphSchema);
UClass* Z_Construct_UClass_UDialogueBuilderGraphSchema_NoRegister()
{
	return UDialogueBuilderGraphSchema::StaticClass();
}
struct Z_Construct_UClass_UDialogueBuilderGraphSchema_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Graphs/DialogueBuilderGraphSchema.h" },
		{ "ModuleRelativePath", "Public/Graphs/DialogueBuilderGraphSchema.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueBuilderGraphSchema>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDialogueBuilderGraphSchema_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdGraphSchema,
	(UObject* (*)())Z_Construct_UPackage__Script_DialogueBuilderEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueBuilderGraphSchema_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueBuilderGraphSchema_Statics::ClassParams = {
	&UDialogueBuilderGraphSchema::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueBuilderGraphSchema_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogueBuilderGraphSchema_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDialogueBuilderGraphSchema()
{
	if (!Z_Registration_Info_UClass_UDialogueBuilderGraphSchema.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueBuilderGraphSchema.OuterSingleton, Z_Construct_UClass_UDialogueBuilderGraphSchema_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogueBuilderGraphSchema.OuterSingleton;
}
template<> DIALOGUEBUILDEREDITOR_API UClass* StaticClass<UDialogueBuilderGraphSchema>()
{
	return UDialogueBuilderGraphSchema::StaticClass();
}
UDialogueBuilderGraphSchema::UDialogueBuilderGraphSchema(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueBuilderGraphSchema);
UDialogueBuilderGraphSchema::~UDialogueBuilderGraphSchema() {}
// End Class UDialogueBuilderGraphSchema

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilderEditor_Public_Graphs_DialogueBuilderGraphSchema_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueBuilderGraphSchema, UDialogueBuilderGraphSchema::StaticClass, TEXT("UDialogueBuilderGraphSchema"), &Z_Registration_Info_UClass_UDialogueBuilderGraphSchema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueBuilderGraphSchema), 1653318719U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilderEditor_Public_Graphs_DialogueBuilderGraphSchema_h_2213299008(TEXT("/Script/DialogueBuilderEditor"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilderEditor_Public_Graphs_DialogueBuilderGraphSchema_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilderEditor_Public_Graphs_DialogueBuilderGraphSchema_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
