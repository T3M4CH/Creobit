#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// Figure[]
struct FigureU5BU5D_t73C3BEB2BE5540012E7FAFB8BAAFCF17331EE76E;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// SceneInfo[]
struct SceneInfoU5BU5D_t4685AC7D7CBFA72AFF75C4E8CE1B1585C415CDC5;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// CircleScript
struct CircleScript_t14884BEC08D53B1829322C0C274492A9DB232251;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// ConnectionScript
struct ConnectionScript_tADDEC2FCD1578C6E0104429872BA7D6049AE3055;
// Constellator
struct Constellator_t82C724B9CF998A32666692F452D15275AFCD8F96;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Figure
struct Figure_tD3F2D6CD703435C5A34BDA0CFAEF315DC8ED30E1;
// FigureManager
struct FigureManager_t53A105ED7BAD09C625B1A14DC7CE83FBE73541CA;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// MenuScript
struct MenuScript_tE9F8D547CCE9063DE789709E04F071AC12279716;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// ResourcesManager
struct ResourcesManager_t29353D9703201AB5E65427A519648DD596A2BB17;
// SceneInfo
struct SceneInfo_tB4D0254BE2C5AB81D3EFA7E0D49A8A93F2DFB6EC;
// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// SquareScript
struct SquareScript_t363231F809675EA1AD40871AA405406C46E2AEC7;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// TriangleScript
struct TriangleScript_t6E56FC30244CA8AE5461597546EA82FAD254B8A2;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F;
// ConnectionScript/OnReleaseDelegate
struct OnReleaseDelegate_tF10A7DE9C6B5540DC48F6BEF5131FCE808B0A9F2;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE;

IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnReleaseDelegate_tF10A7DE9C6B5540DC48F6BEF5131FCE808B0A9F2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral082798A464456997B21A0FFF5774463F5AAEC729;
IL2CPP_EXTERN_C String_t* _stringLiteral163645A82FC30F1504D822E5D958F72D799EBFF7;
IL2CPP_EXTERN_C String_t* _stringLiteral6BB5C4A0C26EAB0914847E3B343141EA1444180E;
IL2CPP_EXTERN_C String_t* _stringLiteralE007B17B06CB84F1B41E40F63F887BC77704FA27;
IL2CPP_EXTERN_C String_t* _stringLiteralE8D604EA97ACA8EB403D281FB23304D3B2338E81;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisConnectionScript_tADDEC2FCD1578C6E0104429872BA7D6049AE3055_mBA938D8D6DAE0406BA0770F6D74088286DE8FFF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisFigureManager_t53A105ED7BAD09C625B1A14DC7CE83FBE73541CA_mAADB189352F711389D6CD489C104D33DECF0CF80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSquareScript_t363231F809675EA1AD40871AA405406C46E2AEC7_m3EADB896A6B9001771CF0BAA8D2EDED68ACBEF24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Constellator_U3CStartU3Eb__7_0_m9DFFB84F91893AE46566959B6CD8B203F3811C2B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FigureManager_OnRelease_mF1BB69C4A032BAF747927F7C29F5DE6C758FA662_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisFigure_tD3F2D6CD703435C5A34BDA0CFAEF315DC8ED30E1_m09CF237F141696E5A492DE267ADDCF14FDD5DDF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisCircleScript_t14884BEC08D53B1829322C0C274492A9DB232251_mDC6BBC73263AD691BCF1A70B5E9BA5F3C2440F94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisFigure_tD3F2D6CD703435C5A34BDA0CFAEF315DC8ED30E1_m80FCCF932B2747F4E4F0AB7690005C8B0B30F086_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ResourcesManager_U3CStartU3Eb__13_0_m08737382A0EC3477B29C06AF9F1079982F869C0F_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct FigureU5BU5D_t73C3BEB2BE5540012E7FAFB8BAAFCF17331EE76E;
struct SceneInfoU5BU5D_t4685AC7D7CBFA72AFF75C4E8CE1B1585C415CDC5;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// UnityEngine.Events.UnityEventBase
struct UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_Calls_0)); }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Color32
struct Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.UI.ColorBlock
struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F  : public UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4
{
public:

public:
};


// UnityEngine.UI.Image/FillMethod
struct FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// SceneInfo
struct SceneInfo_tB4D0254BE2C5AB81D3EFA7E0D49A8A93F2DFB6EC  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Int32 SceneInfo::countSquares
	int32_t ___countSquares_4;
	// System.Int32 SceneInfo::countCircles
	int32_t ___countCircles_5;
	// System.Int32 SceneInfo::countTriangles
	int32_t ___countTriangles_6;

public:
	inline static int32_t get_offset_of_countSquares_4() { return static_cast<int32_t>(offsetof(SceneInfo_tB4D0254BE2C5AB81D3EFA7E0D49A8A93F2DFB6EC, ___countSquares_4)); }
	inline int32_t get_countSquares_4() const { return ___countSquares_4; }
	inline int32_t* get_address_of_countSquares_4() { return &___countSquares_4; }
	inline void set_countSquares_4(int32_t value)
	{
		___countSquares_4 = value;
	}

	inline static int32_t get_offset_of_countCircles_5() { return static_cast<int32_t>(offsetof(SceneInfo_tB4D0254BE2C5AB81D3EFA7E0D49A8A93F2DFB6EC, ___countCircles_5)); }
	inline int32_t get_countCircles_5() const { return ___countCircles_5; }
	inline int32_t* get_address_of_countCircles_5() { return &___countCircles_5; }
	inline void set_countCircles_5(int32_t value)
	{
		___countCircles_5 = value;
	}

	inline static int32_t get_offset_of_countTriangles_6() { return static_cast<int32_t>(offsetof(SceneInfo_tB4D0254BE2C5AB81D3EFA7E0D49A8A93F2DFB6EC, ___countTriangles_6)); }
	inline int32_t get_countTriangles_6() const { return ___countTriangles_6; }
	inline int32_t* get_address_of_countTriangles_6() { return &___countTriangles_6; }
	inline void set_countTriangles_6(int32_t value)
	{
		___countTriangles_6 = value;
	}
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099  : public MulticastDelegate_t
{
public:

public:
};


// ConnectionScript/OnReleaseDelegate
struct OnReleaseDelegate_tF10A7DE9C6B5540DC48F6BEF5131FCE808B0A9F2  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072  : public Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1
{
public:

public:
};

struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * ___reapplyDrivenProperties_4;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_4() { return static_cast<int32_t>(offsetof(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields, ___reapplyDrivenProperties_4)); }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * get_reapplyDrivenProperties_4() const { return ___reapplyDrivenProperties_4; }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE ** get_address_of_reapplyDrivenProperties_4() { return &___reapplyDrivenProperties_4; }
	inline void set_reapplyDrivenProperties_4(ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * value)
	{
		___reapplyDrivenProperties_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reapplyDrivenProperties_4), (void*)value);
	}
};


// ConnectionScript
struct ConnectionScript_tADDEC2FCD1578C6E0104429872BA7D6049AE3055  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Figure ConnectionScript::firstFigure
	Figure_tD3F2D6CD703435C5A34BDA0CFAEF315DC8ED30E1 * ___firstFigure_4;
	// Figure ConnectionScript::secondFigure
	Figure_tD3F2D6CD703435C5A34BDA0CFAEF315DC8ED30E1 * ___secondFigure_5;
	// ConnectionScript/OnReleaseDelegate ConnectionScript::OnRelease
	OnReleaseDelegate_tF10A7DE9C6B5540DC48F6BEF5131FCE808B0A9F2 * ___OnRelease_6;
	// ResourcesManager ConnectionScript::resources
	ResourcesManager_t29353D9703201AB5E65427A519648DD596A2BB17 * ___resources_7;

public:
	inline static int32_t get_offset_of_firstFigure_4() { return static_cast<int32_t>(offsetof(ConnectionScript_tADDEC2FCD1578C6E0104429872BA7D6049AE3055, ___firstFigure_4)); }
	inline Figure_tD3F2D6CD703435C5A34BDA0CFAEF315DC8ED30E1 * get_firstFigure_4() const { return ___firstFigure_4; }
	inline Figure_tD3F2D6CD703435C5A34BDA0CFAEF315DC8ED30E1 ** get_address_of_firstFigure_4() { return &___firstFigure_4; }
	inline void set_firstFigure_4(Figure_tD3F2D6CD703435C5A34BDA0CFAEF315DC8ED30E1 * value)
	{
		___firstFigure_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstFigure_4), (void*)value);
	}

	inline static int32_t get_offset_of_secondFigure_5() { return static_cast<int32_t>(offsetof(ConnectionScript_tADDEC2FCD1578C6E0104429872BA7D6049AE3055, ___secondFigure_5)); }
	inline Figure_tD3F2D6CD703435C5A34BDA0CFAEF315DC8ED30E1 * get_secondFigure_5() const { return ___secondFigure_5; }
	inline Figure_tD3F2D6CD703435C5A34BDA0CFAEF315DC8ED30E1 ** get_address_of_secondFigure_5() { return &___secondFigure_5; }
	inline void set_secondFigure_5(Figure_tD3F2D6CD703435C5A34BDA0CFAEF315DC8ED30E1 * value)
	{
		___secondFigure_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___secondFigure_5), (void*)value);
	}

	inline static int32_t get_offset_of_OnRelease_6() { return static_cast<int32_t>(offsetof(ConnectionScript_tADDEC2FCD1578C6E0104429872BA7D6049AE3055, ___OnRelease_6)); }
	inline OnReleaseDelegate_tF10A7DE9C6B5540DC48F6BEF5131FCE808B0A9F2 * get_OnRelease_6() const { return ___OnRelease_6; }
	inline OnReleaseDelegate_tF10A7DE9C6B5540DC48F6BEF5131FCE808B0A9F2 ** get_address_of_OnRelease_6() { return &___OnRelease_6; }
	inline void set_OnRelease_6(OnReleaseDelegate_tF10A7DE9C6B5540DC48F6BEF5131FCE808B0A9F2 * value)
	{
		___OnRelease_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnRelease_6), (void*)value);
	}

	inline static int32_t get_offset_of_resources_7() { return static_cast<int32_t>(offsetof(ConnectionScript_tADDEC2FCD1578C6E0104429872BA7D6049AE3055, ___resources_7)); }
	inline ResourcesManager_t29353D9703201AB5E65427A519648DD596A2BB17 * get_resources_7() const { return ___resources_7; }
	inline ResourcesManager_t29353D9703201AB5E65427A519648DD596A2BB17 ** get_address_of_resources_7() { return &___resources_7; }
	inline void set_resources_7(ResourcesManager_t29353D9703201AB5E65427A519648DD596A2BB17 * value)
	{
		___resources_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resources_7), (void*)value);
	}
};


// Constellator
struct Constellator_t82C724B9CF998A32666692F452D15275AFCD8F96  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// SceneInfo Constellator::level
	SceneInfo_tB4D0254BE2C5AB81D3EFA7E0D49A8A93F2DFB6EC * ___level_4;
	// System.Boolean Constellator::TrianglesEnabled
	bool ___TrianglesEnabled_5;
	// UnityEngine.UI.Button Constellator::addTriangles
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___addTriangles_6;
	// UnityEngine.GameObject Constellator::SquarePrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___SquarePrefab_7;
	// UnityEngine.GameObject Constellator::CirclePrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___CirclePrefab_8;
	// UnityEngine.GameObject Constellator::TrianglePrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___TrianglePrefab_9;
	// Figure[] Constellator::SquaresAndCircles
	FigureU5BU5D_t73C3BEB2BE5540012E7FAFB8BAAFCF17331EE76E* ___SquaresAndCircles_10;

public:
	inline static int32_t get_offset_of_level_4() { return static_cast<int32_t>(offsetof(Constellator_t82C724B9CF998A32666692F452D15275AFCD8F96, ___level_4)); }
	inline SceneInfo_tB4D0254BE2C5AB81D3EFA7E0D49A8A93F2DFB6EC * get_level_4() const { return ___level_4; }
	inline SceneInfo_tB4D0254BE2C5AB81D3EFA7E0D49A8A93F2DFB6EC ** get_address_of_level_4() { return &___level_4; }
	inline void set_level_4(SceneInfo_tB4D0254BE2C5AB81D3EFA7E0D49A8A93F2DFB6EC * value)
	{
		___level_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___level_4), (void*)value);
	}

	inline static int32_t get_offset_of_TrianglesEnabled_5() { return static_cast<int32_t>(offsetof(Constellator_t82C724B9CF998A32666692F452D15275AFCD8F96, ___TrianglesEnabled_5)); }
	inline bool get_TrianglesEnabled_5() const { return ___TrianglesEnabled_5; }
	inline bool* get_address_of_TrianglesEnabled_5() { return &___TrianglesEnabled_5; }
	inline void set_TrianglesEnabled_5(bool value)
	{
		___TrianglesEnabled_5 = value;
	}

	inline static int32_t get_offset_of_addTriangles_6() { return static_cast<int32_t>(offsetof(Constellator_t82C724B9CF998A32666692F452D15275AFCD8F96, ___addTriangles_6)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_addTriangles_6() const { return ___addTriangles_6; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_addTriangles_6() { return &___addTriangles_6; }
	inline void set_addTriangles_6(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___addTriangles_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___addTriangles_6), (void*)value);
	}

	inline static int32_t get_offset_of_SquarePrefab_7() { return static_cast<int32_t>(offsetof(Constellator_t82C724B9CF998A32666692F452D15275AFCD8F96, ___SquarePrefab_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_SquarePrefab_7() const { return ___SquarePrefab_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_SquarePrefab_7() { return &___SquarePrefab_7; }
	inline void set_SquarePrefab_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___SquarePrefab_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SquarePrefab_7), (void*)value);
	}

	inline static int32_t get_offset_of_CirclePrefab_8() { return static_cast<int32_t>(offsetof(Constellator_t82C724B9CF998A32666692F452D15275AFCD8F96, ___CirclePrefab_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_CirclePrefab_8() const { return ___CirclePrefab_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_CirclePrefab_8() { return &___CirclePrefab_8; }
	inline void set_CirclePrefab_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___CirclePrefab_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CirclePrefab_8), (void*)value);
	}

	inline static int32_t get_offset_of_TrianglePrefab_9() { return static_cast<int32_t>(offsetof(Constellator_t82C724B9CF998A32666692F452D15275AFCD8F96, ___TrianglePrefab_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_TrianglePrefab_9() const { return ___TrianglePrefab_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_TrianglePrefab_9() { return &___TrianglePrefab_9; }
	inline void set_TrianglePrefab_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___TrianglePrefab_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrianglePrefab_9), (void*)value);
	}

	inline static int32_t get_offset_of_SquaresAndCircles_10() { return static_cast<int32_t>(offsetof(Constellator_t82C724B9CF998A32666692F452D15275AFCD8F96, ___SquaresAndCircles_10)); }
	inline FigureU5BU5D_t73C3BEB2BE5540012E7FAFB8BAAFCF17331EE76E* get_SquaresAndCircles_10() const { return ___SquaresAndCircles_10; }
	inline FigureU5BU5D_t73C3BEB2BE5540012E7FAFB8BAAFCF17331EE76E** get_address_of_SquaresAndCircles_10() { return &___SquaresAndCircles_10; }
	inline void set_SquaresAndCircles_10(FigureU5BU5D_t73C3BEB2BE5540012E7FAFB8BAAFCF17331EE76E* value)
	{
		___SquaresAndCircles_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SquaresAndCircles_10), (void*)value);
	}
};


// Figure
struct Figure_tD3F2D6CD703435C5A34BDA0CFAEF315DC8ED30E1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// FigureManager
struct FigureManager_t53A105ED7BAD09C625B1A14DC7CE83FBE73541CA  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Image FigureManager::imageComponent
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___imageComponent_4;
	// ConnectionScript FigureManager::connectionComponent
	ConnectionScript_tADDEC2FCD1578C6E0104429872BA7D6049AE3055 * ___connectionComponent_5;

public:
	inline static int32_t get_offset_of_imageComponent_4() { return static_cast<int32_t>(offsetof(FigureManager_t53A105ED7BAD09C625B1A14DC7CE83FBE73541CA, ___imageComponent_4)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_imageComponent_4() const { return ___imageComponent_4; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_imageComponent_4() { return &___imageComponent_4; }
	inline void set_imageComponent_4(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___imageComponent_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___imageComponent_4), (void*)value);
	}

	inline static int32_t get_offset_of_connectionComponent_5() { return static_cast<int32_t>(offsetof(FigureManager_t53A105ED7BAD09C625B1A14DC7CE83FBE73541CA, ___connectionComponent_5)); }
	inline ConnectionScript_tADDEC2FCD1578C6E0104429872BA7D6049AE3055 * get_connectionComponent_5() const { return ___connectionComponent_5; }
	inline ConnectionScript_tADDEC2FCD1578C6E0104429872BA7D6049AE3055 ** get_address_of_connectionComponent_5() { return &___connectionComponent_5; }
	inline void set_connectionComponent_5(ConnectionScript_tADDEC2FCD1578C6E0104429872BA7D6049AE3055 * value)
	{
		___connectionComponent_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___connectionComponent_5), (void*)value);
	}
};


// MenuScript
struct MenuScript_tE9F8D547CCE9063DE789709E04F071AC12279716  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// SceneInfo[] MenuScript::levels
	SceneInfoU5BU5D_t4685AC7D7CBFA72AFF75C4E8CE1B1585C415CDC5* ___levels_4;
	// UnityEngine.GameObject MenuScript::panel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___panel_5;
	// Constellator MenuScript::constellator
	Constellator_t82C724B9CF998A32666692F452D15275AFCD8F96 * ___constellator_6;

public:
	inline static int32_t get_offset_of_levels_4() { return static_cast<int32_t>(offsetof(MenuScript_tE9F8D547CCE9063DE789709E04F071AC12279716, ___levels_4)); }
	inline SceneInfoU5BU5D_t4685AC7D7CBFA72AFF75C4E8CE1B1585C415CDC5* get_levels_4() const { return ___levels_4; }
	inline SceneInfoU5BU5D_t4685AC7D7CBFA72AFF75C4E8CE1B1585C415CDC5** get_address_of_levels_4() { return &___levels_4; }
	inline void set_levels_4(SceneInfoU5BU5D_t4685AC7D7CBFA72AFF75C4E8CE1B1585C415CDC5* value)
	{
		___levels_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___levels_4), (void*)value);
	}

	inline static int32_t get_offset_of_panel_5() { return static_cast<int32_t>(offsetof(MenuScript_tE9F8D547CCE9063DE789709E04F071AC12279716, ___panel_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_panel_5() const { return ___panel_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_panel_5() { return &___panel_5; }
	inline void set_panel_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___panel_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___panel_5), (void*)value);
	}

	inline static int32_t get_offset_of_constellator_6() { return static_cast<int32_t>(offsetof(MenuScript_tE9F8D547CCE9063DE789709E04F071AC12279716, ___constellator_6)); }
	inline Constellator_t82C724B9CF998A32666692F452D15275AFCD8F96 * get_constellator_6() const { return ___constellator_6; }
	inline Constellator_t82C724B9CF998A32666692F452D15275AFCD8F96 ** get_address_of_constellator_6() { return &___constellator_6; }
	inline void set_constellator_6(Constellator_t82C724B9CF998A32666692F452D15275AFCD8F96 * value)
	{
		___constellator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___constellator_6), (void*)value);
	}
};


// ResourcesManager
struct ResourcesManager_t29353D9703201AB5E65427A519648DD596A2BB17  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text ResourcesManager::movesText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___movesText_4;
	// UnityEngine.UI.Button ResourcesManager::addTriangles
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___addTriangles_5;
	// UnityEngine.RectTransform ResourcesManager::rect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___rect_6;
	// Constellator ResourcesManager::constellator
	Constellator_t82C724B9CF998A32666692F452D15275AFCD8F96 * ___constellator_7;
	// System.Int32 ResourcesManager::energy
	int32_t ___energy_8;
	// System.Int32 ResourcesManager::moves
	int32_t ___moves_9;
	// System.Boolean ResourcesManager::energyEnable
	bool ___energyEnable_10;

public:
	inline static int32_t get_offset_of_movesText_4() { return static_cast<int32_t>(offsetof(ResourcesManager_t29353D9703201AB5E65427A519648DD596A2BB17, ___movesText_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_movesText_4() const { return ___movesText_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_movesText_4() { return &___movesText_4; }
	inline void set_movesText_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___movesText_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___movesText_4), (void*)value);
	}

	inline static int32_t get_offset_of_addTriangles_5() { return static_cast<int32_t>(offsetof(ResourcesManager_t29353D9703201AB5E65427A519648DD596A2BB17, ___addTriangles_5)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_addTriangles_5() const { return ___addTriangles_5; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_addTriangles_5() { return &___addTriangles_5; }
	inline void set_addTriangles_5(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___addTriangles_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___addTriangles_5), (void*)value);
	}

	inline static int32_t get_offset_of_rect_6() { return static_cast<int32_t>(offsetof(ResourcesManager_t29353D9703201AB5E65427A519648DD596A2BB17, ___rect_6)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_rect_6() const { return ___rect_6; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_rect_6() { return &___rect_6; }
	inline void set_rect_6(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___rect_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rect_6), (void*)value);
	}

	inline static int32_t get_offset_of_constellator_7() { return static_cast<int32_t>(offsetof(ResourcesManager_t29353D9703201AB5E65427A519648DD596A2BB17, ___constellator_7)); }
	inline Constellator_t82C724B9CF998A32666692F452D15275AFCD8F96 * get_constellator_7() const { return ___constellator_7; }
	inline Constellator_t82C724B9CF998A32666692F452D15275AFCD8F96 ** get_address_of_constellator_7() { return &___constellator_7; }
	inline void set_constellator_7(Constellator_t82C724B9CF998A32666692F452D15275AFCD8F96 * value)
	{
		___constellator_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___constellator_7), (void*)value);
	}

	inline static int32_t get_offset_of_energy_8() { return static_cast<int32_t>(offsetof(ResourcesManager_t29353D9703201AB5E65427A519648DD596A2BB17, ___energy_8)); }
	inline int32_t get_energy_8() const { return ___energy_8; }
	inline int32_t* get_address_of_energy_8() { return &___energy_8; }
	inline void set_energy_8(int32_t value)
	{
		___energy_8 = value;
	}

	inline static int32_t get_offset_of_moves_9() { return static_cast<int32_t>(offsetof(ResourcesManager_t29353D9703201AB5E65427A519648DD596A2BB17, ___moves_9)); }
	inline int32_t get_moves_9() const { return ___moves_9; }
	inline int32_t* get_address_of_moves_9() { return &___moves_9; }
	inline void set_moves_9(int32_t value)
	{
		___moves_9 = value;
	}

	inline static int32_t get_offset_of_energyEnable_10() { return static_cast<int32_t>(offsetof(ResourcesManager_t29353D9703201AB5E65427A519648DD596A2BB17, ___energyEnable_10)); }
	inline bool get_energyEnable_10() const { return ___energyEnable_10; }
	inline bool* get_address_of_energyEnable_10() { return &___energyEnable_10; }
	inline void set_energyEnable_10(bool value)
	{
		___energyEnable_10 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// CircleScript
struct CircleScript_t14884BEC08D53B1829322C0C274492A9DB232251  : public Figure_tD3F2D6CD703435C5A34BDA0CFAEF315DC8ED30E1
{
public:
	// System.Int32 CircleScript::size
	int32_t ___size_4;
	// UnityEngine.RectTransform CircleScript::rect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___rect_5;

public:
	inline static int32_t get_offset_of_size_4() { return static_cast<int32_t>(offsetof(CircleScript_t14884BEC08D53B1829322C0C274492A9DB232251, ___size_4)); }
	inline int32_t get_size_4() const { return ___size_4; }
	inline int32_t* get_address_of_size_4() { return &___size_4; }
	inline void set_size_4(int32_t value)
	{
		___size_4 = value;
	}

	inline static int32_t get_offset_of_rect_5() { return static_cast<int32_t>(offsetof(CircleScript_t14884BEC08D53B1829322C0C274492A9DB232251, ___rect_5)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_rect_5() const { return ___rect_5; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_rect_5() { return &___rect_5; }
	inline void set_rect_5(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___rect_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rect_5), (void*)value);
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// SquareScript
struct SquareScript_t363231F809675EA1AD40871AA405406C46E2AEC7  : public Figure_tD3F2D6CD703435C5A34BDA0CFAEF315DC8ED30E1
{
public:
	// System.Int32 SquareScript::size
	int32_t ___size_4;
	// UnityEngine.RectTransform SquareScript::rect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___rect_5;

public:
	inline static int32_t get_offset_of_size_4() { return static_cast<int32_t>(offsetof(SquareScript_t363231F809675EA1AD40871AA405406C46E2AEC7, ___size_4)); }
	inline int32_t get_size_4() const { return ___size_4; }
	inline int32_t* get_address_of_size_4() { return &___size_4; }
	inline void set_size_4(int32_t value)
	{
		___size_4 = value;
	}

	inline static int32_t get_offset_of_rect_5() { return static_cast<int32_t>(offsetof(SquareScript_t363231F809675EA1AD40871AA405406C46E2AEC7, ___rect_5)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_rect_5() const { return ___rect_5; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_rect_5() { return &___rect_5; }
	inline void set_rect_5(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___rect_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rect_5), (void*)value);
	}
};


// TriangleScript
struct TriangleScript_t6E56FC30244CA8AE5461597546EA82FAD254B8A2  : public Figure_tD3F2D6CD703435C5A34BDA0CFAEF315DC8ED30E1
{
public:
	// System.Int32 TriangleScript::size
	int32_t ___size_4;
	// UnityEngine.RectTransform TriangleScript::rect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___rect_5;

public:
	inline static int32_t get_offset_of_size_4() { return static_cast<int32_t>(offsetof(TriangleScript_t6E56FC30244CA8AE5461597546EA82FAD254B8A2, ___size_4)); }
	inline int32_t get_size_4() const { return ___size_4; }
	inline int32_t* get_address_of_size_4() { return &___size_4; }
	inline void set_size_4(int32_t value)
	{
		___size_4 = value;
	}

	inline static int32_t get_offset_of_rect_5() { return static_cast<int32_t>(offsetof(TriangleScript_t6E56FC30244CA8AE5461597546EA82FAD254B8A2, ___rect_5)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_rect_5() const { return ___rect_5; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_rect_5() { return &___rect_5; }
	inline void set_rect_5(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___rect_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rect_5), (void*)value);
	}
};


// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * ___m_OnClick_20;

public:
	inline static int32_t get_offset_of_m_OnClick_20() { return static_cast<int32_t>(offsetof(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D, ___m_OnClick_20)); }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * get_m_OnClick_20() const { return ___m_OnClick_20; }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F ** get_address_of_m_OnClick_20() { return &___m_OnClick_20; }
	inline void set_m_OnClick_20(ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * value)
	{
		___m_OnClick_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnClick_20), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Figure[]
struct FigureU5BU5D_t73C3BEB2BE5540012E7FAFB8BAAFCF17331EE76E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Figure_tD3F2D6CD703435C5A34BDA0CFAEF315DC8ED30E1 * m_Items[1];

public:
	inline Figure_tD3F2D6CD703435C5A34BDA0CFAEF315DC8ED30E1 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Figure_tD3F2D6CD703435C5A34BDA0CFAEF315DC8ED30E1 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Figure_tD3F2D6CD703435C5A34BDA0CFAEF315DC8ED30E1 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Figure_tD3F2D6CD703435C5A34BDA0CFAEF315DC8ED30E1 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Figure_tD3F2D6CD703435C5A34BDA0CFAEF315DC8ED30E1 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Figure_tD3F2D6CD703435C5A34BDA0CFAEF315DC8ED30E1 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// SceneInfo[]
struct SceneInfoU5BU5D_t4685AC7D7CBFA72AFF75C4E8CE1B1585C415CDC5  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SceneInfo_tB4D0254BE2C5AB81D3EFA7E0D49A8A93F2DFB6EC * m_Items[1];

public:
	inline SceneInfo_tB4D0254BE2C5AB81D3EFA7E0D49A8A93F2DFB6EC * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SceneInfo_tB4D0254BE2C5AB81D3EFA7E0D49A8A93F2DFB6EC ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SceneInfo_tB4D0254BE2C5AB81D3EFA7E0D49A8A93F2DFB6EC * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SceneInfo_tB4D0254BE2C5AB81D3EFA7E0D49A8A93F2DFB6EC * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SceneInfo_tB4D0254BE2C5AB81D3EFA7E0D49A8A93F2DFB6EC ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SceneInfo_tB4D0254BE2C5AB81D3EFA7E0D49A8A93F2DFB6EC * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared (const RuntimeMethod* method);
// !!0[] UnityEngine.Object::FindObjectsOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Object_FindObjectsOfType_TisRuntimeObject_m0015B67D48097755F4D6B1D2614DA7ED5C899F18_gshared (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared (RuntimeObject * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);

// !!0 UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::set_sizeDelta(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_sizeDelta_m61943618442E31C6FF0556CDFC70940AE7AD04D0 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Int32 CircleScript::get_Size()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CircleScript_get_Size_m8E0F46A615DAF38FE08B716A7536964F34DC4554_inline (CircleScript_t14884BEC08D53B1829322C0C274492A9DB232251 * __this, const RuntimeMethod* method);
// System.Void Figure::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Figure__ctor_m906BFAA8DC4D2FCBA7A2467D8EF41D098F21D052 (Figure_tD3F2D6CD703435C5A34BDA0CFAEF315DC8ED30E1 * __this, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___p0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828 (const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Int32 ResourcesManager::get_Moves()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ResourcesManager_get_Moves_m905B3B50538E90D126B0305B099E2640A29A9177_inline (ResourcesManager_t29353D9703201AB5E65427A519648DD596A2BB17 * __this, const RuntimeMethod* method);
// System.Void ResourcesManager::set_Moves(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourcesManager_set_Moves_mA07CDDCB3B4B3F6B399AEA0C35EA967D096E70B7 (ResourcesManager_t29353D9703201AB5E65427A519648DD596A2BB17 * __this, int32_t ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<FigureManager>()
inline FigureManager_t53A105ED7BAD09C625B1A14DC7CE83FBE73541CA * Component_GetComponent_TisFigureManager_t53A105ED7BAD09C625B1A14DC7CE83FBE73541CA_mAADB189352F711389D6CD489C104D33DECF0CF80 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  FigureManager_t53A105ED7BAD09C625B1A14DC7CE83FBE73541CA * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<CircleScript>()
inline CircleScript_t14884BEC08D53B1829322C0C274492A9DB232251 * Object_FindObjectOfType_TisCircleScript_t14884BEC08D53B1829322C0C274492A9DB232251_mDC6BBC73263AD691BCF1A70B5E9BA5F3C2440F94 (const RuntimeMethod* method)
{
	return ((  CircleScript_t14884BEC08D53B1829322C0C274492A9DB232251 * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared)(method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Int32 ResourcesManager::get_Energy()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ResourcesManager_get_Energy_mF1915006A4092C0883C05A9345FDD091819FF67E_inline (ResourcesManager_t29353D9703201AB5E65427A519648DD596A2BB17 * __this, const RuntimeMethod* method);
// System.Void ResourcesManager::set_Energy(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourcesManager_set_Energy_mB66C2DF056B2062DC13E17F249FDE0181FE0CF03 (ResourcesManager_t29353D9703201AB5E65427A519648DD596A2BB17 * __this, int32_t ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<SquareScript>()
inline SquareScript_t363231F809675EA1AD40871AA405406C46E2AEC7 * Component_GetComponent_TisSquareScript_t363231F809675EA1AD40871AA405406C46E2AEC7_m3EADB896A6B9001771CF0BAA8D2EDED68ACBEF24 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  SquareScript_t363231F809675EA1AD40871AA405406C46E2AEC7 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void ConnectionScript::ReleaseFigures()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionScript_ReleaseFigures_m94519D4AED21708B02751DCE99F04D45C2968A9D (ConnectionScript_tADDEC2FCD1578C6E0104429872BA7D6049AE3055 * __this, const RuntimeMethod* method);
// System.Void ConnectionScript::set_firstObject(Figure)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConnectionScript_set_firstObject_mB134803D499B8D8C817EC0BB8C1695FD85FD7F26_inline (ConnectionScript_tADDEC2FCD1578C6E0104429872BA7D6049AE3055 * __this, Figure_tD3F2D6CD703435C5A34BDA0CFAEF315DC8ED30E1 * ___value0, const RuntimeMethod* method);
// System.Void ConnectionScript::set_secondObject(Figure)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConnectionScript_set_secondObject_m40036D9FA970F378B09476830B535FBC0CCD8339_inline (ConnectionScript_tADDEC2FCD1578C6E0104429872BA7D6049AE3055 * __this, Figure_tD3F2D6CD703435C5A34BDA0CFAEF315DC8ED30E1 * ___value0, const RuntimeMethod* method);
// System.Void ConnectionScript::ConnectObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionScript_ConnectObjects_m53A28E5ADB5FB070012931B70438DCA9B8824582 (ConnectionScript_tADDEC2FCD1578C6E0104429872BA7D6049AE3055 * __this, const RuntimeMethod* method);
// System.Void ConnectionScript/OnReleaseDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnReleaseDelegate_Invoke_mA6B4ED60FCF7C6004E5CC058087D79948EA03C0A (OnReleaseDelegate_tF10A7DE9C6B5540DC48F6BEF5131FCE808B0A9F2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void Constellator::ArrangeObjects(SceneInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Constellator_ArrangeObjects_m228D7F1B0EE81ECBA86446600F815A8C59C31524 (Constellator_t82C724B9CF998A32666692F452D15275AFCD8F96 * __this, SceneInfo_tB4D0254BE2C5AB81D3EFA7E0D49A8A93F2DFB6EC * ___level0, const RuntimeMethod* method);
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___call0, const RuntimeMethod* method);
// System.Void Constellator::ClearLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Constellator_ClearLevel_mA1676BC4E7126C04F3900964489DAB643A770F5D (Constellator_t82C724B9CF998A32666692F452D15275AFCD8F96 * __this, const RuntimeMethod* method);
// System.Int32 SceneInfo::get_CountCircles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SceneInfo_get_CountCircles_m66360D1B1A81C690D80326E5E79628839E8EF2B7_inline (SceneInfo_tB4D0254BE2C5AB81D3EFA7E0D49A8A93F2DFB6EC * __this, const RuntimeMethod* method);
// System.Void Constellator::Create(UnityEngine.GameObject,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Constellator_Create_m97A01E40A40EC66045407C1746E793899BD6ADFD (Constellator_t82C724B9CF998A32666692F452D15275AFCD8F96 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___prefab0, int32_t ___count1, const RuntimeMethod* method);
// System.Int32 SceneInfo::get_CountSquares()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SceneInfo_get_CountSquares_mD7ECCF632069BC495044C6C00EB9C6489A65A31E_inline (SceneInfo_tB4D0254BE2C5AB81D3EFA7E0D49A8A93F2DFB6EC * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Object::FindObjectsOfType<Figure>()
inline FigureU5BU5D_t73C3BEB2BE5540012E7FAFB8BAAFCF17331EE76E* Object_FindObjectsOfType_TisFigure_tD3F2D6CD703435C5A34BDA0CFAEF315DC8ED30E1_m80FCCF932B2747F4E4F0AB7690005C8B0B30F086 (const RuntimeMethod* method)
{
	return ((  FigureU5BU5D_t73C3BEB2BE5540012E7FAFB8BAAFCF17331EE76E* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m0015B67D48097755F4D6B1D2614DA7ED5C899F18_gshared)(method);
}
// System.Int32 SceneInfo::get_CountTriangles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SceneInfo_get_CountTriangles_mAF603CD65C7C05096A83922506FF117691E870F6_inline (SceneInfo_tB4D0254BE2C5AB81D3EFA7E0D49A8A93F2DFB6EC * __this, const RuntimeMethod* method);
// System.Void Constellator::SetRandomCirclesSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Constellator_SetRandomCirclesSize_mB95E020A20DBFD11F41C6EC148DACA1B848459FB (Constellator_t82C724B9CF998A32666692F452D15275AFCD8F96 * __this, const RuntimeMethod* method);
// System.Void Constellator::SmartReSize(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Constellator_SmartReSize_m2C4F9A361DBFF681A8E4DB500048EAC1C96977C8 (Constellator_t82C724B9CF998A32666692F452D15275AFCD8F96 * __this, bool ___trianglesEnable0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Transform)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared)(___original0, ___parent1, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<ConnectionScript>()
inline ConnectionScript_tADDEC2FCD1578C6E0104429872BA7D6049AE3055 * Component_GetComponent_TisConnectionScript_tADDEC2FCD1578C6E0104429872BA7D6049AE3055_mBA938D8D6DAE0406BA0770F6D74088286DE8FFF7 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  ConnectionScript_tADDEC2FCD1578C6E0104429872BA7D6049AE3055 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Color32 UnityEngine.Color32::op_Implicit(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  Color32_op_Implicit_mD17E8145D2D32EF369EFE349C4D32E839F7D7AA4 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___c0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color32::op_Implicit(UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color32_op_Implicit_m63F14F1A14B1A9A3EE4D154413EE229D3E001623 (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___c0, const RuntimeMethod* method);
// System.Void FigureManager::SetTransparent(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FigureManager_SetTransparent_m955D5996A3B4555E2E72D2E00D94328149802570 (FigureManager_t53A105ED7BAD09C625B1A14DC7CE83FBE73541CA * __this, uint8_t ___alpha0, const RuntimeMethod* method);
// System.Void ConnectionScript/OnReleaseDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnReleaseDelegate__ctor_mEA271C624586E9705CC24DEC208284BB882D94C8 (OnReleaseDelegate_tF10A7DE9C6B5540DC48F6BEF5131FCE808B0A9F2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void ConnectionScript::add_OnRelease(ConnectionScript/OnReleaseDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionScript_add_OnRelease_mD2661EA34875D44CB166F10EEA67211961F3D5ED (ConnectionScript_tADDEC2FCD1578C6E0104429872BA7D6049AE3055 * __this, OnReleaseDelegate_tF10A7DE9C6B5540DC48F6BEF5131FCE808B0A9F2 * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Figure>()
inline Figure_tD3F2D6CD703435C5A34BDA0CFAEF315DC8ED30E1 * GameObject_GetComponent_TisFigure_tD3F2D6CD703435C5A34BDA0CFAEF315DC8ED30E1_m09CF237F141696E5A492DE267ADDCF14FDD5DDF8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Figure_tD3F2D6CD703435C5A34BDA0CFAEF315DC8ED30E1 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void ConnectionScript::CommitObject(Figure)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionScript_CommitObject_mCFAFBD7549EE0C8A76814F90FE61F0B86A145F7D (ConnectionScript_tADDEC2FCD1578C6E0104429872BA7D6049AE3055 * __this, Figure_tD3F2D6CD703435C5A34BDA0CFAEF315DC8ED30E1 * ___figure0, const RuntimeMethod* method);
// System.Void ConnectionScript::remove_OnRelease(ConnectionScript/OnReleaseDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionScript_remove_OnRelease_m17315013E444367AE12C84AF0A2375FC1A821280 (ConnectionScript_tADDEC2FCD1578C6E0104429872BA7D6049AE3055 * __this, OnReleaseDelegate_tF10A7DE9C6B5540DC48F6BEF5131FCE808B0A9F2 * ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_mA3990AC5F61BB35283188E925C2BE7F7BF67734B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void ResourcesManager::ChangeText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourcesManager_ChangeText_m80BD222E97FA0A44985C79CF50ED5194AED869F5 (ResourcesManager_t29353D9703201AB5E65427A519648DD596A2BB17 * __this, const RuntimeMethod* method);
// System.Void ResourcesManager::SetSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourcesManager_SetSize_m7E1C37A438EE2ADFB3F22E726267CBA1723EE21D (ResourcesManager_t29353D9703201AB5E65427A519648DD596A2BB17 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchoredPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  RectTransform_get_anchoredPosition_mFDC4F160F99634B2FBC73FE5FB1F4F4127CDD975 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, const RuntimeMethod* method);
// UnityEngine.RectTransform UnityEngine.UI.Graphic::get_rectTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * Graphic_get_rectTransform_m87D5A808474C6B71649CBB153DEBF5F268189EFF (Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.RectTransform::get_sizeDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  RectTransform_get_sizeDelta_mCFAE8C916280C173AB79BE32B910376E310D1C50 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063 (ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * __this, const RuntimeMethod* method);
// System.Int32 SquareScript::get_Size()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SquareScript_get_Size_m960C51137FE85FC63FEFB7CC533A47D322B6BCCB_inline (SquareScript_t363231F809675EA1AD40871AA405406C46E2AEC7 * __this, const RuntimeMethod* method);
// System.Int32 TriangleScript::get_Size()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TriangleScript_get_Size_m19FB2C7BA40585E977A8ED40F3983D47269DE244_inline (TriangleScript_t6E56FC30244CA8AE5461597546EA82FAD254B8A2 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 CircleScript::get_Size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CircleScript_get_Size_m8E0F46A615DAF38FE08B716A7536964F34DC4554 (CircleScript_t14884BEC08D53B1829322C0C274492A9DB232251 * __this, const RuntimeMethod* method)
{
	{
		// public int Size => size;
		int32_t L_0 = __this->get_size_4();
		return L_0;
	}
}
// System.Void CircleScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircleScript_Start_mA36C57CBDA08C4A546325E640F4AC675F6D06515 (CircleScript_t14884BEC08D53B1829322C0C274492A9DB232251 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rect = GetComponent<RectTransform>();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0;
		L_0 = Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79(__this, /*hidden argument*/Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		__this->set_rect_5(L_0);
		// ChangeSize(size);
		int32_t L_1 = __this->get_size_4();
		VirtActionInvoker1< int32_t >::Invoke(6 /* System.Void Figure::ChangeSize(System.Int32) */, __this, L_1);
		// }
		return;
	}
}
// System.Void CircleScript::ChangeSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircleScript_ChangeSize_mA7E03AA705BD4E1DAB7F7F65803B4EBCF2FC8DF8 (CircleScript_t14884BEC08D53B1829322C0C274492A9DB232251 * __this, int32_t ___size0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.size = size;
		int32_t L_0 = ___size0;
		__this->set_size_4(L_0);
		// if (rect == null)
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_1 = __this->get_rect_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// rect = GetComponent<RectTransform>();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_3;
		L_3 = Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79(__this, /*hidden argument*/Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		__this->set_rect_5(L_3);
	}

IL_0021:
	{
		// rect.sizeDelta = new Vector2(size * 100, size * 100);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_4 = __this->get_rect_5();
		int32_t L_5 = ___size0;
		int32_t L_6 = ___size0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_7), ((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)L_5, (int32_t)((int32_t)100))))), ((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)L_6, (int32_t)((int32_t)100))))), /*hidden argument*/NULL);
		NullCheck(L_4);
		RectTransform_set_sizeDelta_m61943618442E31C6FF0556CDFC70940AE7AD04D0(L_4, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 CircleScript::GetSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CircleScript_GetSize_m72E92740450EBBA71A4FF0D74C8553333D363BA3 (CircleScript_t14884BEC08D53B1829322C0C274492A9DB232251 * __this, const RuntimeMethod* method)
{
	{
		// public override int GetSize() => Size;
		int32_t L_0;
		L_0 = CircleScript_get_Size_m8E0F46A615DAF38FE08B716A7536964F34DC4554_inline(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String CircleScript::GetFigureType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CircleScript_GetFigureType_m17E4BCC1ED93CEAF03481271D694A0375DD4C0EF (CircleScript_t14884BEC08D53B1829322C0C274492A9DB232251 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral163645A82FC30F1504D822E5D958F72D799EBFF7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override string GetFigureType() => "circle";
		return _stringLiteral163645A82FC30F1504D822E5D958F72D799EBFF7;
	}
}
// System.Void CircleScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircleScript__ctor_m786A6A472B496D4DA033C3A8D24A56899718E9AE (CircleScript_t14884BEC08D53B1829322C0C274492A9DB232251 * __this, const RuntimeMethod* method)
{
	{
		// int size = 2;
		__this->set_size_4(2);
		Figure__ctor_m906BFAA8DC4D2FCBA7A2467D8EF41D098F21D052(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Figure ConnectionScript::get_firstObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Figure_tD3F2D6CD703435C5A34BDA0CFAEF315DC8ED30E1 * ConnectionScript_get_firstObject_mA500A45D785553CF84ED9DD911923272DC1BDBF3 (ConnectionScript_tADDEC2FCD1578C6E0104429872BA7D6049AE3055 * __this, const RuntimeMethod* method)
{
	{
		// public Figure firstObject { get => firstFigure; set => firstFigure = value; }
		Figure_tD3F2D6CD703435C5A34BDA0CFAEF315DC8ED30E1 * L_0 = __this->get_firstFigure_4();
		return L_0;
	}
}
// System.Void ConnectionScript::set_firstObject(Figure)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionScript_set_firstObject_mB134803D499B8D8C817EC0BB8C1695FD85FD7F26 (ConnectionScript_tADDEC2FCD1578C6E0104429872BA7D6049AE3055 * __this, Figure_tD3F2D6CD703435C5A34BDA0CFAEF315DC8ED30E1 * ___value0, const RuntimeMethod* method)
{
	{
		// public Figure firstObject { get => firstFigure; set => firstFigure = value; }
		Figure_tD3F2D6CD703435C5A34BDA0CFAEF315DC8ED30E1 * L_0 = ___value0;
		__this->set_firstFigure_4(L_0);
		return;
	}
}
// Figure ConnectionScript::get_secondObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Figure_tD3F2D6CD703435C5A34BDA0CFAEF315DC8ED30E1 * ConnectionScript_get_secondObject_m44A337DE776114306BBC84B651A0D92E1C82F647 (ConnectionScript_tADDEC2FCD1578C6E0104429872BA7D6049AE3055 * __this, const RuntimeMethod* method)
{
	{
		// public Figure secondObject { get => secondFigure; set { secondFigure = value; } }
		Figure_tD3F2D6CD703435C5A34BDA0CFAEF315DC8ED30E1 * L_0 = __this->get_secondFigure_5();
		return L_0;
	}
}
// System.Void ConnectionScript::set_secondObject(Figure)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionScript_set_secondObject_m40036D9FA970F378B09476830B535FBC0CCD8339 (ConnectionScript_tADDEC2FCD1578C6E0104429872BA7D6049AE3055 * __this, Figure_tD3F2D6CD703435C5A34BDA0CFAEF315DC8ED30E1 * ___value0, const RuntimeMethod* method)
{
	{
		// public Figure secondObject { get => secondFigure; set { secondFigure = value; } }
		Figure_tD3F2D6CD703435C5A34BDA0CFAEF315DC8ED30E1 * L_0 = ___value0;
		__this->set_secondFigure_5(L_0);
		// public Figure secondObject { get => secondFigure; set { secondFigure = value; } }
		return;
	}
}
// System.Void ConnectionScript::add_OnRelease(ConnectionScript/OnReleaseDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionScript_add_OnRelease_mD2661EA34875D44CB166F10EEA67211961F3D5ED (ConnectionScript_tADDEC2FCD1578C6E0104429872BA7D6049AE3055 * __this, OnReleaseDelegate_tF10A7DE9C6B5540DC48F6BEF5131FCE808B0A9F2 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnReleaseDelegate_tF10A7DE9C6B5540DC48F6BEF5131FCE808B0A9F2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnReleaseDelegate_tF10A7DE9C6B5540DC48F6BEF5131FCE808B0A9F2 * V_0 = NULL;
	OnReleaseDelegate_tF10A7DE9C6B5540DC48F6BEF5131FCE808B0A9F2 * V_1 = NULL;
	OnReleaseDelegate_tF10A7DE9C6B5540DC48F6BEF5131FCE808B0A9F2 * V_2 = NULL;
	{
		OnReleaseDelegate_tF10A7DE9C6B5540DC48F6BEF5131FCE808B0A9F2 * L_0 = __this->get_OnRelease_6();
		V_0 = L_0;
	}

IL_0007:
	{
		OnReleaseDelegate_tF10A7DE9C6B5540DC48F6BEF5131FCE808B0A9F2 * L_1 = V_0;
		V_1 = L_1;
		OnReleaseDelegate_tF10A7DE9C6B5540DC48F6BEF5131FCE808B0A9F2 * L_2 = V_1;
		OnReleaseDelegate_tF10A7DE9C6B5540DC48F6BEF5131FCE808B0A9F2 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((OnReleaseDelegate_tF10A7DE9C6B5540DC48F6BEF5131FCE808B0A9F2 *)CastclassSealed((RuntimeObject*)L_4, OnReleaseDelegate_tF10A7DE9C6B5540DC48F6BEF5131FCE808B0A9F2_il2cpp_TypeInfo_var));
		OnReleaseDelegate_tF10A7DE9C6B5540DC48F6BEF5131FCE808B0A9F2 ** L_5 = __this->get_address_of_OnRelease_6();
		OnReleaseDelegate_tF10A7DE9C6B5540DC48F6BEF5131FCE808B0A9F2 * L_6 = V_2;
		OnReleaseDelegate_tF10A7DE9C6B5540DC48F6BEF5131FCE808B0A9F2 * L_7 = V_1;
		OnReleaseDelegate_tF10A7DE9C6B5540DC48F6BEF5131FCE808B0A9F2 * L_8;
		L_8 = InterlockedCompareExchangeImpl<OnReleaseDelegate_tF10A7DE9C6B5540DC48F6BEF5131FCE808B0A9F2 *>((OnReleaseDelegate_tF10A7DE9C6B5540DC48F6BEF5131FCE808B0A9F2 **)L_5, L_6, L_7);
		V_0 = L_8;
		OnReleaseDelegate_tF10A7DE9C6B5540DC48F6BEF5131FCE808B0A9F2 * L_9 = V_0;
		OnReleaseDelegate_tF10A7DE9C6B5540DC48F6BEF5131FCE808B0A9F2 * L_10 = V_1;
		if ((!(((RuntimeObject*)(OnReleaseDelegate_tF10A7DE9C6B5540DC48F6BEF5131FCE808B0A9F2 *)L_9) == ((RuntimeObject*)(OnReleaseDelegate_tF10A7DE9C6B5540DC48F6BEF5131FCE808B0A9F2 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void ConnectionScript::remove_OnRelease(ConnectionScript/OnReleaseDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionScript_remove_OnRelease_m17315013E444367AE12C84AF0A2375FC1A821280 (ConnectionScript_tADDEC2FCD1578C6E0104429872BA7D6049AE3055 * __this, OnReleaseDelegate_tF10A7DE9C6B5540DC48F6BEF5131FCE808B0A9F2 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnReleaseDelegate_tF10A7DE9C6B5540DC48F6BEF5131FCE808B0A9F2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnReleaseDelegate_tF10A7DE9C6B5540DC48F6BEF5131FCE808B0A9F2 * V_0 = NULL;
	OnReleaseDelegate_tF10A7DE9C6B5540DC48F6BEF5131FCE808B0A9F2 * V_1 = NULL;
	OnReleaseDelegate_tF10A7DE9C6B5540DC48F6BEF5131FCE808B0A9F2 * V_2 = NULL;
	{
		OnReleaseDelegate_tF10A7DE9C6B5540DC48F6BEF5131FCE808B0A9F2 * L_0 = __this->get_OnRelease_6();
		V_0 = L_0;
	}

IL_0007:
	{
		OnReleaseDelegate_tF10A7DE9C6B5540DC48F6BEF5131FCE808B0A9F2 * L_1 = V_0;
		V_1 = L_1;
		OnReleaseDelegate_tF10A7DE9C6B5540DC48F6BEF5131FCE808B0A9F2 * L_2 = V_1;
		OnReleaseDelegate_tF10A7DE9C6B5540DC48F6BEF5131FCE808B0A9F2 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((OnReleaseDelegate_tF10A7DE9C6B5540DC48F6BEF5131FCE808B0A9F2 *)CastclassSealed((RuntimeObject*)L_4, OnReleaseDelegate_tF10A7DE9C6B5540DC48F6BEF5131FCE808B0A9F2_il2cpp_TypeInfo_var));
		OnReleaseDelegate_tF10A7DE9C6B5540DC48F6BEF5131FCE808B0A9F2 ** L_5 = __this->get_address_of_OnRelease_6();
		OnReleaseDelegate_tF10A7DE9C6B5540DC48F6BEF5131FCE808B0A9F2 * L_6 = V_2;
		OnReleaseDelegate_tF10A7DE9C6B5540DC48F6BEF5131FCE808B0A9F2 * L_7 = V_1;
		OnReleaseDelegate_tF10A7DE9C6B5540DC48F6BEF5131FCE808B0A9F2 * L_8;
		L_8 = InterlockedCompareExchangeImpl<OnReleaseDelegate_tF10A7DE9C6B5540DC48F6BEF5131FCE808B0A9F2 *>((OnReleaseDelegate_tF10A7DE9C6B5540DC48F6BEF5131FCE808B0A9F2 **)L_5, L_6, L_7);
		V_0 = L_8;
		OnReleaseDelegate_tF10A7DE9C6B5540DC48F6BEF5131FCE808B0A9F2 * L_9 = V_0;
		OnReleaseDelegate_tF10A7DE9C6B5540DC48F6BEF5131FCE808B0A9F2 * L_10 = V_1;
		if ((!(((RuntimeObject*)(OnReleaseDelegate_tF10A7DE9C6B5540DC48F6BEF5131FCE808B0A9F2 *)L_9) == ((RuntimeObject*)(OnReleaseDelegate_tF10A7DE9C6B5540DC48F6BEF5131FCE808B0A9F2 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void ConnectionScript::ConnectObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionScript_ConnectObjects_m53A28E5ADB5FB070012931B70438DCA9B8824582 (ConnectionScript_tADDEC2FCD1578C6E0104429872BA7D6049AE3055 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisFigureManager_t53A105ED7BAD09C625B1A14DC7CE83FBE73541CA_mAADB189352F711389D6CD489C104D33DECF0CF80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSquareScript_t363231F809675EA1AD40871AA405406C46E2AEC7_m3EADB896A6B9001771CF0BAA8D2EDED68ACBEF24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisCircleScript_t14884BEC08D53B1829322C0C274492A9DB232251_mDC6BBC73263AD691BCF1A70B5E9BA5F3C2440F94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral163645A82FC30F1504D822E5D958F72D799EBFF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE007B17B06CB84F1B41E40F63F887BC77704FA27);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8D604EA97ACA8EB403D281FB23304D3B2338E81);
		s_Il2CppMethodInitialized = true;
	}
	CircleScript_t14884BEC08D53B1829322C0C274492A9DB232251 * V_0 = NULL;
	{
		// if (firstFigure.GetFigureType() == "square" && secondFigure.GetFigureType() == "circle")
		Figure_tD3F2D6CD703435C5A34BDA0CFAEF315DC8ED30E1 * L_0 = __this->get_firstFigure_4();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String Figure::GetFigureType() */, L_0);
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, _stringLiteralE8D604EA97ACA8EB403D281FB23304D3B2338E81, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_00ac;
		}
	}
	{
		Figure_tD3F2D6CD703435C5A34BDA0CFAEF315DC8ED30E1 * L_3 = __this->get_secondFigure_5();
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String Figure::GetFigureType() */, L_3);
		bool L_5;
		L_5 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_4, _stringLiteral163645A82FC30F1504D822E5D958F72D799EBFF7, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_00ac;
		}
	}
	{
		// if (firstFigure.GetSize() <= secondFigure.GetSize())
		Figure_tD3F2D6CD703435C5A34BDA0CFAEF315DC8ED30E1 * L_6 = __this->get_firstFigure_4();
		NullCheck(L_6);
		int32_t L_7;
		L_7 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 Figure::GetSize() */, L_6);
		Figure_tD3F2D6CD703435C5A34BDA0CFAEF315DC8ED30E1 * L_8 = __this->get_secondFigure_5();
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 Figure::GetSize() */, L_8);
		if ((((int32_t)L_7) > ((int32_t)L_9)))
		{
			goto IL_00ac;
		}
	}
	{
		// firstFigure.transform.SetParent(secondFigure.transform);
		Figure_tD3F2D6CD703435C5A34BDA0CFAEF315DC8ED30E1 * L_10 = __this->get_firstFigure_4();
		NullCheck(L_10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_10, /*hidden argument*/NULL);
		Figure_tD3F2D6CD703435C5A34BDA0CFAEF315DC8ED30E1 * L_12 = __this->get_secondFigure_5();
		NullCheck(L_12);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E(L_11, L_13, /*hidden argument*/NULL);
		// firstFigure.GetComponent<RectTransform>().anchoredPosition = Vector2.zero;
		Figure_tD3F2D6CD703435C5A34BDA0CFAEF315DC8ED30E1 * L_14 = __this->get_firstFigure_4();
		NullCheck(L_14);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_15;
		L_15 = Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79(L_14, /*hidden argument*/Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_16;
		L_16 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		NullCheck(L_15);
		RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905(L_15, L_16, /*hidden argument*/NULL);
		// resources.Moves += 1;
		ResourcesManager_t29353D9703201AB5E65427A519648DD596A2BB17 * L_17 = __this->get_resources_7();
		ResourcesManager_t29353D9703201AB5E65427A519648DD596A2BB17 * L_18 = L_17;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = ResourcesManager_get_Moves_m905B3B50538E90D126B0305B099E2640A29A9177_inline(L_18, /*hidden argument*/NULL);
		NullCheck(L_18);
		ResourcesManager_set_Moves_mA07CDDCB3B4B3F6B399AEA0C35EA967D096E70B7(L_18, ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1)), /*hidden argument*/NULL);
		// Destroy(firstFigure.GetComponent<FigureManager>());
		Figure_tD3F2D6CD703435C5A34BDA0CFAEF315DC8ED30E1 * L_20 = __this->get_firstFigure_4();
		NullCheck(L_20);
		FigureManager_t53A105ED7BAD09C625B1A14DC7CE83FBE73541CA * L_21;
		L_21 = Component_GetComponent_TisFigureManager_t53A105ED7BAD09C625B1A14DC7CE83FBE73541CA_mAADB189352F711389D6CD489C104D33DECF0CF80(L_20, /*hidden argument*/Component_GetComponent_TisFigureManager_t53A105ED7BAD09C625B1A14DC7CE83FBE73541CA_mAADB189352F711389D6CD489C104D33DECF0CF80_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_21, /*hidden argument*/NULL);
		// Destroy(secondFigure.GetComponent<FigureManager>());
		Figure_tD3F2D6CD703435C5A34BDA0CFAEF315DC8ED30E1 * L_22 = __this->get_secondFigure_5();
		NullCheck(L_22);
		FigureManager_t53A105ED7BAD09C625B1A14DC7CE83FBE73541CA * L_23;
		L_23 = Component_GetComponent_TisFigureManager_t53A105ED7BAD09C625B1A14DC7CE83FBE73541CA_mAADB189352F711389D6CD489C104D33DECF0CF80(L_22, /*hidden argument*/Component_GetComponent_TisFigureManager_t53A105ED7BAD09C625B1A14DC7CE83FBE73541CA_mAADB189352F711389D6CD489C104D33DECF0CF80_RuntimeMethod_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_23, /*hidden argument*/NULL);
	}

IL_00ac:
	{
		// if (firstFigure.GetFigureType() == "triangle" && secondFigure.GetFigureType() == "square")
		Figure_tD3F2D6CD703435C5A34BDA0CFAEF315DC8ED30E1 * L_24 = __this->get_firstFigure_4();
		NullCheck(L_24);
		String_t* L_25;
		L_25 = VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String Figure::GetFigureType() */, L_24);
		bool L_26;
		L_26 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_25, _stringLiteralE007B17B06CB84F1B41E40F63F887BC77704FA27, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_0122;
		}
	}
	{
		Figure_tD3F2D6CD703435C5A34BDA0CFAEF315DC8ED30E1 * L_27 = __this->get_secondFigure_5();
		NullCheck(L_27);
		String_t* L_28;
		L_28 = VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String Figure::GetFigureType() */, L_27);
		bool L_29;
		L_29 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_28, _stringLiteralE8D604EA97ACA8EB403D281FB23304D3B2338E81, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_0122;
		}
	}
	{
		// CircleScript circle = FindObjectOfType<CircleScript>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		CircleScript_t14884BEC08D53B1829322C0C274492A9DB232251 * L_30;
		L_30 = Object_FindObjectOfType_TisCircleScript_t14884BEC08D53B1829322C0C274492A9DB232251_mDC6BBC73263AD691BCF1A70B5E9BA5F3C2440F94(/*hidden argument*/Object_FindObjectOfType_TisCircleScript_t14884BEC08D53B1829322C0C274492A9DB232251_mDC6BBC73263AD691BCF1A70B5E9BA5F3C2440F94_RuntimeMethod_var);
		V_0 = L_30;
		// if (circle != null)
		CircleScript_t14884BEC08D53B1829322C0C274492A9DB232251 * L_31 = V_0;
		bool L_32;
		L_32 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_31, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_0122;
		}
	}
	{
		// resources.Energy -= 1;
		ResourcesManager_t29353D9703201AB5E65427A519648DD596A2BB17 * L_33 = __this->get_resources_7();
		ResourcesManager_t29353D9703201AB5E65427A519648DD596A2BB17 * L_34 = L_33;
		NullCheck(L_34);
		int32_t L_35;
		L_35 = ResourcesManager_get_Energy_mF1915006A4092C0883C05A9345FDD091819FF67E_inline(L_34, /*hidden argument*/NULL);
		NullCheck(L_34);
		ResourcesManager_set_Energy_mB66C2DF056B2062DC13E17F249FDE0181FE0CF03(L_34, ((int32_t)il2cpp_codegen_subtract((int32_t)L_35, (int32_t)1)), /*hidden argument*/NULL);
		// secondFigure.GetComponent<SquareScript>().ChangeSize(circle.GetSize());
		Figure_tD3F2D6CD703435C5A34BDA0CFAEF315DC8ED30E1 * L_36 = __this->get_secondFigure_5();
		NullCheck(L_36);
		SquareScript_t363231F809675EA1AD40871AA405406C46E2AEC7 * L_37;
		L_37 = Component_GetComponent_TisSquareScript_t363231F809675EA1AD40871AA405406C46E2AEC7_m3EADB896A6B9001771CF0BAA8D2EDED68ACBEF24(L_36, /*hidden argument*/Component_GetComponent_TisSquareScript_t363231F809675EA1AD40871AA405406C46E2AEC7_m3EADB896A6B9001771CF0BAA8D2EDED68ACBEF24_RuntimeMethod_var);
		CircleScript_t14884BEC08D53B1829322C0C274492A9DB232251 * L_38 = V_0;
		NullCheck(L_38);
		int32_t L_39;
		L_39 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 Figure::GetSize() */, L_38);
		NullCheck(L_37);
		VirtActionInvoker1< int32_t >::Invoke(6 /* System.Void Figure::ChangeSize(System.Int32) */, L_37, L_39);
		// Destroy(firstFigure.gameObject);
		Figure_tD3F2D6CD703435C5A34BDA0CFAEF315DC8ED30E1 * L_40 = __this->get_firstFigure_4();
		NullCheck(L_40);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_41;
		L_41 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_40, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_41, /*hidden argument*/NULL);
	}

IL_0122:
	{
		// ReleaseFigures();
		ConnectionScript_ReleaseFigures_m94519D4AED21708B02751DCE99F04D45C2968A9D(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ConnectionScript::CommitObject(Figure)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionScript_CommitObject_mCFAFBD7549EE0C8A76814F90FE61F0B86A145F7D (ConnectionScript_tADDEC2FCD1578C6E0104429872BA7D6049AE3055 * __this, Figure_tD3F2D6CD703435C5A34BDA0CFAEF315DC8ED30E1 * ___figure0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (firstFigure == null)
		Figure_tD3F2D6CD703435C5A34BDA0CFAEF315DC8ED30E1 * L_0 = __this->get_firstFigure_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// firstObject = figure;
		Figure_tD3F2D6CD703435C5A34BDA0CFAEF315DC8ED30E1 * L_2 = ___figure0;
		ConnectionScript_set_firstObject_mB134803D499B8D8C817EC0BB8C1695FD85FD7F26_inline(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0016:
	{
		// if (figure == firstFigure)
		Figure_tD3F2D6CD703435C5A34BDA0CFAEF315DC8ED30E1 * L_3 = ___figure0;
		Figure_tD3F2D6CD703435C5A34BDA0CFAEF315DC8ED30E1 * L_4 = __this->get_firstFigure_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002b;
		}
	}
	{
		// ReleaseFigures();
		ConnectionScript_ReleaseFigures_m94519D4AED21708B02751DCE99F04D45C2968A9D(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_002b:
	{
		// secondObject = figure;
		Figure_tD3F2D6CD703435C5A34BDA0CFAEF315DC8ED30E1 * L_6 = ___figure0;
		ConnectionScript_set_secondObject_m40036D9FA970F378B09476830B535FBC0CCD8339_inline(__this, L_6, /*hidden argument*/NULL);
		// ConnectObjects();
		ConnectionScript_ConnectObjects_m53A28E5ADB5FB070012931B70438DCA9B8824582(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ConnectionScript::ReleaseFigures()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionScript_ReleaseFigures_m94519D4AED21708B02751DCE99F04D45C2968A9D (ConnectionScript_tADDEC2FCD1578C6E0104429872BA7D6049AE3055 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OnRelease.Invoke();
		OnReleaseDelegate_tF10A7DE9C6B5540DC48F6BEF5131FCE808B0A9F2 * L_0 = __this->get_OnRelease_6();
		NullCheck(L_0);
		OnReleaseDelegate_Invoke_mA6B4ED60FCF7C6004E5CC058087D79948EA03C0A(L_0, /*hidden argument*/NULL);
		// firstObject = null;
		ConnectionScript_set_firstObject_mB134803D499B8D8C817EC0BB8C1695FD85FD7F26_inline(__this, (Figure_tD3F2D6CD703435C5A34BDA0CFAEF315DC8ED30E1 *)NULL, /*hidden argument*/NULL);
		// if (secondFigure != null) secondObject = null;
		Figure_tD3F2D6CD703435C5A34BDA0CFAEF315DC8ED30E1 * L_1 = __this->get_secondFigure_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		// if (secondFigure != null) secondObject = null;
		ConnectionScript_set_secondObject_m40036D9FA970F378B09476830B535FBC0CCD8339_inline(__this, (Figure_tD3F2D6CD703435C5A34BDA0CFAEF315DC8ED30E1 *)NULL, /*hidden argument*/NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void ConnectionScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionScript__ctor_mEE4D0F6F8FC9017E372C3969D42DAA23CCBB292F (ConnectionScript_tADDEC2FCD1578C6E0104429872BA7D6049AE3055 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Constellator::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Constellator_Start_m96F6DBA94AA2E70EB04767213612FD7CA7C76AB5 (Constellator_t82C724B9CF998A32666692F452D15275AFCD8F96 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Constellator_U3CStartU3Eb__7_0_m9DFFB84F91893AE46566959B6CD8B203F3811C2B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ArrangeObjects(level);
		SceneInfo_tB4D0254BE2C5AB81D3EFA7E0D49A8A93F2DFB6EC * L_0 = __this->get_level_4();
		Constellator_ArrangeObjects_m228D7F1B0EE81ECBA86446600F815A8C59C31524(__this, L_0, /*hidden argument*/NULL);
		// addTriangles.onClick.AddListener(() => { TrianglesEnabled = !TrianglesEnabled; });
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_1 = __this->get_addTriangles_6();
		NullCheck(L_1);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_2;
		L_2 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_1, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_3 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_3, __this, (intptr_t)((intptr_t)Constellator_U3CStartU3Eb__7_0_m9DFFB84F91893AE46566959B6CD8B203F3811C2B_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_2);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Constellator::ArrangeObjects(SceneInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Constellator_ArrangeObjects_m228D7F1B0EE81ECBA86446600F815A8C59C31524 (Constellator_t82C724B9CF998A32666692F452D15275AFCD8F96 * __this, SceneInfo_tB4D0254BE2C5AB81D3EFA7E0D49A8A93F2DFB6EC * ___level0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisFigure_tD3F2D6CD703435C5A34BDA0CFAEF315DC8ED30E1_m80FCCF932B2747F4E4F0AB7690005C8B0B30F086_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.level = level;
		SceneInfo_tB4D0254BE2C5AB81D3EFA7E0D49A8A93F2DFB6EC * L_0 = ___level0;
		__this->set_level_4(L_0);
		// if (SquaresAndCircles != null) ClearLevel();
		FigureU5BU5D_t73C3BEB2BE5540012E7FAFB8BAAFCF17331EE76E* L_1 = __this->get_SquaresAndCircles_10();
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// if (SquaresAndCircles != null) ClearLevel();
		Constellator_ClearLevel_mA1676BC4E7126C04F3900964489DAB643A770F5D(__this, /*hidden argument*/NULL);
	}

IL_0015:
	{
		// Create(CirclePrefab, level.CountCircles);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_CirclePrefab_8();
		SceneInfo_tB4D0254BE2C5AB81D3EFA7E0D49A8A93F2DFB6EC * L_3 = ___level0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SceneInfo_get_CountCircles_m66360D1B1A81C690D80326E5E79628839E8EF2B7_inline(L_3, /*hidden argument*/NULL);
		Constellator_Create_m97A01E40A40EC66045407C1746E793899BD6ADFD(__this, L_2, L_4, /*hidden argument*/NULL);
		// Create(SquarePrefab, level.CountSquares);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_SquarePrefab_7();
		SceneInfo_tB4D0254BE2C5AB81D3EFA7E0D49A8A93F2DFB6EC * L_6 = ___level0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = SceneInfo_get_CountSquares_mD7ECCF632069BC495044C6C00EB9C6489A65A31E_inline(L_6, /*hidden argument*/NULL);
		Constellator_Create_m97A01E40A40EC66045407C1746E793899BD6ADFD(__this, L_5, L_7, /*hidden argument*/NULL);
		// SquaresAndCircles = FindObjectsOfType<Figure>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		FigureU5BU5D_t73C3BEB2BE5540012E7FAFB8BAAFCF17331EE76E* L_8;
		L_8 = Object_FindObjectsOfType_TisFigure_tD3F2D6CD703435C5A34BDA0CFAEF315DC8ED30E1_m80FCCF932B2747F4E4F0AB7690005C8B0B30F086(/*hidden argument*/Object_FindObjectsOfType_TisFigure_tD3F2D6CD703435C5A34BDA0CFAEF315DC8ED30E1_m80FCCF932B2747F4E4F0AB7690005C8B0B30F086_RuntimeMethod_var);
		__this->set_SquaresAndCircles_10(L_8);
		// if (TrianglesEnabled) Create(TrianglePrefab, level.CountTriangles);
		bool L_9 = __this->get_TrianglesEnabled_5();
		if (!L_9)
		{
			goto IL_005e;
		}
	}
	{
		// if (TrianglesEnabled) Create(TrianglePrefab, level.CountTriangles);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_TrianglePrefab_9();
		SceneInfo_tB4D0254BE2C5AB81D3EFA7E0D49A8A93F2DFB6EC * L_11 = ___level0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = SceneInfo_get_CountTriangles_mAF603CD65C7C05096A83922506FF117691E870F6_inline(L_11, /*hidden argument*/NULL);
		Constellator_Create_m97A01E40A40EC66045407C1746E793899BD6ADFD(__this, L_10, L_12, /*hidden argument*/NULL);
	}

IL_005e:
	{
		// SetRandomCirclesSize();
		Constellator_SetRandomCirclesSize_mB95E020A20DBFD11F41C6EC148DACA1B848459FB(__this, /*hidden argument*/NULL);
		// SmartReSize(TrianglesEnabled);
		bool L_13 = __this->get_TrianglesEnabled_5();
		Constellator_SmartReSize_m2C4F9A361DBFF681A8E4DB500048EAC1C96977C8(__this, L_13, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Constellator::ClearLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Constellator_ClearLevel_mA1676BC4E7126C04F3900964489DAB643A770F5D (Constellator_t82C724B9CF998A32666692F452D15275AFCD8F96 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisFigure_tD3F2D6CD703435C5A34BDA0CFAEF315DC8ED30E1_m80FCCF932B2747F4E4F0AB7690005C8B0B30F086_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FigureU5BU5D_t73C3BEB2BE5540012E7FAFB8BAAFCF17331EE76E* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// SquaresAndCircles = FindObjectsOfType<Figure>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		FigureU5BU5D_t73C3BEB2BE5540012E7FAFB8BAAFCF17331EE76E* L_0;
		L_0 = Object_FindObjectsOfType_TisFigure_tD3F2D6CD703435C5A34BDA0CFAEF315DC8ED30E1_m80FCCF932B2747F4E4F0AB7690005C8B0B30F086(/*hidden argument*/Object_FindObjectsOfType_TisFigure_tD3F2D6CD703435C5A34BDA0CFAEF315DC8ED30E1_m80FCCF932B2747F4E4F0AB7690005C8B0B30F086_RuntimeMethod_var);
		__this->set_SquaresAndCircles_10(L_0);
		// foreach(Figure figure in SquaresAndCircles)
		FigureU5BU5D_t73C3BEB2BE5540012E7FAFB8BAAFCF17331EE76E* L_1 = __this->get_SquaresAndCircles_10();
		V_0 = L_1;
		V_1 = 0;
		goto IL_0027;
	}

IL_0016:
	{
		// foreach(Figure figure in SquaresAndCircles)
		FigureU5BU5D_t73C3BEB2BE5540012E7FAFB8BAAFCF17331EE76E* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Figure_tD3F2D6CD703435C5A34BDA0CFAEF315DC8ED30E1 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		// Destroy(figure.gameObject);
		NullCheck(L_5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_6, /*hidden argument*/NULL);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0027:
	{
		// foreach(Figure figure in SquaresAndCircles)
		int32_t L_8 = V_1;
		FigureU5BU5D_t73C3BEB2BE5540012E7FAFB8BAAFCF17331EE76E* L_9 = V_0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))))
		{
			goto IL_0016;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Constellator::Create(UnityEngine.GameObject,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Constellator_Create_m97A01E40A40EC66045407C1746E793899BD6ADFD (Constellator_t82C724B9CF998A32666692F452D15275AFCD8F96 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___prefab0, int32_t ___count1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < count; i++)
		V_0 = 0;
		goto IL_0043;
	}

IL_0004:
	{
		// Instantiate(prefab, transform).GetComponent<RectTransform>().anchoredPosition
		//     = new Vector2(Random.Range(-800, 800), Random.Range(-400, 400));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___prefab0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8(L_0, L_1, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		NullCheck(L_2);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_3;
		L_3 = GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30(L_2, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		int32_t L_4;
		L_4 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(((int32_t)-800), ((int32_t)800), /*hidden argument*/NULL);
		int32_t L_5;
		L_5 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(((int32_t)-400), ((int32_t)400), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), ((float)((float)L_4)), ((float)((float)L_5)), /*hidden argument*/NULL);
		NullCheck(L_3);
		RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905(L_3, L_6, /*hidden argument*/NULL);
		// for (int i = 0; i < count; i++)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0043:
	{
		// for (int i = 0; i < count; i++)
		int32_t L_8 = V_0;
		int32_t L_9 = ___count1;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Constellator::SmartReSize(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Constellator_SmartReSize_m2C4F9A361DBFF681A8E4DB500048EAC1C96977C8 (Constellator_t82C724B9CF998A32666692F452D15275AFCD8F96 * __this, bool ___trianglesEnable0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B5_1 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	int32_t G_B7_2 = 0;
	{
		// for (int i = 0; i < SquaresAndCircles.Length - level.CountCircles - (trianglesEnable ? level.CountTriangles : 0); i++)
		V_0 = 0;
		goto IL_004d;
	}

IL_0004:
	{
		// if (i + level.CountSquares < SquaresAndCircles.Length)
		int32_t L_0 = V_0;
		SceneInfo_tB4D0254BE2C5AB81D3EFA7E0D49A8A93F2DFB6EC * L_1 = __this->get_level_4();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = SceneInfo_get_CountSquares_mD7ECCF632069BC495044C6C00EB9C6489A65A31E_inline(L_1, /*hidden argument*/NULL);
		FigureU5BU5D_t73C3BEB2BE5540012E7FAFB8BAAFCF17331EE76E* L_3 = __this->get_SquaresAndCircles_10();
		NullCheck(L_3);
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_2))) >= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0049;
		}
	}
	{
		// SquaresAndCircles[i].ChangeSize(Random.Range(1, SquaresAndCircles[i + level.CountSquares].GetSize() + 1));
		FigureU5BU5D_t73C3BEB2BE5540012E7FAFB8BAAFCF17331EE76E* L_4 = __this->get_SquaresAndCircles_10();
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Figure_tD3F2D6CD703435C5A34BDA0CFAEF315DC8ED30E1 * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		FigureU5BU5D_t73C3BEB2BE5540012E7FAFB8BAAFCF17331EE76E* L_8 = __this->get_SquaresAndCircles_10();
		int32_t L_9 = V_0;
		SceneInfo_tB4D0254BE2C5AB81D3EFA7E0D49A8A93F2DFB6EC * L_10 = __this->get_level_4();
		NullCheck(L_10);
		int32_t L_11;
		L_11 = SceneInfo_get_CountSquares_mD7ECCF632069BC495044C6C00EB9C6489A65A31E_inline(L_10, /*hidden argument*/NULL);
		NullCheck(L_8);
		int32_t L_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)L_11));
		Figure_tD3F2D6CD703435C5A34BDA0CFAEF315DC8ED30E1 * L_13 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		int32_t L_14;
		L_14 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 Figure::GetSize() */, L_13);
		int32_t L_15;
		L_15 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(1, ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1)), /*hidden argument*/NULL);
		NullCheck(L_7);
		VirtActionInvoker1< int32_t >::Invoke(6 /* System.Void Figure::ChangeSize(System.Int32) */, L_7, L_15);
	}

IL_0049:
	{
		// for (int i = 0; i < SquaresAndCircles.Length - level.CountCircles - (trianglesEnable ? level.CountTriangles : 0); i++)
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_004d:
	{
		// for (int i = 0; i < SquaresAndCircles.Length - level.CountCircles - (trianglesEnable ? level.CountTriangles : 0); i++)
		int32_t L_17 = V_0;
		FigureU5BU5D_t73C3BEB2BE5540012E7FAFB8BAAFCF17331EE76E* L_18 = __this->get_SquaresAndCircles_10();
		NullCheck(L_18);
		SceneInfo_tB4D0254BE2C5AB81D3EFA7E0D49A8A93F2DFB6EC * L_19 = __this->get_level_4();
		NullCheck(L_19);
		int32_t L_20;
		L_20 = SceneInfo_get_CountCircles_m66360D1B1A81C690D80326E5E79628839E8EF2B7_inline(L_19, /*hidden argument*/NULL);
		bool L_21 = ___trianglesEnable0;
		G_B5_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length))), (int32_t)L_20));
		G_B5_1 = L_17;
		if (L_21)
		{
			G_B6_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length))), (int32_t)L_20));
			G_B6_1 = L_17;
			goto IL_0068;
		}
	}
	{
		G_B7_0 = 0;
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_0073;
	}

IL_0068:
	{
		SceneInfo_tB4D0254BE2C5AB81D3EFA7E0D49A8A93F2DFB6EC * L_22 = __this->get_level_4();
		NullCheck(L_22);
		int32_t L_23;
		L_23 = SceneInfo_get_CountTriangles_mAF603CD65C7C05096A83922506FF117691E870F6_inline(L_22, /*hidden argument*/NULL);
		G_B7_0 = L_23;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_0073:
	{
		if ((((int32_t)G_B7_2) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)G_B7_1, (int32_t)G_B7_0)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Constellator::SetRandomCirclesSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Constellator_SetRandomCirclesSize_mB95E020A20DBFD11F41C6EC148DACA1B848459FB (Constellator_t82C724B9CF998A32666692F452D15275AFCD8F96 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// for (int i = level.CountSquares; i < SquaresAndCircles.Length; i++)
		SceneInfo_tB4D0254BE2C5AB81D3EFA7E0D49A8A93F2DFB6EC * L_0 = __this->get_level_4();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = SceneInfo_get_CountSquares_mD7ECCF632069BC495044C6C00EB9C6489A65A31E_inline(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0026;
	}

IL_000e:
	{
		// SquaresAndCircles[i].ChangeSize(Random.Range(1, 4));
		FigureU5BU5D_t73C3BEB2BE5540012E7FAFB8BAAFCF17331EE76E* L_2 = __this->get_SquaresAndCircles_10();
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Figure_tD3F2D6CD703435C5A34BDA0CFAEF315DC8ED30E1 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		int32_t L_6;
		L_6 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(1, 4, /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtActionInvoker1< int32_t >::Invoke(6 /* System.Void Figure::ChangeSize(System.Int32) */, L_5, L_6);
		// for (int i = level.CountSquares; i < SquaresAndCircles.Length; i++)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0026:
	{
		// for (int i = level.CountSquares; i < SquaresAndCircles.Length; i++)
		int32_t L_8 = V_0;
		FigureU5BU5D_t73C3BEB2BE5540012E7FAFB8BAAFCF17331EE76E* L_9 = __this->get_SquaresAndCircles_10();
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))))
		{
			goto IL_000e;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Constellator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Constellator__ctor_m74CC8FB3F51CF0C8037B123B288186DF41C8A4E0 (Constellator_t82C724B9CF998A32666692F452D15275AFCD8F96 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Constellator::<Start>b__7_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Constellator_U3CStartU3Eb__7_0_m9DFFB84F91893AE46566959B6CD8B203F3811C2B (Constellator_t82C724B9CF998A32666692F452D15275AFCD8F96 * __this, const RuntimeMethod* method)
{
	{
		// addTriangles.onClick.AddListener(() => { TrianglesEnabled = !TrianglesEnabled; });
		bool L_0 = __this->get_TrianglesEnabled_5();
		__this->set_TrianglesEnabled_5((bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0));
		// addTriangles.onClick.AddListener(() => { TrianglesEnabled = !TrianglesEnabled; });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Figure::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Figure__ctor_m906BFAA8DC4D2FCBA7A2467D8EF41D098F21D052 (Figure_tD3F2D6CD703435C5A34BDA0CFAEF315DC8ED30E1 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FigureManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FigureManager_Start_m32873FA3B1DEB3B8F619DE6B7ACA728C7F673231 (FigureManager_t53A105ED7BAD09C625B1A14DC7CE83FBE73541CA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisConnectionScript_tADDEC2FCD1578C6E0104429872BA7D6049AE3055_mBA938D8D6DAE0406BA0770F6D74088286DE8FFF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// imageComponent = GetComponent<Image>();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_0;
		L_0 = Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB(__this, /*hidden argument*/Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		__this->set_imageComponent_4(L_0);
		// connectionComponent = transform.parent.GetComponent<ConnectionScript>();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		ConnectionScript_tADDEC2FCD1578C6E0104429872BA7D6049AE3055 * L_3;
		L_3 = Component_GetComponent_TisConnectionScript_tADDEC2FCD1578C6E0104429872BA7D6049AE3055_mBA938D8D6DAE0406BA0770F6D74088286DE8FFF7(L_2, /*hidden argument*/Component_GetComponent_TisConnectionScript_tADDEC2FCD1578C6E0104429872BA7D6049AE3055_mBA938D8D6DAE0406BA0770F6D74088286DE8FFF7_RuntimeMethod_var);
		__this->set_connectionComponent_5(L_3);
		// }
		return;
	}
}
// System.Void FigureManager::SetTransparent(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FigureManager_SetTransparent_m955D5996A3B4555E2E72D2E00D94328149802570 (FigureManager_t53A105ED7BAD09C625B1A14DC7CE83FBE73541CA * __this, uint8_t ___alpha0, const RuntimeMethod* method)
{
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Color32 color = imageComponent.color;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_0 = __this->get_imageComponent_4();
		NullCheck(L_0);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		L_1 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_0);
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_2;
		L_2 = Color32_op_Implicit_mD17E8145D2D32EF369EFE349C4D32E839F7D7AA4(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// color.a = alpha;
		uint8_t L_3 = ___alpha0;
		(&V_0)->set_a_4(L_3);
		// imageComponent.color = color;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4 = __this->get_imageComponent_4();
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_5 = V_0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_6;
		L_6 = Color32_op_Implicit_m63F14F1A14B1A9A3EE4D154413EE229D3E001623(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_4, L_6);
		// }
		return;
	}
}
// System.Void FigureManager::OnClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FigureManager_OnClick_mE0497446FB157E58FAC6978C0954AE24938C83DE (FigureManager_t53A105ED7BAD09C625B1A14DC7CE83FBE73541CA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FigureManager_OnRelease_mF1BB69C4A032BAF747927F7C29F5DE6C758FA662_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisFigure_tD3F2D6CD703435C5A34BDA0CFAEF315DC8ED30E1_m09CF237F141696E5A492DE267ADDCF14FDD5DDF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnReleaseDelegate_tF10A7DE9C6B5540DC48F6BEF5131FCE808B0A9F2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SetTransparent(170);
		FigureManager_SetTransparent_m955D5996A3B4555E2E72D2E00D94328149802570(__this, (uint8_t)((int32_t)170), /*hidden argument*/NULL);
		// connectionComponent.OnRelease += OnRelease;
		ConnectionScript_tADDEC2FCD1578C6E0104429872BA7D6049AE3055 * L_0 = __this->get_connectionComponent_5();
		OnReleaseDelegate_tF10A7DE9C6B5540DC48F6BEF5131FCE808B0A9F2 * L_1 = (OnReleaseDelegate_tF10A7DE9C6B5540DC48F6BEF5131FCE808B0A9F2 *)il2cpp_codegen_object_new(OnReleaseDelegate_tF10A7DE9C6B5540DC48F6BEF5131FCE808B0A9F2_il2cpp_TypeInfo_var);
		OnReleaseDelegate__ctor_mEA271C624586E9705CC24DEC208284BB882D94C8(L_1, __this, (intptr_t)((intptr_t)FigureManager_OnRelease_mF1BB69C4A032BAF747927F7C29F5DE6C758FA662_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_0);
		ConnectionScript_add_OnRelease_mD2661EA34875D44CB166F10EEA67211961F3D5ED(L_0, L_1, /*hidden argument*/NULL);
		// connectionComponent.CommitObject(gameObject.GetComponent<Figure>());
		ConnectionScript_tADDEC2FCD1578C6E0104429872BA7D6049AE3055 * L_2 = __this->get_connectionComponent_5();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Figure_tD3F2D6CD703435C5A34BDA0CFAEF315DC8ED30E1 * L_4;
		L_4 = GameObject_GetComponent_TisFigure_tD3F2D6CD703435C5A34BDA0CFAEF315DC8ED30E1_m09CF237F141696E5A492DE267ADDCF14FDD5DDF8(L_3, /*hidden argument*/GameObject_GetComponent_TisFigure_tD3F2D6CD703435C5A34BDA0CFAEF315DC8ED30E1_m09CF237F141696E5A492DE267ADDCF14FDD5DDF8_RuntimeMethod_var);
		NullCheck(L_2);
		ConnectionScript_CommitObject_mCFAFBD7549EE0C8A76814F90FE61F0B86A145F7D(L_2, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void FigureManager::OnRelease()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FigureManager_OnRelease_mF1BB69C4A032BAF747927F7C29F5DE6C758FA662 (FigureManager_t53A105ED7BAD09C625B1A14DC7CE83FBE73541CA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FigureManager_OnRelease_mF1BB69C4A032BAF747927F7C29F5DE6C758FA662_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnReleaseDelegate_tF10A7DE9C6B5540DC48F6BEF5131FCE808B0A9F2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SetTransparent(255);
		FigureManager_SetTransparent_m955D5996A3B4555E2E72D2E00D94328149802570(__this, (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		// connectionComponent.OnRelease -= OnRelease;
		ConnectionScript_tADDEC2FCD1578C6E0104429872BA7D6049AE3055 * L_0 = __this->get_connectionComponent_5();
		OnReleaseDelegate_tF10A7DE9C6B5540DC48F6BEF5131FCE808B0A9F2 * L_1 = (OnReleaseDelegate_tF10A7DE9C6B5540DC48F6BEF5131FCE808B0A9F2 *)il2cpp_codegen_object_new(OnReleaseDelegate_tF10A7DE9C6B5540DC48F6BEF5131FCE808B0A9F2_il2cpp_TypeInfo_var);
		OnReleaseDelegate__ctor_mEA271C624586E9705CC24DEC208284BB882D94C8(L_1, __this, (intptr_t)((intptr_t)FigureManager_OnRelease_mF1BB69C4A032BAF747927F7C29F5DE6C758FA662_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_0);
		ConnectionScript_remove_OnRelease_m17315013E444367AE12C84AF0A2375FC1A821280(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void FigureManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FigureManager__ctor_mF8340AFA51DD263C5D7486DED0A839517BEE1B0A (FigureManager_t53A105ED7BAD09C625B1A14DC7CE83FBE73541CA * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MenuScript::LoadLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuScript_LoadLevel_mAB7F54B3758761DCE34ED98C29CB3F2E264D1141 (MenuScript_tE9F8D547CCE9063DE789709E04F071AC12279716 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		// constellator.ArrangeObjects(levels[i]);
		Constellator_t82C724B9CF998A32666692F452D15275AFCD8F96 * L_0 = __this->get_constellator_6();
		SceneInfoU5BU5D_t4685AC7D7CBFA72AFF75C4E8CE1B1585C415CDC5* L_1 = __this->get_levels_4();
		int32_t L_2 = ___i0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		SceneInfo_tB4D0254BE2C5AB81D3EFA7E0D49A8A93F2DFB6EC * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_0);
		Constellator_ArrangeObjects_m228D7F1B0EE81ECBA86446600F815A8C59C31524(L_0, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MenuScript::OnClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuScript_OnClick_mB5D619F0B6BB455821D2B769860F3D10AE0C1F6B (MenuScript_tE9F8D547CCE9063DE789709E04F071AC12279716 * __this, const RuntimeMethod* method)
{
	{
		// panel.SetActive(!panel.activeInHierarchy);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_panel_5();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_panel_5();
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_get_activeInHierarchy_mA3990AC5F61BB35283188E925C2BE7F7BF67734B(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MenuScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuScript__ctor_m5DE33EE74C32A13B9B00105C42F0E6FC738C3DF6 (MenuScript_tE9F8D547CCE9063DE789709E04F071AC12279716 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 ResourcesManager::get_Moves()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ResourcesManager_get_Moves_m905B3B50538E90D126B0305B099E2640A29A9177 (ResourcesManager_t29353D9703201AB5E65427A519648DD596A2BB17 * __this, const RuntimeMethod* method)
{
	{
		// public int Moves { get => moves; set { moves = value; ChangeText(); } }
		int32_t L_0 = __this->get_moves_9();
		return L_0;
	}
}
// System.Void ResourcesManager::set_Moves(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourcesManager_set_Moves_mA07CDDCB3B4B3F6B399AEA0C35EA967D096E70B7 (ResourcesManager_t29353D9703201AB5E65427A519648DD596A2BB17 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Moves { get => moves; set { moves = value; ChangeText(); } }
		int32_t L_0 = ___value0;
		__this->set_moves_9(L_0);
		// public int Moves { get => moves; set { moves = value; ChangeText(); } }
		ResourcesManager_ChangeText_m80BD222E97FA0A44985C79CF50ED5194AED869F5(__this, /*hidden argument*/NULL);
		// public int Moves { get => moves; set { moves = value; ChangeText(); } }
		return;
	}
}
// System.Int32 ResourcesManager::get_Energy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ResourcesManager_get_Energy_mF1915006A4092C0883C05A9345FDD091819FF67E (ResourcesManager_t29353D9703201AB5E65427A519648DD596A2BB17 * __this, const RuntimeMethod* method)
{
	{
		// public int Energy { get => energy; set { energy = value; ChangeText(); } }
		int32_t L_0 = __this->get_energy_8();
		return L_0;
	}
}
// System.Void ResourcesManager::set_Energy(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourcesManager_set_Energy_mB66C2DF056B2062DC13E17F249FDE0181FE0CF03 (ResourcesManager_t29353D9703201AB5E65427A519648DD596A2BB17 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Energy { get => energy; set { energy = value; ChangeText(); } }
		int32_t L_0 = ___value0;
		__this->set_energy_8(L_0);
		// public int Energy { get => energy; set { energy = value; ChangeText(); } }
		ResourcesManager_ChangeText_m80BD222E97FA0A44985C79CF50ED5194AED869F5(__this, /*hidden argument*/NULL);
		// public int Energy { get => energy; set { energy = value; ChangeText(); } }
		return;
	}
}
// System.Void ResourcesManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourcesManager_Start_mDF526DFE73AD2D72C177B15639DF9376E9A511B8 (ResourcesManager_t29353D9703201AB5E65427A519648DD596A2BB17 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResourcesManager_U3CStartU3Eb__13_0_m08737382A0EC3477B29C06AF9F1079982F869C0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// energyEnable = constellator.TrianglesEnabled;
		Constellator_t82C724B9CF998A32666692F452D15275AFCD8F96 * L_0 = __this->get_constellator_7();
		NullCheck(L_0);
		bool L_1 = L_0->get_TrianglesEnabled_5();
		__this->set_energyEnable_10(L_1);
		// Moves = moves;
		int32_t L_2 = __this->get_moves_9();
		ResourcesManager_set_Moves_mA07CDDCB3B4B3F6B399AEA0C35EA967D096E70B7(__this, L_2, /*hidden argument*/NULL);
		// addTriangles.onClick.AddListener(() => { energyEnable = !energyEnable; SetSize(); ChangeText(); });
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_3 = __this->get_addTriangles_5();
		NullCheck(L_3);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_4;
		L_4 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_3, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_5 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_5, __this, (intptr_t)((intptr_t)ResourcesManager_U3CStartU3Eb__13_0_m08737382A0EC3477B29C06AF9F1079982F869C0F_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_4);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_4, L_5, /*hidden argument*/NULL);
		// SetSize();
		ResourcesManager_SetSize_m7E1C37A438EE2ADFB3F22E726267CBA1723EE21D(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ResourcesManager::ChangeText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourcesManager_ChangeText_m80BD222E97FA0A44985C79CF50ED5194AED869F5 (ResourcesManager_t29353D9703201AB5E65427A519648DD596A2BB17 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral082798A464456997B21A0FFF5774463F5AAEC729);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6BB5C4A0C26EAB0914847E3B343141EA1444180E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// movesText.text = $"Moves : {moves}";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_movesText_4();
		int32_t L_1 = __this->get_moves_9();
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4;
		L_4 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral082798A464456997B21A0FFF5774463F5AAEC729, L_3, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_4);
		// if (energyEnable)
		bool L_5 = __this->get_energyEnable_10();
		if (!L_5)
		{
			goto IL_0053;
		}
	}
	{
		// movesText.text += $" , Energy : {energy}";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_6 = __this->get_movesText_4();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_7 = L_6;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_7);
		int32_t L_9 = __this->get_energy_8();
		int32_t L_10 = L_9;
		RuntimeObject * L_11 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_10);
		String_t* L_12;
		L_12 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral6BB5C4A0C26EAB0914847E3B343141EA1444180E, L_11, /*hidden argument*/NULL);
		String_t* L_13;
		L_13 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_8, L_12, /*hidden argument*/NULL);
		NullCheck(L_7);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, L_13);
	}

IL_0053:
	{
		// }
		return;
	}
}
// System.Void ResourcesManager::SetSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourcesManager_SetSize_m7E1C37A438EE2ADFB3F22E726267CBA1723EE21D (ResourcesManager_t29353D9703201AB5E65427A519648DD596A2BB17 * __this, const RuntimeMethod* method)
{
	{
		// if (energyEnable)
		bool L_0 = __this->get_energyEnable_10();
		if (!L_0)
		{
			goto IL_0063;
		}
	}
	{
		// rect.sizeDelta = new Vector2(500, 50);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_1 = __this->get_rect_6();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_2), (500.0f), (50.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		RectTransform_set_sizeDelta_m61943618442E31C6FF0556CDFC70940AE7AD04D0(L_1, L_2, /*hidden argument*/NULL);
		// rect.anchoredPosition = new Vector2(300, rect.anchoredPosition.y);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_3 = __this->get_rect_6();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_4 = __this->get_rect_6();
		NullCheck(L_4);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = RectTransform_get_anchoredPosition_mFDC4F160F99634B2FBC73FE5FB1F4F4127CDD975(L_4, /*hidden argument*/NULL);
		float L_6 = L_5.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_7), (300.0f), L_6, /*hidden argument*/NULL);
		NullCheck(L_3);
		RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905(L_3, L_7, /*hidden argument*/NULL);
		// movesText.rectTransform.sizeDelta = rect.sizeDelta;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_8 = __this->get_movesText_4();
		NullCheck(L_8);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_9;
		L_9 = Graphic_get_rectTransform_m87D5A808474C6B71649CBB153DEBF5F268189EFF(L_8, /*hidden argument*/NULL);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_10 = __this->get_rect_6();
		NullCheck(L_10);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11;
		L_11 = RectTransform_get_sizeDelta_mCFAE8C916280C173AB79BE32B910376E310D1C50(L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		RectTransform_set_sizeDelta_m61943618442E31C6FF0556CDFC70940AE7AD04D0(L_9, L_11, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0063:
	{
		// rect.sizeDelta = new Vector2(250, 50);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_12 = __this->get_rect_6();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_13), (250.0f), (50.0f), /*hidden argument*/NULL);
		NullCheck(L_12);
		RectTransform_set_sizeDelta_m61943618442E31C6FF0556CDFC70940AE7AD04D0(L_12, L_13, /*hidden argument*/NULL);
		// rect.anchoredPosition = new Vector2(300, rect.anchoredPosition.y);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_14 = __this->get_rect_6();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_15 = __this->get_rect_6();
		NullCheck(L_15);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_16;
		L_16 = RectTransform_get_anchoredPosition_mFDC4F160F99634B2FBC73FE5FB1F4F4127CDD975(L_15, /*hidden argument*/NULL);
		float L_17 = L_16.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_18), (300.0f), L_17, /*hidden argument*/NULL);
		NullCheck(L_14);
		RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905(L_14, L_18, /*hidden argument*/NULL);
		// movesText.rectTransform.sizeDelta = rect.sizeDelta;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_19 = __this->get_movesText_4();
		NullCheck(L_19);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_20;
		L_20 = Graphic_get_rectTransform_m87D5A808474C6B71649CBB153DEBF5F268189EFF(L_19, /*hidden argument*/NULL);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_21 = __this->get_rect_6();
		NullCheck(L_21);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_22;
		L_22 = RectTransform_get_sizeDelta_mCFAE8C916280C173AB79BE32B910376E310D1C50(L_21, /*hidden argument*/NULL);
		NullCheck(L_20);
		RectTransform_set_sizeDelta_m61943618442E31C6FF0556CDFC70940AE7AD04D0(L_20, L_22, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ResourcesManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourcesManager__ctor_mB4DA666EEA165EAA78E091D650FAB2DED3ADAB43 (ResourcesManager_t29353D9703201AB5E65427A519648DD596A2BB17 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ResourcesManager::<Start>b__13_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourcesManager_U3CStartU3Eb__13_0_m08737382A0EC3477B29C06AF9F1079982F869C0F (ResourcesManager_t29353D9703201AB5E65427A519648DD596A2BB17 * __this, const RuntimeMethod* method)
{
	{
		// addTriangles.onClick.AddListener(() => { energyEnable = !energyEnable; SetSize(); ChangeText(); });
		bool L_0 = __this->get_energyEnable_10();
		__this->set_energyEnable_10((bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0));
		// addTriangles.onClick.AddListener(() => { energyEnable = !energyEnable; SetSize(); ChangeText(); });
		ResourcesManager_SetSize_m7E1C37A438EE2ADFB3F22E726267CBA1723EE21D(__this, /*hidden argument*/NULL);
		// addTriangles.onClick.AddListener(() => { energyEnable = !energyEnable; SetSize(); ChangeText(); });
		ResourcesManager_ChangeText_m80BD222E97FA0A44985C79CF50ED5194AED869F5(__this, /*hidden argument*/NULL);
		// addTriangles.onClick.AddListener(() => { energyEnable = !energyEnable; SetSize(); ChangeText(); });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 SceneInfo::get_CountSquares()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SceneInfo_get_CountSquares_mD7ECCF632069BC495044C6C00EB9C6489A65A31E (SceneInfo_tB4D0254BE2C5AB81D3EFA7E0D49A8A93F2DFB6EC * __this, const RuntimeMethod* method)
{
	{
		// public int CountSquares => countSquares;
		int32_t L_0 = __this->get_countSquares_4();
		return L_0;
	}
}
// System.Int32 SceneInfo::get_CountCircles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SceneInfo_get_CountCircles_m66360D1B1A81C690D80326E5E79628839E8EF2B7 (SceneInfo_tB4D0254BE2C5AB81D3EFA7E0D49A8A93F2DFB6EC * __this, const RuntimeMethod* method)
{
	{
		// public int CountCircles => countCircles;
		int32_t L_0 = __this->get_countCircles_5();
		return L_0;
	}
}
// System.Int32 SceneInfo::get_CountTriangles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SceneInfo_get_CountTriangles_mAF603CD65C7C05096A83922506FF117691E870F6 (SceneInfo_tB4D0254BE2C5AB81D3EFA7E0D49A8A93F2DFB6EC * __this, const RuntimeMethod* method)
{
	{
		// public int CountTriangles => countTriangles;
		int32_t L_0 = __this->get_countTriangles_6();
		return L_0;
	}
}
// System.Int32 SceneInfo::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SceneInfo_get_Count_m94491665EAE0DFE49EF109781D7F795A34B362C7 (SceneInfo_tB4D0254BE2C5AB81D3EFA7E0D49A8A93F2DFB6EC * __this, const RuntimeMethod* method)
{
	{
		// public int Count => countSquares + countCircles + countTriangles;
		int32_t L_0 = __this->get_countSquares_4();
		int32_t L_1 = __this->get_countCircles_5();
		int32_t L_2 = __this->get_countTriangles_6();
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)), (int32_t)L_2));
	}
}
// System.Void SceneInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneInfo__ctor_m0B955FC25304CBBF2B725EE5A13B473316BA9110 (SceneInfo_tB4D0254BE2C5AB81D3EFA7E0D49A8A93F2DFB6EC * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 SquareScript::get_Size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SquareScript_get_Size_m960C51137FE85FC63FEFB7CC533A47D322B6BCCB (SquareScript_t363231F809675EA1AD40871AA405406C46E2AEC7 * __this, const RuntimeMethod* method)
{
	{
		// public int Size => size;
		int32_t L_0 = __this->get_size_4();
		return L_0;
	}
}
// System.Void SquareScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SquareScript_Start_m93FD42CDA49F5DADD5501F37D6EAF2089F8F0621 (SquareScript_t363231F809675EA1AD40871AA405406C46E2AEC7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rect = GetComponent<RectTransform>();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0;
		L_0 = Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79(__this, /*hidden argument*/Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		__this->set_rect_5(L_0);
		// ChangeSize(size);
		int32_t L_1 = __this->get_size_4();
		VirtActionInvoker1< int32_t >::Invoke(6 /* System.Void Figure::ChangeSize(System.Int32) */, __this, L_1);
		// }
		return;
	}
}
// System.Void SquareScript::ChangeSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SquareScript_ChangeSize_mC28ACEB43BC48FD7900332F51330FCACA6105576 (SquareScript_t363231F809675EA1AD40871AA405406C46E2AEC7 * __this, int32_t ___size0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.size = size;
		int32_t L_0 = ___size0;
		__this->set_size_4(L_0);
		// if(rect == null)
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_1 = __this->get_rect_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// rect = GetComponent<RectTransform>();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_3;
		L_3 = Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79(__this, /*hidden argument*/Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		__this->set_rect_5(L_3);
	}

IL_0021:
	{
		// rect.sizeDelta = new Vector2(size * 70, size * 70);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_4 = __this->get_rect_5();
		int32_t L_5 = ___size0;
		int32_t L_6 = ___size0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_7), ((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)L_5, (int32_t)((int32_t)70))))), ((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)L_6, (int32_t)((int32_t)70))))), /*hidden argument*/NULL);
		NullCheck(L_4);
		RectTransform_set_sizeDelta_m61943618442E31C6FF0556CDFC70940AE7AD04D0(L_4, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 SquareScript::GetSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SquareScript_GetSize_m586D7B6A321283F2FE74384DD23C3254DF59212C (SquareScript_t363231F809675EA1AD40871AA405406C46E2AEC7 * __this, const RuntimeMethod* method)
{
	{
		// public override int GetSize() => Size;
		int32_t L_0;
		L_0 = SquareScript_get_Size_m960C51137FE85FC63FEFB7CC533A47D322B6BCCB_inline(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String SquareScript::GetFigureType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SquareScript_GetFigureType_m686D286A93E59CE897FD2E8C5CF625CD1C3C0106 (SquareScript_t363231F809675EA1AD40871AA405406C46E2AEC7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8D604EA97ACA8EB403D281FB23304D3B2338E81);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override string GetFigureType() => "square";
		return _stringLiteralE8D604EA97ACA8EB403D281FB23304D3B2338E81;
	}
}
// System.Void SquareScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SquareScript__ctor_m6AC2C2328A6F87D1334F4FDCED5AA4F04A05B758 (SquareScript_t363231F809675EA1AD40871AA405406C46E2AEC7 * __this, const RuntimeMethod* method)
{
	{
		Figure__ctor_m906BFAA8DC4D2FCBA7A2467D8EF41D098F21D052(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 TriangleScript::get_Size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TriangleScript_get_Size_m19FB2C7BA40585E977A8ED40F3983D47269DE244 (TriangleScript_t6E56FC30244CA8AE5461597546EA82FAD254B8A2 * __this, const RuntimeMethod* method)
{
	{
		// public int Size => size;
		int32_t L_0 = __this->get_size_4();
		return L_0;
	}
}
// System.Void TriangleScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangleScript_Start_m2F005BD3BC00A212554685EAEE2EC2E3437192A7 (TriangleScript_t6E56FC30244CA8AE5461597546EA82FAD254B8A2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rect = GetComponent<RectTransform>();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0;
		L_0 = Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79(__this, /*hidden argument*/Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		__this->set_rect_5(L_0);
		// ChangeSize(size);
		int32_t L_1 = __this->get_size_4();
		VirtActionInvoker1< int32_t >::Invoke(6 /* System.Void Figure::ChangeSize(System.Int32) */, __this, L_1);
		// }
		return;
	}
}
// System.Void TriangleScript::ChangeSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangleScript_ChangeSize_m2311F57000921C03FA7C0FEC4198615EA5EF47C3 (TriangleScript_t6E56FC30244CA8AE5461597546EA82FAD254B8A2 * __this, int32_t ___size0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.size = size;
		int32_t L_0 = ___size0;
		__this->set_size_4(L_0);
		// if (rect == null)
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_1 = __this->get_rect_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// rect = GetComponent<RectTransform>();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_3;
		L_3 = Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79(__this, /*hidden argument*/Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		__this->set_rect_5(L_3);
	}

IL_0021:
	{
		// rect.sizeDelta = new Vector2(size * 70, size * 70);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_4 = __this->get_rect_5();
		int32_t L_5 = ___size0;
		int32_t L_6 = ___size0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_7), ((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)L_5, (int32_t)((int32_t)70))))), ((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)L_6, (int32_t)((int32_t)70))))), /*hidden argument*/NULL);
		NullCheck(L_4);
		RectTransform_set_sizeDelta_m61943618442E31C6FF0556CDFC70940AE7AD04D0(L_4, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 TriangleScript::GetSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TriangleScript_GetSize_m06D7F11D21B7B8EDA377885FB8398C8384B7AAD6 (TriangleScript_t6E56FC30244CA8AE5461597546EA82FAD254B8A2 * __this, const RuntimeMethod* method)
{
	{
		// public override int GetSize() => Size;
		int32_t L_0;
		L_0 = TriangleScript_get_Size_m19FB2C7BA40585E977A8ED40F3983D47269DE244_inline(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String TriangleScript::GetFigureType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TriangleScript_GetFigureType_m37545FA7081685E6AA9C7901BB91FABE6F7CC7C9 (TriangleScript_t6E56FC30244CA8AE5461597546EA82FAD254B8A2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE007B17B06CB84F1B41E40F63F887BC77704FA27);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override string GetFigureType() => "triangle";
		return _stringLiteralE007B17B06CB84F1B41E40F63F887BC77704FA27;
	}
}
// System.Void TriangleScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangleScript__ctor_mEAF36DBE8916A2984F71F624D27AB52B9A62CEDB (TriangleScript_t6E56FC30244CA8AE5461597546EA82FAD254B8A2 * __this, const RuntimeMethod* method)
{
	{
		Figure__ctor_m906BFAA8DC4D2FCBA7A2467D8EF41D098F21D052(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnReleaseDelegate_tF10A7DE9C6B5540DC48F6BEF5131FCE808B0A9F2 (OnReleaseDelegate_tF10A7DE9C6B5540DC48F6BEF5131FCE808B0A9F2 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void ConnectionScript/OnReleaseDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnReleaseDelegate__ctor_mEA271C624586E9705CC24DEC208284BB882D94C8 (OnReleaseDelegate_tF10A7DE9C6B5540DC48F6BEF5131FCE808B0A9F2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void ConnectionScript/OnReleaseDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnReleaseDelegate_Invoke_mA6B4ED60FCF7C6004E5CC058087D79948EA03C0A (OnReleaseDelegate_tF10A7DE9C6B5540DC48F6BEF5131FCE808B0A9F2 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult ConnectionScript/OnReleaseDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnReleaseDelegate_BeginInvoke_m5A6D2BF969C63E6C5293F5B7D61E7731658CB4D4 (OnReleaseDelegate_tF10A7DE9C6B5540DC48F6BEF5131FCE808B0A9F2 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void ConnectionScript/OnReleaseDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnReleaseDelegate_EndInvoke_mDDDE72908E13E3A5C091D46762C8CDBEDCA7B543 (OnReleaseDelegate_tF10A7DE9C6B5540DC48F6BEF5131FCE808B0A9F2 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CircleScript_get_Size_m8E0F46A615DAF38FE08B716A7536964F34DC4554_inline (CircleScript_t14884BEC08D53B1829322C0C274492A9DB232251 * __this, const RuntimeMethod* method)
{
	{
		// public int Size => size;
		int32_t L_0 = __this->get_size_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ResourcesManager_get_Moves_m905B3B50538E90D126B0305B099E2640A29A9177_inline (ResourcesManager_t29353D9703201AB5E65427A519648DD596A2BB17 * __this, const RuntimeMethod* method)
{
	{
		// public int Moves { get => moves; set { moves = value; ChangeText(); } }
		int32_t L_0 = __this->get_moves_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ResourcesManager_get_Energy_mF1915006A4092C0883C05A9345FDD091819FF67E_inline (ResourcesManager_t29353D9703201AB5E65427A519648DD596A2BB17 * __this, const RuntimeMethod* method)
{
	{
		// public int Energy { get => energy; set { energy = value; ChangeText(); } }
		int32_t L_0 = __this->get_energy_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConnectionScript_set_firstObject_mB134803D499B8D8C817EC0BB8C1695FD85FD7F26_inline (ConnectionScript_tADDEC2FCD1578C6E0104429872BA7D6049AE3055 * __this, Figure_tD3F2D6CD703435C5A34BDA0CFAEF315DC8ED30E1 * ___value0, const RuntimeMethod* method)
{
	{
		// public Figure firstObject { get => firstFigure; set => firstFigure = value; }
		Figure_tD3F2D6CD703435C5A34BDA0CFAEF315DC8ED30E1 * L_0 = ___value0;
		__this->set_firstFigure_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConnectionScript_set_secondObject_m40036D9FA970F378B09476830B535FBC0CCD8339_inline (ConnectionScript_tADDEC2FCD1578C6E0104429872BA7D6049AE3055 * __this, Figure_tD3F2D6CD703435C5A34BDA0CFAEF315DC8ED30E1 * ___value0, const RuntimeMethod* method)
{
	{
		// public Figure secondObject { get => secondFigure; set { secondFigure = value; } }
		Figure_tD3F2D6CD703435C5A34BDA0CFAEF315DC8ED30E1 * L_0 = ___value0;
		__this->set_secondFigure_5(L_0);
		// public Figure secondObject { get => secondFigure; set { secondFigure = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * __this, const RuntimeMethod* method)
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_0 = __this->get_m_OnClick_20();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SceneInfo_get_CountCircles_m66360D1B1A81C690D80326E5E79628839E8EF2B7_inline (SceneInfo_tB4D0254BE2C5AB81D3EFA7E0D49A8A93F2DFB6EC * __this, const RuntimeMethod* method)
{
	{
		// public int CountCircles => countCircles;
		int32_t L_0 = __this->get_countCircles_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SceneInfo_get_CountSquares_mD7ECCF632069BC495044C6C00EB9C6489A65A31E_inline (SceneInfo_tB4D0254BE2C5AB81D3EFA7E0D49A8A93F2DFB6EC * __this, const RuntimeMethod* method)
{
	{
		// public int CountSquares => countSquares;
		int32_t L_0 = __this->get_countSquares_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SceneInfo_get_CountTriangles_mAF603CD65C7C05096A83922506FF117691E870F6_inline (SceneInfo_tB4D0254BE2C5AB81D3EFA7E0D49A8A93F2DFB6EC * __this, const RuntimeMethod* method)
{
	{
		// public int CountTriangles => countTriangles;
		int32_t L_0 = __this->get_countTriangles_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SquareScript_get_Size_m960C51137FE85FC63FEFB7CC533A47D322B6BCCB_inline (SquareScript_t363231F809675EA1AD40871AA405406C46E2AEC7 * __this, const RuntimeMethod* method)
{
	{
		// public int Size => size;
		int32_t L_0 = __this->get_size_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TriangleScript_get_Size_m19FB2C7BA40585E977A8ED40F3983D47269DE244_inline (TriangleScript_t6E56FC30244CA8AE5461597546EA82FAD254B8A2 * __this, const RuntimeMethod* method)
{
	{
		// public int Size => size;
		int32_t L_0 = __this->get_size_4();
		return L_0;
	}
}
