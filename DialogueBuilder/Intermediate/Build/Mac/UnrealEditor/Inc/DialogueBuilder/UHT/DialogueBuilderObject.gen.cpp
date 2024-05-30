// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DialogueBuilder/Public/DialogueBuilderObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueBuilderObject() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
DIALOGUEBUILDER_API UClass* Z_Construct_UClass_UDialogueBuilderInterface_NoRegister();
DIALOGUEBUILDER_API UClass* Z_Construct_UClass_UDialogueBuilderObject();
DIALOGUEBUILDER_API UClass* Z_Construct_UClass_UDialogueBuilderObject_NoRegister();
DIALOGUEBUILDER_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueDetailsStruct();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDialogueWave_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
UPackage* Z_Construct_UPackage__Script_DialogueBuilder();
// End Cross Module References

// Begin ScriptStruct FDialogueDetailsStruct
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DialogueDetailsStruct;
class UScriptStruct* FDialogueDetailsStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DialogueDetailsStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DialogueDetailsStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialogueDetailsStruct, (UObject*)Z_Construct_UPackage__Script_DialogueBuilder(), TEXT("DialogueDetailsStruct"));
	}
	return Z_Registration_Info_UScriptStruct_DialogueDetailsStruct.OuterSingleton;
}
template<> DIALOGUEBUILDER_API UScriptStruct* StaticStruct<FDialogueDetailsStruct>()
{
	return FDialogueDetailsStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Structure To keep data from Dialogue Node;\n" },
		{ "ModuleRelativePath", "Public/DialogueBuilderObject.h" },
		{ "ToolTip", "Structure To keep data from Dialogue Node;" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeId_MetaData[] = {
		{ "Category", "Dialogue Details Struct" },
		{ "Comment", "// Visible Data Parts in Dialogue Editor Details Tab;\n" },
		{ "ModuleRelativePath", "Public/DialogueBuilderObject.h" },
		{ "ToolTip", "Visible Data Parts in Dialogue Editor Details Tab;" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueNodeText_MetaData[] = {
		{ "Category", "Dialogue Details Struct" },
		{ "ModuleRelativePath", "Public/DialogueBuilderObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsPlayerNode_MetaData[] = {
		{ "Category", "Dialogue Details Struct" },
		{ "ModuleRelativePath", "Public/DialogueBuilderObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsPlayerAnswerOption_MetaData[] = {
		{ "Category", "Dialogue Details Struct" },
		{ "ModuleRelativePath", "Public/DialogueBuilderObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeakerName_MetaData[] = {
		{ "Category", "Dialogue Details Struct" },
		{ "ModuleRelativePath", "Public/DialogueBuilderObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeakerTexture_MetaData[] = {
		{ "Category", "Dialogue Details Struct" },
		{ "ModuleRelativePath", "Public/DialogueBuilderObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsSwitchNode_MetaData[] = {
		{ "Category", "Dialogue Details Struct" },
		{ "ModuleRelativePath", "Public/DialogueBuilderObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DelayToMoveNextNodes_MetaData[] = {
		{ "Category", "Dialogue Details Struct" },
		{ "ModuleRelativePath", "Public/DialogueBuilderObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueAudio_MetaData[] = {
		{ "Category", "Dialogue Details Struct" },
		{ "ModuleRelativePath", "Public/DialogueBuilderObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueWave_MetaData[] = {
		{ "Category", "Dialogue Details Struct" },
		{ "ModuleRelativePath", "Public/DialogueBuilderObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BeginPlayDelay_MetaData[] = {
		{ "Category", "Dialogue Details Struct" },
		{ "ModuleRelativePath", "Public/DialogueBuilderObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsAlreadyPlayed_MetaData[] = {
		{ "Category", "Dialogue Details Struct" },
		{ "ModuleRelativePath", "Public/DialogueBuilderObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimToUpdate_MetaData[] = {
		{ "Category", "Dialogue Details Struct" },
		{ "ModuleRelativePath", "Public/DialogueBuilderObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimToUpdateHead_MetaData[] = {
		{ "Category", "Dialogue Details Struct" },
		{ "ModuleRelativePath", "Public/DialogueBuilderObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsItEndNode_MetaData[] = {
		{ "Category", "Dialogue Details Struct" },
		{ "ModuleRelativePath", "Public/DialogueBuilderObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WriteEffect_MetaData[] = {
		{ "Category", "Dialogue Details Struct" },
		{ "ModuleRelativePath", "Public/DialogueBuilderObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WriteEffectSpeed_MetaData[] = {
		{ "Category", "Dialogue Details Struct" },
		{ "ModuleRelativePath", "Public/DialogueBuilderObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsTimedDecisions_MetaData[] = {
		{ "Category", "Dialogue Details Struct" },
		{ "ModuleRelativePath", "Public/DialogueBuilderObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimedDecisionsTime_MetaData[] = {
		{ "Category", "Dialogue Details Struct" },
		{ "ModuleRelativePath", "Public/DialogueBuilderObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodePosition_MetaData[] = {
		{ "Comment", "// Non-Visible Working Data Parts in Dialogue Editor;\n" },
		{ "ModuleRelativePath", "Public/DialogueBuilderObject.h" },
		{ "ToolTip", "Non-Visible Working Data Parts in Dialogue Editor;" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextNodesId_MetaData[] = {
		{ "ModuleRelativePath", "Public/DialogueBuilderObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransitionNameToCheck_MetaData[] = {
		{ "ModuleRelativePath", "Public/DialogueBuilderObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDialoguePlayFuncName_MetaData[] = {
		{ "ModuleRelativePath", "Public/DialogueBuilderObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NodeId;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DialogueNodeText;
	static void NewProp_IsPlayerNode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsPlayerNode;
	static void NewProp_IsPlayerAnswerOption_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsPlayerAnswerOption;
	static const UECodeGen_Private::FTextPropertyParams NewProp_SpeakerName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpeakerTexture;
	static void NewProp_IsSwitchNode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsSwitchNode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DelayToMoveNextNodes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueAudio;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueWave;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BeginPlayDelay;
	static void NewProp_IsAlreadyPlayed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsAlreadyPlayed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimToUpdate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimToUpdateHead;
	static void NewProp_IsItEndNode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsItEndNode;
	static void NewProp_WriteEffect_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_WriteEffect;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WriteEffectSpeed;
	static void NewProp_IsTimedDecisions_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsTimedDecisions;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimedDecisionsTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodePosition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NextNodesId_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NextNodesId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TransitionNameToCheck_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TransitionNameToCheck;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OnDialoguePlayFuncName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialogueDetailsStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueDetailsStruct, NodeId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeId_MetaData), NewProp_NodeId_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_DialogueNodeText = { "DialogueNodeText", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueDetailsStruct, DialogueNodeText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueNodeText_MetaData), NewProp_DialogueNodeText_MetaData) };
void Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_IsPlayerNode_SetBit(void* Obj)
{
	((FDialogueDetailsStruct*)Obj)->IsPlayerNode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_IsPlayerNode = { "IsPlayerNode", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDialogueDetailsStruct), &Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_IsPlayerNode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsPlayerNode_MetaData), NewProp_IsPlayerNode_MetaData) };
void Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_IsPlayerAnswerOption_SetBit(void* Obj)
{
	((FDialogueDetailsStruct*)Obj)->IsPlayerAnswerOption = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_IsPlayerAnswerOption = { "IsPlayerAnswerOption", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDialogueDetailsStruct), &Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_IsPlayerAnswerOption_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsPlayerAnswerOption_MetaData), NewProp_IsPlayerAnswerOption_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_SpeakerName = { "SpeakerName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueDetailsStruct, SpeakerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeakerName_MetaData), NewProp_SpeakerName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_SpeakerTexture = { "SpeakerTexture", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueDetailsStruct, SpeakerTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeakerTexture_MetaData), NewProp_SpeakerTexture_MetaData) };
void Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_IsSwitchNode_SetBit(void* Obj)
{
	((FDialogueDetailsStruct*)Obj)->IsSwitchNode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_IsSwitchNode = { "IsSwitchNode", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDialogueDetailsStruct), &Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_IsSwitchNode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsSwitchNode_MetaData), NewProp_IsSwitchNode_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_DelayToMoveNextNodes = { "DelayToMoveNextNodes", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueDetailsStruct, DelayToMoveNextNodes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DelayToMoveNextNodes_MetaData), NewProp_DelayToMoveNextNodes_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_DialogueAudio = { "DialogueAudio", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueDetailsStruct, DialogueAudio), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueAudio_MetaData), NewProp_DialogueAudio_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_DialogueWave = { "DialogueWave", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueDetailsStruct, DialogueWave), Z_Construct_UClass_UDialogueWave_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueWave_MetaData), NewProp_DialogueWave_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_BeginPlayDelay = { "BeginPlayDelay", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueDetailsStruct, BeginPlayDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BeginPlayDelay_MetaData), NewProp_BeginPlayDelay_MetaData) };
void Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_IsAlreadyPlayed_SetBit(void* Obj)
{
	((FDialogueDetailsStruct*)Obj)->IsAlreadyPlayed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_IsAlreadyPlayed = { "IsAlreadyPlayed", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDialogueDetailsStruct), &Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_IsAlreadyPlayed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsAlreadyPlayed_MetaData), NewProp_IsAlreadyPlayed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_AnimToUpdate = { "AnimToUpdate", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueDetailsStruct, AnimToUpdate), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimToUpdate_MetaData), NewProp_AnimToUpdate_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_AnimToUpdateHead = { "AnimToUpdateHead", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueDetailsStruct, AnimToUpdateHead), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimToUpdateHead_MetaData), NewProp_AnimToUpdateHead_MetaData) };
void Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_IsItEndNode_SetBit(void* Obj)
{
	((FDialogueDetailsStruct*)Obj)->IsItEndNode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_IsItEndNode = { "IsItEndNode", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDialogueDetailsStruct), &Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_IsItEndNode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsItEndNode_MetaData), NewProp_IsItEndNode_MetaData) };
void Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_WriteEffect_SetBit(void* Obj)
{
	((FDialogueDetailsStruct*)Obj)->WriteEffect = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_WriteEffect = { "WriteEffect", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDialogueDetailsStruct), &Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_WriteEffect_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WriteEffect_MetaData), NewProp_WriteEffect_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_WriteEffectSpeed = { "WriteEffectSpeed", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueDetailsStruct, WriteEffectSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WriteEffectSpeed_MetaData), NewProp_WriteEffectSpeed_MetaData) };
void Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_IsTimedDecisions_SetBit(void* Obj)
{
	((FDialogueDetailsStruct*)Obj)->IsTimedDecisions = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_IsTimedDecisions = { "IsTimedDecisions", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDialogueDetailsStruct), &Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_IsTimedDecisions_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsTimedDecisions_MetaData), NewProp_IsTimedDecisions_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_TimedDecisionsTime = { "TimedDecisionsTime", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueDetailsStruct, TimedDecisionsTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimedDecisionsTime_MetaData), NewProp_TimedDecisionsTime_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_NodePosition = { "NodePosition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueDetailsStruct, NodePosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodePosition_MetaData), NewProp_NodePosition_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_NextNodesId_Inner = { "NextNodesId", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_NextNodesId = { "NextNodesId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueDetailsStruct, NextNodesId), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextNodesId_MetaData), NewProp_NextNodesId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_TransitionNameToCheck_Inner = { "TransitionNameToCheck", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_TransitionNameToCheck = { "TransitionNameToCheck", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueDetailsStruct, TransitionNameToCheck), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransitionNameToCheck_MetaData), NewProp_TransitionNameToCheck_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_OnDialoguePlayFuncName = { "OnDialoguePlayFuncName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueDetailsStruct, OnDialoguePlayFuncName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDialoguePlayFuncName_MetaData), NewProp_OnDialoguePlayFuncName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_NodeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_DialogueNodeText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_IsPlayerNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_IsPlayerAnswerOption,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_SpeakerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_SpeakerTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_IsSwitchNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_DelayToMoveNextNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_DialogueAudio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_DialogueWave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_BeginPlayDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_IsAlreadyPlayed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_AnimToUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_AnimToUpdateHead,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_IsItEndNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_WriteEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_WriteEffectSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_IsTimedDecisions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_TimedDecisionsTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_NodePosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_NextNodesId_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_NextNodesId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_TransitionNameToCheck_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_TransitionNameToCheck,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewProp_OnDialoguePlayFuncName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DialogueBuilder,
	nullptr,
	&NewStructOps,
	"DialogueDetailsStruct",
	Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::PropPointers),
	sizeof(FDialogueDetailsStruct),
	alignof(FDialogueDetailsStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDialogueDetailsStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DialogueDetailsStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DialogueDetailsStruct.InnerSingleton, Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DialogueDetailsStruct.InnerSingleton;
}
// End ScriptStruct FDialogueDetailsStruct

// Begin Class UDialogueBuilderObject Function AddDialogueDataElement
struct Z_Construct_UFunction_UDialogueBuilderObject_AddDialogueDataElement_Statics
{
	struct DialogueBuilderObject_eventAddDialogueDataElement_Parms
	{
		FDialogueDetailsStruct DialoguesElement;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// Add New Element to Dialogue Data Array; \n" },
		{ "ModuleRelativePath", "Public/DialogueBuilderObject.h" },
		{ "ToolTip", "Add New Element to Dialogue Data Array;" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DialoguesElement;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogueBuilderObject_AddDialogueDataElement_Statics::NewProp_DialoguesElement = { "DialoguesElement", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueBuilderObject_eventAddDialogueDataElement_Parms, DialoguesElement), Z_Construct_UScriptStruct_FDialogueDetailsStruct, METADATA_PARAMS(0, nullptr) }; // 2927845017
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueBuilderObject_AddDialogueDataElement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueBuilderObject_AddDialogueDataElement_Statics::NewProp_DialoguesElement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueBuilderObject_AddDialogueDataElement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueBuilderObject_AddDialogueDataElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueBuilderObject, nullptr, "AddDialogueDataElement", nullptr, nullptr, Z_Construct_UFunction_UDialogueBuilderObject_AddDialogueDataElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueBuilderObject_AddDialogueDataElement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogueBuilderObject_AddDialogueDataElement_Statics::DialogueBuilderObject_eventAddDialogueDataElement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueBuilderObject_AddDialogueDataElement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueBuilderObject_AddDialogueDataElement_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDialogueBuilderObject_AddDialogueDataElement_Statics::DialogueBuilderObject_eventAddDialogueDataElement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogueBuilderObject_AddDialogueDataElement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueBuilderObject_AddDialogueDataElement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogueBuilderObject::execAddDialogueDataElement)
{
	P_GET_STRUCT(FDialogueDetailsStruct,Z_Param_DialoguesElement);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddDialogueDataElement(Z_Param_DialoguesElement);
	P_NATIVE_END;
}
// End Class UDialogueBuilderObject Function AddDialogueDataElement

// Begin Class UDialogueBuilderObject Function DebugGetAllIndexes
struct Z_Construct_UFunction_UDialogueBuilderObject_DebugGetAllIndexes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// Debug Function for check data inside DialoguesData;\n" },
		{ "ModuleRelativePath", "Public/DialogueBuilderObject.h" },
		{ "ToolTip", "Debug Function for check data inside DialoguesData;" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueBuilderObject_DebugGetAllIndexes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueBuilderObject, nullptr, "DebugGetAllIndexes", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueBuilderObject_DebugGetAllIndexes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueBuilderObject_DebugGetAllIndexes_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDialogueBuilderObject_DebugGetAllIndexes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueBuilderObject_DebugGetAllIndexes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogueBuilderObject::execDebugGetAllIndexes)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DebugGetAllIndexes();
	P_NATIVE_END;
}
// End Class UDialogueBuilderObject Function DebugGetAllIndexes

// Begin Class UDialogueBuilderObject Function GetListIndexFromNodeID
struct Z_Construct_UFunction_UDialogueBuilderObject_GetListIndexFromNodeID_Statics
{
	struct DialogueBuilderObject_eventGetListIndexFromNodeID_Parms
	{
		int32 NodeID;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// Search Dialogue Node inside DataArray and return Index;\n" },
		{ "ModuleRelativePath", "Public/DialogueBuilderObject.h" },
		{ "ToolTip", "Search Dialogue Node inside DataArray and return Index;" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NodeID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDialogueBuilderObject_GetListIndexFromNodeID_Statics::NewProp_NodeID = { "NodeID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueBuilderObject_eventGetListIndexFromNodeID_Parms, NodeID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDialogueBuilderObject_GetListIndexFromNodeID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueBuilderObject_eventGetListIndexFromNodeID_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueBuilderObject_GetListIndexFromNodeID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueBuilderObject_GetListIndexFromNodeID_Statics::NewProp_NodeID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueBuilderObject_GetListIndexFromNodeID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueBuilderObject_GetListIndexFromNodeID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueBuilderObject_GetListIndexFromNodeID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueBuilderObject, nullptr, "GetListIndexFromNodeID", nullptr, nullptr, Z_Construct_UFunction_UDialogueBuilderObject_GetListIndexFromNodeID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueBuilderObject_GetListIndexFromNodeID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogueBuilderObject_GetListIndexFromNodeID_Statics::DialogueBuilderObject_eventGetListIndexFromNodeID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueBuilderObject_GetListIndexFromNodeID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueBuilderObject_GetListIndexFromNodeID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDialogueBuilderObject_GetListIndexFromNodeID_Statics::DialogueBuilderObject_eventGetListIndexFromNodeID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogueBuilderObject_GetListIndexFromNodeID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueBuilderObject_GetListIndexFromNodeID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogueBuilderObject::execGetListIndexFromNodeID)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NodeID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetListIndexFromNodeID(Z_Param_NodeID);
	P_NATIVE_END;
}
// End Class UDialogueBuilderObject Function GetListIndexFromNodeID

// Begin Class UDialogueBuilderObject Function IsPossibleToMoveFurther
struct Z_Construct_UFunction_UDialogueBuilderObject_IsPossibleToMoveFurther_Statics
{
	struct DialogueBuilderObject_eventIsPossibleToMoveFurther_Parms
	{
		int32 DataElementIndex;
		int32 FunctionNameIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// Check Transition Function if possible to move from node to node;\n" },
		{ "ModuleRelativePath", "Public/DialogueBuilderObject.h" },
		{ "ToolTip", "Check Transition Function if possible to move from node to node;" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DataElementIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FunctionNameIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDialogueBuilderObject_IsPossibleToMoveFurther_Statics::NewProp_DataElementIndex = { "DataElementIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueBuilderObject_eventIsPossibleToMoveFurther_Parms, DataElementIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDialogueBuilderObject_IsPossibleToMoveFurther_Statics::NewProp_FunctionNameIndex = { "FunctionNameIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueBuilderObject_eventIsPossibleToMoveFurther_Parms, FunctionNameIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDialogueBuilderObject_IsPossibleToMoveFurther_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DialogueBuilderObject_eventIsPossibleToMoveFurther_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDialogueBuilderObject_IsPossibleToMoveFurther_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DialogueBuilderObject_eventIsPossibleToMoveFurther_Parms), &Z_Construct_UFunction_UDialogueBuilderObject_IsPossibleToMoveFurther_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueBuilderObject_IsPossibleToMoveFurther_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueBuilderObject_IsPossibleToMoveFurther_Statics::NewProp_DataElementIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueBuilderObject_IsPossibleToMoveFurther_Statics::NewProp_FunctionNameIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueBuilderObject_IsPossibleToMoveFurther_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueBuilderObject_IsPossibleToMoveFurther_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueBuilderObject_IsPossibleToMoveFurther_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueBuilderObject, nullptr, "IsPossibleToMoveFurther", nullptr, nullptr, Z_Construct_UFunction_UDialogueBuilderObject_IsPossibleToMoveFurther_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueBuilderObject_IsPossibleToMoveFurther_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogueBuilderObject_IsPossibleToMoveFurther_Statics::DialogueBuilderObject_eventIsPossibleToMoveFurther_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueBuilderObject_IsPossibleToMoveFurther_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueBuilderObject_IsPossibleToMoveFurther_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDialogueBuilderObject_IsPossibleToMoveFurther_Statics::DialogueBuilderObject_eventIsPossibleToMoveFurther_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogueBuilderObject_IsPossibleToMoveFurther()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueBuilderObject_IsPossibleToMoveFurther_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogueBuilderObject::execIsPossibleToMoveFurther)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_DataElementIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_FunctionNameIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPossibleToMoveFurther(Z_Param_DataElementIndex,Z_Param_FunctionNameIndex);
	P_NATIVE_END;
}
// End Class UDialogueBuilderObject Function IsPossibleToMoveFurther

// Begin Class UDialogueBuilderObject Function MarkNodeasAlreadyPlayed
struct Z_Construct_UFunction_UDialogueBuilderObject_MarkNodeasAlreadyPlayed_Statics
{
	struct DialogueBuilderObject_eventMarkNodeasAlreadyPlayed_Parms
	{
		int32 NodeID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogue Builder" },
		{ "Comment", "// Check if Node is already played;\n" },
		{ "DisplayName", "Mark Node as Already Played" },
		{ "ModuleRelativePath", "Public/DialogueBuilderObject.h" },
		{ "ToolTip", "Check if Node is already played;" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NodeID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDialogueBuilderObject_MarkNodeasAlreadyPlayed_Statics::NewProp_NodeID = { "NodeID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueBuilderObject_eventMarkNodeasAlreadyPlayed_Parms, NodeID), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDialogueBuilderObject_MarkNodeasAlreadyPlayed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DialogueBuilderObject_eventMarkNodeasAlreadyPlayed_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDialogueBuilderObject_MarkNodeasAlreadyPlayed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DialogueBuilderObject_eventMarkNodeasAlreadyPlayed_Parms), &Z_Construct_UFunction_UDialogueBuilderObject_MarkNodeasAlreadyPlayed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueBuilderObject_MarkNodeasAlreadyPlayed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueBuilderObject_MarkNodeasAlreadyPlayed_Statics::NewProp_NodeID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueBuilderObject_MarkNodeasAlreadyPlayed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueBuilderObject_MarkNodeasAlreadyPlayed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueBuilderObject_MarkNodeasAlreadyPlayed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueBuilderObject, nullptr, "MarkNodeasAlreadyPlayed", nullptr, nullptr, Z_Construct_UFunction_UDialogueBuilderObject_MarkNodeasAlreadyPlayed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueBuilderObject_MarkNodeasAlreadyPlayed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogueBuilderObject_MarkNodeasAlreadyPlayed_Statics::DialogueBuilderObject_eventMarkNodeasAlreadyPlayed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueBuilderObject_MarkNodeasAlreadyPlayed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueBuilderObject_MarkNodeasAlreadyPlayed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDialogueBuilderObject_MarkNodeasAlreadyPlayed_Statics::DialogueBuilderObject_eventMarkNodeasAlreadyPlayed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogueBuilderObject_MarkNodeasAlreadyPlayed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueBuilderObject_MarkNodeasAlreadyPlayed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogueBuilderObject::execMarkNodeasAlreadyPlayed)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NodeID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->MarkNodeasAlreadyPlayed(Z_Param_NodeID);
	P_NATIVE_END;
}
// End Class UDialogueBuilderObject Function MarkNodeasAlreadyPlayed

// Begin Class UDialogueBuilderObject Function MoveToNextNodesFromNodeID
struct Z_Construct_UFunction_UDialogueBuilderObject_MoveToNextNodesFromNodeID_Statics
{
	struct DialogueBuilderObject_eventMoveToNextNodesFromNodeID_Parms
	{
		int32 CurrentNodeID;
		TArray<FDialogueDetailsStruct> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogue Builder" },
		{ "Comment", "// Move To Next Nodes Connected to DialogueNode;\n" },
		{ "DisplayName", "Move To Next Nodes From Node ID" },
		{ "ModuleRelativePath", "Public/DialogueBuilderObject.h" },
		{ "ToolTip", "Move To Next Nodes Connected to DialogueNode;" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentNodeID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDialogueBuilderObject_MoveToNextNodesFromNodeID_Statics::NewProp_CurrentNodeID = { "CurrentNodeID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueBuilderObject_eventMoveToNextNodesFromNodeID_Parms, CurrentNodeID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogueBuilderObject_MoveToNextNodesFromNodeID_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDialogueDetailsStruct, METADATA_PARAMS(0, nullptr) }; // 2927845017
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDialogueBuilderObject_MoveToNextNodesFromNodeID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueBuilderObject_eventMoveToNextNodesFromNodeID_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2927845017
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueBuilderObject_MoveToNextNodesFromNodeID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueBuilderObject_MoveToNextNodesFromNodeID_Statics::NewProp_CurrentNodeID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueBuilderObject_MoveToNextNodesFromNodeID_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueBuilderObject_MoveToNextNodesFromNodeID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueBuilderObject_MoveToNextNodesFromNodeID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueBuilderObject_MoveToNextNodesFromNodeID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueBuilderObject, nullptr, "MoveToNextNodesFromNodeID", nullptr, nullptr, Z_Construct_UFunction_UDialogueBuilderObject_MoveToNextNodesFromNodeID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueBuilderObject_MoveToNextNodesFromNodeID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogueBuilderObject_MoveToNextNodesFromNodeID_Statics::DialogueBuilderObject_eventMoveToNextNodesFromNodeID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueBuilderObject_MoveToNextNodesFromNodeID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueBuilderObject_MoveToNextNodesFromNodeID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDialogueBuilderObject_MoveToNextNodesFromNodeID_Statics::DialogueBuilderObject_eventMoveToNextNodesFromNodeID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogueBuilderObject_MoveToNextNodesFromNodeID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueBuilderObject_MoveToNextNodesFromNodeID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogueBuilderObject::execMoveToNextNodesFromNodeID)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_CurrentNodeID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FDialogueDetailsStruct>*)Z_Param__Result=P_THIS->MoveToNextNodesFromNodeID(Z_Param_CurrentNodeID);
	P_NATIVE_END;
}
// End Class UDialogueBuilderObject Function MoveToNextNodesFromNodeID

// Begin Class UDialogueBuilderObject Function RemoveDataElement
struct Z_Construct_UFunction_UDialogueBuilderObject_RemoveDataElement_Statics
{
	struct DialogueBuilderObject_eventRemoveDataElement_Parms
	{
		int32 ArrayElementIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// Remove Element from Dialogue Data Array; \n" },
		{ "ModuleRelativePath", "Public/DialogueBuilderObject.h" },
		{ "ToolTip", "Remove Element from Dialogue Data Array;" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ArrayElementIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDialogueBuilderObject_RemoveDataElement_Statics::NewProp_ArrayElementIndex = { "ArrayElementIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueBuilderObject_eventRemoveDataElement_Parms, ArrayElementIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDialogueBuilderObject_RemoveDataElement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DialogueBuilderObject_eventRemoveDataElement_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDialogueBuilderObject_RemoveDataElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DialogueBuilderObject_eventRemoveDataElement_Parms), &Z_Construct_UFunction_UDialogueBuilderObject_RemoveDataElement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueBuilderObject_RemoveDataElement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueBuilderObject_RemoveDataElement_Statics::NewProp_ArrayElementIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueBuilderObject_RemoveDataElement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueBuilderObject_RemoveDataElement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueBuilderObject_RemoveDataElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueBuilderObject, nullptr, "RemoveDataElement", nullptr, nullptr, Z_Construct_UFunction_UDialogueBuilderObject_RemoveDataElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueBuilderObject_RemoveDataElement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogueBuilderObject_RemoveDataElement_Statics::DialogueBuilderObject_eventRemoveDataElement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueBuilderObject_RemoveDataElement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueBuilderObject_RemoveDataElement_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDialogueBuilderObject_RemoveDataElement_Statics::DialogueBuilderObject_eventRemoveDataElement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogueBuilderObject_RemoveDataElement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueBuilderObject_RemoveDataElement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogueBuilderObject::execRemoveDataElement)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ArrayElementIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveDataElement(Z_Param_ArrayElementIndex);
	P_NATIVE_END;
}
// End Class UDialogueBuilderObject Function RemoveDataElement

// Begin Class UDialogueBuilderObject Function SetDataElement
struct Z_Construct_UFunction_UDialogueBuilderObject_SetDataElement_Statics
{
	struct DialogueBuilderObject_eventSetDataElement_Parms
	{
		int32 DataElementNumber;
		FDialogueDetailsStruct NewElement;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// Set Element at Dialogue Data Array; \n" },
		{ "ModuleRelativePath", "Public/DialogueBuilderObject.h" },
		{ "ToolTip", "Set Element at Dialogue Data Array;" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DataElementNumber;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewElement;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDialogueBuilderObject_SetDataElement_Statics::NewProp_DataElementNumber = { "DataElementNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueBuilderObject_eventSetDataElement_Parms, DataElementNumber), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogueBuilderObject_SetDataElement_Statics::NewProp_NewElement = { "NewElement", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueBuilderObject_eventSetDataElement_Parms, NewElement), Z_Construct_UScriptStruct_FDialogueDetailsStruct, METADATA_PARAMS(0, nullptr) }; // 2927845017
void Z_Construct_UFunction_UDialogueBuilderObject_SetDataElement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DialogueBuilderObject_eventSetDataElement_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDialogueBuilderObject_SetDataElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DialogueBuilderObject_eventSetDataElement_Parms), &Z_Construct_UFunction_UDialogueBuilderObject_SetDataElement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueBuilderObject_SetDataElement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueBuilderObject_SetDataElement_Statics::NewProp_DataElementNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueBuilderObject_SetDataElement_Statics::NewProp_NewElement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueBuilderObject_SetDataElement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueBuilderObject_SetDataElement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueBuilderObject_SetDataElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueBuilderObject, nullptr, "SetDataElement", nullptr, nullptr, Z_Construct_UFunction_UDialogueBuilderObject_SetDataElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueBuilderObject_SetDataElement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogueBuilderObject_SetDataElement_Statics::DialogueBuilderObject_eventSetDataElement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueBuilderObject_SetDataElement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueBuilderObject_SetDataElement_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDialogueBuilderObject_SetDataElement_Statics::DialogueBuilderObject_eventSetDataElement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogueBuilderObject_SetDataElement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueBuilderObject_SetDataElement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogueBuilderObject::execSetDataElement)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_DataElementNumber);
	P_GET_STRUCT(FDialogueDetailsStruct,Z_Param_NewElement);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetDataElement(Z_Param_DataElementNumber,Z_Param_NewElement);
	P_NATIVE_END;
}
// End Class UDialogueBuilderObject Function SetDataElement

// Begin Class UDialogueBuilderObject Function StartDialogue
struct Z_Construct_UFunction_UDialogueBuilderObject_StartDialogue_Statics
{
	struct DialogueBuilderObject_eventStartDialogue_Parms
	{
		FDialogueDetailsStruct ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogue Builder" },
		{ "Comment", "// Start Dialogue From Node Connected to \"Start Dialogue\" Node;\n" },
		{ "DisplayName", "Start Dialogue" },
		{ "ModuleRelativePath", "Public/DialogueBuilderObject.h" },
		{ "ToolTip", "Start Dialogue From Node Connected to \"Start Dialogue\" Node;" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogueBuilderObject_StartDialogue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueBuilderObject_eventStartDialogue_Parms, ReturnValue), Z_Construct_UScriptStruct_FDialogueDetailsStruct, METADATA_PARAMS(0, nullptr) }; // 2927845017
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueBuilderObject_StartDialogue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueBuilderObject_StartDialogue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueBuilderObject_StartDialogue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueBuilderObject_StartDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueBuilderObject, nullptr, "StartDialogue", nullptr, nullptr, Z_Construct_UFunction_UDialogueBuilderObject_StartDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueBuilderObject_StartDialogue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogueBuilderObject_StartDialogue_Statics::DialogueBuilderObject_eventStartDialogue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueBuilderObject_StartDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueBuilderObject_StartDialogue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDialogueBuilderObject_StartDialogue_Statics::DialogueBuilderObject_eventStartDialogue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogueBuilderObject_StartDialogue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueBuilderObject_StartDialogue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogueBuilderObject::execStartDialogue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FDialogueDetailsStruct*)Z_Param__Result=P_THIS->StartDialogue();
	P_NATIVE_END;
}
// End Class UDialogueBuilderObject Function StartDialogue

// Begin Class UDialogueBuilderObject Function StartDialogueFromNodeID
struct Z_Construct_UFunction_UDialogueBuilderObject_StartDialogueFromNodeID_Statics
{
	struct DialogueBuilderObject_eventStartDialogueFromNodeID_Parms
	{
		int32 NodeID;
		TArray<FDialogueDetailsStruct> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialogue Builder" },
		{ "Comment", "// Start Dialogue From Nodes Connected to DialogueNode;\n" },
		{ "DisplayName", "Start Dialogue From Node ID" },
		{ "ModuleRelativePath", "Public/DialogueBuilderObject.h" },
		{ "ToolTip", "Start Dialogue From Nodes Connected to DialogueNode;" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NodeID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDialogueBuilderObject_StartDialogueFromNodeID_Statics::NewProp_NodeID = { "NodeID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueBuilderObject_eventStartDialogueFromNodeID_Parms, NodeID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogueBuilderObject_StartDialogueFromNodeID_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDialogueDetailsStruct, METADATA_PARAMS(0, nullptr) }; // 2927845017
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDialogueBuilderObject_StartDialogueFromNodeID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueBuilderObject_eventStartDialogueFromNodeID_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2927845017
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueBuilderObject_StartDialogueFromNodeID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueBuilderObject_StartDialogueFromNodeID_Statics::NewProp_NodeID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueBuilderObject_StartDialogueFromNodeID_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueBuilderObject_StartDialogueFromNodeID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueBuilderObject_StartDialogueFromNodeID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueBuilderObject_StartDialogueFromNodeID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueBuilderObject, nullptr, "StartDialogueFromNodeID", nullptr, nullptr, Z_Construct_UFunction_UDialogueBuilderObject_StartDialogueFromNodeID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueBuilderObject_StartDialogueFromNodeID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogueBuilderObject_StartDialogueFromNodeID_Statics::DialogueBuilderObject_eventStartDialogueFromNodeID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueBuilderObject_StartDialogueFromNodeID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueBuilderObject_StartDialogueFromNodeID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDialogueBuilderObject_StartDialogueFromNodeID_Statics::DialogueBuilderObject_eventStartDialogueFromNodeID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogueBuilderObject_StartDialogueFromNodeID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueBuilderObject_StartDialogueFromNodeID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogueBuilderObject::execStartDialogueFromNodeID)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NodeID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FDialogueDetailsStruct>*)Z_Param__Result=P_THIS->StartDialogueFromNodeID(Z_Param_NodeID);
	P_NATIVE_END;
}
// End Class UDialogueBuilderObject Function StartDialogueFromNodeID

// Begin Class UDialogueBuilderObject Function UpdateAnimationForDialogue
struct DialogueBuilderObject_eventUpdateAnimationForDialogue_Parms
{
	FDialogueDetailsStruct DialogueNodeDetails;
};
static FName NAME_UDialogueBuilderObject_UpdateAnimationForDialogue = FName(TEXT("UpdateAnimationForDialogue"));
void UDialogueBuilderObject::UpdateAnimationForDialogue(FDialogueDetailsStruct DialogueNodeDetails)
{
	DialogueBuilderObject_eventUpdateAnimationForDialogue_Parms Parms;
	Parms.DialogueNodeDetails=DialogueNodeDetails;
	ProcessEvent(FindFunctionChecked(NAME_UDialogueBuilderObject_UpdateAnimationForDialogue),&Parms);
}
struct Z_Construct_UFunction_UDialogueBuilderObject_UpdateAnimationForDialogue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DialogueBuilderObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DialogueNodeDetails;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogueBuilderObject_UpdateAnimationForDialogue_Statics::NewProp_DialogueNodeDetails = { "DialogueNodeDetails", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueBuilderObject_eventUpdateAnimationForDialogue_Parms, DialogueNodeDetails), Z_Construct_UScriptStruct_FDialogueDetailsStruct, METADATA_PARAMS(0, nullptr) }; // 2927845017
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueBuilderObject_UpdateAnimationForDialogue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueBuilderObject_UpdateAnimationForDialogue_Statics::NewProp_DialogueNodeDetails,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueBuilderObject_UpdateAnimationForDialogue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueBuilderObject_UpdateAnimationForDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueBuilderObject, nullptr, "UpdateAnimationForDialogue", nullptr, nullptr, Z_Construct_UFunction_UDialogueBuilderObject_UpdateAnimationForDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueBuilderObject_UpdateAnimationForDialogue_Statics::PropPointers), sizeof(DialogueBuilderObject_eventUpdateAnimationForDialogue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueBuilderObject_UpdateAnimationForDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueBuilderObject_UpdateAnimationForDialogue_Statics::Function_MetaDataParams) };
static_assert(sizeof(DialogueBuilderObject_eventUpdateAnimationForDialogue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogueBuilderObject_UpdateAnimationForDialogue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueBuilderObject_UpdateAnimationForDialogue_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UDialogueBuilderObject Function UpdateAnimationForDialogue

// Begin Class UDialogueBuilderObject
void UDialogueBuilderObject::StaticRegisterNativesUDialogueBuilderObject()
{
	UClass* Class = UDialogueBuilderObject::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddDialogueDataElement", &UDialogueBuilderObject::execAddDialogueDataElement },
		{ "DebugGetAllIndexes", &UDialogueBuilderObject::execDebugGetAllIndexes },
		{ "GetListIndexFromNodeID", &UDialogueBuilderObject::execGetListIndexFromNodeID },
		{ "IsPossibleToMoveFurther", &UDialogueBuilderObject::execIsPossibleToMoveFurther },
		{ "MarkNodeasAlreadyPlayed", &UDialogueBuilderObject::execMarkNodeasAlreadyPlayed },
		{ "MoveToNextNodesFromNodeID", &UDialogueBuilderObject::execMoveToNextNodesFromNodeID },
		{ "RemoveDataElement", &UDialogueBuilderObject::execRemoveDataElement },
		{ "SetDataElement", &UDialogueBuilderObject::execSetDataElement },
		{ "StartDialogue", &UDialogueBuilderObject::execStartDialogue },
		{ "StartDialogueFromNodeID", &UDialogueBuilderObject::execStartDialogueFromNodeID },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogueBuilderObject);
UClass* Z_Construct_UClass_UDialogueBuilderObject_NoRegister()
{
	return UDialogueBuilderObject::StaticClass();
}
struct Z_Construct_UClass_UDialogueBuilderObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DialogueBuilderObject.h" },
		{ "ModuleRelativePath", "Public/DialogueBuilderObject.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialoguesData_MetaData[] = {
		{ "Category", "Dialogue Builder" },
		{ "Comment", "// Array to keep all data from Dialogue Graph Tab;\n" },
		{ "ModuleRelativePath", "Public/DialogueBuilderObject.h" },
		{ "ToolTip", "Array to keep all data from Dialogue Graph Tab;" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsJustDuplicated_MetaData[] = {
		{ "ModuleRelativePath", "Public/DialogueBuilderObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Test_MetaData[] = {
		{ "ModuleRelativePath", "Public/DialogueBuilderObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DialoguesData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DialoguesData;
	static void NewProp_IsJustDuplicated_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsJustDuplicated;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Test;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDialogueBuilderObject_AddDialogueDataElement, "AddDialogueDataElement" }, // 1390860074
		{ &Z_Construct_UFunction_UDialogueBuilderObject_DebugGetAllIndexes, "DebugGetAllIndexes" }, // 717821448
		{ &Z_Construct_UFunction_UDialogueBuilderObject_GetListIndexFromNodeID, "GetListIndexFromNodeID" }, // 1860200528
		{ &Z_Construct_UFunction_UDialogueBuilderObject_IsPossibleToMoveFurther, "IsPossibleToMoveFurther" }, // 2119264514
		{ &Z_Construct_UFunction_UDialogueBuilderObject_MarkNodeasAlreadyPlayed, "MarkNodeasAlreadyPlayed" }, // 2905548903
		{ &Z_Construct_UFunction_UDialogueBuilderObject_MoveToNextNodesFromNodeID, "MoveToNextNodesFromNodeID" }, // 1077267951
		{ &Z_Construct_UFunction_UDialogueBuilderObject_RemoveDataElement, "RemoveDataElement" }, // 303153789
		{ &Z_Construct_UFunction_UDialogueBuilderObject_SetDataElement, "SetDataElement" }, // 1128740791
		{ &Z_Construct_UFunction_UDialogueBuilderObject_StartDialogue, "StartDialogue" }, // 2389061303
		{ &Z_Construct_UFunction_UDialogueBuilderObject_StartDialogueFromNodeID, "StartDialogueFromNodeID" }, // 524451335
		{ &Z_Construct_UFunction_UDialogueBuilderObject_UpdateAnimationForDialogue, "UpdateAnimationForDialogue" }, // 403615331
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueBuilderObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogueBuilderObject_Statics::NewProp_DialoguesData_Inner = { "DialoguesData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDialogueDetailsStruct, METADATA_PARAMS(0, nullptr) }; // 2927845017
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDialogueBuilderObject_Statics::NewProp_DialoguesData = { "DialoguesData", nullptr, (EPropertyFlags)0x0010000000200014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueBuilderObject, DialoguesData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialoguesData_MetaData), NewProp_DialoguesData_MetaData) }; // 2927845017
void Z_Construct_UClass_UDialogueBuilderObject_Statics::NewProp_IsJustDuplicated_SetBit(void* Obj)
{
	((UDialogueBuilderObject*)Obj)->IsJustDuplicated = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDialogueBuilderObject_Statics::NewProp_IsJustDuplicated = { "IsJustDuplicated", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDialogueBuilderObject), &Z_Construct_UClass_UDialogueBuilderObject_Statics::NewProp_IsJustDuplicated_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsJustDuplicated_MetaData), NewProp_IsJustDuplicated_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDialogueBuilderObject_Statics::NewProp_Test = { "Test", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueBuilderObject, Test), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Test_MetaData), NewProp_Test_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogueBuilderObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueBuilderObject_Statics::NewProp_DialoguesData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueBuilderObject_Statics::NewProp_DialoguesData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueBuilderObject_Statics::NewProp_IsJustDuplicated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueBuilderObject_Statics::NewProp_Test,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueBuilderObject_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDialogueBuilderObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_DialogueBuilder,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueBuilderObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UDialogueBuilderObject_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UDialogueBuilderInterface_NoRegister, (int32)VTABLE_OFFSET(UDialogueBuilderObject, IDialogueBuilderInterface), false },  // 2639159324
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueBuilderObject_Statics::ClassParams = {
	&UDialogueBuilderObject::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDialogueBuilderObject_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueBuilderObject_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueBuilderObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogueBuilderObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDialogueBuilderObject()
{
	if (!Z_Registration_Info_UClass_UDialogueBuilderObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueBuilderObject.OuterSingleton, Z_Construct_UClass_UDialogueBuilderObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogueBuilderObject.OuterSingleton;
}
template<> DIALOGUEBUILDER_API UClass* StaticClass<UDialogueBuilderObject>()
{
	return UDialogueBuilderObject::StaticClass();
}
void UDialogueBuilderObject::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_Test(TEXT("Test"));
	const bool bIsValid = true
		&& Name_Test == ClassReps[(int32)ENetFields_Private::Test].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UDialogueBuilderObject"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueBuilderObject);
UDialogueBuilderObject::~UDialogueBuilderObject() {}
// End Class UDialogueBuilderObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilder_Public_DialogueBuilderObject_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDialogueDetailsStruct::StaticStruct, Z_Construct_UScriptStruct_FDialogueDetailsStruct_Statics::NewStructOps, TEXT("DialogueDetailsStruct"), &Z_Registration_Info_UScriptStruct_DialogueDetailsStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDialogueDetailsStruct), 2927845017U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueBuilderObject, UDialogueBuilderObject::StaticClass, TEXT("UDialogueBuilderObject"), &Z_Registration_Info_UClass_UDialogueBuilderObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueBuilderObject), 2550980741U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilder_Public_DialogueBuilderObject_h_591937007(TEXT("/Script/DialogueBuilder"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilder_Public_DialogueBuilderObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilder_Public_DialogueBuilderObject_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilder_Public_DialogueBuilderObject_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilder_Public_DialogueBuilderObject_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
