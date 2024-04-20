// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBlueprintJsonValue;
struct FBlueprintJsonObject;
enum class EJsonType : uint8;
#ifdef BLUEPRINTJSON_BlueprintJsonLibrary_generated_h
#error "BlueprintJsonLibrary.generated.h already included, missing '#pragma once' in BlueprintJsonLibrary.h"
#endif
#define BLUEPRINTJSON_BlueprintJsonLibrary_generated_h

#define FID_Web_Browser_Plugins_BlueprintJson_Source_BlueprintJson_Classes_BlueprintJsonLibrary_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBlueprintJsonObject_Statics; \
	BLUEPRINTJSON_API static class UScriptStruct* StaticStruct();


template<> BLUEPRINTJSON_API UScriptStruct* StaticStruct<struct FBlueprintJsonObject>();

#define FID_Web_Browser_Plugins_BlueprintJson_Source_BlueprintJson_Classes_BlueprintJsonLibrary_h_33_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBlueprintJsonValue_Statics; \
	BLUEPRINTJSON_API static class UScriptStruct* StaticStruct();


template<> BLUEPRINTJSON_API UScriptStruct* StaticStruct<struct FBlueprintJsonValue>();

#define FID_Web_Browser_Plugins_BlueprintJson_Source_BlueprintJson_Classes_BlueprintJsonLibrary_h_42_SPARSE_DATA
#define FID_Web_Browser_Plugins_BlueprintJson_Source_BlueprintJson_Classes_BlueprintJsonLibrary_h_42_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConv_JsonValueToObject); \
	DECLARE_FUNCTION(execConv_JsonValueToArray); \
	DECLARE_FUNCTION(execConv_JsonValueToBool); \
	DECLARE_FUNCTION(execConv_JsonValueToFloat); \
	DECLARE_FUNCTION(execConv_JsonValueToInteger); \
	DECLARE_FUNCTION(execConv_JsonValueToString); \
	DECLARE_FUNCTION(execNotEqual_JsonValue); \
	DECLARE_FUNCTION(execEquaEqual_JsonValue); \
	DECLARE_FUNCTION(execJsonIsNull); \
	DECLARE_FUNCTION(execJsonType); \
	DECLARE_FUNCTION(execJsonMakeNull); \
	DECLARE_FUNCTION(execJsonMakeObject); \
	DECLARE_FUNCTION(execJsonMakeArray); \
	DECLARE_FUNCTION(execJsonMakeBool); \
	DECLARE_FUNCTION(execJsonMakeFloat); \
	DECLARE_FUNCTION(execJsonMakeInt); \
	DECLARE_FUNCTION(execJsonMakeString); \
	DECLARE_FUNCTION(execConv_StringToJsonObject); \
	DECLARE_FUNCTION(execConv_JsonObjectToPrettyString); \
	DECLARE_FUNCTION(execConv_JsonObjectToString); \
	DECLARE_FUNCTION(execConv_JsonObjectToJsonValue); \
	DECLARE_FUNCTION(execJsonRemoveField); \
	DECLARE_FUNCTION(execJsonHasTypedField); \
	DECLARE_FUNCTION(execJsonHasField); \
	DECLARE_FUNCTION(execJsonSetField); \
	DECLARE_FUNCTION(execJsonMakeField); \
	DECLARE_FUNCTION(execJsonMake);


#define FID_Web_Browser_Plugins_BlueprintJson_Source_BlueprintJson_Classes_BlueprintJsonLibrary_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConv_JsonValueToObject); \
	DECLARE_FUNCTION(execConv_JsonValueToArray); \
	DECLARE_FUNCTION(execConv_JsonValueToBool); \
	DECLARE_FUNCTION(execConv_JsonValueToFloat); \
	DECLARE_FUNCTION(execConv_JsonValueToInteger); \
	DECLARE_FUNCTION(execConv_JsonValueToString); \
	DECLARE_FUNCTION(execNotEqual_JsonValue); \
	DECLARE_FUNCTION(execEquaEqual_JsonValue); \
	DECLARE_FUNCTION(execJsonIsNull); \
	DECLARE_FUNCTION(execJsonType); \
	DECLARE_FUNCTION(execJsonMakeNull); \
	DECLARE_FUNCTION(execJsonMakeObject); \
	DECLARE_FUNCTION(execJsonMakeArray); \
	DECLARE_FUNCTION(execJsonMakeBool); \
	DECLARE_FUNCTION(execJsonMakeFloat); \
	DECLARE_FUNCTION(execJsonMakeInt); \
	DECLARE_FUNCTION(execJsonMakeString); \
	DECLARE_FUNCTION(execConv_StringToJsonObject); \
	DECLARE_FUNCTION(execConv_JsonObjectToPrettyString); \
	DECLARE_FUNCTION(execConv_JsonObjectToString); \
	DECLARE_FUNCTION(execConv_JsonObjectToJsonValue); \
	DECLARE_FUNCTION(execJsonRemoveField); \
	DECLARE_FUNCTION(execJsonHasTypedField); \
	DECLARE_FUNCTION(execJsonHasField); \
	DECLARE_FUNCTION(execJsonSetField); \
	DECLARE_FUNCTION(execJsonMakeField); \
	DECLARE_FUNCTION(execJsonMake);


#define FID_Web_Browser_Plugins_BlueprintJson_Source_BlueprintJson_Classes_BlueprintJsonLibrary_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlueprintJsonLibrary(); \
	friend struct Z_Construct_UClass_UBlueprintJsonLibrary_Statics; \
public: \
	DECLARE_CLASS(UBlueprintJsonLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlueprintJson"), NO_API) \
	DECLARE_SERIALIZER(UBlueprintJsonLibrary)


#define FID_Web_Browser_Plugins_BlueprintJson_Source_BlueprintJson_Classes_BlueprintJsonLibrary_h_42_INCLASS \
private: \
	static void StaticRegisterNativesUBlueprintJsonLibrary(); \
	friend struct Z_Construct_UClass_UBlueprintJsonLibrary_Statics; \
public: \
	DECLARE_CLASS(UBlueprintJsonLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlueprintJson"), NO_API) \
	DECLARE_SERIALIZER(UBlueprintJsonLibrary)


#define FID_Web_Browser_Plugins_BlueprintJson_Source_BlueprintJson_Classes_BlueprintJsonLibrary_h_42_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlueprintJsonLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintJsonLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlueprintJsonLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintJsonLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlueprintJsonLibrary(UBlueprintJsonLibrary&&); \
	NO_API UBlueprintJsonLibrary(const UBlueprintJsonLibrary&); \
public:


#define FID_Web_Browser_Plugins_BlueprintJson_Source_BlueprintJson_Classes_BlueprintJsonLibrary_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlueprintJsonLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlueprintJsonLibrary(UBlueprintJsonLibrary&&); \
	NO_API UBlueprintJsonLibrary(const UBlueprintJsonLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlueprintJsonLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintJsonLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintJsonLibrary)


#define FID_Web_Browser_Plugins_BlueprintJson_Source_BlueprintJson_Classes_BlueprintJsonLibrary_h_39_PROLOG
#define FID_Web_Browser_Plugins_BlueprintJson_Source_BlueprintJson_Classes_BlueprintJsonLibrary_h_42_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Web_Browser_Plugins_BlueprintJson_Source_BlueprintJson_Classes_BlueprintJsonLibrary_h_42_SPARSE_DATA \
	FID_Web_Browser_Plugins_BlueprintJson_Source_BlueprintJson_Classes_BlueprintJsonLibrary_h_42_RPC_WRAPPERS \
	FID_Web_Browser_Plugins_BlueprintJson_Source_BlueprintJson_Classes_BlueprintJsonLibrary_h_42_INCLASS \
	FID_Web_Browser_Plugins_BlueprintJson_Source_BlueprintJson_Classes_BlueprintJsonLibrary_h_42_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Web_Browser_Plugins_BlueprintJson_Source_BlueprintJson_Classes_BlueprintJsonLibrary_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Web_Browser_Plugins_BlueprintJson_Source_BlueprintJson_Classes_BlueprintJsonLibrary_h_42_SPARSE_DATA \
	FID_Web_Browser_Plugins_BlueprintJson_Source_BlueprintJson_Classes_BlueprintJsonLibrary_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Web_Browser_Plugins_BlueprintJson_Source_BlueprintJson_Classes_BlueprintJsonLibrary_h_42_INCLASS_NO_PURE_DECLS \
	FID_Web_Browser_Plugins_BlueprintJson_Source_BlueprintJson_Classes_BlueprintJsonLibrary_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUEPRINTJSON_API UClass* StaticClass<class UBlueprintJsonLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Web_Browser_Plugins_BlueprintJson_Source_BlueprintJson_Classes_BlueprintJsonLibrary_h


#define FOREACH_ENUM_EJSONTYPE(op) \
	op(EJsonType::None) \
	op(EJsonType::Null) \
	op(EJsonType::String) \
	op(EJsonType::Number) \
	op(EJsonType::Boolean) \
	op(EJsonType::Array) \
	op(EJsonType::Object) 

enum class EJsonType : uint8;
template<> BLUEPRINTJSON_API UEnum* StaticEnum<EJsonType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
