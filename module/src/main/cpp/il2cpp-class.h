typedef uint16_t Il2CppChar;
typedef uintptr_t il2cpp_array_size_t;
typedef int32_t TypeDefinitionIndex;
typedef int32_t GenericParameterIndex;
typedef char Il2CppNativeChar;

typedef struct Il2CppMemoryCallbacks Il2CppMemoryCallbacks;
typedef struct Il2CppImage Il2CppImage;
typedef struct Il2CppClass Il2CppClass;
typedef struct Il2CppArrayBounds Il2CppArrayBounds;
typedef struct Il2CppAssembly Il2CppAssembly;
typedef struct Il2CppArrayType Il2CppArrayType;
typedef struct Il2CppGenericClass Il2CppGenericClass;
typedef struct Il2CppReflectionType Il2CppReflectionType;
typedef struct MonitorData MonitorData;
typedef Il2CppClass Il2CppVTable;
typedef struct EventInfo EventInfo;
typedef struct FieldInfo FieldInfo;
typedef struct PropertyInfo PropertyInfo;
typedef struct Il2CppDomain Il2CppDomain;
typedef struct Il2CppException Il2CppException;
typedef struct Il2CppObject Il2CppObject;
typedef struct Il2CppReflectionMethod Il2CppReflectionMethod;
typedef struct Il2CppString Il2CppString;
typedef struct Il2CppThread Il2CppThread;
typedef struct Il2CppStackFrameInfo Il2CppStackFrameInfo;
typedef struct Il2CppManagedMemorySnapshot Il2CppManagedMemorySnapshot;
typedef struct Il2CppDebuggerTransport Il2CppDebuggerTransport;
typedef struct Il2CppMethodDebugInfo Il2CppMethodDebugInfo;
typedef struct Il2CppCustomAttrInfo Il2CppCustomAttrInfo;
typedef const struct ___Il2CppMetadataTypeHandle *Il2CppMetadataTypeHandle;
typedef const struct ___Il2CppMetadataGenericParameterHandle *Il2CppMetadataGenericParameterHandle;

typedef void (*Il2CppMethodPointer)();

typedef void (*il2cpp_register_object_callback)(Il2CppObject **arr, int size, void *userdata);

typedef void *(*il2cpp_liveness_reallocate_callback)(void *ptr, size_t size, void *userdata);

typedef void (*Il2CppFrameWalkFunc)(const Il2CppStackFrameInfo *info, void *user_data);

typedef size_t(*Il2CppBacktraceFunc)(Il2CppMethodPointer *buffer, size_t maxSize);

typedef const Il2CppNativeChar *(*Il2CppSetFindPlugInCallback)(const Il2CppNativeChar *);

typedef void (*Il2CppLogCallback)(const char *);

typedef enum {
    IL2CPP_UNHANDLED_POLICY_LEGACY,
    IL2CPP_UNHANDLED_POLICY_CURRENT
} Il2CppRuntimeUnhandledExceptionPolicy;

typedef enum {
    IL2CPP_GC_MODE_DISABLED = 0,
    IL2CPP_GC_MODE_ENABLED = 1,
    IL2CPP_GC_MODE_MANUAL = 2
} Il2CppGCMode;

typedef enum Il2CppStat {
    IL2CPP_STAT_NEW_OBJECT_COUNT,
    IL2CPP_STAT_INITIALIZED_CLASS_COUNT,
    IL2CPP_STAT_METHOD_COUNT,
    IL2CPP_STAT_CLASS_STATIC_DATA_SIZE,
    IL2CPP_STAT_GENERIC_INSTANCE_COUNT,
    IL2CPP_STAT_GENERIC_CLASS_COUNT,
    IL2CPP_STAT_INFLATED_METHOD_COUNT,
    IL2CPP_STAT_INFLATED_TYPE_COUNT,
} Il2CppStat;

typedef enum Il2CppTypeEnum {
    IL2CPP_TYPE_END = 0x00,
    IL2CPP_TYPE_VOID = 0x01,
    IL2CPP_TYPE_BOOLEAN = 0x02,
    IL2CPP_TYPE_CHAR = 0x03,
    IL2CPP_TYPE_I1 = 0x04,
    IL2CPP_TYPE_U1 = 0x05,
    IL2CPP_TYPE_I2 = 0x06,
    IL2CPP_TYPE_U2 = 0x07,
    IL2CPP_TYPE_I4 = 0x08,
    IL2CPP_TYPE_U4 = 0x09,
    IL2CPP_TYPE_I8 = 0x0a,
    IL2CPP_TYPE_U8 = 0x0b,
    IL2CPP_TYPE_R4 = 0x0c,
    IL2CPP_TYPE_R8 = 0x0d,
    IL2CPP_TYPE_STRING = 0x0e,
    IL2CPP_TYPE_PTR = 0x0f,
    IL2CPP_TYPE_BYREF = 0x10,
    IL2CPP_TYPE_VALUETYPE = 0x11,
    IL2CPP_TYPE_CLASS = 0x12,
    IL2CPP_TYPE_VAR = 0x13,
    IL2CPP_TYPE_ARRAY = 0x14,
    IL2CPP_TYPE_GENERICINST = 0x15,
    IL2CPP_TYPE_TYPEDBYREF = 0x16,
    IL2CPP_TYPE_I = 0x18,
    IL2CPP_TYPE_U = 0x19,
    IL2CPP_TYPE_FNPTR = 0x1b,
    IL2CPP_TYPE_OBJECT = 0x1c,
    IL2CPP_TYPE_SZARRAY = 0x1d,
    IL2CPP_TYPE_MVAR = 0x1e,
    IL2CPP_TYPE_CMOD_REQD = 0x1f,
    IL2CPP_TYPE_CMOD_OPT = 0x20,
    IL2CPP_TYPE_INTERNAL = 0x21,
    IL2CPP_TYPE_MODIFIER = 0x40,
    IL2CPP_TYPE_SENTINEL = 0x41,
    IL2CPP_TYPE_PINNED = 0x45,
    IL2CPP_TYPE_ENUM = 0x55,
    IL2CPP_TYPE_IL2CPP_TYPE_INDEX = 0xff
} Il2CppTypeEnum;

typedef struct Il2CppType {
    union {
        void *dummy;
        TypeDefinitionIndex klassIndex;
        const Il2CppType *type;
        Il2CppArrayType *array;
        GenericParameterIndex genericParameterIndex;
        Il2CppGenericClass *generic_class;
    } data;
    unsigned int attrs: 16;
    Il2CppTypeEnum type: 8;
    unsigned int num_mods: 6;
    unsigned int byref: 1;
    unsigned int pinned: 1;
} Il2CppType;

typedef struct MethodInfo {
    Il2CppMethodPointer methodPointer;
} MethodInfo;

typedef struct Il2CppObject {
    union {
        Il2CppClass *klass;
        Il2CppVTable *vtable;
    };
    MonitorData *monitor;
} Il2CppObject;

typedef struct Il2CppArray {
    Il2CppObject obj;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    void *vector[32];
} Il2CppArray;

typedef struct Il2CppClass
{
	// The following fields are always valid for a Il2CppClass structure
	const Il2CppImage* image;
	void* gc_desc;
	const char* name;
	const char* namespaze;
	const Il2CppType* byval_arg;
	const Il2CppType* this_arg;
	Il2CppClass* element_class;
	Il2CppClass* castClass;
	Il2CppClass* declaringType;
	Il2CppClass* parent;
	Il2CppGenericClass *generic_class;
	const Il2CppTypeDefinition* typeDefinition; // non-NULL for Il2CppClass's constructed from type defintions
	// End always valid fields
	
	// The following fields need initialized before access. This can be done per field or as an aggregate via a call to Class::Init
	FieldInfo* fields; // Initialized in SetupFields
	const EventInfo* events; // Initialized in SetupEvents
	const PropertyInfo* properties; // Initialized in SetupProperties
	const MethodInfo** methods; // Initialized in SetupMethods
	Il2CppClass** nestedTypes; // Initialized in SetupNestedTypes
	Il2CppClass** implementedInterfaces; // Initialized in SetupInterfaces
	const MethodInfo** vtable; // Initialized in Init
	Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets; // Initialized in Init
	void* static_fields; // Initialized in Init
	const Il2CppRGCTXData* rgctx_data; // Initialized in Init
	// used for fast parent checks
	Il2CppClass** typeHierarchy; // Initialized in SetupTypeHierachy
	// End initialization required fields

#if IL2CPP_DEBUGGER_ENABLED
	const Il2CppDebugTypeInfo *debug_info;
#endif

	uint32_t cctor_started;
	uint32_t cctor_finished;
	ALIGN_TYPE (8) uint64_t cctor_thread;

	// Remaining fields are always valid except where noted
	GenericContainerIndex genericContainerIndex;
	CustomAttributeIndex customAttributeIndex;
	uint32_t instance_size;
	uint32_t actualSize;
	uint32_t element_size;
	int32_t native_size;
	uint32_t static_fields_size;
	uint32_t thread_static_fields_size;
	int32_t thread_static_fields_offset;
	uint32_t flags;
	uint32_t token;

	uint16_t method_count; // lazily calculated for arrays, i.e. when rank > 0
	uint16_t property_count;
	uint16_t field_count;
	uint16_t event_count;
	uint16_t nested_type_count;
	uint16_t vtable_count; // lazily calculated for arrays, i.e. when rank > 0
	uint16_t interfaces_count;
	uint16_t interface_offsets_count; // lazily calculated for arrays, i.e. when rank > 0

	uint8_t typeHierarchyDepth; // Initialized in SetupTypeHierachy
	uint8_t rank;
	uint8_t minimumAlignment;
	uint8_t packingSize;

	uint8_t valuetype : 1;
	uint8_t initialized : 1;
	uint8_t enumtype : 1;
	uint8_t is_generic : 1;
	uint8_t has_references : 1;
	uint8_t init_pending : 1;
	uint8_t size_inited : 1;
	uint8_t has_finalize : 1;
	uint8_t has_cctor : 1;
	uint8_t is_blittable : 1;
	uint8_t is_import : 1;
} Il2CppClass;
