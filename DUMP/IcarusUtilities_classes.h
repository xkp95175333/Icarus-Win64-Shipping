// Class IcarusUtilities.RowLibrary
// Size: 0x28 (Inherited: 0x28)
struct URowLibrary : UBlueprintFunctionLibrary {

	bool IsRowHandleValid(struct FRowHandle RowHandle); // Function IcarusUtilities.RowLibrary.IsRowHandleValid // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x35d7150
	bool IsRowHandleNone(struct FRowHandle RowHandle); // Function IcarusUtilities.RowLibrary.IsRowHandleNone // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x35d70b0
	bool IsRowEnumValid(struct FRowEnum Enum); // Function IcarusUtilities.RowLibrary.IsRowEnumValid // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x35d7010
	bool IsRowEnumNone(struct FRowEnum Enum); // Function IcarusUtilities.RowLibrary.IsRowEnumNone // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x35d6f70
	int32_t GetRowIndex(struct FRowHandle Row); // Function IcarusUtilities.RowLibrary.GetRowIndex // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x35d6ed0
	struct FRowMetadata GetMetadata(struct FRowHandle RowHandle); // Function IcarusUtilities.RowLibrary.GetMetadata // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x35d6d20
	struct FFeatureLevelsRowHandle GetFeatureLevel(struct FRowHandle RowHandle); // Function IcarusUtilities.RowLibrary.GetFeatureLevel // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x35d6c60
	struct FName GetDataTableName(struct FRowHandle RowHandle); // Function IcarusUtilities.RowLibrary.GetDataTableName // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x35d6bb0
	struct UIcarusDataTable* GetDataTableForEdit(struct FRowHandle RowHandle); // Function IcarusUtilities.RowLibrary.GetDataTableForEdit // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x35d6b00
	struct UIcarusDataTable* GetDataTable(struct FRowHandle RowHandle); // Function IcarusUtilities.RowLibrary.GetDataTable // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x35d6a50
	bool EqualEqual_FRowHandleFRowHandle(struct FRowHandle RowHandleA, struct FRowHandle RowHandleB); // Function IcarusUtilities.RowLibrary.EqualEqual_FRowHandleFRowHandle // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x35d6940
};

// Class IcarusUtilities.IcarusDataTable
// Size: 0xb8 (Inherited: 0xb0)
struct UIcarusDataTable : UDataTable {
	struct UIcarusMetaTable* MetaTable; // 0xb0(0x08)
};

// Class IcarusUtilities.FeatureLevelsLibrary
// Size: 0x28 (Inherited: 0x28)
struct UFeatureLevelsLibrary : URowLibrary {

	struct FFeatureLevelsRowHandle StructToRowHandle(struct FFeatureLevelsEnum EnumValue); // Function IcarusUtilities.FeatureLevelsLibrary.StructToRowHandle // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x35d4e60
	struct FName StructToName(struct FFeatureLevelsEnum EnumValue); // Function IcarusUtilities.FeatureLevelsLibrary.StructToName // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x35d4dc0
	int32_t StructToInt(struct FFeatureLevelsEnum EnumValue); // Function IcarusUtilities.FeatureLevelsLibrary.StructToInt // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x35d4d20
	struct FFeatureLevelsEnum RowHandleToStruct(struct FFeatureLevelsRowHandle RowHandle); // Function IcarusUtilities.FeatureLevelsLibrary.RowHandleToStruct // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x35d4c60
	void RemoveRowFromFeatureLevelsTable(struct FName Name); // Function IcarusUtilities.FeatureLevelsLibrary.RemoveRowFromFeatureLevelsTable // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x35d4be0
	void RefreshConstants(); // Function IcarusUtilities.FeatureLevelsLibrary.RefreshConstants // (Final|Native|Static|Public) // @ game+0x35d4bc0
	int32_t NumRows(); // Function IcarusUtilities.FeatureLevelsLibrary.NumRows // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x35d4b90
	bool NotEqual_EnumName(struct FFeatureLevelsEnum A, struct FName B); // Function IcarusUtilities.FeatureLevelsLibrary.NotEqual_EnumName // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x35d4aa0
	bool NotEqual_EnumEnum(struct FFeatureLevelsEnum A, struct FFeatureLevelsEnum B); // Function IcarusUtilities.FeatureLevelsLibrary.NotEqual_EnumEnum // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x35d49b0
	struct FFeatureLevelsEnum NameToStruct(struct FName NameValue); // Function IcarusUtilities.FeatureLevelsLibrary.NameToStruct // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x35d4920
	int32_t NameToInt(struct FName NameValue); // Function IcarusUtilities.FeatureLevelsLibrary.NameToInt // (Final|Native|Static|Public) // @ game+0x35d4890
	struct FFeatureLevelsRowHandle MakeLiteralFeatureLevels(struct FFeatureLevelsRowHandle RowHandle); // Function IcarusUtilities.FeatureLevelsLibrary.MakeLiteralFeatureLevels // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x35d47c0
	struct FFeatureLevelsRowHandle MakeFeatureLevelsFromIndex(int32_t Index); // Function IcarusUtilities.FeatureLevelsLibrary.MakeFeatureLevelsFromIndex // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x35d4730
	struct FFeatureLevelsEnum MakeFeatureLevelsEnum(struct FFeatureLevelsEnum Enum); // Function IcarusUtilities.FeatureLevelsLibrary.MakeFeatureLevelsEnum // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x35d46b0
	struct FFeatureLevelsRowHandle MakeFeatureLevels(struct FName RowName); // Function IcarusUtilities.FeatureLevelsLibrary.MakeFeatureLevels // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x35d4610
	bool IsValidName(struct FName NameValue); // Function IcarusUtilities.FeatureLevelsLibrary.IsValidName // (Final|Native|Static|Public) // @ game+0x35d4580
	struct FFeatureLevelsEnum IntToStruct(int32_t IntValue); // Function IcarusUtilities.FeatureLevelsLibrary.IntToStruct // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x35d44f0
	struct FName IntToName(int32_t IntValue); // Function IcarusUtilities.FeatureLevelsLibrary.IntToName // (Final|Native|Static|Public) // @ game+0x35d4460
	void GetFeatureLevelsStruct(struct FFeatureLevelsRowHandle RowHandle, struct FFeatureLevelData FeatureLevels, enum class EValid Paths); // Function IcarusUtilities.FeatureLevelsLibrary.GetFeatureLevelsStruct // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x35d4240
	bool EqualEqual_FFeatureLevelsRowHandleFFeatureLevelsRowHandle(struct FFeatureLevelsRowHandle RowHandleA, struct FFeatureLevelsRowHandle RowHandleB); // Function IcarusUtilities.FeatureLevelsLibrary.EqualEqual_FFeatureLevelsRowHandleFFeatureLevelsRowHandle // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x35d4100
	bool EqualEqual_EnumEnum(struct FFeatureLevelsEnum A, struct FFeatureLevelsEnum B); // Function IcarusUtilities.FeatureLevelsLibrary.EqualEqual_EnumEnum // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x35d4010
	struct FFeatureLevelsRowHandle CastToFeatureLevelsRowHandle(struct FRowHandle RowHandle, enum class EValid Paths); // Function IcarusUtilities.FeatureLevelsLibrary.CastToFeatureLevelsRowHandle // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x35d3ef0
	void BreakFeatureLevelsEnum(struct FFeatureLevelsEnum Enum, struct FName Name, int32_t Index); // Function IcarusUtilities.FeatureLevelsLibrary.BreakFeatureLevelsEnum // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x35d3d90
	void AddRowToFeatureLevelsTable(struct FName Name, struct FFeatureLevelData Data, struct FFeatureLevelsRowHandle NewRow); // Function IcarusUtilities.FeatureLevelsLibrary.AddRowToFeatureLevelsTable // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x35d3aa0
};

// Class IcarusUtilities.FeatureLevelsTable
// Size: 0xb8 (Inherited: 0xb8)
struct UFeatureLevelsTable : UIcarusDataTable {
};

// Class IcarusUtilities.IcarusContainerLibrary
// Size: 0x28 (Inherited: 0x28)
struct UIcarusContainerLibrary : UBlueprintFunctionLibrary {
};

// Class IcarusUtilities.IcarusFeatureLevelFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UIcarusFeatureLevelFunctionLibrary : UBlueprintFunctionLibrary {

	bool IsFeatureLevelEnabled(struct FFeatureLevelsRowHandle InFeatureLevel); // Function IcarusUtilities.IcarusFeatureLevelFunctionLibrary.IsFeatureLevelEnabled // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x35d5580
	struct FFeatureLevelsRowHandle GetCurrentFeatureLevel(); // Function IcarusUtilities.IcarusFeatureLevelFunctionLibrary.GetCurrentFeatureLevel // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x35d5540
};

// Class IcarusUtilities.IcarusMetaTable
// Size: 0xb0 (Inherited: 0xb0)
struct UIcarusMetaTable : UDataTable {
};

// Class IcarusUtilities.IcarusStringFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UIcarusStringFunctionLibrary : UBlueprintFunctionLibrary {

	struct TArray<struct FString> ParseIntoLines(struct FString MultiLineInput); // Function IcarusUtilities.IcarusStringFunctionLibrary.ParseIntoLines // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x35d5de0
	bool LexicalLess_Text(struct FText TextA, struct FText TextB); // Function IcarusUtilities.IcarusStringFunctionLibrary.LexicalLess_Text // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x35d5c70
	bool LexicalLess_String(struct FString StringA, struct FString StringB); // Function IcarusUtilities.IcarusStringFunctionLibrary.LexicalLess_String // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x35d5b80
	bool LexicalLess_Name(struct FName NameA, struct FName NameB); // Function IcarusUtilities.IcarusStringFunctionLibrary.LexicalLess_Name // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x35d5aa0
	bool FastLess_Name(struct FName NameA, struct FName NameB); // Function IcarusUtilities.IcarusStringFunctionLibrary.FastLess_Name // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x35d59c0
};

// Class IcarusUtilities.LessInterface
// Size: 0x28 (Inherited: 0x28)
struct ULessInterface : UInterface {

	bool LessThan(struct UObject* Other); // Function IcarusUtilities.LessInterface.LessThan // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x35d6200
};

