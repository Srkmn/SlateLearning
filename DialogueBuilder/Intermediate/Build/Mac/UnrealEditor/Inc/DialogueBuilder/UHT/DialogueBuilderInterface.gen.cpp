// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DialogueBuilder/Public/DialogueBuilderInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueBuilderInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
DIALOGUEBUILDER_API UClass* Z_Construct_UClass_UDialogueBuilderInterface();
DIALOGUEBUILDER_API UClass* Z_Construct_UClass_UDialogueBuilderInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_DialogueBuilder();
// End Cross Module References

// Begin Interface UDialogueBuilderInterface Function BreakDialogueNodeDelay
void IDialogueBuilderInterface::BreakDialogueNodeDelay()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BreakDialogueNodeDelay instead.");
}
static FName NAME_UDialogueBuilderInterface_BreakDialogueNodeDelay = FName(TEXT("BreakDialogueNodeDelay"));
void IDialogueBuilderInterface::Execute_BreakDialogueNodeDelay(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UDialogueBuilderInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UDialogueBuilderInterface_BreakDialogueNodeDelay);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
}
struct Z_Construct_UFunction_UDialogueBuilderInterface_BreakDialogueNodeDelay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DialogueInterfaceFunction" },
		{ "ModuleRelativePath", "Public/DialogueBuilderInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueBuilderInterface_BreakDialogueNodeDelay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueBuilderInterface, nullptr, "BreakDialogueNodeDelay", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueBuilderInterface_BreakDialogueNodeDelay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueBuilderInterface_BreakDialogueNodeDelay_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDialogueBuilderInterface_BreakDialogueNodeDelay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueBuilderInterface_BreakDialogueNodeDelay_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Interface UDialogueBuilderInterface Function BreakDialogueNodeDelay

// Begin Interface UDialogueBuilderInterface
void UDialogueBuilderInterface::StaticRegisterNativesUDialogueBuilderInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogueBuilderInterface);
UClass* Z_Construct_UClass_UDialogueBuilderInterface_NoRegister()
{
	return UDialogueBuilderInterface::StaticClass();
}
struct Z_Construct_UClass_UDialogueBuilderInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DialogueBuilderInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDialogueBuilderInterface_BreakDialogueNodeDelay, "BreakDialogueNodeDelay" }, // 4045861707
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDialogueBuilderInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDialogueBuilderInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_DialogueBuilder,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueBuilderInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueBuilderInterface_Statics::ClassParams = {
	&UDialogueBuilderInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueBuilderInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogueBuilderInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDialogueBuilderInterface()
{
	if (!Z_Registration_Info_UClass_UDialogueBuilderInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueBuilderInterface.OuterSingleton, Z_Construct_UClass_UDialogueBuilderInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogueBuilderInterface.OuterSingleton;
}
template<> DIALOGUEBUILDER_API UClass* StaticClass<UDialogueBuilderInterface>()
{
	return UDialogueBuilderInterface::StaticClass();
}
UDialogueBuilderInterface::UDialogueBuilderInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueBuilderInterface);
UDialogueBuilderInterface::~UDialogueBuilderInterface() {}
// End Interface UDialogueBuilderInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilder_Public_DialogueBuilderInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueBuilderInterface, UDialogueBuilderInterface::StaticClass, TEXT("UDialogueBuilderInterface"), &Z_Registration_Info_UClass_UDialogueBuilderInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueBuilderInterface), 2639159324U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilder_Public_DialogueBuilderInterface_h_3426503996(TEXT("/Script/DialogueBuilder"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilder_Public_DialogueBuilderInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilder_Public_DialogueBuilderInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
