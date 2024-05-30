// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DialogueBuilderEditor/Public/Graphs/Nodes/StateNodeDB.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateNodeDB() {}

// Begin Cross Module References
BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_CustomEvent_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
DIALOGUEBUILDEREDITOR_API UClass* Z_Construct_UClass_UStateNodeDB();
DIALOGUEBUILDEREDITOR_API UClass* Z_Construct_UClass_UStateNodeDB_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDialogueWave_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
UPackage* Z_Construct_UPackage__Script_DialogueBuilderEditor();
// End Cross Module References

// Begin Class UStateNodeDB Function OnDialoguePlay
struct Z_Construct_UFunction_UStateNodeDB_OnDialoguePlay_Statics
{
	struct StateNodeDB_eventOnDialoguePlay_Parms
	{
		float PlayDelay;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Data related to OnPlayDialogue Function*/// Sample for Transition function creation;\n" },
		{ "ModuleRelativePath", "Public/Graphs/Nodes/StateNodeDB.h" },
		{ "ToolTip", "Data related to OnPlayDialogue Function// Sample for Transition function creation;" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayDelay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStateNodeDB_OnDialoguePlay_Statics::NewProp_PlayDelay = { "PlayDelay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StateNodeDB_eventOnDialoguePlay_Parms, PlayDelay), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStateNodeDB_OnDialoguePlay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateNodeDB_OnDialoguePlay_Statics::NewProp_PlayDelay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStateNodeDB_OnDialoguePlay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStateNodeDB_OnDialoguePlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStateNodeDB, nullptr, "OnDialoguePlay", nullptr, nullptr, Z_Construct_UFunction_UStateNodeDB_OnDialoguePlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateNodeDB_OnDialoguePlay_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStateNodeDB_OnDialoguePlay_Statics::StateNodeDB_eventOnDialoguePlay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStateNodeDB_OnDialoguePlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStateNodeDB_OnDialoguePlay_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStateNodeDB_OnDialoguePlay_Statics::StateNodeDB_eventOnDialoguePlay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStateNodeDB_OnDialoguePlay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStateNodeDB_OnDialoguePlay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStateNodeDB::execOnDialoguePlay)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_PlayDelay);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDialoguePlay(Z_Param_PlayDelay);
	P_NATIVE_END;
}
// End Class UStateNodeDB Function OnDialoguePlay

// Begin Class UStateNodeDB
void UStateNodeDB::StaticRegisterNativesUStateNodeDB()
{
	UClass* Class = UStateNodeDB::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnDialoguePlay", &UStateNodeDB::execOnDialoguePlay },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStateNodeDB);
UClass* Z_Construct_UClass_UStateNodeDB_NoRegister()
{
	return UStateNodeDB::StaticClass();
}
struct Z_Construct_UClass_UStateNodeDB_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Graphs/Nodes/StateNodeDB.h" },
		{ "ModuleRelativePath", "Public/Graphs/Nodes/StateNodeDB.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueNodeId_MetaData[] = {
		{ "Category", "Dialogue Node | Default" },
		{ "Comment", "/** Visible part at Details Tab; */" },
		{ "ModuleRelativePath", "Public/Graphs/Nodes/StateNodeDB.h" },
		{ "ToolTip", "Visible part at Details Tab;" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueNodeText_MetaData[] = {
		{ "Category", "Dialogue Node | Default" },
		{ "ModuleRelativePath", "Public/Graphs/Nodes/StateNodeDB.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsPlayerNode_MetaData[] = {
		{ "Category", "Dialogue Node | Default" },
		{ "ModuleRelativePath", "Public/Graphs/Nodes/StateNodeDB.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsPlayerAnswerOption_MetaData[] = {
		{ "Category", "Dialogue Node | Default" },
		{ "ModuleRelativePath", "Public/Graphs/Nodes/StateNodeDB.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeakerName_MetaData[] = {
		{ "Category", "Dialogue Node | Default" },
		{ "ModuleRelativePath", "Public/Graphs/Nodes/StateNodeDB.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeakerTexture_MetaData[] = {
		{ "Category", "Dialogue Node | Default" },
		{ "ModuleRelativePath", "Public/Graphs/Nodes/StateNodeDB.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsSwitchNode_MetaData[] = {
		{ "Category", "Dialogue Node | Default" },
		{ "ModuleRelativePath", "Public/Graphs/Nodes/StateNodeDB.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DelayToMoveNextNodes_MetaData[] = {
		{ "Category", "Dialogue Node | Default" },
		{ "ModuleRelativePath", "Public/Graphs/Nodes/StateNodeDB.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueAudio_MetaData[] = {
		{ "Category", "Dialogue Node | Default" },
		{ "ModuleRelativePath", "Public/Graphs/Nodes/StateNodeDB.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueWave_MetaData[] = {
		{ "Category", "Dialogue Node | Default" },
		{ "ModuleRelativePath", "Public/Graphs/Nodes/StateNodeDB.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BeginPlayDelay_MetaData[] = {
		{ "Category", "Dialogue Node | Default" },
		{ "ModuleRelativePath", "Public/Graphs/Nodes/StateNodeDB.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimToUpdate_MetaData[] = {
		{ "Category", "Dialogue Node | Animation" },
		{ "ModuleRelativePath", "Public/Graphs/Nodes/StateNodeDB.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimToUpdateHead_MetaData[] = {
		{ "Category", "Dialogue Node | Animation" },
		{ "ModuleRelativePath", "Public/Graphs/Nodes/StateNodeDB.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsItEndNode_MetaData[] = {
		{ "Category", "Dialogue Node | Animation" },
		{ "ModuleRelativePath", "Public/Graphs/Nodes/StateNodeDB.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WriteEffect_MetaData[] = {
		{ "Category", "Dialogue Node | Type Writer Text Effect" },
		{ "ModuleRelativePath", "Public/Graphs/Nodes/StateNodeDB.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WriteEffectSpeed_MetaData[] = {
		{ "Category", "Dialogue Node | Type Writer Text Effect" },
		{ "ModuleRelativePath", "Public/Graphs/Nodes/StateNodeDB.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsTimedDecisions_MetaData[] = {
		{ "Category", "Dialogue Node | Timed Decision" },
		{ "ModuleRelativePath", "Public/Graphs/Nodes/StateNodeDB.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimedDecisionsTime_MetaData[] = {
		{ "Category", "Dialogue Node | Timed Decision" },
		{ "ModuleRelativePath", "Public/Graphs/Nodes/StateNodeDB.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextNodesId_MetaData[] = {
		{ "Comment", "/** Non-Visible / Connection part at Details Tab */// Array of Dialogues Node ID numbers connected to this Node;\n" },
		{ "ModuleRelativePath", "Public/Graphs/Nodes/StateNodeDB.h" },
		{ "ToolTip", "Non-Visible / Connection part at Details Tab // Array of Dialogues Node ID numbers connected to this Node;" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateTransitionNameToCheck_MetaData[] = {
		{ "Comment", "// Array of Transition Function Names for this Node. Order Proportional to NextNodesId ;\n" },
		{ "ModuleRelativePath", "Public/Graphs/Nodes/StateNodeDB.h" },
		{ "ToolTip", "Array of Transition Function Names for this Node. Order Proportional to NextNodesId ;" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PinsIDArray_MetaData[] = {
		{ "Comment", "// Array of PinID connected to this Node;\n" },
		{ "ModuleRelativePath", "Public/Graphs/Nodes/StateNodeDB.h" },
		{ "ToolTip", "Array of PinID connected to this Node;" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDialoguePlayFuncName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graphs/Nodes/StateNodeDB.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeForJump_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graphs/Nodes/StateNodeDB.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphID_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graphs/Nodes/StateNodeDB.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DialogueNodeId;
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
	static const UECodeGen_Private::FIntPropertyParams NewProp_NextNodesId_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NextNodesId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_StateTransitionNameToCheck_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StateTransitionNameToCheck;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PinsIDArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PinsIDArray;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OnDialoguePlayFuncName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NodeForJump;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GraphID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UStateNodeDB_OnDialoguePlay, "OnDialoguePlay" }, // 3188998047
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStateNodeDB>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStateNodeDB_Statics::NewProp_DialogueNodeId = { "DialogueNodeId", nullptr, (EPropertyFlags)0x0010000000030001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateNodeDB, DialogueNodeId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueNodeId_MetaData), NewProp_DialogueNodeId_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UStateNodeDB_Statics::NewProp_DialogueNodeText = { "DialogueNodeText", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateNodeDB, DialogueNodeText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueNodeText_MetaData), NewProp_DialogueNodeText_MetaData) };
void Z_Construct_UClass_UStateNodeDB_Statics::NewProp_IsPlayerNode_SetBit(void* Obj)
{
	((UStateNodeDB*)Obj)->IsPlayerNode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStateNodeDB_Statics::NewProp_IsPlayerNode = { "IsPlayerNode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UStateNodeDB), &Z_Construct_UClass_UStateNodeDB_Statics::NewProp_IsPlayerNode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsPlayerNode_MetaData), NewProp_IsPlayerNode_MetaData) };
void Z_Construct_UClass_UStateNodeDB_Statics::NewProp_IsPlayerAnswerOption_SetBit(void* Obj)
{
	((UStateNodeDB*)Obj)->IsPlayerAnswerOption = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStateNodeDB_Statics::NewProp_IsPlayerAnswerOption = { "IsPlayerAnswerOption", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UStateNodeDB), &Z_Construct_UClass_UStateNodeDB_Statics::NewProp_IsPlayerAnswerOption_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsPlayerAnswerOption_MetaData), NewProp_IsPlayerAnswerOption_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UStateNodeDB_Statics::NewProp_SpeakerName = { "SpeakerName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateNodeDB, SpeakerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeakerName_MetaData), NewProp_SpeakerName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStateNodeDB_Statics::NewProp_SpeakerTexture = { "SpeakerTexture", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateNodeDB, SpeakerTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeakerTexture_MetaData), NewProp_SpeakerTexture_MetaData) };
void Z_Construct_UClass_UStateNodeDB_Statics::NewProp_IsSwitchNode_SetBit(void* Obj)
{
	((UStateNodeDB*)Obj)->IsSwitchNode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStateNodeDB_Statics::NewProp_IsSwitchNode = { "IsSwitchNode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UStateNodeDB), &Z_Construct_UClass_UStateNodeDB_Statics::NewProp_IsSwitchNode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsSwitchNode_MetaData), NewProp_IsSwitchNode_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStateNodeDB_Statics::NewProp_DelayToMoveNextNodes = { "DelayToMoveNextNodes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateNodeDB, DelayToMoveNextNodes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DelayToMoveNextNodes_MetaData), NewProp_DelayToMoveNextNodes_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStateNodeDB_Statics::NewProp_DialogueAudio = { "DialogueAudio", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateNodeDB, DialogueAudio), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueAudio_MetaData), NewProp_DialogueAudio_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStateNodeDB_Statics::NewProp_DialogueWave = { "DialogueWave", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateNodeDB, DialogueWave), Z_Construct_UClass_UDialogueWave_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueWave_MetaData), NewProp_DialogueWave_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStateNodeDB_Statics::NewProp_BeginPlayDelay = { "BeginPlayDelay", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateNodeDB, BeginPlayDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BeginPlayDelay_MetaData), NewProp_BeginPlayDelay_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStateNodeDB_Statics::NewProp_AnimToUpdate = { "AnimToUpdate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateNodeDB, AnimToUpdate), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimToUpdate_MetaData), NewProp_AnimToUpdate_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStateNodeDB_Statics::NewProp_AnimToUpdateHead = { "AnimToUpdateHead", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateNodeDB, AnimToUpdateHead), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimToUpdateHead_MetaData), NewProp_AnimToUpdateHead_MetaData) };
void Z_Construct_UClass_UStateNodeDB_Statics::NewProp_IsItEndNode_SetBit(void* Obj)
{
	((UStateNodeDB*)Obj)->IsItEndNode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStateNodeDB_Statics::NewProp_IsItEndNode = { "IsItEndNode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UStateNodeDB), &Z_Construct_UClass_UStateNodeDB_Statics::NewProp_IsItEndNode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsItEndNode_MetaData), NewProp_IsItEndNode_MetaData) };
void Z_Construct_UClass_UStateNodeDB_Statics::NewProp_WriteEffect_SetBit(void* Obj)
{
	((UStateNodeDB*)Obj)->WriteEffect = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStateNodeDB_Statics::NewProp_WriteEffect = { "WriteEffect", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UStateNodeDB), &Z_Construct_UClass_UStateNodeDB_Statics::NewProp_WriteEffect_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WriteEffect_MetaData), NewProp_WriteEffect_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStateNodeDB_Statics::NewProp_WriteEffectSpeed = { "WriteEffectSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateNodeDB, WriteEffectSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WriteEffectSpeed_MetaData), NewProp_WriteEffectSpeed_MetaData) };
void Z_Construct_UClass_UStateNodeDB_Statics::NewProp_IsTimedDecisions_SetBit(void* Obj)
{
	((UStateNodeDB*)Obj)->IsTimedDecisions = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStateNodeDB_Statics::NewProp_IsTimedDecisions = { "IsTimedDecisions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UStateNodeDB), &Z_Construct_UClass_UStateNodeDB_Statics::NewProp_IsTimedDecisions_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsTimedDecisions_MetaData), NewProp_IsTimedDecisions_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStateNodeDB_Statics::NewProp_TimedDecisionsTime = { "TimedDecisionsTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateNodeDB, TimedDecisionsTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimedDecisionsTime_MetaData), NewProp_TimedDecisionsTime_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStateNodeDB_Statics::NewProp_NextNodesId_Inner = { "NextNodesId", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStateNodeDB_Statics::NewProp_NextNodesId = { "NextNodesId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateNodeDB, NextNodesId), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextNodesId_MetaData), NewProp_NextNodesId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UStateNodeDB_Statics::NewProp_StateTransitionNameToCheck_Inner = { "StateTransitionNameToCheck", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStateNodeDB_Statics::NewProp_StateTransitionNameToCheck = { "StateTransitionNameToCheck", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateNodeDB, StateTransitionNameToCheck), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateTransitionNameToCheck_MetaData), NewProp_StateTransitionNameToCheck_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStateNodeDB_Statics::NewProp_PinsIDArray_Inner = { "PinsIDArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStateNodeDB_Statics::NewProp_PinsIDArray = { "PinsIDArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateNodeDB, PinsIDArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PinsIDArray_MetaData), NewProp_PinsIDArray_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UStateNodeDB_Statics::NewProp_OnDialoguePlayFuncName = { "OnDialoguePlayFuncName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateNodeDB, OnDialoguePlayFuncName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDialoguePlayFuncName_MetaData), NewProp_OnDialoguePlayFuncName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStateNodeDB_Statics::NewProp_NodeForJump = { "NodeForJump", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateNodeDB, NodeForJump), Z_Construct_UClass_UK2Node_CustomEvent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeForJump_MetaData), NewProp_NodeForJump_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStateNodeDB_Statics::NewProp_GraphID = { "GraphID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStateNodeDB, GraphID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphID_MetaData), NewProp_GraphID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStateNodeDB_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateNodeDB_Statics::NewProp_DialogueNodeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateNodeDB_Statics::NewProp_DialogueNodeText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateNodeDB_Statics::NewProp_IsPlayerNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateNodeDB_Statics::NewProp_IsPlayerAnswerOption,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateNodeDB_Statics::NewProp_SpeakerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateNodeDB_Statics::NewProp_SpeakerTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateNodeDB_Statics::NewProp_IsSwitchNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateNodeDB_Statics::NewProp_DelayToMoveNextNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateNodeDB_Statics::NewProp_DialogueAudio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateNodeDB_Statics::NewProp_DialogueWave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateNodeDB_Statics::NewProp_BeginPlayDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateNodeDB_Statics::NewProp_AnimToUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateNodeDB_Statics::NewProp_AnimToUpdateHead,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateNodeDB_Statics::NewProp_IsItEndNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateNodeDB_Statics::NewProp_WriteEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateNodeDB_Statics::NewProp_WriteEffectSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateNodeDB_Statics::NewProp_IsTimedDecisions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateNodeDB_Statics::NewProp_TimedDecisionsTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateNodeDB_Statics::NewProp_NextNodesId_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateNodeDB_Statics::NewProp_NextNodesId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateNodeDB_Statics::NewProp_StateTransitionNameToCheck_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateNodeDB_Statics::NewProp_StateTransitionNameToCheck,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateNodeDB_Statics::NewProp_PinsIDArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateNodeDB_Statics::NewProp_PinsIDArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateNodeDB_Statics::NewProp_OnDialoguePlayFuncName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateNodeDB_Statics::NewProp_NodeForJump,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateNodeDB_Statics::NewProp_GraphID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStateNodeDB_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UStateNodeDB_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
	(UObject* (*)())Z_Construct_UPackage__Script_DialogueBuilderEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStateNodeDB_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStateNodeDB_Statics::ClassParams = {
	&UStateNodeDB::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UStateNodeDB_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UStateNodeDB_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStateNodeDB_Statics::Class_MetaDataParams), Z_Construct_UClass_UStateNodeDB_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStateNodeDB()
{
	if (!Z_Registration_Info_UClass_UStateNodeDB.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStateNodeDB.OuterSingleton, Z_Construct_UClass_UStateNodeDB_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStateNodeDB.OuterSingleton;
}
template<> DIALOGUEBUILDEREDITOR_API UClass* StaticClass<UStateNodeDB>()
{
	return UStateNodeDB::StaticClass();
}
UStateNodeDB::UStateNodeDB(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStateNodeDB);
UStateNodeDB::~UStateNodeDB() {}
// End Class UStateNodeDB

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilderEditor_Public_Graphs_Nodes_StateNodeDB_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStateNodeDB, UStateNodeDB::StaticClass, TEXT("UStateNodeDB"), &Z_Registration_Info_UClass_UStateNodeDB, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStateNodeDB), 1789679185U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilderEditor_Public_Graphs_Nodes_StateNodeDB_h_2486847769(TEXT("/Script/DialogueBuilderEditor"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilderEditor_Public_Graphs_Nodes_StateNodeDB_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DialogueBuilder_Source_DialogueBuilderEditor_Public_Graphs_Nodes_StateNodeDB_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
