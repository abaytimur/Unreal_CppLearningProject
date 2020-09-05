// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CppLearningProject/DamageableActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDamageableActor() {}
// Cross Module References
	CPPLEARNINGPROJECT_API UClass* Z_Construct_UClass_ADamageableActor_NoRegister();
	CPPLEARNINGPROJECT_API UClass* Z_Construct_UClass_ADamageableActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CppLearningProject();
// End Cross Module References
	static FName NAME_ADamageableActor_OnTakeAttack = FName(TEXT("OnTakeAttack"));
	void ADamageableActor::OnTakeAttack()
	{
		ProcessEvent(FindFunctionChecked(NAME_ADamageableActor_OnTakeAttack),NULL);
	}
	void ADamageableActor::StaticRegisterNativesADamageableActor()
	{
	}
	struct Z_Construct_UFunction_ADamageableActor_OnTakeAttack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADamageableActor_OnTakeAttack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "DamageableActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADamageableActor_OnTakeAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADamageableActor, nullptr, "OnTakeAttack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADamageableActor_OnTakeAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADamageableActor_OnTakeAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADamageableActor_OnTakeAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADamageableActor_OnTakeAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADamageableActor_NoRegister()
	{
		return ADamageableActor::StaticClass();
	}
	struct Z_Construct_UClass_ADamageableActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isAttackable_MetaData[];
#endif
		static void NewProp_isAttackable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isAttackable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADamageableActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CppLearningProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADamageableActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADamageableActor_OnTakeAttack, "OnTakeAttack" }, // 3348962384
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADamageableActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DamageableActor.h" },
		{ "ModuleRelativePath", "DamageableActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADamageableActor_Statics::NewProp_isAttackable_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "DamageableActor.h" },
	};
#endif
	void Z_Construct_UClass_ADamageableActor_Statics::NewProp_isAttackable_SetBit(void* Obj)
	{
		((ADamageableActor*)Obj)->isAttackable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADamageableActor_Statics::NewProp_isAttackable = { "isAttackable", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADamageableActor), &Z_Construct_UClass_ADamageableActor_Statics::NewProp_isAttackable_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADamageableActor_Statics::NewProp_isAttackable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADamageableActor_Statics::NewProp_isAttackable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADamageableActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADamageableActor_Statics::NewProp_isAttackable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADamageableActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADamageableActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADamageableActor_Statics::ClassParams = {
		&ADamageableActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADamageableActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADamageableActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADamageableActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADamageableActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADamageableActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADamageableActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADamageableActor, 4279794772);
	template<> CPPLEARNINGPROJECT_API UClass* StaticClass<ADamageableActor>()
	{
		return ADamageableActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADamageableActor(Z_Construct_UClass_ADamageableActor, &ADamageableActor::StaticClass, TEXT("/Script/CppLearningProject"), TEXT("ADamageableActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADamageableActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
