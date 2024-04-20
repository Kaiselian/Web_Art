// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintJson/Classes/BlueprintJsonLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintJsonLibrary() {}
// Cross Module References
	BLUEPRINTJSON_API UEnum* Z_Construct_UEnum_BlueprintJson_EJsonType();
	UPackage* Z_Construct_UPackage__Script_BlueprintJson();
	BLUEPRINTJSON_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintJsonObject();
	BLUEPRINTJSON_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintJsonValue();
	BLUEPRINTJSON_API UClass* Z_Construct_UClass_UBlueprintJsonLibrary_NoRegister();
	BLUEPRINTJSON_API UClass* Z_Construct_UClass_UBlueprintJsonLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EJsonType;
	static UEnum* EJsonType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EJsonType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EJsonType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BlueprintJson_EJsonType, Z_Construct_UPackage__Script_BlueprintJson(), TEXT("EJsonType"));
		}
		return Z_Registration_Info_UEnum_EJsonType.OuterSingleton;
	}
	template<> BLUEPRINTJSON_API UEnum* StaticEnum<EJsonType>()
	{
		return EJsonType_StaticEnum();
	}
	struct Z_Construct_UEnum_BlueprintJson_EJsonType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_BlueprintJson_EJsonType_Statics::Enumerators[] = {
		{ "EJsonType::None", (int64)EJsonType::None },
		{ "EJsonType::Null", (int64)EJsonType::Null },
		{ "EJsonType::String", (int64)EJsonType::String },
		{ "EJsonType::Number", (int64)EJsonType::Number },
		{ "EJsonType::Boolean", (int64)EJsonType::Boolean },
		{ "EJsonType::Array", (int64)EJsonType::Array },
		{ "EJsonType::Object", (int64)EJsonType::Object },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_BlueprintJson_EJsonType_Statics::Enum_MetaDataParams[] = {
		{ "Array.Name", "EJsonType::Array" },
		{ "BlueprintType", "true" },
		{ "Boolean.Name", "EJsonType::Boolean" },
		{ "ModuleRelativePath", "Classes/BlueprintJsonLibrary.h" },
		{ "None.Name", "EJsonType::None" },
		{ "Null.Name", "EJsonType::Null" },
		{ "Number.Name", "EJsonType::Number" },
		{ "Object.Name", "EJsonType::Object" },
		{ "String.Name", "EJsonType::String" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BlueprintJson_EJsonType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_BlueprintJson,
		nullptr,
		"EJsonType",
		"EJsonType",
		Z_Construct_UEnum_BlueprintJson_EJsonType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_BlueprintJson_EJsonType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_BlueprintJson_EJsonType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_BlueprintJson_EJsonType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_BlueprintJson_EJsonType()
	{
		if (!Z_Registration_Info_UEnum_EJsonType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EJsonType.InnerSingleton, Z_Construct_UEnum_BlueprintJson_EJsonType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EJsonType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BlueprintJsonObject;
class UScriptStruct* FBlueprintJsonObject::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BlueprintJsonObject.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BlueprintJsonObject.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintJsonObject, Z_Construct_UPackage__Script_BlueprintJson(), TEXT("BlueprintJsonObject"));
	}
	return Z_Registration_Info_UScriptStruct_BlueprintJsonObject.OuterSingleton;
}
template<> BLUEPRINTJSON_API UScriptStruct* StaticStruct<FBlueprintJsonObject>()
{
	return FBlueprintJsonObject::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBlueprintJsonObject_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintJsonObject_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HasNativeBreak", "BlueprintJson.BlueprintJsonLibrary.Conv_JsonObjectToString" },
		{ "HasNativeMake", "BlueprintJson.BlueprintJsonLibrary.JsonMake" },
		{ "ModuleRelativePath", "Classes/BlueprintJsonLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlueprintJsonObject_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlueprintJsonObject>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlueprintJsonObject_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintJson,
		nullptr,
		&NewStructOps,
		"BlueprintJsonObject",
		sizeof(FBlueprintJsonObject),
		alignof(FBlueprintJsonObject),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintJsonObject_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintJsonObject_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBlueprintJsonObject()
	{
		if (!Z_Registration_Info_UScriptStruct_BlueprintJsonObject.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BlueprintJsonObject.InnerSingleton, Z_Construct_UScriptStruct_FBlueprintJsonObject_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BlueprintJsonObject.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BlueprintJsonValue;
class UScriptStruct* FBlueprintJsonValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BlueprintJsonValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BlueprintJsonValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintJsonValue, Z_Construct_UPackage__Script_BlueprintJson(), TEXT("BlueprintJsonValue"));
	}
	return Z_Registration_Info_UScriptStruct_BlueprintJsonValue.OuterSingleton;
}
template<> BLUEPRINTJSON_API UScriptStruct* StaticStruct<FBlueprintJsonValue>()
{
	return FBlueprintJsonValue::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBlueprintJsonValue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintJsonValue_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HasNativeMake", "BlueprintJson.BlueprintJsonLibrary.JsonMakeString" },
		{ "ModuleRelativePath", "Classes/BlueprintJsonLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlueprintJsonValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlueprintJsonValue>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlueprintJsonValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintJson,
		nullptr,
		&NewStructOps,
		"BlueprintJsonValue",
		sizeof(FBlueprintJsonValue),
		alignof(FBlueprintJsonValue),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintJsonValue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintJsonValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBlueprintJsonValue()
	{
		if (!Z_Registration_Info_UScriptStruct_BlueprintJsonValue.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BlueprintJsonValue.InnerSingleton, Z_Construct_UScriptStruct_FBlueprintJsonValue_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BlueprintJsonValue.InnerSingleton;
	}
	DEFINE_FUNCTION(UBlueprintJsonLibrary::execConv_JsonValueToObject)
	{
		P_GET_STRUCT_REF(FBlueprintJsonValue,Z_Param_Out_JsonValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBlueprintJsonObject*)Z_Param__Result=UBlueprintJsonLibrary::Conv_JsonValueToObject(Z_Param_Out_JsonValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintJsonLibrary::execConv_JsonValueToArray)
	{
		P_GET_STRUCT_REF(FBlueprintJsonValue,Z_Param_Out_JsonValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FBlueprintJsonValue>*)Z_Param__Result=UBlueprintJsonLibrary::Conv_JsonValueToArray(Z_Param_Out_JsonValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintJsonLibrary::execConv_JsonValueToBool)
	{
		P_GET_STRUCT_REF(FBlueprintJsonValue,Z_Param_Out_JsonValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBlueprintJsonLibrary::Conv_JsonValueToBool(Z_Param_Out_JsonValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintJsonLibrary::execConv_JsonValueToFloat)
	{
		P_GET_STRUCT_REF(FBlueprintJsonValue,Z_Param_Out_JsonValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UBlueprintJsonLibrary::Conv_JsonValueToFloat(Z_Param_Out_JsonValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintJsonLibrary::execConv_JsonValueToInteger)
	{
		P_GET_STRUCT_REF(FBlueprintJsonValue,Z_Param_Out_JsonValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UBlueprintJsonLibrary::Conv_JsonValueToInteger(Z_Param_Out_JsonValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintJsonLibrary::execConv_JsonValueToString)
	{
		P_GET_STRUCT_REF(FBlueprintJsonValue,Z_Param_Out_JsonValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBlueprintJsonLibrary::Conv_JsonValueToString(Z_Param_Out_JsonValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintJsonLibrary::execNotEqual_JsonValue)
	{
		P_GET_STRUCT_REF(FBlueprintJsonValue,Z_Param_Out_A);
		P_GET_STRUCT_REF(FBlueprintJsonValue,Z_Param_Out_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBlueprintJsonLibrary::NotEqual_JsonValue(Z_Param_Out_A,Z_Param_Out_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintJsonLibrary::execEquaEqual_JsonValue)
	{
		P_GET_STRUCT_REF(FBlueprintJsonValue,Z_Param_Out_A);
		P_GET_STRUCT_REF(FBlueprintJsonValue,Z_Param_Out_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBlueprintJsonLibrary::EquaEqual_JsonValue(Z_Param_Out_A,Z_Param_Out_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintJsonLibrary::execJsonIsNull)
	{
		P_GET_STRUCT_REF(FBlueprintJsonValue,Z_Param_Out_JsonValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBlueprintJsonLibrary::JsonIsNull(Z_Param_Out_JsonValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintJsonLibrary::execJsonType)
	{
		P_GET_STRUCT_REF(FBlueprintJsonValue,Z_Param_Out_JsonValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EJsonType*)Z_Param__Result=UBlueprintJsonLibrary::JsonType(Z_Param_Out_JsonValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintJsonLibrary::execJsonMakeNull)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBlueprintJsonValue*)Z_Param__Result=UBlueprintJsonLibrary::JsonMakeNull();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintJsonLibrary::execJsonMakeObject)
	{
		P_GET_STRUCT_REF(FBlueprintJsonObject,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBlueprintJsonValue*)Z_Param__Result=UBlueprintJsonLibrary::JsonMakeObject(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintJsonLibrary::execJsonMakeArray)
	{
		P_GET_TARRAY_REF(FBlueprintJsonValue,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBlueprintJsonValue*)Z_Param__Result=UBlueprintJsonLibrary::JsonMakeArray(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintJsonLibrary::execJsonMakeBool)
	{
		P_GET_UBOOL(Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBlueprintJsonValue*)Z_Param__Result=UBlueprintJsonLibrary::JsonMakeBool(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintJsonLibrary::execJsonMakeFloat)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBlueprintJsonValue*)Z_Param__Result=UBlueprintJsonLibrary::JsonMakeFloat(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintJsonLibrary::execJsonMakeInt)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBlueprintJsonValue*)Z_Param__Result=UBlueprintJsonLibrary::JsonMakeInt(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintJsonLibrary::execJsonMakeString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBlueprintJsonValue*)Z_Param__Result=UBlueprintJsonLibrary::JsonMakeString(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintJsonLibrary::execConv_StringToJsonObject)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBlueprintJsonObject*)Z_Param__Result=UBlueprintJsonLibrary::Conv_StringToJsonObject(Z_Param_JsonString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintJsonLibrary::execConv_JsonObjectToPrettyString)
	{
		P_GET_STRUCT_REF(FBlueprintJsonObject,Z_Param_Out_JsonObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBlueprintJsonLibrary::Conv_JsonObjectToPrettyString(Z_Param_Out_JsonObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintJsonLibrary::execConv_JsonObjectToString)
	{
		P_GET_STRUCT_REF(FBlueprintJsonObject,Z_Param_Out_JsonObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBlueprintJsonLibrary::Conv_JsonObjectToString(Z_Param_Out_JsonObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintJsonLibrary::execConv_JsonObjectToJsonValue)
	{
		P_GET_STRUCT_REF(FBlueprintJsonObject,Z_Param_Out_JsonObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBlueprintJsonValue*)Z_Param__Result=UBlueprintJsonLibrary::Conv_JsonObjectToJsonValue(Z_Param_Out_JsonObject,Z_Param_FieldName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintJsonLibrary::execJsonRemoveField)
	{
		P_GET_STRUCT_REF(FBlueprintJsonObject,Z_Param_Out_JsonObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBlueprintJsonObject*)Z_Param__Result=UBlueprintJsonLibrary::JsonRemoveField(Z_Param_Out_JsonObject,Z_Param_FieldName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintJsonLibrary::execJsonHasTypedField)
	{
		P_GET_STRUCT_REF(FBlueprintJsonObject,Z_Param_Out_JsonObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_ENUM(EJsonType,Z_Param_Type);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBlueprintJsonLibrary::JsonHasTypedField(Z_Param_Out_JsonObject,Z_Param_FieldName,EJsonType(Z_Param_Type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintJsonLibrary::execJsonHasField)
	{
		P_GET_STRUCT_REF(FBlueprintJsonObject,Z_Param_Out_JsonObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBlueprintJsonLibrary::JsonHasField(Z_Param_Out_JsonObject,Z_Param_FieldName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintJsonLibrary::execJsonSetField)
	{
		P_GET_STRUCT_REF(FBlueprintJsonObject,Z_Param_Out_JsonObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_STRUCT_REF(FBlueprintJsonValue,Z_Param_Out_JsonValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBlueprintJsonObject*)Z_Param__Result=UBlueprintJsonLibrary::JsonSetField(Z_Param_Out_JsonObject,Z_Param_FieldName,Z_Param_Out_JsonValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintJsonLibrary::execJsonMakeField)
	{
		P_GET_STRUCT_REF(FBlueprintJsonObject,Z_Param_Out_JsonObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_FieldName);
		P_GET_STRUCT_REF(FBlueprintJsonValue,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBlueprintJsonObject*)Z_Param__Result=UBlueprintJsonLibrary::JsonMakeField(Z_Param_Out_JsonObject,Z_Param_FieldName,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintJsonLibrary::execJsonMake)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBlueprintJsonObject*)Z_Param__Result=UBlueprintJsonLibrary::JsonMake();
		P_NATIVE_END;
	}
	void UBlueprintJsonLibrary::StaticRegisterNativesUBlueprintJsonLibrary()
	{
		UClass* Class = UBlueprintJsonLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Conv_JsonObjectToJsonValue", &UBlueprintJsonLibrary::execConv_JsonObjectToJsonValue },
			{ "Conv_JsonObjectToPrettyString", &UBlueprintJsonLibrary::execConv_JsonObjectToPrettyString },
			{ "Conv_JsonObjectToString", &UBlueprintJsonLibrary::execConv_JsonObjectToString },
			{ "Conv_JsonValueToArray", &UBlueprintJsonLibrary::execConv_JsonValueToArray },
			{ "Conv_JsonValueToBool", &UBlueprintJsonLibrary::execConv_JsonValueToBool },
			{ "Conv_JsonValueToFloat", &UBlueprintJsonLibrary::execConv_JsonValueToFloat },
			{ "Conv_JsonValueToInteger", &UBlueprintJsonLibrary::execConv_JsonValueToInteger },
			{ "Conv_JsonValueToObject", &UBlueprintJsonLibrary::execConv_JsonValueToObject },
			{ "Conv_JsonValueToString", &UBlueprintJsonLibrary::execConv_JsonValueToString },
			{ "Conv_StringToJsonObject", &UBlueprintJsonLibrary::execConv_StringToJsonObject },
			{ "EquaEqual_JsonValue", &UBlueprintJsonLibrary::execEquaEqual_JsonValue },
			{ "JsonHasField", &UBlueprintJsonLibrary::execJsonHasField },
			{ "JsonHasTypedField", &UBlueprintJsonLibrary::execJsonHasTypedField },
			{ "JsonIsNull", &UBlueprintJsonLibrary::execJsonIsNull },
			{ "JsonMake", &UBlueprintJsonLibrary::execJsonMake },
			{ "JsonMakeArray", &UBlueprintJsonLibrary::execJsonMakeArray },
			{ "JsonMakeBool", &UBlueprintJsonLibrary::execJsonMakeBool },
			{ "JsonMakeField", &UBlueprintJsonLibrary::execJsonMakeField },
			{ "JsonMakeFloat", &UBlueprintJsonLibrary::execJsonMakeFloat },
			{ "JsonMakeInt", &UBlueprintJsonLibrary::execJsonMakeInt },
			{ "JsonMakeNull", &UBlueprintJsonLibrary::execJsonMakeNull },
			{ "JsonMakeObject", &UBlueprintJsonLibrary::execJsonMakeObject },
			{ "JsonMakeString", &UBlueprintJsonLibrary::execJsonMakeString },
			{ "JsonRemoveField", &UBlueprintJsonLibrary::execJsonRemoveField },
			{ "JsonSetField", &UBlueprintJsonLibrary::execJsonSetField },
			{ "JsonType", &UBlueprintJsonLibrary::execJsonType },
			{ "NotEqual_JsonValue", &UBlueprintJsonLibrary::execNotEqual_JsonValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonObjectToJsonValue_Statics
	{
		struct BlueprintJsonLibrary_eventConv_JsonObjectToJsonValue_Parms
		{
			FBlueprintJsonObject JsonObject;
			FString FieldName;
			FBlueprintJsonValue ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonObject_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_JsonObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonObjectToJsonValue_Statics::NewProp_JsonObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonObjectToJsonValue_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintJsonLibrary_eventConv_JsonObjectToJsonValue_Parms, JsonObject), Z_Construct_UScriptStruct_FBlueprintJsonObject, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonObjectToJsonValue_Statics::NewProp_JsonObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonObjectToJsonValue_Statics::NewProp_JsonObject_MetaData)) }; // 384755472
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonObjectToJsonValue_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonObjectToJsonValue_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintJsonLibrary_eventConv_JsonObjectToJsonValue_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonObjectToJsonValue_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonObjectToJsonValue_Statics::NewProp_FieldName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonObjectToJsonValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintJsonLibrary_eventConv_JsonObjectToJsonValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FBlueprintJsonValue, METADATA_PARAMS(nullptr, 0) }; // 1685526408
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonObjectToJsonValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonObjectToJsonValue_Statics::NewProp_JsonObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonObjectToJsonValue_Statics::NewProp_FieldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonObjectToJsonValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonObjectToJsonValue_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Json|Convert" },
		{ "Comment", "/**\n\x09 * Convert json object to json string\n\x09 * \n\x09 * @param\x09JsonObject\x09The stored json object\n\x09 * @param\x09""FieldName\x09The name of the field to get.\n\x09 * @return\x09The json value of json object\n\x09 */" },
		{ "CompactNodeTitle", "ToValue" },
		{ "DisplayName", "ToJsonValue (JsonObject)" },
		{ "ModuleRelativePath", "Classes/BlueprintJsonLibrary.h" },
		{ "NativeBreakFunc", "" },
		{ "ToolTip", "Convert json object to json string\n\n@param       JsonObject      The stored json object\n@param       FieldName       The name of the field to get.\n@return      The json value of json object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonObjectToJsonValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintJsonLibrary, nullptr, "Conv_JsonObjectToJsonValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonObjectToJsonValue_Statics::BlueprintJsonLibrary_eventConv_JsonObjectToJsonValue_Parms), Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonObjectToJsonValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonObjectToJsonValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonObjectToJsonValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonObjectToJsonValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonObjectToJsonValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonObjectToJsonValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonObjectToPrettyString_Statics
	{
		struct BlueprintJsonLibrary_eventConv_JsonObjectToPrettyString_Parms
		{
			FBlueprintJsonObject JsonObject;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonObject_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_JsonObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonObjectToPrettyString_Statics::NewProp_JsonObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonObjectToPrettyString_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintJsonLibrary_eventConv_JsonObjectToPrettyString_Parms, JsonObject), Z_Construct_UScriptStruct_FBlueprintJsonObject, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonObjectToPrettyString_Statics::NewProp_JsonObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonObjectToPrettyString_Statics::NewProp_JsonObject_MetaData)) }; // 384755472
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonObjectToPrettyString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintJsonLibrary_eventConv_JsonObjectToPrettyString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonObjectToPrettyString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonObjectToPrettyString_Statics::NewProp_JsonObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonObjectToPrettyString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonObjectToPrettyString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Json|Convert" },
		{ "Comment", "/**\n\x09 * Convert json object to pretty print json string\n\x09 *\n\x09 * @param\x09JsonObject\x09The json object to convert\n\x09 * @return\x09The json string\n\x09 */" },
		{ "CompactNodeTitle", "ToPrettyString" },
		{ "DisplayName", "ToPrettyString (JsonObject)" },
		{ "ModuleRelativePath", "Classes/BlueprintJsonLibrary.h" },
		{ "NativeBreakFunc", "" },
		{ "ToolTip", "Convert json object to pretty print json string\n\n@param       JsonObject      The json object to convert\n@return      The json string" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonObjectToPrettyString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintJsonLibrary, nullptr, "Conv_JsonObjectToPrettyString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonObjectToPrettyString_Statics::BlueprintJsonLibrary_eventConv_JsonObjectToPrettyString_Parms), Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonObjectToPrettyString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonObjectToPrettyString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonObjectToPrettyString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonObjectToPrettyString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonObjectToPrettyString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonObjectToPrettyString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonObjectToString_Statics
	{
		struct BlueprintJsonLibrary_eventConv_JsonObjectToString_Parms
		{
			FBlueprintJsonObject JsonObject;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonObject_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_JsonObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonObjectToString_Statics::NewProp_JsonObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonObjectToString_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintJsonLibrary_eventConv_JsonObjectToString_Parms, JsonObject), Z_Construct_UScriptStruct_FBlueprintJsonObject, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonObjectToString_Statics::NewProp_JsonObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonObjectToString_Statics::NewProp_JsonObject_MetaData)) }; // 384755472
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonObjectToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintJsonLibrary_eventConv_JsonObjectToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonObjectToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonObjectToString_Statics::NewProp_JsonObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonObjectToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonObjectToString_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Json|Convert" },
		{ "Comment", "/**\n\x09 * Convert json object to json string\n\x09 * \n\x09 * @param\x09JsonObject\x09The json object to convert\n\x09 * @return\x09The json string\n\x09 */" },
		{ "CompactNodeTitle", "ToString" },
		{ "DisplayName", "ToString (JsonObject)" },
		{ "ModuleRelativePath", "Classes/BlueprintJsonLibrary.h" },
		{ "NativeBreakFunc", "" },
		{ "ToolTip", "Convert json object to json string\n\n@param       JsonObject      The json object to convert\n@return      The json string" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonObjectToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintJsonLibrary, nullptr, "Conv_JsonObjectToString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonObjectToString_Statics::BlueprintJsonLibrary_eventConv_JsonObjectToString_Parms), Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonObjectToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonObjectToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonObjectToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonObjectToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonObjectToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonObjectToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToArray_Statics
	{
		struct BlueprintJsonLibrary_eventConv_JsonValueToArray_Parms
		{
			FBlueprintJsonValue JsonValue;
			TArray<FBlueprintJsonValue> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_JsonValue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToArray_Statics::NewProp_JsonValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToArray_Statics::NewProp_JsonValue = { "JsonValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintJsonLibrary_eventConv_JsonValueToArray_Parms, JsonValue), Z_Construct_UScriptStruct_FBlueprintJsonValue, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToArray_Statics::NewProp_JsonValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToArray_Statics::NewProp_JsonValue_MetaData)) }; // 1685526408
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBlueprintJsonValue, METADATA_PARAMS(nullptr, 0) }; // 1685526408
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintJsonLibrary_eventConv_JsonValueToArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1685526408
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToArray_Statics::NewProp_JsonValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToArray_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToArray_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Json|Value" },
		{ "Comment", "/** Converts an json value into an array of json value */" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToArray (JsonValue)" },
		{ "ModuleRelativePath", "Classes/BlueprintJsonLibrary.h" },
		{ "NativeBreakFunc", "" },
		{ "ToolTip", "Converts an json value into an array of json value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintJsonLibrary, nullptr, "Conv_JsonValueToArray", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToArray_Statics::BlueprintJsonLibrary_eventConv_JsonValueToArray_Parms), Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToBool_Statics
	{
		struct BlueprintJsonLibrary_eventConv_JsonValueToBool_Parms
		{
			FBlueprintJsonValue JsonValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_JsonValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToBool_Statics::NewProp_JsonValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToBool_Statics::NewProp_JsonValue = { "JsonValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintJsonLibrary_eventConv_JsonValueToBool_Parms, JsonValue), Z_Construct_UScriptStruct_FBlueprintJsonValue, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToBool_Statics::NewProp_JsonValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToBool_Statics::NewProp_JsonValue_MetaData)) }; // 1685526408
	void Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintJsonLibrary_eventConv_JsonValueToBool_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BlueprintJsonLibrary_eventConv_JsonValueToBool_Parms), &Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToBool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToBool_Statics::NewProp_JsonValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToBool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToBool_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Json|Value" },
		{ "Comment", "/** Converts an json value into an bool */" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToBool (JsonValue)" },
		{ "ModuleRelativePath", "Classes/BlueprintJsonLibrary.h" },
		{ "NativeBreakFunc", "" },
		{ "ToolTip", "Converts an json value into an bool" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintJsonLibrary, nullptr, "Conv_JsonValueToBool", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToBool_Statics::BlueprintJsonLibrary_eventConv_JsonValueToBool_Parms), Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToFloat_Statics
	{
		struct BlueprintJsonLibrary_eventConv_JsonValueToFloat_Parms
		{
			FBlueprintJsonValue JsonValue;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_JsonValue;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToFloat_Statics::NewProp_JsonValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToFloat_Statics::NewProp_JsonValue = { "JsonValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintJsonLibrary_eventConv_JsonValueToFloat_Parms, JsonValue), Z_Construct_UScriptStruct_FBlueprintJsonValue, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToFloat_Statics::NewProp_JsonValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToFloat_Statics::NewProp_JsonValue_MetaData)) }; // 1685526408
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintJsonLibrary_eventConv_JsonValueToFloat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToFloat_Statics::NewProp_JsonValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToFloat_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Json|Value" },
		{ "Comment", "/** Converts an json value into an float */" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToFloat (JsonValue)" },
		{ "ModuleRelativePath", "Classes/BlueprintJsonLibrary.h" },
		{ "NativeBreakFunc", "" },
		{ "ToolTip", "Converts an json value into an float" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintJsonLibrary, nullptr, "Conv_JsonValueToFloat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToFloat_Statics::BlueprintJsonLibrary_eventConv_JsonValueToFloat_Parms), Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToInteger_Statics
	{
		struct BlueprintJsonLibrary_eventConv_JsonValueToInteger_Parms
		{
			FBlueprintJsonValue JsonValue;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_JsonValue;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToInteger_Statics::NewProp_JsonValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToInteger_Statics::NewProp_JsonValue = { "JsonValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintJsonLibrary_eventConv_JsonValueToInteger_Parms, JsonValue), Z_Construct_UScriptStruct_FBlueprintJsonValue, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToInteger_Statics::NewProp_JsonValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToInteger_Statics::NewProp_JsonValue_MetaData)) }; // 1685526408
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToInteger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintJsonLibrary_eventConv_JsonValueToInteger_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToInteger_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToInteger_Statics::NewProp_JsonValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToInteger_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToInteger_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Json|Value" },
		{ "Comment", "/** Converts an json value into an int */" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToInteger (JsonValue)" },
		{ "ModuleRelativePath", "Classes/BlueprintJsonLibrary.h" },
		{ "NativeBreakFunc", "" },
		{ "ToolTip", "Converts an json value into an int" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToInteger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintJsonLibrary, nullptr, "Conv_JsonValueToInteger", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToInteger_Statics::BlueprintJsonLibrary_eventConv_JsonValueToInteger_Parms), Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToInteger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToInteger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToInteger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToInteger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToInteger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToInteger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToObject_Statics
	{
		struct BlueprintJsonLibrary_eventConv_JsonValueToObject_Parms
		{
			FBlueprintJsonValue JsonValue;
			FBlueprintJsonObject ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_JsonValue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToObject_Statics::NewProp_JsonValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToObject_Statics::NewProp_JsonValue = { "JsonValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintJsonLibrary_eventConv_JsonValueToObject_Parms, JsonValue), Z_Construct_UScriptStruct_FBlueprintJsonValue, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToObject_Statics::NewProp_JsonValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToObject_Statics::NewProp_JsonValue_MetaData)) }; // 1685526408
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintJsonLibrary_eventConv_JsonValueToObject_Parms, ReturnValue), Z_Construct_UScriptStruct_FBlueprintJsonObject, METADATA_PARAMS(nullptr, 0) }; // 384755472
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToObject_Statics::NewProp_JsonValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToObject_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Json|Value" },
		{ "Comment", "/** Converts an json value into an json object */" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToJsonObject (JsonValue)" },
		{ "ModuleRelativePath", "Classes/BlueprintJsonLibrary.h" },
		{ "NativeBreakFunc", "" },
		{ "ToolTip", "Converts an json value into an json object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintJsonLibrary, nullptr, "Conv_JsonValueToObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToObject_Statics::BlueprintJsonLibrary_eventConv_JsonValueToObject_Parms), Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToString_Statics
	{
		struct BlueprintJsonLibrary_eventConv_JsonValueToString_Parms
		{
			FBlueprintJsonValue JsonValue;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_JsonValue;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToString_Statics::NewProp_JsonValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToString_Statics::NewProp_JsonValue = { "JsonValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintJsonLibrary_eventConv_JsonValueToString_Parms, JsonValue), Z_Construct_UScriptStruct_FBlueprintJsonValue, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToString_Statics::NewProp_JsonValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToString_Statics::NewProp_JsonValue_MetaData)) }; // 1685526408
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintJsonLibrary_eventConv_JsonValueToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToString_Statics::NewProp_JsonValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToString_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Json|Value" },
		{ "Comment", "/** Converts an json value into an string */" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToString (JsonValue)" },
		{ "ModuleRelativePath", "Classes/BlueprintJsonLibrary.h" },
		{ "NativeBreakFunc", "" },
		{ "ToolTip", "Converts an json value into an string" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintJsonLibrary, nullptr, "Conv_JsonValueToString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToString_Statics::BlueprintJsonLibrary_eventConv_JsonValueToString_Parms), Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_StringToJsonObject_Statics
	{
		struct BlueprintJsonLibrary_eventConv_StringToJsonObject_Parms
		{
			FString JsonString;
			FBlueprintJsonObject ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_StringToJsonObject_Statics::NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_StringToJsonObject_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintJsonLibrary_eventConv_StringToJsonObject_Parms, JsonString), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_StringToJsonObject_Statics::NewProp_JsonString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_StringToJsonObject_Statics::NewProp_JsonString_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_StringToJsonObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintJsonLibrary_eventConv_StringToJsonObject_Parms, ReturnValue), Z_Construct_UScriptStruct_FBlueprintJsonObject, METADATA_PARAMS(nullptr, 0) }; // 384755472
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_StringToJsonObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_StringToJsonObject_Statics::NewProp_JsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_StringToJsonObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_StringToJsonObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Json|Convert" },
		{ "Comment", "/**\n\x09 * Convert json string to json object\n\x09 * \n\x09 * @param\x09JsonString\x09The string to convert\n\x09 * @return\x09The json object\n\x09 */" },
		{ "CompactNodeTitle", "ToJson" },
		{ "DisplayName", "ToJsonObject (String)" },
		{ "ModuleRelativePath", "Classes/BlueprintJsonLibrary.h" },
		{ "ToolTip", "Convert json string to json object\n\n@param       JsonString      The string to convert\n@return      The json object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_StringToJsonObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintJsonLibrary, nullptr, "Conv_StringToJsonObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_StringToJsonObject_Statics::BlueprintJsonLibrary_eventConv_StringToJsonObject_Parms), Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_StringToJsonObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_StringToJsonObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_StringToJsonObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_StringToJsonObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_StringToJsonObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_StringToJsonObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintJsonLibrary_EquaEqual_JsonValue_Statics
	{
		struct BlueprintJsonLibrary_eventEquaEqual_JsonValue_Parms
		{
			FBlueprintJsonValue A;
			FBlueprintJsonValue B;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintJsonLibrary_EquaEqual_JsonValue_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintJsonLibrary_EquaEqual_JsonValue_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintJsonLibrary_eventEquaEqual_JsonValue_Parms, A), Z_Construct_UScriptStruct_FBlueprintJsonValue, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintJsonLibrary_EquaEqual_JsonValue_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_EquaEqual_JsonValue_Statics::NewProp_A_MetaData)) }; // 1685526408
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintJsonLibrary_EquaEqual_JsonValue_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintJsonLibrary_EquaEqual_JsonValue_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintJsonLibrary_eventEquaEqual_JsonValue_Parms, B), Z_Construct_UScriptStruct_FBlueprintJsonValue, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintJsonLibrary_EquaEqual_JsonValue_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_EquaEqual_JsonValue_Statics::NewProp_B_MetaData)) }; // 1685526408
	void Z_Construct_UFunction_UBlueprintJsonLibrary_EquaEqual_JsonValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintJsonLibrary_eventEquaEqual_JsonValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintJsonLibrary_EquaEqual_JsonValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BlueprintJsonLibrary_eventEquaEqual_JsonValue_Parms), &Z_Construct_UFunction_UBlueprintJsonLibrary_EquaEqual_JsonValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintJsonLibrary_EquaEqual_JsonValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintJsonLibrary_EquaEqual_JsonValue_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintJsonLibrary_EquaEqual_JsonValue_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintJsonLibrary_EquaEqual_JsonValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintJsonLibrary_EquaEqual_JsonValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Json|Value" },
		{ "Comment", "/** Returns true if the values are equal (A == B) */" },
		{ "CompactNodeTitle", "==" },
		{ "DisplayName", "Equal (JsonValue)" },
		{ "ModuleRelativePath", "Classes/BlueprintJsonLibrary.h" },
		{ "ToolTip", "Returns true if the values are equal (A == B)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintJsonLibrary_EquaEqual_JsonValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintJsonLibrary, nullptr, "EquaEqual_JsonValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintJsonLibrary_EquaEqual_JsonValue_Statics::BlueprintJsonLibrary_eventEquaEqual_JsonValue_Parms), Z_Construct_UFunction_UBlueprintJsonLibrary_EquaEqual_JsonValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_EquaEqual_JsonValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintJsonLibrary_EquaEqual_JsonValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_EquaEqual_JsonValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintJsonLibrary_EquaEqual_JsonValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintJsonLibrary_EquaEqual_JsonValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintJsonLibrary_JsonHasField_Statics
	{
		struct BlueprintJsonLibrary_eventJsonHasField_Parms
		{
			FBlueprintJsonObject JsonObject;
			FString FieldName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonObject_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_JsonObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintJsonLibrary_JsonHasField_Statics::NewProp_JsonObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintJsonLibrary_JsonHasField_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintJsonLibrary_eventJsonHasField_Parms, JsonObject), Z_Construct_UScriptStruct_FBlueprintJsonObject, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonHasField_Statics::NewProp_JsonObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonHasField_Statics::NewProp_JsonObject_MetaData)) }; // 384755472
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintJsonLibrary_JsonHasField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintJsonLibrary_JsonHasField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintJsonLibrary_eventJsonHasField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonHasField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonHasField_Statics::NewProp_FieldName_MetaData)) };
	void Z_Construct_UFunction_UBlueprintJsonLibrary_JsonHasField_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintJsonLibrary_eventJsonHasField_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintJsonLibrary_JsonHasField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BlueprintJsonLibrary_eventJsonHasField_Parms), &Z_Construct_UFunction_UBlueprintJsonLibrary_JsonHasField_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintJsonLibrary_JsonHasField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintJsonLibrary_JsonHasField_Statics::NewProp_JsonObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintJsonLibrary_JsonHasField_Statics::NewProp_FieldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintJsonLibrary_JsonHasField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintJsonLibrary_JsonHasField_Statics::Function_MetaDataParams[] = {
		{ "Category", "Json" },
		{ "Comment", "/**\n\x09 * Checks whether a field with the specified name exists in the json object.\n\x09 *\n\x09 * @param\x09JsonObject\x09The stored json object\n\x09 * @param\x09""FieldName\x09The name of the field to check.\n\x09 * @return true if the field exists, false otherwise.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/BlueprintJsonLibrary.h" },
		{ "ToolTip", "Checks whether a field with the specified name exists in the json object.\n\n@param       JsonObject      The stored json object\n@param       FieldName       The name of the field to check.\n@return true if the field exists, false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintJsonLibrary_JsonHasField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintJsonLibrary, nullptr, "JsonHasField", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonHasField_Statics::BlueprintJsonLibrary_eventJsonHasField_Parms), Z_Construct_UFunction_UBlueprintJsonLibrary_JsonHasField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonHasField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonHasField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonHasField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintJsonLibrary_JsonHasField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintJsonLibrary_JsonHasField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintJsonLibrary_JsonHasTypedField_Statics
	{
		struct BlueprintJsonLibrary_eventJsonHasTypedField_Parms
		{
			FBlueprintJsonObject JsonObject;
			FString FieldName;
			EJsonType Type;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonObject_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_JsonObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintJsonLibrary_JsonHasTypedField_Statics::NewProp_JsonObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintJsonLibrary_JsonHasTypedField_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintJsonLibrary_eventJsonHasTypedField_Parms, JsonObject), Z_Construct_UScriptStruct_FBlueprintJsonObject, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonHasTypedField_Statics::NewProp_JsonObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonHasTypedField_Statics::NewProp_JsonObject_MetaData)) }; // 384755472
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintJsonLibrary_JsonHasTypedField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintJsonLibrary_JsonHasTypedField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintJsonLibrary_eventJsonHasTypedField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonHasTypedField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonHasTypedField_Statics::NewProp_FieldName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBlueprintJsonLibrary_JsonHasTypedField_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBlueprintJsonLibrary_JsonHasTypedField_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintJsonLibrary_eventJsonHasTypedField_Parms, Type), Z_Construct_UEnum_BlueprintJson_EJsonType, METADATA_PARAMS(nullptr, 0) }; // 1168221082
	void Z_Construct_UFunction_UBlueprintJsonLibrary_JsonHasTypedField_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintJsonLibrary_eventJsonHasTypedField_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintJsonLibrary_JsonHasTypedField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BlueprintJsonLibrary_eventJsonHasTypedField_Parms), &Z_Construct_UFunction_UBlueprintJsonLibrary_JsonHasTypedField_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintJsonLibrary_JsonHasTypedField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintJsonLibrary_JsonHasTypedField_Statics::NewProp_JsonObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintJsonLibrary_JsonHasTypedField_Statics::NewProp_FieldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintJsonLibrary_JsonHasTypedField_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintJsonLibrary_JsonHasTypedField_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintJsonLibrary_JsonHasTypedField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintJsonLibrary_JsonHasTypedField_Statics::Function_MetaDataParams[] = {
		{ "Category", "Json" },
		{ "Comment", "/**\n\x09 * Checks whether a field with the specified name and type exists in the object.\n\x09 *\n\x09 * @param\x09JsonObject\x09The stored json object\n\x09 * @param\x09""FieldName\x09The name of the field to check.\n\x09 * @param\x09Type\x09\x09The type of the field to check.\n\x09 * @return true if the field exists, false otherwise.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/BlueprintJsonLibrary.h" },
		{ "ToolTip", "Checks whether a field with the specified name and type exists in the object.\n\n@param       JsonObject      The stored json object\n@param       FieldName       The name of the field to check.\n@param       Type            The type of the field to check.\n@return true if the field exists, false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintJsonLibrary_JsonHasTypedField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintJsonLibrary, nullptr, "JsonHasTypedField", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonHasTypedField_Statics::BlueprintJsonLibrary_eventJsonHasTypedField_Parms), Z_Construct_UFunction_UBlueprintJsonLibrary_JsonHasTypedField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonHasTypedField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonHasTypedField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonHasTypedField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintJsonLibrary_JsonHasTypedField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintJsonLibrary_JsonHasTypedField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintJsonLibrary_JsonIsNull_Statics
	{
		struct BlueprintJsonLibrary_eventJsonIsNull_Parms
		{
			FBlueprintJsonValue JsonValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_JsonValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintJsonLibrary_JsonIsNull_Statics::NewProp_JsonValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintJsonLibrary_JsonIsNull_Statics::NewProp_JsonValue = { "JsonValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintJsonLibrary_eventJsonIsNull_Parms, JsonValue), Z_Construct_UScriptStruct_FBlueprintJsonValue, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonIsNull_Statics::NewProp_JsonValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonIsNull_Statics::NewProp_JsonValue_MetaData)) }; // 1685526408
	void Z_Construct_UFunction_UBlueprintJsonLibrary_JsonIsNull_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintJsonLibrary_eventJsonIsNull_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintJsonLibrary_JsonIsNull_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BlueprintJsonLibrary_eventJsonIsNull_Parms), &Z_Construct_UFunction_UBlueprintJsonLibrary_JsonIsNull_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintJsonLibrary_JsonIsNull_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintJsonLibrary_JsonIsNull_Statics::NewProp_JsonValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintJsonLibrary_JsonIsNull_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintJsonLibrary_JsonIsNull_Statics::Function_MetaDataParams[] = {
		{ "Category", "Json|Value" },
		{ "Comment", "/** Return true if the json value is null, false otherwise */" },
		{ "ModuleRelativePath", "Classes/BlueprintJsonLibrary.h" },
		{ "ToolTip", "Return true if the json value is null, false otherwise" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintJsonLibrary_JsonIsNull_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintJsonLibrary, nullptr, "JsonIsNull", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonIsNull_Statics::BlueprintJsonLibrary_eventJsonIsNull_Parms), Z_Construct_UFunction_UBlueprintJsonLibrary_JsonIsNull_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonIsNull_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonIsNull_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonIsNull_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintJsonLibrary_JsonIsNull()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintJsonLibrary_JsonIsNull_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMake_Statics
	{
		struct BlueprintJsonLibrary_eventJsonMake_Parms
		{
			FBlueprintJsonObject ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMake_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintJsonLibrary_eventJsonMake_Parms, ReturnValue), Z_Construct_UScriptStruct_FBlueprintJsonObject, METADATA_PARAMS(nullptr, 0) }; // 384755472
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMake_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMake_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMake_Statics::Function_MetaDataParams[] = {
		{ "Category", "Json" },
		{ "Comment", "/**\n\x09 * Creates a json object\n\x09 * \n\x09 * @return\x09The json object\n\x09 */" },
		{ "ModuleRelativePath", "Classes/BlueprintJsonLibrary.h" },
		{ "NativeMakeFunc", "" },
		{ "ToolTip", "Creates a json object\n\n@return      The json object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintJsonLibrary, nullptr, "JsonMake", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMake_Statics::BlueprintJsonLibrary_eventJsonMake_Parms), Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMake_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMake_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMake_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMake_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMake()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMake_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeArray_Statics
	{
		struct BlueprintJsonLibrary_eventJsonMakeArray_Parms
		{
			TArray<FBlueprintJsonValue> Value;
			FBlueprintJsonValue ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Value;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeArray_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBlueprintJsonValue, METADATA_PARAMS(nullptr, 0) }; // 1685526408
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeArray_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeArray_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintJsonLibrary_eventJsonMakeArray_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeArray_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeArray_Statics::NewProp_Value_MetaData)) }; // 1685526408
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintJsonLibrary_eventJsonMakeArray_Parms, ReturnValue), Z_Construct_UScriptStruct_FBlueprintJsonValue, METADATA_PARAMS(nullptr, 0) }; // 1685526408
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeArray_Statics::NewProp_Value_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeArray_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "Json|Make" },
		{ "Comment", "/**\n\x09 * Creates a json value array\n\x09 * \n\x09 * @param\x09Value\x09value to set the array to\n\x09 * @return\x09The blueprint json value\n\x09 */" },
		{ "ModuleRelativePath", "Classes/BlueprintJsonLibrary.h" },
		{ "NativeMakeFunc", "" },
		{ "ToolTip", "Creates a json value array\n\n@param       Value   value to set the array to\n@return      The blueprint json value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintJsonLibrary, nullptr, "JsonMakeArray", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeArray_Statics::BlueprintJsonLibrary_eventJsonMakeArray_Parms), Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeBool_Statics
	{
		struct BlueprintJsonLibrary_eventJsonMakeBool_Parms
		{
			bool Value;
			FBlueprintJsonValue ReturnValue;
		};
		static void NewProp_Value_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeBool_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((BlueprintJsonLibrary_eventJsonMakeBool_Parms*)Obj)->Value = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeBool_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BlueprintJsonLibrary_eventJsonMakeBool_Parms), &Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeBool_Statics::NewProp_Value_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintJsonLibrary_eventJsonMakeBool_Parms, ReturnValue), Z_Construct_UScriptStruct_FBlueprintJsonValue, METADATA_PARAMS(nullptr, 0) }; // 1685526408
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeBool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeBool_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeBool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "Json|Make" },
		{ "Comment", "/**\n\x09 * Creates a json value bool\n\n\x09 * @param\x09Value\x09value to set the bool to\n\x09 * @return\x09The blueprint json value\n\x09 */" },
		{ "ModuleRelativePath", "Classes/BlueprintJsonLibrary.h" },
		{ "NativeMakeFunc", "" },
		{ "ToolTip", "Creates a json value bool\n\n@param       Value   value to set the bool to\n@return      The blueprint json value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintJsonLibrary, nullptr, "JsonMakeBool", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeBool_Statics::BlueprintJsonLibrary_eventJsonMakeBool_Parms), Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeField_Statics
	{
		struct BlueprintJsonLibrary_eventJsonMakeField_Parms
		{
			FBlueprintJsonObject JsonObject;
			FString FieldName;
			FBlueprintJsonValue Value;
			FBlueprintJsonObject ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonObject_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_JsonObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeField_Statics::NewProp_JsonObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeField_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintJsonLibrary_eventJsonMakeField_Parms, JsonObject), Z_Construct_UScriptStruct_FBlueprintJsonObject, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeField_Statics::NewProp_JsonObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeField_Statics::NewProp_JsonObject_MetaData)) }; // 384755472
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintJsonLibrary_eventJsonMakeField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeField_Statics::NewProp_FieldName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeField_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeField_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintJsonLibrary_eventJsonMakeField_Parms, Value), Z_Construct_UScriptStruct_FBlueprintJsonValue, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeField_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeField_Statics::NewProp_Value_MetaData)) }; // 1685526408
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeField_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintJsonLibrary_eventJsonMakeField_Parms, ReturnValue), Z_Construct_UScriptStruct_FBlueprintJsonObject, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeField_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeField_Statics::NewProp_ReturnValue_MetaData)) }; // 384755472
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeField_Statics::NewProp_JsonObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeField_Statics::NewProp_FieldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeField_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeField_Statics::Function_MetaDataParams[] = {
		{ "Category", "Json" },
		{ "Comment", "/**\n\x09 * Sets the value of the field with the specified name.\n\x09 *\n\x09 * @param\x09JsonObject\x09The stored json object\n\x09 * @param\x09""FieldName\x09The name of the field to set.\n\x09 * @param\x09Value\x09\x09The json value to set.\n\x09 * @return\x09The stored json object\n\x09 */" },
		{ "ModuleRelativePath", "Classes/BlueprintJsonLibrary.h" },
		{ "ToolTip", "Sets the value of the field with the specified name.\n\n@param       JsonObject      The stored json object\n@param       FieldName       The name of the field to set.\n@param       Value           The json value to set.\n@return      The stored json object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintJsonLibrary, nullptr, "JsonMakeField", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeField_Statics::BlueprintJsonLibrary_eventJsonMakeField_Parms), Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeFloat_Statics
	{
		struct BlueprintJsonLibrary_eventJsonMakeFloat_Parms
		{
			float Value;
			FBlueprintJsonValue ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintJsonLibrary_eventJsonMakeFloat_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintJsonLibrary_eventJsonMakeFloat_Parms, ReturnValue), Z_Construct_UScriptStruct_FBlueprintJsonValue, METADATA_PARAMS(nullptr, 0) }; // 1685526408
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeFloat_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Json|Make" },
		{ "Comment", "/**\n\x09 * Creates a json value float\n\x09 * \n\x09 * @param\x09Value\x09value to set the float to\n\x09 * @return\x09The blueprint json value\n\x09 */" },
		{ "ModuleRelativePath", "Classes/BlueprintJsonLibrary.h" },
		{ "NativeMakeFunc", "" },
		{ "ToolTip", "Creates a json value float\n\n@param       Value   value to set the float to\n@return      The blueprint json value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintJsonLibrary, nullptr, "JsonMakeFloat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeFloat_Statics::BlueprintJsonLibrary_eventJsonMakeFloat_Parms), Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeInt_Statics
	{
		struct BlueprintJsonLibrary_eventJsonMakeInt_Parms
		{
			int32 Value;
			FBlueprintJsonValue ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeInt_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintJsonLibrary_eventJsonMakeInt_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintJsonLibrary_eventJsonMakeInt_Parms, ReturnValue), Z_Construct_UScriptStruct_FBlueprintJsonValue, METADATA_PARAMS(nullptr, 0) }; // 1685526408
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeInt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeInt_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeInt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Json|Make" },
		{ "Comment", "/**\n\x09 * Creates a json value int\n\x09 * \n\x09 * @param\x09Value\x09value to set the int to\n\x09 * @return\x09The blueprint json value\n\x09 */" },
		{ "ModuleRelativePath", "Classes/BlueprintJsonLibrary.h" },
		{ "NativeMakeFunc", "" },
		{ "ToolTip", "Creates a json value int\n\n@param       Value   value to set the int to\n@return      The blueprint json value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintJsonLibrary, nullptr, "JsonMakeInt", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeInt_Statics::BlueprintJsonLibrary_eventJsonMakeInt_Parms), Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeNull_Statics
	{
		struct BlueprintJsonLibrary_eventJsonMakeNull_Parms
		{
			FBlueprintJsonValue ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeNull_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintJsonLibrary_eventJsonMakeNull_Parms, ReturnValue), Z_Construct_UScriptStruct_FBlueprintJsonValue, METADATA_PARAMS(nullptr, 0) }; // 1685526408
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeNull_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeNull_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeNull_Statics::Function_MetaDataParams[] = {
		{ "Category", "Json|Make" },
		{ "Comment", "/**\n\x09 * Creates a json value null\n\x09 * \n\x09 * @return\x09The blueprint json value\n\x09 */" },
		{ "ModuleRelativePath", "Classes/BlueprintJsonLibrary.h" },
		{ "NativeMakeFunc", "" },
		{ "ToolTip", "Creates a json value null\n\n@return      The blueprint json value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeNull_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintJsonLibrary, nullptr, "JsonMakeNull", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeNull_Statics::BlueprintJsonLibrary_eventJsonMakeNull_Parms), Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeNull_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeNull_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeNull_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeNull_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeNull()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeNull_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeObject_Statics
	{
		struct BlueprintJsonLibrary_eventJsonMakeObject_Parms
		{
			FBlueprintJsonObject Value;
			FBlueprintJsonValue ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeObject_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeObject_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintJsonLibrary_eventJsonMakeObject_Parms, Value), Z_Construct_UScriptStruct_FBlueprintJsonObject, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeObject_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeObject_Statics::NewProp_Value_MetaData)) }; // 384755472
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintJsonLibrary_eventJsonMakeObject_Parms, ReturnValue), Z_Construct_UScriptStruct_FBlueprintJsonValue, METADATA_PARAMS(nullptr, 0) }; // 1685526408
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeObject_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Json|Make" },
		{ "Comment", "/**\n\x09 * Creates a json value object\n\x09 * \n\x09 * @param\x09Value\x09value to set the json object to\n\x09 * @return\x09The blueprint json value\n\x09 */" },
		{ "ModuleRelativePath", "Classes/BlueprintJsonLibrary.h" },
		{ "NativeMakeFunc", "" },
		{ "ToolTip", "Creates a json value object\n\n@param       Value   value to set the json object to\n@return      The blueprint json value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintJsonLibrary, nullptr, "JsonMakeObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeObject_Statics::BlueprintJsonLibrary_eventJsonMakeObject_Parms), Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeString_Statics
	{
		struct BlueprintJsonLibrary_eventJsonMakeString_Parms
		{
			FString Value;
			FBlueprintJsonValue ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeString_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintJsonLibrary_eventJsonMakeString_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeString_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeString_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintJsonLibrary_eventJsonMakeString_Parms, ReturnValue), Z_Construct_UScriptStruct_FBlueprintJsonValue, METADATA_PARAMS(nullptr, 0) }; // 1685526408
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeString_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Json|Make" },
		{ "Comment", "/**\n\x09 * Creates a json value string\n\x09 * \n\x09 * @param\x09Value\x09value to set the string to\n\x09 * @return\x09The blueprint json value\n\x09 */" },
		{ "ModuleRelativePath", "Classes/BlueprintJsonLibrary.h" },
		{ "NativeMakeFunc", "" },
		{ "ToolTip", "Creates a json value string\n\n@param       Value   value to set the string to\n@return      The blueprint json value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintJsonLibrary, nullptr, "JsonMakeString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeString_Statics::BlueprintJsonLibrary_eventJsonMakeString_Parms), Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintJsonLibrary_JsonRemoveField_Statics
	{
		struct BlueprintJsonLibrary_eventJsonRemoveField_Parms
		{
			FBlueprintJsonObject JsonObject;
			FString FieldName;
			FBlueprintJsonObject ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonObject_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_JsonObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintJsonLibrary_JsonRemoveField_Statics::NewProp_JsonObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintJsonLibrary_JsonRemoveField_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintJsonLibrary_eventJsonRemoveField_Parms, JsonObject), Z_Construct_UScriptStruct_FBlueprintJsonObject, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonRemoveField_Statics::NewProp_JsonObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonRemoveField_Statics::NewProp_JsonObject_MetaData)) }; // 384755472
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintJsonLibrary_JsonRemoveField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintJsonLibrary_JsonRemoveField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintJsonLibrary_eventJsonRemoveField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonRemoveField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonRemoveField_Statics::NewProp_FieldName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintJsonLibrary_JsonRemoveField_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintJsonLibrary_JsonRemoveField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintJsonLibrary_eventJsonRemoveField_Parms, ReturnValue), Z_Construct_UScriptStruct_FBlueprintJsonObject, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonRemoveField_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonRemoveField_Statics::NewProp_ReturnValue_MetaData)) }; // 384755472
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintJsonLibrary_JsonRemoveField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintJsonLibrary_JsonRemoveField_Statics::NewProp_JsonObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintJsonLibrary_JsonRemoveField_Statics::NewProp_FieldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintJsonLibrary_JsonRemoveField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintJsonLibrary_JsonRemoveField_Statics::Function_MetaDataParams[] = {
		{ "Category", "Json" },
		{ "Comment", "/**\n\x09 * Removes the field with the specified name.\n\x09 * \n\x09 * @param\x09JsonObject\x09The stored json object\n\x09 * @param\x09""FieldName\x09The name of the field to remove.\n\x09 * @return\x09The stored json object\n\x09 */" },
		{ "ModuleRelativePath", "Classes/BlueprintJsonLibrary.h" },
		{ "ToolTip", "Removes the field with the specified name.\n\n@param       JsonObject      The stored json object\n@param       FieldName       The name of the field to remove.\n@return      The stored json object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintJsonLibrary_JsonRemoveField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintJsonLibrary, nullptr, "JsonRemoveField", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonRemoveField_Statics::BlueprintJsonLibrary_eventJsonRemoveField_Parms), Z_Construct_UFunction_UBlueprintJsonLibrary_JsonRemoveField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonRemoveField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonRemoveField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonRemoveField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintJsonLibrary_JsonRemoveField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintJsonLibrary_JsonRemoveField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintJsonLibrary_JsonSetField_Statics
	{
		struct BlueprintJsonLibrary_eventJsonSetField_Parms
		{
			FBlueprintJsonObject JsonObject;
			FString FieldName;
			FBlueprintJsonValue JsonValue;
			FBlueprintJsonObject ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonObject_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_JsonObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_JsonValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintJsonLibrary_JsonSetField_Statics::NewProp_JsonObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintJsonLibrary_JsonSetField_Statics::NewProp_JsonObject = { "JsonObject", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintJsonLibrary_eventJsonSetField_Parms, JsonObject), Z_Construct_UScriptStruct_FBlueprintJsonObject, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonSetField_Statics::NewProp_JsonObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonSetField_Statics::NewProp_JsonObject_MetaData)) }; // 384755472
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintJsonLibrary_JsonSetField_Statics::NewProp_FieldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintJsonLibrary_JsonSetField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintJsonLibrary_eventJsonSetField_Parms, FieldName), METADATA_PARAMS(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonSetField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonSetField_Statics::NewProp_FieldName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintJsonLibrary_JsonSetField_Statics::NewProp_JsonValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintJsonLibrary_JsonSetField_Statics::NewProp_JsonValue = { "JsonValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintJsonLibrary_eventJsonSetField_Parms, JsonValue), Z_Construct_UScriptStruct_FBlueprintJsonValue, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonSetField_Statics::NewProp_JsonValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonSetField_Statics::NewProp_JsonValue_MetaData)) }; // 1685526408
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintJsonLibrary_JsonSetField_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintJsonLibrary_JsonSetField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintJsonLibrary_eventJsonSetField_Parms, ReturnValue), Z_Construct_UScriptStruct_FBlueprintJsonObject, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonSetField_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonSetField_Statics::NewProp_ReturnValue_MetaData)) }; // 384755472
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintJsonLibrary_JsonSetField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintJsonLibrary_JsonSetField_Statics::NewProp_JsonObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintJsonLibrary_JsonSetField_Statics::NewProp_FieldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintJsonLibrary_JsonSetField_Statics::NewProp_JsonValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintJsonLibrary_JsonSetField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintJsonLibrary_JsonSetField_Statics::Function_MetaDataParams[] = {
		{ "Category", "Json" },
		{ "Comment", "/**\n\x09 * Sets the value of the field with the specified name.\n\x09 * \n\x09 * @param\x09JsonObject\x09The stored json object\n\x09 * @param\x09""FieldName\x09The name of the field to set.\n\x09 * @param\x09Value\x09\x09The json value to set.\n\x09 * @return\x09The stored json object\n\x09 */" },
		{ "ModuleRelativePath", "Classes/BlueprintJsonLibrary.h" },
		{ "ToolTip", "Sets the value of the field with the specified name.\n\n@param       JsonObject      The stored json object\n@param       FieldName       The name of the field to set.\n@param       Value           The json value to set.\n@return      The stored json object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintJsonLibrary_JsonSetField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintJsonLibrary, nullptr, "JsonSetField", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonSetField_Statics::BlueprintJsonLibrary_eventJsonSetField_Parms), Z_Construct_UFunction_UBlueprintJsonLibrary_JsonSetField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonSetField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonSetField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonSetField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintJsonLibrary_JsonSetField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintJsonLibrary_JsonSetField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintJsonLibrary_JsonType_Statics
	{
		struct BlueprintJsonLibrary_eventJsonType_Parms
		{
			FBlueprintJsonValue JsonValue;
			EJsonType ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_JsonValue;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintJsonLibrary_JsonType_Statics::NewProp_JsonValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintJsonLibrary_JsonType_Statics::NewProp_JsonValue = { "JsonValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintJsonLibrary_eventJsonType_Parms, JsonValue), Z_Construct_UScriptStruct_FBlueprintJsonValue, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonType_Statics::NewProp_JsonValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonType_Statics::NewProp_JsonValue_MetaData)) }; // 1685526408
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBlueprintJsonLibrary_JsonType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBlueprintJsonLibrary_JsonType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintJsonLibrary_eventJsonType_Parms, ReturnValue), Z_Construct_UEnum_BlueprintJson_EJsonType, METADATA_PARAMS(nullptr, 0) }; // 1168221082
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintJsonLibrary_JsonType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintJsonLibrary_JsonType_Statics::NewProp_JsonValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintJsonLibrary_JsonType_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintJsonLibrary_JsonType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintJsonLibrary_JsonType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Json|Value" },
		{ "Comment", "/** Return the type of json value */" },
		{ "ModuleRelativePath", "Classes/BlueprintJsonLibrary.h" },
		{ "ToolTip", "Return the type of json value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintJsonLibrary_JsonType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintJsonLibrary, nullptr, "JsonType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonType_Statics::BlueprintJsonLibrary_eventJsonType_Parms), Z_Construct_UFunction_UBlueprintJsonLibrary_JsonType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_JsonType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintJsonLibrary_JsonType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintJsonLibrary_JsonType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintJsonLibrary_NotEqual_JsonValue_Statics
	{
		struct BlueprintJsonLibrary_eventNotEqual_JsonValue_Parms
		{
			FBlueprintJsonValue A;
			FBlueprintJsonValue B;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintJsonLibrary_NotEqual_JsonValue_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintJsonLibrary_NotEqual_JsonValue_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintJsonLibrary_eventNotEqual_JsonValue_Parms, A), Z_Construct_UScriptStruct_FBlueprintJsonValue, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintJsonLibrary_NotEqual_JsonValue_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_NotEqual_JsonValue_Statics::NewProp_A_MetaData)) }; // 1685526408
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintJsonLibrary_NotEqual_JsonValue_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintJsonLibrary_NotEqual_JsonValue_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueprintJsonLibrary_eventNotEqual_JsonValue_Parms, B), Z_Construct_UScriptStruct_FBlueprintJsonValue, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintJsonLibrary_NotEqual_JsonValue_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_NotEqual_JsonValue_Statics::NewProp_B_MetaData)) }; // 1685526408
	void Z_Construct_UFunction_UBlueprintJsonLibrary_NotEqual_JsonValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintJsonLibrary_eventNotEqual_JsonValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintJsonLibrary_NotEqual_JsonValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BlueprintJsonLibrary_eventNotEqual_JsonValue_Parms), &Z_Construct_UFunction_UBlueprintJsonLibrary_NotEqual_JsonValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintJsonLibrary_NotEqual_JsonValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintJsonLibrary_NotEqual_JsonValue_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintJsonLibrary_NotEqual_JsonValue_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintJsonLibrary_NotEqual_JsonValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintJsonLibrary_NotEqual_JsonValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Json|Value" },
		{ "Comment", "/** Returns true if the values are not equal (A != B) */" },
		{ "CompactNodeTitle", "!=" },
		{ "DisplayName", "NotEqual (JsonValue)" },
		{ "ModuleRelativePath", "Classes/BlueprintJsonLibrary.h" },
		{ "ToolTip", "Returns true if the values are not equal (A != B)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintJsonLibrary_NotEqual_JsonValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintJsonLibrary, nullptr, "NotEqual_JsonValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintJsonLibrary_NotEqual_JsonValue_Statics::BlueprintJsonLibrary_eventNotEqual_JsonValue_Parms), Z_Construct_UFunction_UBlueprintJsonLibrary_NotEqual_JsonValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_NotEqual_JsonValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintJsonLibrary_NotEqual_JsonValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintJsonLibrary_NotEqual_JsonValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintJsonLibrary_NotEqual_JsonValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintJsonLibrary_NotEqual_JsonValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlueprintJsonLibrary);
	UClass* Z_Construct_UClass_UBlueprintJsonLibrary_NoRegister()
	{
		return UBlueprintJsonLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UBlueprintJsonLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlueprintJsonLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintJson,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBlueprintJsonLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonObjectToJsonValue, "Conv_JsonObjectToJsonValue" }, // 223573520
		{ &Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonObjectToPrettyString, "Conv_JsonObjectToPrettyString" }, // 3753657590
		{ &Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonObjectToString, "Conv_JsonObjectToString" }, // 3922738732
		{ &Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToArray, "Conv_JsonValueToArray" }, // 3775466892
		{ &Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToBool, "Conv_JsonValueToBool" }, // 1520568495
		{ &Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToFloat, "Conv_JsonValueToFloat" }, // 4105734657
		{ &Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToInteger, "Conv_JsonValueToInteger" }, // 1327353528
		{ &Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToObject, "Conv_JsonValueToObject" }, // 549042081
		{ &Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_JsonValueToString, "Conv_JsonValueToString" }, // 1434455749
		{ &Z_Construct_UFunction_UBlueprintJsonLibrary_Conv_StringToJsonObject, "Conv_StringToJsonObject" }, // 4137276804
		{ &Z_Construct_UFunction_UBlueprintJsonLibrary_EquaEqual_JsonValue, "EquaEqual_JsonValue" }, // 2238551803
		{ &Z_Construct_UFunction_UBlueprintJsonLibrary_JsonHasField, "JsonHasField" }, // 1158175632
		{ &Z_Construct_UFunction_UBlueprintJsonLibrary_JsonHasTypedField, "JsonHasTypedField" }, // 1033659266
		{ &Z_Construct_UFunction_UBlueprintJsonLibrary_JsonIsNull, "JsonIsNull" }, // 2239542296
		{ &Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMake, "JsonMake" }, // 317178475
		{ &Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeArray, "JsonMakeArray" }, // 343173227
		{ &Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeBool, "JsonMakeBool" }, // 2749531610
		{ &Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeField, "JsonMakeField" }, // 3674991300
		{ &Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeFloat, "JsonMakeFloat" }, // 269050603
		{ &Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeInt, "JsonMakeInt" }, // 3699545948
		{ &Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeNull, "JsonMakeNull" }, // 926440854
		{ &Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeObject, "JsonMakeObject" }, // 417986949
		{ &Z_Construct_UFunction_UBlueprintJsonLibrary_JsonMakeString, "JsonMakeString" }, // 3613844741
		{ &Z_Construct_UFunction_UBlueprintJsonLibrary_JsonRemoveField, "JsonRemoveField" }, // 921908985
		{ &Z_Construct_UFunction_UBlueprintJsonLibrary_JsonSetField, "JsonSetField" }, // 3313147510
		{ &Z_Construct_UFunction_UBlueprintJsonLibrary_JsonType, "JsonType" }, // 1131154487
		{ &Z_Construct_UFunction_UBlueprintJsonLibrary_NotEqual_JsonValue, "NotEqual_JsonValue" }, // 316460573
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintJsonLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintJsonLibrary.h" },
		{ "ModuleRelativePath", "Classes/BlueprintJsonLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlueprintJsonLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintJsonLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintJsonLibrary_Statics::ClassParams = {
		&UBlueprintJsonLibrary::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBlueprintJsonLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintJsonLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlueprintJsonLibrary()
	{
		if (!Z_Registration_Info_UClass_UBlueprintJsonLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlueprintJsonLibrary.OuterSingleton, Z_Construct_UClass_UBlueprintJsonLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBlueprintJsonLibrary.OuterSingleton;
	}
	template<> BLUEPRINTJSON_API UClass* StaticClass<UBlueprintJsonLibrary>()
	{
		return UBlueprintJsonLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintJsonLibrary);
	struct Z_CompiledInDeferFile_FID_Web_Browser_Plugins_BlueprintJson_Source_BlueprintJson_Classes_BlueprintJsonLibrary_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Web_Browser_Plugins_BlueprintJson_Source_BlueprintJson_Classes_BlueprintJsonLibrary_h_Statics::EnumInfo[] = {
		{ EJsonType_StaticEnum, TEXT("EJsonType"), &Z_Registration_Info_UEnum_EJsonType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1168221082U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Web_Browser_Plugins_BlueprintJson_Source_BlueprintJson_Classes_BlueprintJsonLibrary_h_Statics::ScriptStructInfo[] = {
		{ FBlueprintJsonObject::StaticStruct, Z_Construct_UScriptStruct_FBlueprintJsonObject_Statics::NewStructOps, TEXT("BlueprintJsonObject"), &Z_Registration_Info_UScriptStruct_BlueprintJsonObject, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBlueprintJsonObject), 384755472U) },
		{ FBlueprintJsonValue::StaticStruct, Z_Construct_UScriptStruct_FBlueprintJsonValue_Statics::NewStructOps, TEXT("BlueprintJsonValue"), &Z_Registration_Info_UScriptStruct_BlueprintJsonValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBlueprintJsonValue), 1685526408U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Web_Browser_Plugins_BlueprintJson_Source_BlueprintJson_Classes_BlueprintJsonLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBlueprintJsonLibrary, UBlueprintJsonLibrary::StaticClass, TEXT("UBlueprintJsonLibrary"), &Z_Registration_Info_UClass_UBlueprintJsonLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlueprintJsonLibrary), 1588389830U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Web_Browser_Plugins_BlueprintJson_Source_BlueprintJson_Classes_BlueprintJsonLibrary_h_1703318823(TEXT("/Script/BlueprintJson"),
		Z_CompiledInDeferFile_FID_Web_Browser_Plugins_BlueprintJson_Source_BlueprintJson_Classes_BlueprintJsonLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Web_Browser_Plugins_BlueprintJson_Source_BlueprintJson_Classes_BlueprintJsonLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Web_Browser_Plugins_BlueprintJson_Source_BlueprintJson_Classes_BlueprintJsonLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Web_Browser_Plugins_BlueprintJson_Source_BlueprintJson_Classes_BlueprintJsonLibrary_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Web_Browser_Plugins_BlueprintJson_Source_BlueprintJson_Classes_BlueprintJsonLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Web_Browser_Plugins_BlueprintJson_Source_BlueprintJson_Classes_BlueprintJsonLibrary_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
