// Enum SubstanceCore.ESubstanceInputType
enum class ESubstanceInputType : uint8 {
	SIT_Float,
	SIT_Float2,
	SIT_Float3,
	SIT_Float4,
	SIT_Integer,
	SIT_Image,
	SIT_Unused_7,
	SIT_Unused_8,
	SIT_Integer2,
	SIT_Integer3,
	SIT_Integer4,
	SIT_MAX,
};

// Enum SubstanceCore.ESubstanceGenerationMode
enum class ESubstanceGenerationMode : uint8 {
	SGM_PlatformDefault,
	SGM_Baked,
	SGM_OnLoadSync,
	SGM_OnLoadSyncAndCache,
	SGM_OnLoadAsync,
	SGM_OnLoadAsyncAndCache,
	SGM_MAX,
};

// Enum SubstanceCore.EDefaultSubstanceTextureSize
enum class EDefaultSubstanceTextureSize : uint8 {
	Size_1,
	Size_17,
	Size_33,
	Size_65,
	Size_129,
	Size_257,
	Size_513,
	Size_1025,
	Size_2049,
	Size_4097,
	Size_MAX,
};

// Enum SubstanceCore.ESubstanceEngineType
enum class ESubstanceEngineType : uint8 {
	SET_CPU,
	SET_GPU,
	SET_MAX,
};

// Enum SubstanceCore.ESubstanceTextureSize
enum class ESubstanceTextureSize : uint8 {
	ERL_17,
	ERL_33,
	ERL_65,
	ERL_129,
	ERL_257,
	ERL_513,
	ERL_1025,
	ERL_2049,
	ERL_4097,
	ERL_8193,
	ERL_MAX,
};

// ScriptStruct SubstanceCore.SubstanceInstanceDesc
// Size: 0x20 (Inherited: 0x00)
struct FSubstanceInstanceDesc {
	struct FString Name; // 0x00(0x10)
	struct TArray<struct FSubstanceInputDesc> Inputs; // 0x10(0x10)
};

// ScriptStruct SubstanceCore.SubstanceInputDesc
// Size: 0x18 (Inherited: 0x00)
struct FSubstanceInputDesc {
	struct FString Name; // 0x00(0x10)
	enum class ESubstanceInputType Type; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct SubstanceCore.SubstanceFloatInputDesc
// Size: 0x48 (Inherited: 0x18)
struct FSubstanceFloatInputDesc : FSubstanceInputDesc {
	struct TArray<float> Min; // 0x18(0x10)
	struct TArray<float> Max; // 0x28(0x10)
	struct TArray<float> Default; // 0x38(0x10)
};

// ScriptStruct SubstanceCore.SubstanceIntInputDesc
// Size: 0x48 (Inherited: 0x18)
struct FSubstanceIntInputDesc : FSubstanceInputDesc {
	struct TArray<int32_t> Min; // 0x18(0x10)
	struct TArray<int32_t> Max; // 0x28(0x10)
	struct TArray<int32_t> Default; // 0x38(0x10)
};

// ScriptStruct SubstanceCore.SubstanceConnection
// Size: 0x20 (Inherited: 0x00)
struct FSubstanceConnection {
	struct FString OutputIdentifier; // 0x00(0x10)
	struct FString InputImageIdentifier; // 0x10(0x10)
};

