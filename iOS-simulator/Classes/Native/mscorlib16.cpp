#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056;
// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B;
// System.Text.DecoderNLS
struct DecoderNLS_tE5B1B7D68B698C0B65FBEE94EAE2453FFD3D538A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4;
// System.Text.EncoderFallbackBuffer
struct EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0;
// System.Text.EncoderNLS
struct EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.Threading.EventWaitHandle
struct EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C;
// System.Exception
struct Exception_t;
// System.Threading.ExecutionContext
struct ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IComparer
struct IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t2A667D8777429024D8A3CB3D9AE29EA79FEA6176;
// System.Security.Principal.IPrincipal
struct IPrincipal_t850ACE1F48327B64F266DD2C6FD8C5F56E4889E2;
// System.Threading.InternalThread
struct InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// System.Collections.ListDictionaryInternal
struct ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.MulticastDelegate
struct MulticastDelegate_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1;
// System.Runtime.Serialization.SerializationException
struct SerializationException_tDB38C13A2ABF407C381E3F332D197AC1AD097A92;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1;
// System.Collections.SortedList
struct SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165;
// System.String
struct String_t;
// System.Threading.Thread
struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414;
// System.Threading.ThreadStart
struct ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687;
// System.Threading.Timer
struct Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB;
// System.Threading.TimerCallback
struct TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814;
// System.Type
struct Type_t;
// System.TypeName
struct TypeName_t714DD2B9BA4134CE17349D95281A1F750D78D60F;
// System.Text.UTF32Encoding
struct UTF32Encoding_t54B51C8FAC5B2EAB4BDFACBBA06DB6117A38D014;
// System.Text.UTF7Encoding
struct UTF7Encoding_tA5454D96973119953BD301F20B9E59C77B5FA076;
// System.Text.UTF8Encoding
struct UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282;
// System.Text.UnicodeEncoding
struct UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Threading.WaitCallback
struct WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319;
// System.Collections.ListDictionaryInternal/DictionaryNode
struct DictionaryNode_t9A01FA01782F6D162BA158736A5FB81CB893A33C;
// System.Collections.SortedList/KeyList
struct KeyList_t90FF026A62D56329DEFC1B768358977E70839881;
// System.Collections.SortedList/ValueList
struct ValueList_t3A0529729679D12F7F3AF77C48E10D5E6009CD3D;
// System.TimeZoneInfo/<>c
struct U3CU3Ec_t24F903F915888347E8B19C16314DF4C75387324E;
// System.TimeZoneInfo/AdjustmentRule
struct AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304;
// System.TimeZoneInfo/TIME_ZONE_INFORMATION
struct TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578;
// System.Threading.Timer/Scheduler
struct Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8;
// System.Threading.Timer/TimerComparer
struct TimerComparer_t1899647CFE875978843BE8ABA01C10956F1E740B;
// System.TypeIdentifiers/Display
struct Display_tB07FE33B5E37AC259B2FCC8EC820AC5CEDEAC41E;
// System.TypeNames/ATypeName
struct ATypeName_t19F245ED1619C78770F92C899C4FE364DBF30861;
// System.Text.UTF32Encoding/UTF32Decoder
struct UTF32Decoder_t38867B08AD03138702C713129B79529EC4528DB7;
// System.Text.UTF7Encoding/Decoder
struct Decoder_t6C0639E0DF1E52128429AC770CA9F2557A8E54C9;
// System.Text.UTF7Encoding/DecoderUTF7Fallback
struct DecoderUTF7Fallback_tBEF9A09732FAB23368825AE7C14C0EBF1F9028A8;
// System.Text.UTF7Encoding/DecoderUTF7FallbackBuffer
struct DecoderUTF7FallbackBuffer_tED3431DB4A6B4F48D1F1433A8E672F8B110D819A;
// System.Text.UTF7Encoding/Encoder
struct Encoder_tF895184EA91019AA3995A8547FD56A3E0D16D1B4;
// System.Text.UTF8Encoding/UTF8Decoder
struct UTF8Decoder_tD2359F0F52206B911EBC3222E627191C829F4C65;
// System.Text.UTF8Encoding/UTF8Encoder
struct UTF8Encoder_t3408DBF93D79A981F50954F660E33BA13FE29FD3;
// System.Text.UnicodeEncoding/Decoder
struct Decoder_tC3DC16951ED8FCF98278FC7F0804070A9C218109;
// Microsoft.Win32.Win32Native/WIN32_FIND_DATA
struct WIN32_FIND_DATA_tE88493B22E1CDD2E595CA4F800949555399AB3C7;
// System.Console/WindowsConsole/WindowsCancelHandler
struct WindowsCancelHandler_tFD0F0B721F93ACA04D9CD9340DA39075A8FF2ACF;
// System.Collections.ListDictionaryInternal/NodeKeyValueCollection/NodeKeyValueEnumerator
struct NodeKeyValueEnumerator_tE6977A5C0AF3F0E001B951488690F2693BAB3955;
// System.IO.Stream/SynchronousAsyncResult/<>c
struct U3CU3Ec_t0B9BA392160C64553C28F93C014479CD7CDC88CB;
// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349;
// System.Comparison`1<System.TimeZoneInfo/AdjustmentRule>
struct Comparison_1_tDAC4CC47FDC3DBE8E8A9DF5789C71CAA2B42AEC1;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162;
// System.Func`1<System.Threading.ManualResetEvent>
struct Func_1_t5676838A0CF4B34BFAE91E1902234AA2C5C4BE05;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.Threading.Timer>
struct List_1_t537143C180C9FB69517B6C26205D2AA824591563;
// System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.SByte[]
struct SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Threading.Timer[]
struct TimerU5BU5D_t205623A7C76F326689222249DAF432D18EB88387;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;

IL2CPP_EXTERN_C RuntimeClass* AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DayOfWeek_t9E9D87E7A85C119F741167E9F8C613ABFB0A4AC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DecoderUTF7FallbackBuffer_tED3431DB4A6B4F48D1F1433A8E672F8B110D819A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DecoderUTF7Fallback_tBEF9A09732FAB23368825AE7C14C0EBF1F9028A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t537143C180C9FB69517B6C26205D2AA824591563_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerializationException_tDB38C13A2ABF407C381E3F332D197AC1AD097A92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimerComparer_t1899647CFE875978843BE8ABA01C10956F1E740B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeName_t714DD2B9BA4134CE17349D95281A1F750D78D60F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t0B9BA392160C64553C28F93C014479CD7CDC88CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t24F903F915888347E8B19C16314DF4C75387324E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral018504CD3A7D232B591A18D6B7B570DEE8B65BAB;
IL2CPP_EXTERN_C String_t* _stringLiteral01AC6AAA845493AD30953C71C8C9EABF0D0124E4;
IL2CPP_EXTERN_C String_t* _stringLiteral0763FE5EB1EAC35DDF3CD44B5645A71888066226;
IL2CPP_EXTERN_C String_t* _stringLiteral0A2679566878DB123603B221EB69443EBD3A7BCB;
IL2CPP_EXTERN_C String_t* _stringLiteral1450C988C6B4D028AF5A543FC4A7A8FA9BA62F30;
IL2CPP_EXTERN_C String_t* _stringLiteral1C55B63DB181316212E6D01717E65E1FB557B6B8;
IL2CPP_EXTERN_C String_t* _stringLiteral27898ED9175E943FDE24F2BF2E86B60EEDFF15D2;
IL2CPP_EXTERN_C String_t* _stringLiteral2920727F7824CA7782C4813D6F7312ABCDA53CCD;
IL2CPP_EXTERN_C String_t* _stringLiteral29988D0F9BCADFABFF66CBF5AB73096D1CAE3128;
IL2CPP_EXTERN_C String_t* _stringLiteral30D99F99F1F4688CE08A3BF1B034C9CD49C19174;
IL2CPP_EXTERN_C String_t* _stringLiteral315818C03CCC2B10070DF2D4EBD09EB6C4C66E58;
IL2CPP_EXTERN_C String_t* _stringLiteral35FD9409286E50999789090A9930776FD3F2B13E;
IL2CPP_EXTERN_C String_t* _stringLiteral3AF0F65A629E1F9641A341CFA19B861690DA71B5;
IL2CPP_EXTERN_C String_t* _stringLiteral445399A595B24C0202D28AE23969D8FFF38F572A;
IL2CPP_EXTERN_C String_t* _stringLiteral494836B9EFC41FFD5CB7E6CA5BA325833F323668;
IL2CPP_EXTERN_C String_t* _stringLiteral49D64DCFE768AFB45BCA7F089DBB249FA1DA859C;
IL2CPP_EXTERN_C String_t* _stringLiteral4B63EF6929AE971A204D72191783C54436124C51;
IL2CPP_EXTERN_C String_t* _stringLiteral592EDDBE99E3B537ABCB79EA8611A7CB7989097F;
IL2CPP_EXTERN_C String_t* _stringLiteral63FC874122847D14784CB3ADBE59A08B9558FA97;
IL2CPP_EXTERN_C String_t* _stringLiteral645F0B83FF7CADECF44AD1B83B13002DA97FBA1E;
IL2CPP_EXTERN_C String_t* _stringLiteral74D560302B70C9D57AC7C2692A505F648FD1B1A4;
IL2CPP_EXTERN_C String_t* _stringLiteral76EE6AC9CE84AB75E1822F990EDC05A4A83E34CD;
IL2CPP_EXTERN_C String_t* _stringLiteral79C59F2479E52A939A8A16D011943BDBDFBEE65E;
IL2CPP_EXTERN_C String_t* _stringLiteral83A0203482067140327BBF852248E02658CAE786;
IL2CPP_EXTERN_C String_t* _stringLiteral83DC2909B9E8CF20AD23217F95DC9967B22DD3F5;
IL2CPP_EXTERN_C String_t* _stringLiteral8994D295B1EC3F358FB1CDEB6465D3A478A7F949;
IL2CPP_EXTERN_C String_t* _stringLiteral8BB31BB6FEE4CFF323F9B357F30EDA29E1B5CBA7;
IL2CPP_EXTERN_C String_t* _stringLiteral91A84CFC28DE4E260ED3B9388BE19E585D150D7F;
IL2CPP_EXTERN_C String_t* _stringLiteral92057E8211A0EA82031051D2B0E70ADB04D156C7;
IL2CPP_EXTERN_C String_t* _stringLiteral97788FC356CCFD978CEEDA2BF269D6954F4D0740;
IL2CPP_EXTERN_C String_t* _stringLiteral9C4034C5C6F417782BE8DF6DD6771CA6B67948DF;
IL2CPP_EXTERN_C String_t* _stringLiteralA4236146F56D25D2D915B8BCD28F0936D3257EE6;
IL2CPP_EXTERN_C String_t* _stringLiteralA50A38EF2D7858A83B908FDB41C862EF6FD5FAE1;
IL2CPP_EXTERN_C String_t* _stringLiteralA595476C6F6D3E2C3406DD69BC73859EA4408F2F;
IL2CPP_EXTERN_C String_t* _stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085;
IL2CPP_EXTERN_C String_t* _stringLiteralA7CB599B22D521F814BCCB6E5B683D86AA12640B;
IL2CPP_EXTERN_C String_t* _stringLiteralAF00BC34B67009EEE0394C51F26D6D5457EC69F6;
IL2CPP_EXTERN_C String_t* _stringLiteralB5411972E9968E9978EF95EF84FB5F5FE4F0F734;
IL2CPP_EXTERN_C String_t* _stringLiteralBDC4CEC2209B63293A24317DF536AF666EAC59E5;
IL2CPP_EXTERN_C String_t* _stringLiteralC093A43C681B135B2CCBFD21AF1C61BC84B52631;
IL2CPP_EXTERN_C String_t* _stringLiteralC71EEB076C9C234A1E39FDB9B0DCFC8851BA4D7F;
IL2CPP_EXTERN_C String_t* _stringLiteralC760D2328BD1CF4750B1C22486E5906ACA0DD030;
IL2CPP_EXTERN_C String_t* _stringLiteralD08F78ED8610B5137CB74E4B8EE06DCA431A6DF5;
IL2CPP_EXTERN_C String_t* _stringLiteralD3EDB56B30B60F6E6107AB89FE5358A528045F13;
IL2CPP_EXTERN_C String_t* _stringLiteralD41010780259F355E00BAB0A989D365B9CD48A8F;
IL2CPP_EXTERN_C String_t* _stringLiteralD5E0D3D064AAABFE3EC781EFE9126A80D40BED15;
IL2CPP_EXTERN_C String_t* _stringLiteralD5FECA9C07F11E0EFEDB17DCA043A555B4DD4FF2;
IL2CPP_EXTERN_C String_t* _stringLiteralD62A6E8579B9E226105A0C28889FEEC94AAE3E9A;
IL2CPP_EXTERN_C String_t* _stringLiteralD94C250F2B1277449096D60BF52D91C01BC28947;
IL2CPP_EXTERN_C String_t* _stringLiteralE5A6B5B780158F734FA0A11A802E762EF7BDD272;
IL2CPP_EXTERN_C String_t* _stringLiteralEA8C788F462D3BDFF1A2C0A8B053AAA9567571BA;
IL2CPP_EXTERN_C String_t* _stringLiteralF1FA676B434A01F8B0C76AACD342F3261CDB272A;
IL2CPP_EXTERN_C String_t* _stringLiteralF38018A5E6704152C358CEE388C935AA44BFE927;
IL2CPP_EXTERN_C String_t* _stringLiteralF8D08FCF1537043BF0289FA98C51BF5A3AC7C618;
IL2CPP_EXTERN_C const RuntimeMethod* AdjustmentRule_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m17BE62BEC7C588C0B755CBB5426287665986474D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AdjustmentRule_System_Runtime_Serialization_ISerializable_GetObjectData_mCF3E994E8DEAF796477DCA219855A09423139754_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AdjustmentRule_ValidateAdjustmentRule_m2D1CE9572A7AA306E36ADD93AA2CEA2858B77023_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AdjustmentRule__ctor_m2A972339AE991722C67C074B585F461F0AECEF3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DecoderUTF7FallbackBuffer_InternalFallback_mED8FF7722E62493ABE76E8CE1887618F6A720300_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Decoder_System_Runtime_Serialization_ISerializable_GetObjectData_m3ED01524C080A21879E3BB557F043586DA3C2AE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Decoder_System_Runtime_Serialization_ISerializable_GetObjectData_mFEA452EA85957C6375B8F3E3551D2DA9317E1165_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Decoder__ctor_m30B1EA2BF40A4E5A3F4BF3C7B6FE7377380A1038_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Decoder__ctor_m8A1BF2DA9101627DEFF9629F0E16F8A0A8917DE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Encoder_System_Runtime_Serialization_ISerializable_GetObjectData_m6092B473125DCAB361E2692A0A37F4F175154463_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Encoder__ctor_mD7BEBE37C16C8C8BFFFFDB86681B51F2142A8F7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mB29575CEA902024C74743A09C2AD6A27C71FA14C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mC1A3BC5C09490DE7BD41BBE1BFD81F870F508CC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m883AB85828B7C88FE9A8C7802E93E6CE979EA000_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Capacity_mD0C25FAD6973D3D67381859E776ECAE953FDFD6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m9F4CBA17931C03FCCABF06CE8F29187F98D1F260_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m9C036D14366E9BBB52436252522EDE206DC6EB35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Capacity_mEA0D56662D94226185342D2A0FD7C1860C5FFA7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NodeKeyValueEnumerator_MoveNext_mA39E1A22D0DAD6C05709B603A264DEAD6F5560DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NodeKeyValueEnumerator_Reset_m9F789418938587F29F3B212BCAF8112317FA5943_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NodeKeyValueEnumerator_get_Current_m3D7CD1472E9AEA82F13366746FA675E0DCA7565A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Scheduler_SchedulerThread_mDB9CB3C0FCB84658BB01FFF19F5995869778D8C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Scheduler_TimerCB_mFF78E60DAA18DD3E772F2113D46FB51241C957A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TransitionTime_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m7531877356A7E49F851E7C075B15905C94DBA18B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TransitionTime_System_Runtime_Serialization_ISerializable_GetObjectData_mF3DC458CCBC82FA8027E237CE05A4B3D44E6D614_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TransitionTime_ValidateTransitionTime_m26FF63A3CD81059DCD206740F4C55820E979F844_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TransitionTime__ctor_mBE66AC04B8264C98E4EE51D0939F7CD57A3CBBC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UTF8Decoder_System_Runtime_Serialization_ISerializable_GetObjectData_m660874DE4EB3E16DF79AF02610D1DCA0D9A2E4BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UTF8Decoder__ctor_mF827B4315912C53F248B79A77CFDE99759111353_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UTF8Encoder_System_Runtime_Serialization_ISerializable_GetObjectData_m2EB22FA8BBBFC1038DA48A6014DDFD6FF57D93D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UTF8Encoder__ctor_m21812FB83AD489EC7871F626BC251F3DEDFC8506_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* DayOfWeek_t9E9D87E7A85C119F741167E9F8C613ABFB0A4AC7_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t ATypeName_Equals_m128A844F0CC6E6754CE865684C25F47EEAD342C1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ATypeName_Equals_m6BDE7D1613B8F351AC3DCB2C9BDE29C23A92CC22_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AdjustmentRule_CreateAdjustmentRule_mC90086998B3DF5F9492A4B2281CFEDED04E1E6AE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AdjustmentRule_Equals_m51F598650B478A0A86830DF8445D12D7C6A0CE41_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AdjustmentRule_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m17BE62BEC7C588C0B755CBB5426287665986474D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AdjustmentRule_System_Runtime_Serialization_ISerializable_GetObjectData_mCF3E994E8DEAF796477DCA219855A09423139754_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AdjustmentRule_ValidateAdjustmentRule_m2D1CE9572A7AA306E36ADD93AA2CEA2858B77023_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AdjustmentRule__ctor_m2A972339AE991722C67C074B585F461F0AECEF3B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DecoderUTF7FallbackBuffer_InternalFallback_mED8FF7722E62493ABE76E8CE1887618F6A720300_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DecoderUTF7Fallback_CreateFallbackBuffer_m2A16D01FA0596522EC75B9424B19FC879714AD1F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DecoderUTF7Fallback_Equals_m8A55122D6E31F8C487AD5AFAA5BE6352C0151656_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Decoder_System_Runtime_Serialization_ISerializable_GetObjectData_m3ED01524C080A21879E3BB557F043586DA3C2AE0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Decoder_System_Runtime_Serialization_ISerializable_GetObjectData_mFEA452EA85957C6375B8F3E3551D2DA9317E1165_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Decoder__ctor_m30B1EA2BF40A4E5A3F4BF3C7B6FE7377380A1038_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Decoder__ctor_m8A1BF2DA9101627DEFF9629F0E16F8A0A8917DE1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Encoder_System_Runtime_Serialization_ISerializable_GetObjectData_m6092B473125DCAB361E2692A0A37F4F175154463_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Encoder__ctor_mD7BEBE37C16C8C8BFFFFDB86681B51F2142A8F7E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NodeKeyValueEnumerator_MoveNext_mA39E1A22D0DAD6C05709B603A264DEAD6F5560DB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NodeKeyValueEnumerator_Reset_m9F789418938587F29F3B212BCAF8112317FA5943_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NodeKeyValueEnumerator_get_Current_m3D7CD1472E9AEA82F13366746FA675E0DCA7565A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Scheduler_Add_m97B241DC232711E7C7D9057DA0BF7D657808D981_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Scheduler_FindByDueTime_m97EC1ECDEE06ABC0ADD1CD8D4C3B6F057680F677_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Scheduler_SchedulerThread_mDB9CB3C0FCB84658BB01FFF19F5995869778D8C7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Scheduler_ShrinkIfNeeded_m053057191CA310785B2C8EC2E8FB07A7E00E499C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Scheduler_TimerCB_mFF78E60DAA18DD3E772F2113D46FB51241C957A6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Scheduler__cctor_m36805653C9D55766CEE82413432DFBC5B5DBFB29_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Scheduler__ctor_mFA8C77435650B38315E392A0D1C66EC7DC974E82_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Scheduler_get_Instance_mEB15B6A61E0B259CFC8BABE4376A8DEC2962BC86_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TimerComparer_Compare_mC54D4F4F5F33A28C3981BD1D59A071659F9E90DE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TransitionTime_Equals_m4976405B1B8F5E7A5C269D4760CD239DC18E5631_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TransitionTime_Equals_mD63D4051F9FCD2B6277B194A42CCA50934E7C2B6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TransitionTime_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m7531877356A7E49F851E7C075B15905C94DBA18B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TransitionTime_System_Runtime_Serialization_ISerializable_GetObjectData_mF3DC458CCBC82FA8027E237CE05A4B3D44E6D614_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TransitionTime_ValidateTransitionTime_m26FF63A3CD81059DCD206740F4C55820E979F844_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TransitionTime__ctor_mBE66AC04B8264C98E4EE51D0939F7CD57A3CBBC3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3Cget_AsyncWaitHandleU3Eb__12_0_m30F2C3EEF4109B825474FF30D6A4A4291DC3848B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_m7FB8166A66FF58669CB59F32A9301B483CB8BE4A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_m97C392FC85751EDF7BC34014E9CCC3213E438AFC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UTF8Decoder_System_Runtime_Serialization_ISerializable_GetObjectData_m660874DE4EB3E16DF79AF02610D1DCA0D9A2E4BB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UTF8Decoder__ctor_mF827B4315912C53F248B79A77CFDE99759111353_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UTF8Encoder_System_Runtime_Serialization_ISerializable_GetObjectData_m2EB22FA8BBBFC1038DA48A6014DDFD6FF57D93D2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UTF8Encoder__ctor_m21812FB83AD489EC7871F626BC251F3DEDFC8506_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsCancelHandler_BeginInvoke_m3F4FB809BF25992CAA49781D6C2DAE6B8B967322_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578;;
struct TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshaled_com;
struct TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshaled_com;;
struct TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshaled_pinvoke;
struct TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshaled_pinvoke;;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// Microsoft.Win32.Win32Native_WIN32_FIND_DATA
struct  WIN32_FIND_DATA_tE88493B22E1CDD2E595CA4F800949555399AB3C7  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.Win32.Win32Native_WIN32_FIND_DATA::dwFileAttributes
	int32_t ___dwFileAttributes_0;
	// System.String Microsoft.Win32.Win32Native_WIN32_FIND_DATA::cFileName
	String_t* ___cFileName_1;

public:
	inline static int32_t get_offset_of_dwFileAttributes_0() { return static_cast<int32_t>(offsetof(WIN32_FIND_DATA_tE88493B22E1CDD2E595CA4F800949555399AB3C7, ___dwFileAttributes_0)); }
	inline int32_t get_dwFileAttributes_0() const { return ___dwFileAttributes_0; }
	inline int32_t* get_address_of_dwFileAttributes_0() { return &___dwFileAttributes_0; }
	inline void set_dwFileAttributes_0(int32_t value)
	{
		___dwFileAttributes_0 = value;
	}

	inline static int32_t get_offset_of_cFileName_1() { return static_cast<int32_t>(offsetof(WIN32_FIND_DATA_tE88493B22E1CDD2E595CA4F800949555399AB3C7, ___cFileName_1)); }
	inline String_t* get_cFileName_1() const { return ___cFileName_1; }
	inline String_t** get_address_of_cFileName_1() { return &___cFileName_1; }
	inline void set_cFileName_1(String_t* value)
	{
		___cFileName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cFileName_1), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Threading.Timer>
struct  List_1_t537143C180C9FB69517B6C26205D2AA824591563  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TimerU5BU5D_t205623A7C76F326689222249DAF432D18EB88387* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t537143C180C9FB69517B6C26205D2AA824591563, ____items_1)); }
	inline TimerU5BU5D_t205623A7C76F326689222249DAF432D18EB88387* get__items_1() const { return ____items_1; }
	inline TimerU5BU5D_t205623A7C76F326689222249DAF432D18EB88387** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TimerU5BU5D_t205623A7C76F326689222249DAF432D18EB88387* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t537143C180C9FB69517B6C26205D2AA824591563, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t537143C180C9FB69517B6C26205D2AA824591563, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t537143C180C9FB69517B6C26205D2AA824591563, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t537143C180C9FB69517B6C26205D2AA824591563_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TimerU5BU5D_t205623A7C76F326689222249DAF432D18EB88387* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t537143C180C9FB69517B6C26205D2AA824591563_StaticFields, ____emptyArray_5)); }
	inline TimerU5BU5D_t205623A7C76F326689222249DAF432D18EB88387* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TimerU5BU5D_t205623A7C76F326689222249DAF432D18EB88387** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TimerU5BU5D_t205623A7C76F326689222249DAF432D18EB88387* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.ListDictionaryInternal
struct  ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A  : public RuntimeObject
{
public:
	// System.Collections.ListDictionaryInternal_DictionaryNode System.Collections.ListDictionaryInternal::head
	DictionaryNode_t9A01FA01782F6D162BA158736A5FB81CB893A33C * ___head_0;
	// System.Int32 System.Collections.ListDictionaryInternal::version
	int32_t ___version_1;
	// System.Int32 System.Collections.ListDictionaryInternal::count
	int32_t ___count_2;

public:
	inline static int32_t get_offset_of_head_0() { return static_cast<int32_t>(offsetof(ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A, ___head_0)); }
	inline DictionaryNode_t9A01FA01782F6D162BA158736A5FB81CB893A33C * get_head_0() const { return ___head_0; }
	inline DictionaryNode_t9A01FA01782F6D162BA158736A5FB81CB893A33C ** get_address_of_head_0() { return &___head_0; }
	inline void set_head_0(DictionaryNode_t9A01FA01782F6D162BA158736A5FB81CB893A33C * value)
	{
		___head_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___head_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}
};


// System.Collections.ListDictionaryInternal_DictionaryNode
struct  DictionaryNode_t9A01FA01782F6D162BA158736A5FB81CB893A33C  : public RuntimeObject
{
public:
	// System.Object System.Collections.ListDictionaryInternal_DictionaryNode::key
	RuntimeObject * ___key_0;
	// System.Object System.Collections.ListDictionaryInternal_DictionaryNode::value
	RuntimeObject * ___value_1;
	// System.Collections.ListDictionaryInternal_DictionaryNode System.Collections.ListDictionaryInternal_DictionaryNode::next
	DictionaryNode_t9A01FA01782F6D162BA158736A5FB81CB893A33C * ___next_2;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(DictionaryNode_t9A01FA01782F6D162BA158736A5FB81CB893A33C, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(DictionaryNode_t9A01FA01782F6D162BA158736A5FB81CB893A33C, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}

	inline static int32_t get_offset_of_next_2() { return static_cast<int32_t>(offsetof(DictionaryNode_t9A01FA01782F6D162BA158736A5FB81CB893A33C, ___next_2)); }
	inline DictionaryNode_t9A01FA01782F6D162BA158736A5FB81CB893A33C * get_next_2() const { return ___next_2; }
	inline DictionaryNode_t9A01FA01782F6D162BA158736A5FB81CB893A33C ** get_address_of_next_2() { return &___next_2; }
	inline void set_next_2(DictionaryNode_t9A01FA01782F6D162BA158736A5FB81CB893A33C * value)
	{
		___next_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___next_2), (void*)value);
	}
};


// System.Collections.ListDictionaryInternal_NodeKeyValueCollection_NodeKeyValueEnumerator
struct  NodeKeyValueEnumerator_tE6977A5C0AF3F0E001B951488690F2693BAB3955  : public RuntimeObject
{
public:
	// System.Collections.ListDictionaryInternal System.Collections.ListDictionaryInternal_NodeKeyValueCollection_NodeKeyValueEnumerator::list
	ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A * ___list_0;
	// System.Collections.ListDictionaryInternal_DictionaryNode System.Collections.ListDictionaryInternal_NodeKeyValueCollection_NodeKeyValueEnumerator::current
	DictionaryNode_t9A01FA01782F6D162BA158736A5FB81CB893A33C * ___current_1;
	// System.Int32 System.Collections.ListDictionaryInternal_NodeKeyValueCollection_NodeKeyValueEnumerator::version
	int32_t ___version_2;
	// System.Boolean System.Collections.ListDictionaryInternal_NodeKeyValueCollection_NodeKeyValueEnumerator::isKeys
	bool ___isKeys_3;
	// System.Boolean System.Collections.ListDictionaryInternal_NodeKeyValueCollection_NodeKeyValueEnumerator::start
	bool ___start_4;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(NodeKeyValueEnumerator_tE6977A5C0AF3F0E001B951488690F2693BAB3955, ___list_0)); }
	inline ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A * get_list_0() const { return ___list_0; }
	inline ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_current_1() { return static_cast<int32_t>(offsetof(NodeKeyValueEnumerator_tE6977A5C0AF3F0E001B951488690F2693BAB3955, ___current_1)); }
	inline DictionaryNode_t9A01FA01782F6D162BA158736A5FB81CB893A33C * get_current_1() const { return ___current_1; }
	inline DictionaryNode_t9A01FA01782F6D162BA158736A5FB81CB893A33C ** get_address_of_current_1() { return &___current_1; }
	inline void set_current_1(DictionaryNode_t9A01FA01782F6D162BA158736A5FB81CB893A33C * value)
	{
		___current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_1), (void*)value);
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(NodeKeyValueEnumerator_tE6977A5C0AF3F0E001B951488690F2693BAB3955, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_isKeys_3() { return static_cast<int32_t>(offsetof(NodeKeyValueEnumerator_tE6977A5C0AF3F0E001B951488690F2693BAB3955, ___isKeys_3)); }
	inline bool get_isKeys_3() const { return ___isKeys_3; }
	inline bool* get_address_of_isKeys_3() { return &___isKeys_3; }
	inline void set_isKeys_3(bool value)
	{
		___isKeys_3 = value;
	}

	inline static int32_t get_offset_of_start_4() { return static_cast<int32_t>(offsetof(NodeKeyValueEnumerator_tE6977A5C0AF3F0E001B951488690F2693BAB3955, ___start_4)); }
	inline bool get_start_4() const { return ___start_4; }
	inline bool* get_address_of_start_4() { return &___start_4; }
	inline void set_start_4(bool value)
	{
		___start_4 = value;
	}
};


// System.Collections.SortedList
struct  SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165  : public RuntimeObject
{
public:
	// System.Object[] System.Collections.SortedList::keys
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___keys_0;
	// System.Object[] System.Collections.SortedList::values
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___values_1;
	// System.Int32 System.Collections.SortedList::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.SortedList::version
	int32_t ___version_3;
	// System.Collections.IComparer System.Collections.SortedList::comparer
	RuntimeObject* ___comparer_4;
	// System.Collections.SortedList_KeyList System.Collections.SortedList::keyList
	KeyList_t90FF026A62D56329DEFC1B768358977E70839881 * ___keyList_5;
	// System.Collections.SortedList_ValueList System.Collections.SortedList::valueList
	ValueList_t3A0529729679D12F7F3AF77C48E10D5E6009CD3D * ___valueList_6;

public:
	inline static int32_t get_offset_of_keys_0() { return static_cast<int32_t>(offsetof(SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165, ___keys_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_keys_0() const { return ___keys_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_keys_0() { return &___keys_0; }
	inline void set_keys_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___keys_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_0), (void*)value);
	}

	inline static int32_t get_offset_of_values_1() { return static_cast<int32_t>(offsetof(SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165, ___values_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_values_1() const { return ___values_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_values_1() { return &___values_1; }
	inline void set_values_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___values_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_comparer_4() { return static_cast<int32_t>(offsetof(SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165, ___comparer_4)); }
	inline RuntimeObject* get_comparer_4() const { return ___comparer_4; }
	inline RuntimeObject** get_address_of_comparer_4() { return &___comparer_4; }
	inline void set_comparer_4(RuntimeObject* value)
	{
		___comparer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_4), (void*)value);
	}

	inline static int32_t get_offset_of_keyList_5() { return static_cast<int32_t>(offsetof(SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165, ___keyList_5)); }
	inline KeyList_t90FF026A62D56329DEFC1B768358977E70839881 * get_keyList_5() const { return ___keyList_5; }
	inline KeyList_t90FF026A62D56329DEFC1B768358977E70839881 ** get_address_of_keyList_5() { return &___keyList_5; }
	inline void set_keyList_5(KeyList_t90FF026A62D56329DEFC1B768358977E70839881 * value)
	{
		___keyList_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keyList_5), (void*)value);
	}

	inline static int32_t get_offset_of_valueList_6() { return static_cast<int32_t>(offsetof(SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165, ___valueList_6)); }
	inline ValueList_t3A0529729679D12F7F3AF77C48E10D5E6009CD3D * get_valueList_6() const { return ___valueList_6; }
	inline ValueList_t3A0529729679D12F7F3AF77C48E10D5E6009CD3D ** get_address_of_valueList_6() { return &___valueList_6; }
	inline void set_valueList_6(ValueList_t3A0529729679D12F7F3AF77C48E10D5E6009CD3D * value)
	{
		___valueList_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___valueList_6), (void*)value);
	}
};

struct SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165_StaticFields
{
public:
	// System.Object[] System.Collections.SortedList::emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___emptyArray_7;

public:
	inline static int32_t get_offset_of_emptyArray_7() { return static_cast<int32_t>(offsetof(SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165_StaticFields, ___emptyArray_7)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_emptyArray_7() const { return ___emptyArray_7; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_emptyArray_7() { return &___emptyArray_7; }
	inline void set_emptyArray_7(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___emptyArray_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___emptyArray_7), (void*)value);
	}
};


// System.IO.Stream_SynchronousAsyncResult_<>c
struct  U3CU3Ec_t0B9BA392160C64553C28F93C014479CD7CDC88CB  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t0B9BA392160C64553C28F93C014479CD7CDC88CB_StaticFields
{
public:
	// System.IO.Stream_SynchronousAsyncResult_<>c System.IO.Stream_SynchronousAsyncResult_<>c::<>9
	U3CU3Ec_t0B9BA392160C64553C28F93C014479CD7CDC88CB * ___U3CU3E9_0;
	// System.Func`1<System.Threading.ManualResetEvent> System.IO.Stream_SynchronousAsyncResult_<>c::<>9__12_0
	Func_1_t5676838A0CF4B34BFAE91E1902234AA2C5C4BE05 * ___U3CU3E9__12_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t0B9BA392160C64553C28F93C014479CD7CDC88CB_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t0B9BA392160C64553C28F93C014479CD7CDC88CB * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t0B9BA392160C64553C28F93C014479CD7CDC88CB ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t0B9BA392160C64553C28F93C014479CD7CDC88CB * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__12_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t0B9BA392160C64553C28F93C014479CD7CDC88CB_StaticFields, ___U3CU3E9__12_0_1)); }
	inline Func_1_t5676838A0CF4B34BFAE91E1902234AA2C5C4BE05 * get_U3CU3E9__12_0_1() const { return ___U3CU3E9__12_0_1; }
	inline Func_1_t5676838A0CF4B34BFAE91E1902234AA2C5C4BE05 ** get_address_of_U3CU3E9__12_0_1() { return &___U3CU3E9__12_0_1; }
	inline void set_U3CU3E9__12_0_1(Func_1_t5676838A0CF4B34BFAE91E1902234AA2C5C4BE05 * value)
	{
		___U3CU3E9__12_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__12_0_1), (void*)value);
	}
};


// System.MarshalByRefObject
struct  MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct  CriticalFinalizerObject_tA3367C832FFE7434EB3C15C7136AF25524150997  : public RuntimeObject
{
public:

public:
};


// System.Runtime.Serialization.SerializationInfo
struct  SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1  : public RuntimeObject
{
public:
	// System.String[] System.Runtime.Serialization.SerializationInfo::m_members
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_members_0;
	// System.Object[] System.Runtime.Serialization.SerializationInfo::m_data
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_data_1;
	// System.Type[] System.Runtime.Serialization.SerializationInfo::m_types
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___m_types_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Serialization.SerializationInfo::m_nameToIndex
	Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * ___m_nameToIndex_3;
	// System.Int32 System.Runtime.Serialization.SerializationInfo::m_currMember
	int32_t ___m_currMember_4;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::m_converter
	RuntimeObject* ___m_converter_5;
	// System.String System.Runtime.Serialization.SerializationInfo::m_fullTypeName
	String_t* ___m_fullTypeName_6;
	// System.String System.Runtime.Serialization.SerializationInfo::m_assemName
	String_t* ___m_assemName_7;
	// System.Type System.Runtime.Serialization.SerializationInfo::objectType
	Type_t * ___objectType_8;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isFullTypeNameSetExplicit
	bool ___isFullTypeNameSetExplicit_9;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isAssemblyNameSetExplicit
	bool ___isAssemblyNameSetExplicit_10;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::requireSameTokenInPartialTrust
	bool ___requireSameTokenInPartialTrust_11;

public:
	inline static int32_t get_offset_of_m_members_0() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_members_0)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_members_0() const { return ___m_members_0; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_members_0() { return &___m_members_0; }
	inline void set_m_members_0(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_members_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_members_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_data_1() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_data_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_data_1() const { return ___m_data_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_data_1() { return &___m_data_1; }
	inline void set_m_data_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_data_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_data_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_types_2() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_types_2)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_m_types_2() const { return ___m_types_2; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_m_types_2() { return &___m_types_2; }
	inline void set_m_types_2(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___m_types_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_types_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_nameToIndex_3() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_nameToIndex_3)); }
	inline Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * get_m_nameToIndex_3() const { return ___m_nameToIndex_3; }
	inline Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 ** get_address_of_m_nameToIndex_3() { return &___m_nameToIndex_3; }
	inline void set_m_nameToIndex_3(Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * value)
	{
		___m_nameToIndex_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_nameToIndex_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_currMember_4() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_currMember_4)); }
	inline int32_t get_m_currMember_4() const { return ___m_currMember_4; }
	inline int32_t* get_address_of_m_currMember_4() { return &___m_currMember_4; }
	inline void set_m_currMember_4(int32_t value)
	{
		___m_currMember_4 = value;
	}

	inline static int32_t get_offset_of_m_converter_5() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_converter_5)); }
	inline RuntimeObject* get_m_converter_5() const { return ___m_converter_5; }
	inline RuntimeObject** get_address_of_m_converter_5() { return &___m_converter_5; }
	inline void set_m_converter_5(RuntimeObject* value)
	{
		___m_converter_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_converter_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_fullTypeName_6() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_fullTypeName_6)); }
	inline String_t* get_m_fullTypeName_6() const { return ___m_fullTypeName_6; }
	inline String_t** get_address_of_m_fullTypeName_6() { return &___m_fullTypeName_6; }
	inline void set_m_fullTypeName_6(String_t* value)
	{
		___m_fullTypeName_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fullTypeName_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_assemName_7() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_assemName_7)); }
	inline String_t* get_m_assemName_7() const { return ___m_assemName_7; }
	inline String_t** get_address_of_m_assemName_7() { return &___m_assemName_7; }
	inline void set_m_assemName_7(String_t* value)
	{
		___m_assemName_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_assemName_7), (void*)value);
	}

	inline static int32_t get_offset_of_objectType_8() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___objectType_8)); }
	inline Type_t * get_objectType_8() const { return ___objectType_8; }
	inline Type_t ** get_address_of_objectType_8() { return &___objectType_8; }
	inline void set_objectType_8(Type_t * value)
	{
		___objectType_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectType_8), (void*)value);
	}

	inline static int32_t get_offset_of_isFullTypeNameSetExplicit_9() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___isFullTypeNameSetExplicit_9)); }
	inline bool get_isFullTypeNameSetExplicit_9() const { return ___isFullTypeNameSetExplicit_9; }
	inline bool* get_address_of_isFullTypeNameSetExplicit_9() { return &___isFullTypeNameSetExplicit_9; }
	inline void set_isFullTypeNameSetExplicit_9(bool value)
	{
		___isFullTypeNameSetExplicit_9 = value;
	}

	inline static int32_t get_offset_of_isAssemblyNameSetExplicit_10() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___isAssemblyNameSetExplicit_10)); }
	inline bool get_isAssemblyNameSetExplicit_10() const { return ___isAssemblyNameSetExplicit_10; }
	inline bool* get_address_of_isAssemblyNameSetExplicit_10() { return &___isAssemblyNameSetExplicit_10; }
	inline void set_isAssemblyNameSetExplicit_10(bool value)
	{
		___isAssemblyNameSetExplicit_10 = value;
	}

	inline static int32_t get_offset_of_requireSameTokenInPartialTrust_11() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___requireSameTokenInPartialTrust_11)); }
	inline bool get_requireSameTokenInPartialTrust_11() const { return ___requireSameTokenInPartialTrust_11; }
	inline bool* get_address_of_requireSameTokenInPartialTrust_11() { return &___requireSameTokenInPartialTrust_11; }
	inline void set_requireSameTokenInPartialTrust_11(bool value)
	{
		___requireSameTokenInPartialTrust_11 = value;
	}
};


// System.String
struct  String_t  : public RuntimeObject
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


// System.Text.Decoder
struct  Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370  : public RuntimeObject
{
public:
	// System.Text.DecoderFallback System.Text.Decoder::m_fallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___m_fallback_0;
	// System.Text.DecoderFallbackBuffer System.Text.Decoder::m_fallbackBuffer
	DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B * ___m_fallbackBuffer_1;

public:
	inline static int32_t get_offset_of_m_fallback_0() { return static_cast<int32_t>(offsetof(Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370, ___m_fallback_0)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_m_fallback_0() const { return ___m_fallback_0; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_m_fallback_0() { return &___m_fallback_0; }
	inline void set_m_fallback_0(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___m_fallback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fallback_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_fallbackBuffer_1() { return static_cast<int32_t>(offsetof(Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370, ___m_fallbackBuffer_1)); }
	inline DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B * get_m_fallbackBuffer_1() const { return ___m_fallbackBuffer_1; }
	inline DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B ** get_address_of_m_fallbackBuffer_1() { return &___m_fallbackBuffer_1; }
	inline void set_m_fallbackBuffer_1(DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B * value)
	{
		___m_fallbackBuffer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fallbackBuffer_1), (void*)value);
	}
};


// System.Text.DecoderFallback
struct  DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D  : public RuntimeObject
{
public:
	// System.Boolean System.Text.DecoderFallback::bIsMicrosoftBestFitFallback
	bool ___bIsMicrosoftBestFitFallback_0;

public:
	inline static int32_t get_offset_of_bIsMicrosoftBestFitFallback_0() { return static_cast<int32_t>(offsetof(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D, ___bIsMicrosoftBestFitFallback_0)); }
	inline bool get_bIsMicrosoftBestFitFallback_0() const { return ___bIsMicrosoftBestFitFallback_0; }
	inline bool* get_address_of_bIsMicrosoftBestFitFallback_0() { return &___bIsMicrosoftBestFitFallback_0; }
	inline void set_bIsMicrosoftBestFitFallback_0(bool value)
	{
		___bIsMicrosoftBestFitFallback_0 = value;
	}
};

struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D_StaticFields
{
public:
	// System.Text.DecoderFallback modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.DecoderFallback::replacementFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___replacementFallback_1;
	// System.Text.DecoderFallback modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.DecoderFallback::exceptionFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___exceptionFallback_2;
	// System.Object System.Text.DecoderFallback::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_3;

public:
	inline static int32_t get_offset_of_replacementFallback_1() { return static_cast<int32_t>(offsetof(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D_StaticFields, ___replacementFallback_1)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_replacementFallback_1() const { return ___replacementFallback_1; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_replacementFallback_1() { return &___replacementFallback_1; }
	inline void set_replacementFallback_1(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___replacementFallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___replacementFallback_1), (void*)value);
	}

	inline static int32_t get_offset_of_exceptionFallback_2() { return static_cast<int32_t>(offsetof(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D_StaticFields, ___exceptionFallback_2)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_exceptionFallback_2() const { return ___exceptionFallback_2; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_exceptionFallback_2() { return &___exceptionFallback_2; }
	inline void set_exceptionFallback_2(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___exceptionFallback_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___exceptionFallback_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_3() { return static_cast<int32_t>(offsetof(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D_StaticFields, ___s_InternalSyncObject_3)); }
	inline RuntimeObject * get_s_InternalSyncObject_3() const { return ___s_InternalSyncObject_3; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_3() { return &___s_InternalSyncObject_3; }
	inline void set_s_InternalSyncObject_3(RuntimeObject * value)
	{
		___s_InternalSyncObject_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_3), (void*)value);
	}
};


// System.Text.DecoderFallbackBuffer
struct  DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B  : public RuntimeObject
{
public:
	// System.Byte* System.Text.DecoderFallbackBuffer::byteStart
	uint8_t* ___byteStart_0;
	// System.Char* System.Text.DecoderFallbackBuffer::charEnd
	Il2CppChar* ___charEnd_1;

public:
	inline static int32_t get_offset_of_byteStart_0() { return static_cast<int32_t>(offsetof(DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B, ___byteStart_0)); }
	inline uint8_t* get_byteStart_0() const { return ___byteStart_0; }
	inline uint8_t** get_address_of_byteStart_0() { return &___byteStart_0; }
	inline void set_byteStart_0(uint8_t* value)
	{
		___byteStart_0 = value;
	}

	inline static int32_t get_offset_of_charEnd_1() { return static_cast<int32_t>(offsetof(DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B, ___charEnd_1)); }
	inline Il2CppChar* get_charEnd_1() const { return ___charEnd_1; }
	inline Il2CppChar** get_address_of_charEnd_1() { return &___charEnd_1; }
	inline void set_charEnd_1(Il2CppChar* value)
	{
		___charEnd_1 = value;
	}
};


// System.Text.Encoder
struct  Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A  : public RuntimeObject
{
public:
	// System.Text.EncoderFallback System.Text.Encoder::m_fallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___m_fallback_0;
	// System.Text.EncoderFallbackBuffer System.Text.Encoder::m_fallbackBuffer
	EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 * ___m_fallbackBuffer_1;

public:
	inline static int32_t get_offset_of_m_fallback_0() { return static_cast<int32_t>(offsetof(Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A, ___m_fallback_0)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_m_fallback_0() const { return ___m_fallback_0; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_m_fallback_0() { return &___m_fallback_0; }
	inline void set_m_fallback_0(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___m_fallback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fallback_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_fallbackBuffer_1() { return static_cast<int32_t>(offsetof(Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A, ___m_fallbackBuffer_1)); }
	inline EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 * get_m_fallbackBuffer_1() const { return ___m_fallbackBuffer_1; }
	inline EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 ** get_address_of_m_fallbackBuffer_1() { return &___m_fallbackBuffer_1; }
	inline void set_m_fallbackBuffer_1(EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 * value)
	{
		___m_fallbackBuffer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fallbackBuffer_1), (void*)value);
	}
};


// System.Text.EncoderFallback
struct  EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4  : public RuntimeObject
{
public:
	// System.Boolean System.Text.EncoderFallback::bIsMicrosoftBestFitFallback
	bool ___bIsMicrosoftBestFitFallback_0;

public:
	inline static int32_t get_offset_of_bIsMicrosoftBestFitFallback_0() { return static_cast<int32_t>(offsetof(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4, ___bIsMicrosoftBestFitFallback_0)); }
	inline bool get_bIsMicrosoftBestFitFallback_0() const { return ___bIsMicrosoftBestFitFallback_0; }
	inline bool* get_address_of_bIsMicrosoftBestFitFallback_0() { return &___bIsMicrosoftBestFitFallback_0; }
	inline void set_bIsMicrosoftBestFitFallback_0(bool value)
	{
		___bIsMicrosoftBestFitFallback_0 = value;
	}
};

struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4_StaticFields
{
public:
	// System.Text.EncoderFallback modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.EncoderFallback::replacementFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___replacementFallback_1;
	// System.Text.EncoderFallback modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.EncoderFallback::exceptionFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___exceptionFallback_2;
	// System.Object System.Text.EncoderFallback::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_3;

public:
	inline static int32_t get_offset_of_replacementFallback_1() { return static_cast<int32_t>(offsetof(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4_StaticFields, ___replacementFallback_1)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_replacementFallback_1() const { return ___replacementFallback_1; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_replacementFallback_1() { return &___replacementFallback_1; }
	inline void set_replacementFallback_1(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___replacementFallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___replacementFallback_1), (void*)value);
	}

	inline static int32_t get_offset_of_exceptionFallback_2() { return static_cast<int32_t>(offsetof(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4_StaticFields, ___exceptionFallback_2)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_exceptionFallback_2() const { return ___exceptionFallback_2; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_exceptionFallback_2() { return &___exceptionFallback_2; }
	inline void set_exceptionFallback_2(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___exceptionFallback_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___exceptionFallback_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_3() { return static_cast<int32_t>(offsetof(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4_StaticFields, ___s_InternalSyncObject_3)); }
	inline RuntimeObject * get_s_InternalSyncObject_3() const { return ___s_InternalSyncObject_3; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_3() { return &___s_InternalSyncObject_3; }
	inline void set_s_InternalSyncObject_3(RuntimeObject * value)
	{
		___s_InternalSyncObject_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_3), (void*)value);
	}
};


// System.Text.EncoderFallbackBuffer
struct  EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0  : public RuntimeObject
{
public:
	// System.Char* System.Text.EncoderFallbackBuffer::charStart
	Il2CppChar* ___charStart_0;
	// System.Char* System.Text.EncoderFallbackBuffer::charEnd
	Il2CppChar* ___charEnd_1;
	// System.Text.EncoderNLS System.Text.EncoderFallbackBuffer::encoder
	EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712 * ___encoder_2;
	// System.Boolean System.Text.EncoderFallbackBuffer::setEncoder
	bool ___setEncoder_3;
	// System.Boolean System.Text.EncoderFallbackBuffer::bUsedEncoder
	bool ___bUsedEncoder_4;
	// System.Boolean System.Text.EncoderFallbackBuffer::bFallingBack
	bool ___bFallingBack_5;
	// System.Int32 System.Text.EncoderFallbackBuffer::iRecursionCount
	int32_t ___iRecursionCount_6;

public:
	inline static int32_t get_offset_of_charStart_0() { return static_cast<int32_t>(offsetof(EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0, ___charStart_0)); }
	inline Il2CppChar* get_charStart_0() const { return ___charStart_0; }
	inline Il2CppChar** get_address_of_charStart_0() { return &___charStart_0; }
	inline void set_charStart_0(Il2CppChar* value)
	{
		___charStart_0 = value;
	}

	inline static int32_t get_offset_of_charEnd_1() { return static_cast<int32_t>(offsetof(EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0, ___charEnd_1)); }
	inline Il2CppChar* get_charEnd_1() const { return ___charEnd_1; }
	inline Il2CppChar** get_address_of_charEnd_1() { return &___charEnd_1; }
	inline void set_charEnd_1(Il2CppChar* value)
	{
		___charEnd_1 = value;
	}

	inline static int32_t get_offset_of_encoder_2() { return static_cast<int32_t>(offsetof(EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0, ___encoder_2)); }
	inline EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712 * get_encoder_2() const { return ___encoder_2; }
	inline EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712 ** get_address_of_encoder_2() { return &___encoder_2; }
	inline void set_encoder_2(EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712 * value)
	{
		___encoder_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoder_2), (void*)value);
	}

	inline static int32_t get_offset_of_setEncoder_3() { return static_cast<int32_t>(offsetof(EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0, ___setEncoder_3)); }
	inline bool get_setEncoder_3() const { return ___setEncoder_3; }
	inline bool* get_address_of_setEncoder_3() { return &___setEncoder_3; }
	inline void set_setEncoder_3(bool value)
	{
		___setEncoder_3 = value;
	}

	inline static int32_t get_offset_of_bUsedEncoder_4() { return static_cast<int32_t>(offsetof(EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0, ___bUsedEncoder_4)); }
	inline bool get_bUsedEncoder_4() const { return ___bUsedEncoder_4; }
	inline bool* get_address_of_bUsedEncoder_4() { return &___bUsedEncoder_4; }
	inline void set_bUsedEncoder_4(bool value)
	{
		___bUsedEncoder_4 = value;
	}

	inline static int32_t get_offset_of_bFallingBack_5() { return static_cast<int32_t>(offsetof(EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0, ___bFallingBack_5)); }
	inline bool get_bFallingBack_5() const { return ___bFallingBack_5; }
	inline bool* get_address_of_bFallingBack_5() { return &___bFallingBack_5; }
	inline void set_bFallingBack_5(bool value)
	{
		___bFallingBack_5 = value;
	}

	inline static int32_t get_offset_of_iRecursionCount_6() { return static_cast<int32_t>(offsetof(EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0, ___iRecursionCount_6)); }
	inline int32_t get_iRecursionCount_6() const { return ___iRecursionCount_6; }
	inline int32_t* get_address_of_iRecursionCount_6() { return &___iRecursionCount_6; }
	inline void set_iRecursionCount_6(int32_t value)
	{
		___iRecursionCount_6 = value;
	}
};


// System.Text.Encoding
struct  Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___dataItem_10)); }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___encoderFallback_13)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___decoderFallback_14)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_14), (void*)value);
	}
};

struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___encodings_8)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_15), (void*)value);
	}
};


// System.Threading.Timer_Scheduler
struct  Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8  : public RuntimeObject
{
public:
	// System.Collections.SortedList System.Threading.Timer_Scheduler::list
	SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * ___list_1;
	// System.Threading.ManualResetEvent System.Threading.Timer_Scheduler::changed
	ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ___changed_2;

public:
	inline static int32_t get_offset_of_list_1() { return static_cast<int32_t>(offsetof(Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8, ___list_1)); }
	inline SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * get_list_1() const { return ___list_1; }
	inline SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 ** get_address_of_list_1() { return &___list_1; }
	inline void set_list_1(SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * value)
	{
		___list_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_1), (void*)value);
	}

	inline static int32_t get_offset_of_changed_2() { return static_cast<int32_t>(offsetof(Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8, ___changed_2)); }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * get_changed_2() const { return ___changed_2; }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA ** get_address_of_changed_2() { return &___changed_2; }
	inline void set_changed_2(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * value)
	{
		___changed_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___changed_2), (void*)value);
	}
};

struct Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8_StaticFields
{
public:
	// System.Threading.Timer_Scheduler System.Threading.Timer_Scheduler::instance
	Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * ___instance_0;

public:
	inline static int32_t get_offset_of_instance_0() { return static_cast<int32_t>(offsetof(Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8_StaticFields, ___instance_0)); }
	inline Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * get_instance_0() const { return ___instance_0; }
	inline Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 ** get_address_of_instance_0() { return &___instance_0; }
	inline void set_instance_0(Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * value)
	{
		___instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_0), (void*)value);
	}
};


// System.Threading.Timer_TimerComparer
struct  TimerComparer_t1899647CFE875978843BE8ABA01C10956F1E740B  : public RuntimeObject
{
public:

public:
};


// System.TimeZoneInfo_<>c
struct  U3CU3Ec_t24F903F915888347E8B19C16314DF4C75387324E  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t24F903F915888347E8B19C16314DF4C75387324E_StaticFields
{
public:
	// System.TimeZoneInfo_<>c System.TimeZoneInfo_<>c::<>9
	U3CU3Ec_t24F903F915888347E8B19C16314DF4C75387324E * ___U3CU3E9_0;
	// System.Comparison`1<System.TimeZoneInfo_AdjustmentRule> System.TimeZoneInfo_<>c::<>9__19_0
	Comparison_1_tDAC4CC47FDC3DBE8E8A9DF5789C71CAA2B42AEC1 * ___U3CU3E9__19_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t24F903F915888347E8B19C16314DF4C75387324E_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t24F903F915888347E8B19C16314DF4C75387324E * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t24F903F915888347E8B19C16314DF4C75387324E ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t24F903F915888347E8B19C16314DF4C75387324E * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__19_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t24F903F915888347E8B19C16314DF4C75387324E_StaticFields, ___U3CU3E9__19_0_1)); }
	inline Comparison_1_tDAC4CC47FDC3DBE8E8A9DF5789C71CAA2B42AEC1 * get_U3CU3E9__19_0_1() const { return ___U3CU3E9__19_0_1; }
	inline Comparison_1_tDAC4CC47FDC3DBE8E8A9DF5789C71CAA2B42AEC1 ** get_address_of_U3CU3E9__19_0_1() { return &___U3CU3E9__19_0_1; }
	inline void set_U3CU3E9__19_0_1(Comparison_1_tDAC4CC47FDC3DBE8E8A9DF5789C71CAA2B42AEC1 * value)
	{
		___U3CU3E9__19_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__19_0_1), (void*)value);
	}
};


// System.TypeNames_ATypeName
struct  ATypeName_t19F245ED1619C78770F92C899C4FE364DBF30861  : public RuntimeObject
{
public:

public:
};


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
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
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
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
struct  Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
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


// System.Char
struct  Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.DateTime
struct  DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
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
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
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


// System.Int64
struct  Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
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


// System.Text.DecoderNLS
struct  DecoderNLS_tE5B1B7D68B698C0B65FBEE94EAE2453FFD3D538A  : public Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370
{
public:
	// System.Text.Encoding System.Text.DecoderNLS::m_encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___m_encoding_2;
	// System.Boolean System.Text.DecoderNLS::m_mustFlush
	bool ___m_mustFlush_3;
	// System.Boolean System.Text.DecoderNLS::m_throwOnOverflow
	bool ___m_throwOnOverflow_4;
	// System.Int32 System.Text.DecoderNLS::m_bytesUsed
	int32_t ___m_bytesUsed_5;

public:
	inline static int32_t get_offset_of_m_encoding_2() { return static_cast<int32_t>(offsetof(DecoderNLS_tE5B1B7D68B698C0B65FBEE94EAE2453FFD3D538A, ___m_encoding_2)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_m_encoding_2() const { return ___m_encoding_2; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_m_encoding_2() { return &___m_encoding_2; }
	inline void set_m_encoding_2(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___m_encoding_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_encoding_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_mustFlush_3() { return static_cast<int32_t>(offsetof(DecoderNLS_tE5B1B7D68B698C0B65FBEE94EAE2453FFD3D538A, ___m_mustFlush_3)); }
	inline bool get_m_mustFlush_3() const { return ___m_mustFlush_3; }
	inline bool* get_address_of_m_mustFlush_3() { return &___m_mustFlush_3; }
	inline void set_m_mustFlush_3(bool value)
	{
		___m_mustFlush_3 = value;
	}

	inline static int32_t get_offset_of_m_throwOnOverflow_4() { return static_cast<int32_t>(offsetof(DecoderNLS_tE5B1B7D68B698C0B65FBEE94EAE2453FFD3D538A, ___m_throwOnOverflow_4)); }
	inline bool get_m_throwOnOverflow_4() const { return ___m_throwOnOverflow_4; }
	inline bool* get_address_of_m_throwOnOverflow_4() { return &___m_throwOnOverflow_4; }
	inline void set_m_throwOnOverflow_4(bool value)
	{
		___m_throwOnOverflow_4 = value;
	}

	inline static int32_t get_offset_of_m_bytesUsed_5() { return static_cast<int32_t>(offsetof(DecoderNLS_tE5B1B7D68B698C0B65FBEE94EAE2453FFD3D538A, ___m_bytesUsed_5)); }
	inline int32_t get_m_bytesUsed_5() const { return ___m_bytesUsed_5; }
	inline int32_t* get_address_of_m_bytesUsed_5() { return &___m_bytesUsed_5; }
	inline void set_m_bytesUsed_5(int32_t value)
	{
		___m_bytesUsed_5 = value;
	}
};


// System.Text.EncoderNLS
struct  EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712  : public Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A
{
public:
	// System.Char System.Text.EncoderNLS::charLeftOver
	Il2CppChar ___charLeftOver_2;
	// System.Text.Encoding System.Text.EncoderNLS::m_encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___m_encoding_3;
	// System.Boolean System.Text.EncoderNLS::m_mustFlush
	bool ___m_mustFlush_4;
	// System.Boolean System.Text.EncoderNLS::m_throwOnOverflow
	bool ___m_throwOnOverflow_5;
	// System.Int32 System.Text.EncoderNLS::m_charsUsed
	int32_t ___m_charsUsed_6;

public:
	inline static int32_t get_offset_of_charLeftOver_2() { return static_cast<int32_t>(offsetof(EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712, ___charLeftOver_2)); }
	inline Il2CppChar get_charLeftOver_2() const { return ___charLeftOver_2; }
	inline Il2CppChar* get_address_of_charLeftOver_2() { return &___charLeftOver_2; }
	inline void set_charLeftOver_2(Il2CppChar value)
	{
		___charLeftOver_2 = value;
	}

	inline static int32_t get_offset_of_m_encoding_3() { return static_cast<int32_t>(offsetof(EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712, ___m_encoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_m_encoding_3() const { return ___m_encoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_m_encoding_3() { return &___m_encoding_3; }
	inline void set_m_encoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___m_encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_mustFlush_4() { return static_cast<int32_t>(offsetof(EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712, ___m_mustFlush_4)); }
	inline bool get_m_mustFlush_4() const { return ___m_mustFlush_4; }
	inline bool* get_address_of_m_mustFlush_4() { return &___m_mustFlush_4; }
	inline void set_m_mustFlush_4(bool value)
	{
		___m_mustFlush_4 = value;
	}

	inline static int32_t get_offset_of_m_throwOnOverflow_5() { return static_cast<int32_t>(offsetof(EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712, ___m_throwOnOverflow_5)); }
	inline bool get_m_throwOnOverflow_5() const { return ___m_throwOnOverflow_5; }
	inline bool* get_address_of_m_throwOnOverflow_5() { return &___m_throwOnOverflow_5; }
	inline void set_m_throwOnOverflow_5(bool value)
	{
		___m_throwOnOverflow_5 = value;
	}

	inline static int32_t get_offset_of_m_charsUsed_6() { return static_cast<int32_t>(offsetof(EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712, ___m_charsUsed_6)); }
	inline int32_t get_m_charsUsed_6() const { return ___m_charsUsed_6; }
	inline int32_t* get_address_of_m_charsUsed_6() { return &___m_charsUsed_6; }
	inline void set_m_charsUsed_6(int32_t value)
	{
		___m_charsUsed_6 = value;
	}
};


// System.Text.UTF32Encoding
struct  UTF32Encoding_t54B51C8FAC5B2EAB4BDFACBBA06DB6117A38D014  : public Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827
{
public:
	// System.Boolean System.Text.UTF32Encoding::emitUTF32ByteOrderMark
	bool ___emitUTF32ByteOrderMark_16;
	// System.Boolean System.Text.UTF32Encoding::isThrowException
	bool ___isThrowException_17;
	// System.Boolean System.Text.UTF32Encoding::bigEndian
	bool ___bigEndian_18;

public:
	inline static int32_t get_offset_of_emitUTF32ByteOrderMark_16() { return static_cast<int32_t>(offsetof(UTF32Encoding_t54B51C8FAC5B2EAB4BDFACBBA06DB6117A38D014, ___emitUTF32ByteOrderMark_16)); }
	inline bool get_emitUTF32ByteOrderMark_16() const { return ___emitUTF32ByteOrderMark_16; }
	inline bool* get_address_of_emitUTF32ByteOrderMark_16() { return &___emitUTF32ByteOrderMark_16; }
	inline void set_emitUTF32ByteOrderMark_16(bool value)
	{
		___emitUTF32ByteOrderMark_16 = value;
	}

	inline static int32_t get_offset_of_isThrowException_17() { return static_cast<int32_t>(offsetof(UTF32Encoding_t54B51C8FAC5B2EAB4BDFACBBA06DB6117A38D014, ___isThrowException_17)); }
	inline bool get_isThrowException_17() const { return ___isThrowException_17; }
	inline bool* get_address_of_isThrowException_17() { return &___isThrowException_17; }
	inline void set_isThrowException_17(bool value)
	{
		___isThrowException_17 = value;
	}

	inline static int32_t get_offset_of_bigEndian_18() { return static_cast<int32_t>(offsetof(UTF32Encoding_t54B51C8FAC5B2EAB4BDFACBBA06DB6117A38D014, ___bigEndian_18)); }
	inline bool get_bigEndian_18() const { return ___bigEndian_18; }
	inline bool* get_address_of_bigEndian_18() { return &___bigEndian_18; }
	inline void set_bigEndian_18(bool value)
	{
		___bigEndian_18 = value;
	}
};


// System.Text.UTF7Encoding
struct  UTF7Encoding_tA5454D96973119953BD301F20B9E59C77B5FA076  : public Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827
{
public:
	// System.Byte[] System.Text.UTF7Encoding::base64Bytes
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___base64Bytes_16;
	// System.SByte[] System.Text.UTF7Encoding::base64Values
	SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* ___base64Values_17;
	// System.Boolean[] System.Text.UTF7Encoding::directEncode
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ___directEncode_18;
	// System.Boolean System.Text.UTF7Encoding::m_allowOptionals
	bool ___m_allowOptionals_19;

public:
	inline static int32_t get_offset_of_base64Bytes_16() { return static_cast<int32_t>(offsetof(UTF7Encoding_tA5454D96973119953BD301F20B9E59C77B5FA076, ___base64Bytes_16)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_base64Bytes_16() const { return ___base64Bytes_16; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_base64Bytes_16() { return &___base64Bytes_16; }
	inline void set_base64Bytes_16(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___base64Bytes_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___base64Bytes_16), (void*)value);
	}

	inline static int32_t get_offset_of_base64Values_17() { return static_cast<int32_t>(offsetof(UTF7Encoding_tA5454D96973119953BD301F20B9E59C77B5FA076, ___base64Values_17)); }
	inline SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* get_base64Values_17() const { return ___base64Values_17; }
	inline SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7** get_address_of_base64Values_17() { return &___base64Values_17; }
	inline void set_base64Values_17(SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* value)
	{
		___base64Values_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___base64Values_17), (void*)value);
	}

	inline static int32_t get_offset_of_directEncode_18() { return static_cast<int32_t>(offsetof(UTF7Encoding_tA5454D96973119953BD301F20B9E59C77B5FA076, ___directEncode_18)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get_directEncode_18() const { return ___directEncode_18; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of_directEncode_18() { return &___directEncode_18; }
	inline void set_directEncode_18(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		___directEncode_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___directEncode_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_allowOptionals_19() { return static_cast<int32_t>(offsetof(UTF7Encoding_tA5454D96973119953BD301F20B9E59C77B5FA076, ___m_allowOptionals_19)); }
	inline bool get_m_allowOptionals_19() const { return ___m_allowOptionals_19; }
	inline bool* get_address_of_m_allowOptionals_19() { return &___m_allowOptionals_19; }
	inline void set_m_allowOptionals_19(bool value)
	{
		___m_allowOptionals_19 = value;
	}
};


// System.Text.UTF7Encoding_DecoderUTF7Fallback
struct  DecoderUTF7Fallback_tBEF9A09732FAB23368825AE7C14C0EBF1F9028A8  : public DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D
{
public:

public:
};


// System.Text.UTF7Encoding_DecoderUTF7FallbackBuffer
struct  DecoderUTF7FallbackBuffer_tED3431DB4A6B4F48D1F1433A8E672F8B110D819A  : public DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B
{
public:
	// System.Char System.Text.UTF7Encoding_DecoderUTF7FallbackBuffer::cFallback
	Il2CppChar ___cFallback_2;
	// System.Int32 System.Text.UTF7Encoding_DecoderUTF7FallbackBuffer::iCount
	int32_t ___iCount_3;
	// System.Int32 System.Text.UTF7Encoding_DecoderUTF7FallbackBuffer::iSize
	int32_t ___iSize_4;

public:
	inline static int32_t get_offset_of_cFallback_2() { return static_cast<int32_t>(offsetof(DecoderUTF7FallbackBuffer_tED3431DB4A6B4F48D1F1433A8E672F8B110D819A, ___cFallback_2)); }
	inline Il2CppChar get_cFallback_2() const { return ___cFallback_2; }
	inline Il2CppChar* get_address_of_cFallback_2() { return &___cFallback_2; }
	inline void set_cFallback_2(Il2CppChar value)
	{
		___cFallback_2 = value;
	}

	inline static int32_t get_offset_of_iCount_3() { return static_cast<int32_t>(offsetof(DecoderUTF7FallbackBuffer_tED3431DB4A6B4F48D1F1433A8E672F8B110D819A, ___iCount_3)); }
	inline int32_t get_iCount_3() const { return ___iCount_3; }
	inline int32_t* get_address_of_iCount_3() { return &___iCount_3; }
	inline void set_iCount_3(int32_t value)
	{
		___iCount_3 = value;
	}

	inline static int32_t get_offset_of_iSize_4() { return static_cast<int32_t>(offsetof(DecoderUTF7FallbackBuffer_tED3431DB4A6B4F48D1F1433A8E672F8B110D819A, ___iSize_4)); }
	inline int32_t get_iSize_4() const { return ___iSize_4; }
	inline int32_t* get_address_of_iSize_4() { return &___iSize_4; }
	inline void set_iSize_4(int32_t value)
	{
		___iSize_4 = value;
	}
};


// System.Text.UTF8Encoding
struct  UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282  : public Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827
{
public:
	// System.Boolean System.Text.UTF8Encoding::emitUTF8Identifier
	bool ___emitUTF8Identifier_16;
	// System.Boolean System.Text.UTF8Encoding::isThrowException
	bool ___isThrowException_17;

public:
	inline static int32_t get_offset_of_emitUTF8Identifier_16() { return static_cast<int32_t>(offsetof(UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282, ___emitUTF8Identifier_16)); }
	inline bool get_emitUTF8Identifier_16() const { return ___emitUTF8Identifier_16; }
	inline bool* get_address_of_emitUTF8Identifier_16() { return &___emitUTF8Identifier_16; }
	inline void set_emitUTF8Identifier_16(bool value)
	{
		___emitUTF8Identifier_16 = value;
	}

	inline static int32_t get_offset_of_isThrowException_17() { return static_cast<int32_t>(offsetof(UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282, ___isThrowException_17)); }
	inline bool get_isThrowException_17() const { return ___isThrowException_17; }
	inline bool* get_address_of_isThrowException_17() { return &___isThrowException_17; }
	inline void set_isThrowException_17(bool value)
	{
		___isThrowException_17 = value;
	}
};


// System.Text.UnicodeEncoding
struct  UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68  : public Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827
{
public:
	// System.Boolean System.Text.UnicodeEncoding::isThrowException
	bool ___isThrowException_16;
	// System.Boolean System.Text.UnicodeEncoding::bigEndian
	bool ___bigEndian_17;
	// System.Boolean System.Text.UnicodeEncoding::byteOrderMark
	bool ___byteOrderMark_18;

public:
	inline static int32_t get_offset_of_isThrowException_16() { return static_cast<int32_t>(offsetof(UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68, ___isThrowException_16)); }
	inline bool get_isThrowException_16() const { return ___isThrowException_16; }
	inline bool* get_address_of_isThrowException_16() { return &___isThrowException_16; }
	inline void set_isThrowException_16(bool value)
	{
		___isThrowException_16 = value;
	}

	inline static int32_t get_offset_of_bigEndian_17() { return static_cast<int32_t>(offsetof(UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68, ___bigEndian_17)); }
	inline bool get_bigEndian_17() const { return ___bigEndian_17; }
	inline bool* get_address_of_bigEndian_17() { return &___bigEndian_17; }
	inline void set_bigEndian_17(bool value)
	{
		___bigEndian_17 = value;
	}

	inline static int32_t get_offset_of_byteOrderMark_18() { return static_cast<int32_t>(offsetof(UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68, ___byteOrderMark_18)); }
	inline bool get_byteOrderMark_18() const { return ___byteOrderMark_18; }
	inline bool* get_address_of_byteOrderMark_18() { return &___byteOrderMark_18; }
	inline void set_byteOrderMark_18(bool value)
	{
		___byteOrderMark_18 = value;
	}
};

struct UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68_StaticFields
{
public:
	// System.UInt64 System.Text.UnicodeEncoding::highLowPatternMask
	uint64_t ___highLowPatternMask_19;

public:
	inline static int32_t get_offset_of_highLowPatternMask_19() { return static_cast<int32_t>(offsetof(UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68_StaticFields, ___highLowPatternMask_19)); }
	inline uint64_t get_highLowPatternMask_19() const { return ___highLowPatternMask_19; }
	inline uint64_t* get_address_of_highLowPatternMask_19() { return &___highLowPatternMask_19; }
	inline void set_highLowPatternMask_19(uint64_t value)
	{
		___highLowPatternMask_19 = value;
	}
};


// System.Threading.Thread
struct  Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414  : public CriticalFinalizerObject_tA3367C832FFE7434EB3C15C7136AF25524150997
{
public:
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB * ___internal_thread_6;
	// System.Object System.Threading.Thread::m_ThreadStartArg
	RuntimeObject * ___m_ThreadStartArg_7;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject * ___pending_exception_8;
	// System.Security.Principal.IPrincipal System.Threading.Thread::principal
	RuntimeObject* ___principal_9;
	// System.Int32 System.Threading.Thread::principal_version
	int32_t ___principal_version_10;
	// System.MulticastDelegate System.Threading.Thread::m_Delegate
	MulticastDelegate_t * ___m_Delegate_12;
	// System.Threading.ExecutionContext System.Threading.Thread::m_ExecutionContext
	ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * ___m_ExecutionContext_13;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_14;

public:
	inline static int32_t get_offset_of_internal_thread_6() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___internal_thread_6)); }
	inline InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB * get_internal_thread_6() const { return ___internal_thread_6; }
	inline InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB ** get_address_of_internal_thread_6() { return &___internal_thread_6; }
	inline void set_internal_thread_6(InternalThread_t12B78B27503AE19E9122E212419A66843BF746EB * value)
	{
		___internal_thread_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internal_thread_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_ThreadStartArg_7() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_ThreadStartArg_7)); }
	inline RuntimeObject * get_m_ThreadStartArg_7() const { return ___m_ThreadStartArg_7; }
	inline RuntimeObject ** get_address_of_m_ThreadStartArg_7() { return &___m_ThreadStartArg_7; }
	inline void set_m_ThreadStartArg_7(RuntimeObject * value)
	{
		___m_ThreadStartArg_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ThreadStartArg_7), (void*)value);
	}

	inline static int32_t get_offset_of_pending_exception_8() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___pending_exception_8)); }
	inline RuntimeObject * get_pending_exception_8() const { return ___pending_exception_8; }
	inline RuntimeObject ** get_address_of_pending_exception_8() { return &___pending_exception_8; }
	inline void set_pending_exception_8(RuntimeObject * value)
	{
		___pending_exception_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pending_exception_8), (void*)value);
	}

	inline static int32_t get_offset_of_principal_9() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___principal_9)); }
	inline RuntimeObject* get_principal_9() const { return ___principal_9; }
	inline RuntimeObject** get_address_of_principal_9() { return &___principal_9; }
	inline void set_principal_9(RuntimeObject* value)
	{
		___principal_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___principal_9), (void*)value);
	}

	inline static int32_t get_offset_of_principal_version_10() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___principal_version_10)); }
	inline int32_t get_principal_version_10() const { return ___principal_version_10; }
	inline int32_t* get_address_of_principal_version_10() { return &___principal_version_10; }
	inline void set_principal_version_10(int32_t value)
	{
		___principal_version_10 = value;
	}

	inline static int32_t get_offset_of_m_Delegate_12() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_Delegate_12)); }
	inline MulticastDelegate_t * get_m_Delegate_12() const { return ___m_Delegate_12; }
	inline MulticastDelegate_t ** get_address_of_m_Delegate_12() { return &___m_Delegate_12; }
	inline void set_m_Delegate_12(MulticastDelegate_t * value)
	{
		___m_Delegate_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Delegate_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutionContext_13() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_ExecutionContext_13)); }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * get_m_ExecutionContext_13() const { return ___m_ExecutionContext_13; }
	inline ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 ** get_address_of_m_ExecutionContext_13() { return &___m_ExecutionContext_13; }
	inline void set_m_ExecutionContext_13(ExecutionContext_t16AC73BB21FEEEAD34A017877AC18DD8BB836414 * value)
	{
		___m_ExecutionContext_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExecutionContext_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExecutionContextBelongsToOuterScope_14() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414, ___m_ExecutionContextBelongsToOuterScope_14)); }
	inline bool get_m_ExecutionContextBelongsToOuterScope_14() const { return ___m_ExecutionContextBelongsToOuterScope_14; }
	inline bool* get_address_of_m_ExecutionContextBelongsToOuterScope_14() { return &___m_ExecutionContextBelongsToOuterScope_14; }
	inline void set_m_ExecutionContextBelongsToOuterScope_14(bool value)
	{
		___m_ExecutionContextBelongsToOuterScope_14 = value;
	}
};

struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields
{
public:
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A * ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * ___s_asyncLocalCurrentUICulture_5;

public:
	inline static int32_t get_offset_of_s_LocalDataStoreMgr_0() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields, ___s_LocalDataStoreMgr_0)); }
	inline LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A * get_s_LocalDataStoreMgr_0() const { return ___s_LocalDataStoreMgr_0; }
	inline LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A ** get_address_of_s_LocalDataStoreMgr_0() { return &___s_LocalDataStoreMgr_0; }
	inline void set_s_LocalDataStoreMgr_0(LocalDataStoreMgr_t6CC44D0584911B6A6C6823115F858FC34AB4A80A * value)
	{
		___s_LocalDataStoreMgr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LocalDataStoreMgr_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentCulture_4() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields, ___s_asyncLocalCurrentCulture_4)); }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * get_s_asyncLocalCurrentCulture_4() const { return ___s_asyncLocalCurrentCulture_4; }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 ** get_address_of_s_asyncLocalCurrentCulture_4() { return &___s_asyncLocalCurrentCulture_4; }
	inline void set_s_asyncLocalCurrentCulture_4(AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * value)
	{
		___s_asyncLocalCurrentCulture_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_asyncLocalCurrentCulture_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentUICulture_5() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_StaticFields, ___s_asyncLocalCurrentUICulture_5)); }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * get_s_asyncLocalCurrentUICulture_5() const { return ___s_asyncLocalCurrentUICulture_5; }
	inline AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 ** get_address_of_s_asyncLocalCurrentUICulture_5() { return &___s_asyncLocalCurrentUICulture_5; }
	inline void set_s_asyncLocalCurrentUICulture_5(AsyncLocal_1_t480A201BA0D1C62C2C6FA6598EEDF7BB35D85349 * value)
	{
		___s_asyncLocalCurrentUICulture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_asyncLocalCurrentUICulture_5), (void*)value);
	}
};

struct Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields
{
public:
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 * ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * ___current_thread_11;

public:
	inline static int32_t get_offset_of_s_LocalDataStore_1() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___s_LocalDataStore_1)); }
	inline LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 * get_s_LocalDataStore_1() const { return ___s_LocalDataStore_1; }
	inline LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 ** get_address_of_s_LocalDataStore_1() { return &___s_LocalDataStore_1; }
	inline void set_s_LocalDataStore_1(LocalDataStoreHolder_tF51C9DD735A89132114AE47E3EB51C11D0FED146 * value)
	{
		___s_LocalDataStore_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_LocalDataStore_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentCulture_2() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___m_CurrentCulture_2)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_m_CurrentCulture_2() const { return ___m_CurrentCulture_2; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_m_CurrentCulture_2() { return &___m_CurrentCulture_2; }
	inline void set_m_CurrentCulture_2(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___m_CurrentCulture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentCulture_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentUICulture_3() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___m_CurrentUICulture_3)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_m_CurrentUICulture_3() const { return ___m_CurrentUICulture_3; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_m_CurrentUICulture_3() { return &___m_CurrentUICulture_3; }
	inline void set_m_CurrentUICulture_3(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___m_CurrentUICulture_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentUICulture_3), (void*)value);
	}

	inline static int32_t get_offset_of_current_thread_11() { return static_cast<int32_t>(offsetof(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_ThreadStaticFields, ___current_thread_11)); }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * get_current_thread_11() const { return ___current_thread_11; }
	inline Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 ** get_address_of_current_thread_11() { return &___current_thread_11; }
	inline void set_current_thread_11(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * value)
	{
		___current_thread_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_thread_11), (void*)value);
	}
};


// System.Threading.Timer
struct  Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.Threading.TimerCallback System.Threading.Timer::callback
	TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 * ___callback_2;
	// System.Object System.Threading.Timer::state
	RuntimeObject * ___state_3;
	// System.Int64 System.Threading.Timer::due_time_ms
	int64_t ___due_time_ms_4;
	// System.Int64 System.Threading.Timer::period_ms
	int64_t ___period_ms_5;
	// System.Int64 System.Threading.Timer::next_run
	int64_t ___next_run_6;
	// System.Boolean System.Threading.Timer::disposed
	bool ___disposed_7;

public:
	inline static int32_t get_offset_of_callback_2() { return static_cast<int32_t>(offsetof(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB, ___callback_2)); }
	inline TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 * get_callback_2() const { return ___callback_2; }
	inline TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 ** get_address_of_callback_2() { return &___callback_2; }
	inline void set_callback_2(TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 * value)
	{
		___callback_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_2), (void*)value);
	}

	inline static int32_t get_offset_of_state_3() { return static_cast<int32_t>(offsetof(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB, ___state_3)); }
	inline RuntimeObject * get_state_3() const { return ___state_3; }
	inline RuntimeObject ** get_address_of_state_3() { return &___state_3; }
	inline void set_state_3(RuntimeObject * value)
	{
		___state_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___state_3), (void*)value);
	}

	inline static int32_t get_offset_of_due_time_ms_4() { return static_cast<int32_t>(offsetof(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB, ___due_time_ms_4)); }
	inline int64_t get_due_time_ms_4() const { return ___due_time_ms_4; }
	inline int64_t* get_address_of_due_time_ms_4() { return &___due_time_ms_4; }
	inline void set_due_time_ms_4(int64_t value)
	{
		___due_time_ms_4 = value;
	}

	inline static int32_t get_offset_of_period_ms_5() { return static_cast<int32_t>(offsetof(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB, ___period_ms_5)); }
	inline int64_t get_period_ms_5() const { return ___period_ms_5; }
	inline int64_t* get_address_of_period_ms_5() { return &___period_ms_5; }
	inline void set_period_ms_5(int64_t value)
	{
		___period_ms_5 = value;
	}

	inline static int32_t get_offset_of_next_run_6() { return static_cast<int32_t>(offsetof(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB, ___next_run_6)); }
	inline int64_t get_next_run_6() const { return ___next_run_6; }
	inline int64_t* get_address_of_next_run_6() { return &___next_run_6; }
	inline void set_next_run_6(int64_t value)
	{
		___next_run_6 = value;
	}

	inline static int32_t get_offset_of_disposed_7() { return static_cast<int32_t>(offsetof(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB, ___disposed_7)); }
	inline bool get_disposed_7() const { return ___disposed_7; }
	inline bool* get_address_of_disposed_7() { return &___disposed_7; }
	inline void set_disposed_7(bool value)
	{
		___disposed_7 = value;
	}
};

struct Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_StaticFields
{
public:
	// System.Threading.Timer_Scheduler System.Threading.Timer::scheduler
	Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * ___scheduler_1;

public:
	inline static int32_t get_offset_of_scheduler_1() { return static_cast<int32_t>(offsetof(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_StaticFields, ___scheduler_1)); }
	inline Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * get_scheduler_1() const { return ___scheduler_1; }
	inline Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 ** get_address_of_scheduler_1() { return &___scheduler_1; }
	inline void set_scheduler_1(Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * value)
	{
		___scheduler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scheduler_1), (void*)value);
	}
};


// System.TimeZoneInfo_SYSTEMTIME
struct  SYSTEMTIME_tDB5B1D262445C33D2FE644CCC1353DFB26184BA4 
{
public:
	// System.UInt16 System.TimeZoneInfo_SYSTEMTIME::wYear
	uint16_t ___wYear_0;
	// System.UInt16 System.TimeZoneInfo_SYSTEMTIME::wMonth
	uint16_t ___wMonth_1;
	// System.UInt16 System.TimeZoneInfo_SYSTEMTIME::wDayOfWeek
	uint16_t ___wDayOfWeek_2;
	// System.UInt16 System.TimeZoneInfo_SYSTEMTIME::wDay
	uint16_t ___wDay_3;
	// System.UInt16 System.TimeZoneInfo_SYSTEMTIME::wHour
	uint16_t ___wHour_4;
	// System.UInt16 System.TimeZoneInfo_SYSTEMTIME::wMinute
	uint16_t ___wMinute_5;
	// System.UInt16 System.TimeZoneInfo_SYSTEMTIME::wSecond
	uint16_t ___wSecond_6;
	// System.UInt16 System.TimeZoneInfo_SYSTEMTIME::wMilliseconds
	uint16_t ___wMilliseconds_7;

public:
	inline static int32_t get_offset_of_wYear_0() { return static_cast<int32_t>(offsetof(SYSTEMTIME_tDB5B1D262445C33D2FE644CCC1353DFB26184BA4, ___wYear_0)); }
	inline uint16_t get_wYear_0() const { return ___wYear_0; }
	inline uint16_t* get_address_of_wYear_0() { return &___wYear_0; }
	inline void set_wYear_0(uint16_t value)
	{
		___wYear_0 = value;
	}

	inline static int32_t get_offset_of_wMonth_1() { return static_cast<int32_t>(offsetof(SYSTEMTIME_tDB5B1D262445C33D2FE644CCC1353DFB26184BA4, ___wMonth_1)); }
	inline uint16_t get_wMonth_1() const { return ___wMonth_1; }
	inline uint16_t* get_address_of_wMonth_1() { return &___wMonth_1; }
	inline void set_wMonth_1(uint16_t value)
	{
		___wMonth_1 = value;
	}

	inline static int32_t get_offset_of_wDayOfWeek_2() { return static_cast<int32_t>(offsetof(SYSTEMTIME_tDB5B1D262445C33D2FE644CCC1353DFB26184BA4, ___wDayOfWeek_2)); }
	inline uint16_t get_wDayOfWeek_2() const { return ___wDayOfWeek_2; }
	inline uint16_t* get_address_of_wDayOfWeek_2() { return &___wDayOfWeek_2; }
	inline void set_wDayOfWeek_2(uint16_t value)
	{
		___wDayOfWeek_2 = value;
	}

	inline static int32_t get_offset_of_wDay_3() { return static_cast<int32_t>(offsetof(SYSTEMTIME_tDB5B1D262445C33D2FE644CCC1353DFB26184BA4, ___wDay_3)); }
	inline uint16_t get_wDay_3() const { return ___wDay_3; }
	inline uint16_t* get_address_of_wDay_3() { return &___wDay_3; }
	inline void set_wDay_3(uint16_t value)
	{
		___wDay_3 = value;
	}

	inline static int32_t get_offset_of_wHour_4() { return static_cast<int32_t>(offsetof(SYSTEMTIME_tDB5B1D262445C33D2FE644CCC1353DFB26184BA4, ___wHour_4)); }
	inline uint16_t get_wHour_4() const { return ___wHour_4; }
	inline uint16_t* get_address_of_wHour_4() { return &___wHour_4; }
	inline void set_wHour_4(uint16_t value)
	{
		___wHour_4 = value;
	}

	inline static int32_t get_offset_of_wMinute_5() { return static_cast<int32_t>(offsetof(SYSTEMTIME_tDB5B1D262445C33D2FE644CCC1353DFB26184BA4, ___wMinute_5)); }
	inline uint16_t get_wMinute_5() const { return ___wMinute_5; }
	inline uint16_t* get_address_of_wMinute_5() { return &___wMinute_5; }
	inline void set_wMinute_5(uint16_t value)
	{
		___wMinute_5 = value;
	}

	inline static int32_t get_offset_of_wSecond_6() { return static_cast<int32_t>(offsetof(SYSTEMTIME_tDB5B1D262445C33D2FE644CCC1353DFB26184BA4, ___wSecond_6)); }
	inline uint16_t get_wSecond_6() const { return ___wSecond_6; }
	inline uint16_t* get_address_of_wSecond_6() { return &___wSecond_6; }
	inline void set_wSecond_6(uint16_t value)
	{
		___wSecond_6 = value;
	}

	inline static int32_t get_offset_of_wMilliseconds_7() { return static_cast<int32_t>(offsetof(SYSTEMTIME_tDB5B1D262445C33D2FE644CCC1353DFB26184BA4, ___wMilliseconds_7)); }
	inline uint16_t get_wMilliseconds_7() const { return ___wMilliseconds_7; }
	inline uint16_t* get_address_of_wMilliseconds_7() { return &___wMilliseconds_7; }
	inline void set_wMilliseconds_7(uint16_t value)
	{
		___wMilliseconds_7 = value;
	}
};


// System.TypeIdentifiers_Display
struct  Display_tB07FE33B5E37AC259B2FCC8EC820AC5CEDEAC41E  : public ATypeName_t19F245ED1619C78770F92C899C4FE364DBF30861
{
public:
	// System.String System.TypeIdentifiers_Display::displayName
	String_t* ___displayName_0;
	// System.String System.TypeIdentifiers_Display::internal_name
	String_t* ___internal_name_1;

public:
	inline static int32_t get_offset_of_displayName_0() { return static_cast<int32_t>(offsetof(Display_tB07FE33B5E37AC259B2FCC8EC820AC5CEDEAC41E, ___displayName_0)); }
	inline String_t* get_displayName_0() const { return ___displayName_0; }
	inline String_t** get_address_of_displayName_0() { return &___displayName_0; }
	inline void set_displayName_0(String_t* value)
	{
		___displayName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___displayName_0), (void*)value);
	}

	inline static int32_t get_offset_of_internal_name_1() { return static_cast<int32_t>(offsetof(Display_tB07FE33B5E37AC259B2FCC8EC820AC5CEDEAC41E, ___internal_name_1)); }
	inline String_t* get_internal_name_1() const { return ___internal_name_1; }
	inline String_t** get_address_of_internal_name_1() { return &___internal_name_1; }
	inline void set_internal_name_1(String_t* value)
	{
		___internal_name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internal_name_1), (void*)value);
	}
};


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
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


// System.DateTimeKind
struct  DateTimeKind_tA0B5F3F88991AC3B7F24393E15B54062722571D0 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateTimeKind_tA0B5F3F88991AC3B7F24393E15B54062722571D0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.DayOfWeek
struct  DayOfWeek_t9E9D87E7A85C119F741167E9F8C613ABFB0A4AC7 
{
public:
	// System.Int32 System.DayOfWeek::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DayOfWeek_t9E9D87E7A85C119F741167E9F8C613ABFB0A4AC7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
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

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Globalization.TimeSpanFormat_Pattern
struct  Pattern_t5B2F35E57DF8A6B732D89E5723D12E2C100B6D2C 
{
public:
	// System.Int32 System.Globalization.TimeSpanFormat_Pattern::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Pattern_t5B2F35E57DF8A6B732D89E5723D12E2C100B6D2C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct  BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.Serialization.StreamingContextStates
struct  StreamingContextStates_tF4C7FE6D6121BD4C67699869C8269A60B36B42C3 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StreamingContextStates_tF4C7FE6D6121BD4C67699869C8269A60B36B42C3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.Text.UTF32Encoding_UTF32Decoder
struct  UTF32Decoder_t38867B08AD03138702C713129B79529EC4528DB7  : public DecoderNLS_tE5B1B7D68B698C0B65FBEE94EAE2453FFD3D538A
{
public:
	// System.Int32 System.Text.UTF32Encoding_UTF32Decoder::iChar
	int32_t ___iChar_6;
	// System.Int32 System.Text.UTF32Encoding_UTF32Decoder::readByteCount
	int32_t ___readByteCount_7;

public:
	inline static int32_t get_offset_of_iChar_6() { return static_cast<int32_t>(offsetof(UTF32Decoder_t38867B08AD03138702C713129B79529EC4528DB7, ___iChar_6)); }
	inline int32_t get_iChar_6() const { return ___iChar_6; }
	inline int32_t* get_address_of_iChar_6() { return &___iChar_6; }
	inline void set_iChar_6(int32_t value)
	{
		___iChar_6 = value;
	}

	inline static int32_t get_offset_of_readByteCount_7() { return static_cast<int32_t>(offsetof(UTF32Decoder_t38867B08AD03138702C713129B79529EC4528DB7, ___readByteCount_7)); }
	inline int32_t get_readByteCount_7() const { return ___readByteCount_7; }
	inline int32_t* get_address_of_readByteCount_7() { return &___readByteCount_7; }
	inline void set_readByteCount_7(int32_t value)
	{
		___readByteCount_7 = value;
	}
};


// System.Text.UTF7Encoding_Decoder
struct  Decoder_t6C0639E0DF1E52128429AC770CA9F2557A8E54C9  : public DecoderNLS_tE5B1B7D68B698C0B65FBEE94EAE2453FFD3D538A
{
public:
	// System.Int32 System.Text.UTF7Encoding_Decoder::bits
	int32_t ___bits_6;
	// System.Int32 System.Text.UTF7Encoding_Decoder::bitCount
	int32_t ___bitCount_7;
	// System.Boolean System.Text.UTF7Encoding_Decoder::firstByte
	bool ___firstByte_8;

public:
	inline static int32_t get_offset_of_bits_6() { return static_cast<int32_t>(offsetof(Decoder_t6C0639E0DF1E52128429AC770CA9F2557A8E54C9, ___bits_6)); }
	inline int32_t get_bits_6() const { return ___bits_6; }
	inline int32_t* get_address_of_bits_6() { return &___bits_6; }
	inline void set_bits_6(int32_t value)
	{
		___bits_6 = value;
	}

	inline static int32_t get_offset_of_bitCount_7() { return static_cast<int32_t>(offsetof(Decoder_t6C0639E0DF1E52128429AC770CA9F2557A8E54C9, ___bitCount_7)); }
	inline int32_t get_bitCount_7() const { return ___bitCount_7; }
	inline int32_t* get_address_of_bitCount_7() { return &___bitCount_7; }
	inline void set_bitCount_7(int32_t value)
	{
		___bitCount_7 = value;
	}

	inline static int32_t get_offset_of_firstByte_8() { return static_cast<int32_t>(offsetof(Decoder_t6C0639E0DF1E52128429AC770CA9F2557A8E54C9, ___firstByte_8)); }
	inline bool get_firstByte_8() const { return ___firstByte_8; }
	inline bool* get_address_of_firstByte_8() { return &___firstByte_8; }
	inline void set_firstByte_8(bool value)
	{
		___firstByte_8 = value;
	}
};


// System.Text.UTF7Encoding_Encoder
struct  Encoder_tF895184EA91019AA3995A8547FD56A3E0D16D1B4  : public EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712
{
public:
	// System.Int32 System.Text.UTF7Encoding_Encoder::bits
	int32_t ___bits_7;
	// System.Int32 System.Text.UTF7Encoding_Encoder::bitCount
	int32_t ___bitCount_8;

public:
	inline static int32_t get_offset_of_bits_7() { return static_cast<int32_t>(offsetof(Encoder_tF895184EA91019AA3995A8547FD56A3E0D16D1B4, ___bits_7)); }
	inline int32_t get_bits_7() const { return ___bits_7; }
	inline int32_t* get_address_of_bits_7() { return &___bits_7; }
	inline void set_bits_7(int32_t value)
	{
		___bits_7 = value;
	}

	inline static int32_t get_offset_of_bitCount_8() { return static_cast<int32_t>(offsetof(Encoder_tF895184EA91019AA3995A8547FD56A3E0D16D1B4, ___bitCount_8)); }
	inline int32_t get_bitCount_8() const { return ___bitCount_8; }
	inline int32_t* get_address_of_bitCount_8() { return &___bitCount_8; }
	inline void set_bitCount_8(int32_t value)
	{
		___bitCount_8 = value;
	}
};


// System.Text.UTF8Encoding_UTF8Decoder
struct  UTF8Decoder_tD2359F0F52206B911EBC3222E627191C829F4C65  : public DecoderNLS_tE5B1B7D68B698C0B65FBEE94EAE2453FFD3D538A
{
public:
	// System.Int32 System.Text.UTF8Encoding_UTF8Decoder::bits
	int32_t ___bits_6;

public:
	inline static int32_t get_offset_of_bits_6() { return static_cast<int32_t>(offsetof(UTF8Decoder_tD2359F0F52206B911EBC3222E627191C829F4C65, ___bits_6)); }
	inline int32_t get_bits_6() const { return ___bits_6; }
	inline int32_t* get_address_of_bits_6() { return &___bits_6; }
	inline void set_bits_6(int32_t value)
	{
		___bits_6 = value;
	}
};


// System.Text.UTF8Encoding_UTF8Encoder
struct  UTF8Encoder_t3408DBF93D79A981F50954F660E33BA13FE29FD3  : public EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712
{
public:
	// System.Int32 System.Text.UTF8Encoding_UTF8Encoder::surrogateChar
	int32_t ___surrogateChar_7;

public:
	inline static int32_t get_offset_of_surrogateChar_7() { return static_cast<int32_t>(offsetof(UTF8Encoder_t3408DBF93D79A981F50954F660E33BA13FE29FD3, ___surrogateChar_7)); }
	inline int32_t get_surrogateChar_7() const { return ___surrogateChar_7; }
	inline int32_t* get_address_of_surrogateChar_7() { return &___surrogateChar_7; }
	inline void set_surrogateChar_7(int32_t value)
	{
		___surrogateChar_7 = value;
	}
};


// System.Text.UnicodeEncoding_Decoder
struct  Decoder_tC3DC16951ED8FCF98278FC7F0804070A9C218109  : public DecoderNLS_tE5B1B7D68B698C0B65FBEE94EAE2453FFD3D538A
{
public:
	// System.Int32 System.Text.UnicodeEncoding_Decoder::lastByte
	int32_t ___lastByte_6;
	// System.Char System.Text.UnicodeEncoding_Decoder::lastChar
	Il2CppChar ___lastChar_7;

public:
	inline static int32_t get_offset_of_lastByte_6() { return static_cast<int32_t>(offsetof(Decoder_tC3DC16951ED8FCF98278FC7F0804070A9C218109, ___lastByte_6)); }
	inline int32_t get_lastByte_6() const { return ___lastByte_6; }
	inline int32_t* get_address_of_lastByte_6() { return &___lastByte_6; }
	inline void set_lastByte_6(int32_t value)
	{
		___lastByte_6 = value;
	}

	inline static int32_t get_offset_of_lastChar_7() { return static_cast<int32_t>(offsetof(Decoder_tC3DC16951ED8FCF98278FC7F0804070A9C218109, ___lastChar_7)); }
	inline Il2CppChar get_lastChar_7() const { return ___lastChar_7; }
	inline Il2CppChar* get_address_of_lastChar_7() { return &___lastChar_7; }
	inline void set_lastChar_7(Il2CppChar value)
	{
		___lastChar_7 = value;
	}
};


// System.Threading.WaitHandle
struct  WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IntPtr System.Threading.WaitHandle::waitHandle
	intptr_t ___waitHandle_3;
	// Microsoft.Win32.SafeHandles.SafeWaitHandle modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.WaitHandle::safeWaitHandle
	SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * ___safeWaitHandle_4;
	// System.Boolean System.Threading.WaitHandle::hasThreadAffinity
	bool ___hasThreadAffinity_5;

public:
	inline static int32_t get_offset_of_waitHandle_3() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___waitHandle_3)); }
	inline intptr_t get_waitHandle_3() const { return ___waitHandle_3; }
	inline intptr_t* get_address_of_waitHandle_3() { return &___waitHandle_3; }
	inline void set_waitHandle_3(intptr_t value)
	{
		___waitHandle_3 = value;
	}

	inline static int32_t get_offset_of_safeWaitHandle_4() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___safeWaitHandle_4)); }
	inline SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * get_safeWaitHandle_4() const { return ___safeWaitHandle_4; }
	inline SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 ** get_address_of_safeWaitHandle_4() { return &___safeWaitHandle_4; }
	inline void set_safeWaitHandle_4(SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * value)
	{
		___safeWaitHandle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___safeWaitHandle_4), (void*)value);
	}

	inline static int32_t get_offset_of_hasThreadAffinity_5() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___hasThreadAffinity_5)); }
	inline bool get_hasThreadAffinity_5() const { return ___hasThreadAffinity_5; }
	inline bool* get_address_of_hasThreadAffinity_5() { return &___hasThreadAffinity_5; }
	inline void set_hasThreadAffinity_5(bool value)
	{
		___hasThreadAffinity_5 = value;
	}
};

struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_StaticFields
{
public:
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_10;

public:
	inline static int32_t get_offset_of_InvalidHandle_10() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_StaticFields, ___InvalidHandle_10)); }
	inline intptr_t get_InvalidHandle_10() const { return ___InvalidHandle_10; }
	inline intptr_t* get_address_of_InvalidHandle_10() { return &___InvalidHandle_10; }
	inline void set_InvalidHandle_10(intptr_t value)
	{
		___InvalidHandle_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_marshaled_pinvoke : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};
// Native definition for COM marshalling of System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_marshaled_com : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};

// System.TimeSpan
struct  TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_0;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_1;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_5;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_0)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_0() const { return ___Zero_0; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_1)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_1() const { return ___MaxValue_1; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_2)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_2() const { return ___MinValue_2; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_4() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_4)); }
	inline bool get__legacyConfigChecked_4() const { return ____legacyConfigChecked_4; }
	inline bool* get_address_of__legacyConfigChecked_4() { return &____legacyConfigChecked_4; }
	inline void set__legacyConfigChecked_4(bool value)
	{
		____legacyConfigChecked_4 = value;
	}

	inline static int32_t get_offset_of__legacyMode_5() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_5)); }
	inline bool get__legacyMode_5() const { return ____legacyMode_5; }
	inline bool* get_address_of__legacyMode_5() { return &____legacyMode_5; }
	inline void set__legacyMode_5(bool value)
	{
		____legacyMode_5 = value;
	}
};


// System.TimeZoneInfo_TIME_ZONE_INFORMATION
struct  TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578 
{
public:
	// System.Int32 System.TimeZoneInfo_TIME_ZONE_INFORMATION::Bias
	int32_t ___Bias_0;
	// System.String System.TimeZoneInfo_TIME_ZONE_INFORMATION::StandardName
	String_t* ___StandardName_1;
	// System.TimeZoneInfo_SYSTEMTIME System.TimeZoneInfo_TIME_ZONE_INFORMATION::StandardDate
	SYSTEMTIME_tDB5B1D262445C33D2FE644CCC1353DFB26184BA4  ___StandardDate_2;
	// System.Int32 System.TimeZoneInfo_TIME_ZONE_INFORMATION::StandardBias
	int32_t ___StandardBias_3;
	// System.String System.TimeZoneInfo_TIME_ZONE_INFORMATION::DaylightName
	String_t* ___DaylightName_4;
	// System.TimeZoneInfo_SYSTEMTIME System.TimeZoneInfo_TIME_ZONE_INFORMATION::DaylightDate
	SYSTEMTIME_tDB5B1D262445C33D2FE644CCC1353DFB26184BA4  ___DaylightDate_5;
	// System.Int32 System.TimeZoneInfo_TIME_ZONE_INFORMATION::DaylightBias
	int32_t ___DaylightBias_6;

public:
	inline static int32_t get_offset_of_Bias_0() { return static_cast<int32_t>(offsetof(TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578, ___Bias_0)); }
	inline int32_t get_Bias_0() const { return ___Bias_0; }
	inline int32_t* get_address_of_Bias_0() { return &___Bias_0; }
	inline void set_Bias_0(int32_t value)
	{
		___Bias_0 = value;
	}

	inline static int32_t get_offset_of_StandardName_1() { return static_cast<int32_t>(offsetof(TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578, ___StandardName_1)); }
	inline String_t* get_StandardName_1() const { return ___StandardName_1; }
	inline String_t** get_address_of_StandardName_1() { return &___StandardName_1; }
	inline void set_StandardName_1(String_t* value)
	{
		___StandardName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StandardName_1), (void*)value);
	}

	inline static int32_t get_offset_of_StandardDate_2() { return static_cast<int32_t>(offsetof(TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578, ___StandardDate_2)); }
	inline SYSTEMTIME_tDB5B1D262445C33D2FE644CCC1353DFB26184BA4  get_StandardDate_2() const { return ___StandardDate_2; }
	inline SYSTEMTIME_tDB5B1D262445C33D2FE644CCC1353DFB26184BA4 * get_address_of_StandardDate_2() { return &___StandardDate_2; }
	inline void set_StandardDate_2(SYSTEMTIME_tDB5B1D262445C33D2FE644CCC1353DFB26184BA4  value)
	{
		___StandardDate_2 = value;
	}

	inline static int32_t get_offset_of_StandardBias_3() { return static_cast<int32_t>(offsetof(TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578, ___StandardBias_3)); }
	inline int32_t get_StandardBias_3() const { return ___StandardBias_3; }
	inline int32_t* get_address_of_StandardBias_3() { return &___StandardBias_3; }
	inline void set_StandardBias_3(int32_t value)
	{
		___StandardBias_3 = value;
	}

	inline static int32_t get_offset_of_DaylightName_4() { return static_cast<int32_t>(offsetof(TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578, ___DaylightName_4)); }
	inline String_t* get_DaylightName_4() const { return ___DaylightName_4; }
	inline String_t** get_address_of_DaylightName_4() { return &___DaylightName_4; }
	inline void set_DaylightName_4(String_t* value)
	{
		___DaylightName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaylightName_4), (void*)value);
	}

	inline static int32_t get_offset_of_DaylightDate_5() { return static_cast<int32_t>(offsetof(TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578, ___DaylightDate_5)); }
	inline SYSTEMTIME_tDB5B1D262445C33D2FE644CCC1353DFB26184BA4  get_DaylightDate_5() const { return ___DaylightDate_5; }
	inline SYSTEMTIME_tDB5B1D262445C33D2FE644CCC1353DFB26184BA4 * get_address_of_DaylightDate_5() { return &___DaylightDate_5; }
	inline void set_DaylightDate_5(SYSTEMTIME_tDB5B1D262445C33D2FE644CCC1353DFB26184BA4  value)
	{
		___DaylightDate_5 = value;
	}

	inline static int32_t get_offset_of_DaylightBias_6() { return static_cast<int32_t>(offsetof(TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578, ___DaylightBias_6)); }
	inline int32_t get_DaylightBias_6() const { return ___DaylightBias_6; }
	inline int32_t* get_address_of_DaylightBias_6() { return &___DaylightBias_6; }
	inline void set_DaylightBias_6(int32_t value)
	{
		___DaylightBias_6 = value;
	}
};

// Native definition for P/Invoke marshalling of System.TimeZoneInfo/TIME_ZONE_INFORMATION
struct TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshaled_pinvoke
{
	int32_t ___Bias_0;
	Il2CppChar ___StandardName_1[32];
	SYSTEMTIME_tDB5B1D262445C33D2FE644CCC1353DFB26184BA4  ___StandardDate_2;
	int32_t ___StandardBias_3;
	Il2CppChar ___DaylightName_4[32];
	SYSTEMTIME_tDB5B1D262445C33D2FE644CCC1353DFB26184BA4  ___DaylightDate_5;
	int32_t ___DaylightBias_6;
};
// Native definition for COM marshalling of System.TimeZoneInfo/TIME_ZONE_INFORMATION
struct TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshaled_com
{
	int32_t ___Bias_0;
	Il2CppChar ___StandardName_1[32];
	SYSTEMTIME_tDB5B1D262445C33D2FE644CCC1353DFB26184BA4  ___StandardDate_2;
	int32_t ___StandardBias_3;
	Il2CppChar ___DaylightName_4[32];
	SYSTEMTIME_tDB5B1D262445C33D2FE644CCC1353DFB26184BA4  ___DaylightDate_5;
	int32_t ___DaylightBias_6;
};

// System.TypeSpec_DisplayNameFormat
struct  DisplayNameFormat_tF42BE9AF429E47348F6DF90A17947869EF4D0077 
{
public:
	// System.Int32 System.TypeSpec_DisplayNameFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DisplayNameFormat_tF42BE9AF429E47348F6DF90A17947869EF4D0077, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
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

// System.Runtime.Serialization.StreamingContext
struct  StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505 
{
public:
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject * ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;

public:
	inline static int32_t get_offset_of_m_additionalContext_0() { return static_cast<int32_t>(offsetof(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505, ___m_additionalContext_0)); }
	inline RuntimeObject * get_m_additionalContext_0() const { return ___m_additionalContext_0; }
	inline RuntimeObject ** get_address_of_m_additionalContext_0() { return &___m_additionalContext_0; }
	inline void set_m_additionalContext_0(RuntimeObject * value)
	{
		___m_additionalContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_additionalContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_state_1() { return static_cast<int32_t>(offsetof(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505, ___m_state_1)); }
	inline int32_t get_m_state_1() const { return ___m_state_1; }
	inline int32_t* get_address_of_m_state_1() { return &___m_state_1; }
	inline void set_m_state_1(int32_t value)
	{
		___m_state_1 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Threading.EventWaitHandle
struct  EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C  : public WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842
{
public:

public:
};


// System.TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION
struct  DYNAMIC_TIME_ZONE_INFORMATION_t2A935E4357B99965B322E468058134B139805895 
{
public:
	// System.TimeZoneInfo_TIME_ZONE_INFORMATION System.TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION::TZI
	TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578  ___TZI_0;
	// System.String System.TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION::TimeZoneKeyName
	String_t* ___TimeZoneKeyName_1;
	// System.Byte System.TimeZoneInfo_DYNAMIC_TIME_ZONE_INFORMATION::DynamicDaylightTimeDisabled
	uint8_t ___DynamicDaylightTimeDisabled_2;

public:
	inline static int32_t get_offset_of_TZI_0() { return static_cast<int32_t>(offsetof(DYNAMIC_TIME_ZONE_INFORMATION_t2A935E4357B99965B322E468058134B139805895, ___TZI_0)); }
	inline TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578  get_TZI_0() const { return ___TZI_0; }
	inline TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578 * get_address_of_TZI_0() { return &___TZI_0; }
	inline void set_TZI_0(TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578  value)
	{
		___TZI_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___TZI_0))->___StandardName_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___TZI_0))->___DaylightName_4), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_TimeZoneKeyName_1() { return static_cast<int32_t>(offsetof(DYNAMIC_TIME_ZONE_INFORMATION_t2A935E4357B99965B322E468058134B139805895, ___TimeZoneKeyName_1)); }
	inline String_t* get_TimeZoneKeyName_1() const { return ___TimeZoneKeyName_1; }
	inline String_t** get_address_of_TimeZoneKeyName_1() { return &___TimeZoneKeyName_1; }
	inline void set_TimeZoneKeyName_1(String_t* value)
	{
		___TimeZoneKeyName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TimeZoneKeyName_1), (void*)value);
	}

	inline static int32_t get_offset_of_DynamicDaylightTimeDisabled_2() { return static_cast<int32_t>(offsetof(DYNAMIC_TIME_ZONE_INFORMATION_t2A935E4357B99965B322E468058134B139805895, ___DynamicDaylightTimeDisabled_2)); }
	inline uint8_t get_DynamicDaylightTimeDisabled_2() const { return ___DynamicDaylightTimeDisabled_2; }
	inline uint8_t* get_address_of_DynamicDaylightTimeDisabled_2() { return &___DynamicDaylightTimeDisabled_2; }
	inline void set_DynamicDaylightTimeDisabled_2(uint8_t value)
	{
		___DynamicDaylightTimeDisabled_2 = value;
	}
};

// Native definition for P/Invoke marshalling of System.TimeZoneInfo/DYNAMIC_TIME_ZONE_INFORMATION
struct DYNAMIC_TIME_ZONE_INFORMATION_t2A935E4357B99965B322E468058134B139805895_marshaled_pinvoke
{
	TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshaled_pinvoke ___TZI_0;
	Il2CppChar ___TimeZoneKeyName_1[128];
	uint8_t ___DynamicDaylightTimeDisabled_2;
};
// Native definition for COM marshalling of System.TimeZoneInfo/DYNAMIC_TIME_ZONE_INFORMATION
struct DYNAMIC_TIME_ZONE_INFORMATION_t2A935E4357B99965B322E468058134B139805895_marshaled_com
{
	TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshaled_com ___TZI_0;
	Il2CppChar ___TimeZoneKeyName_1[128];
	uint8_t ___DynamicDaylightTimeDisabled_2;
};

// System.TimeZoneInfo_TransitionTime
struct  TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A 
{
public:
	// System.DateTime System.TimeZoneInfo_TransitionTime::m_timeOfDay
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___m_timeOfDay_0;
	// System.Byte System.TimeZoneInfo_TransitionTime::m_month
	uint8_t ___m_month_1;
	// System.Byte System.TimeZoneInfo_TransitionTime::m_week
	uint8_t ___m_week_2;
	// System.Byte System.TimeZoneInfo_TransitionTime::m_day
	uint8_t ___m_day_3;
	// System.DayOfWeek System.TimeZoneInfo_TransitionTime::m_dayOfWeek
	int32_t ___m_dayOfWeek_4;
	// System.Boolean System.TimeZoneInfo_TransitionTime::m_isFixedDateRule
	bool ___m_isFixedDateRule_5;

public:
	inline static int32_t get_offset_of_m_timeOfDay_0() { return static_cast<int32_t>(offsetof(TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A, ___m_timeOfDay_0)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_m_timeOfDay_0() const { return ___m_timeOfDay_0; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_m_timeOfDay_0() { return &___m_timeOfDay_0; }
	inline void set_m_timeOfDay_0(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___m_timeOfDay_0 = value;
	}

	inline static int32_t get_offset_of_m_month_1() { return static_cast<int32_t>(offsetof(TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A, ___m_month_1)); }
	inline uint8_t get_m_month_1() const { return ___m_month_1; }
	inline uint8_t* get_address_of_m_month_1() { return &___m_month_1; }
	inline void set_m_month_1(uint8_t value)
	{
		___m_month_1 = value;
	}

	inline static int32_t get_offset_of_m_week_2() { return static_cast<int32_t>(offsetof(TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A, ___m_week_2)); }
	inline uint8_t get_m_week_2() const { return ___m_week_2; }
	inline uint8_t* get_address_of_m_week_2() { return &___m_week_2; }
	inline void set_m_week_2(uint8_t value)
	{
		___m_week_2 = value;
	}

	inline static int32_t get_offset_of_m_day_3() { return static_cast<int32_t>(offsetof(TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A, ___m_day_3)); }
	inline uint8_t get_m_day_3() const { return ___m_day_3; }
	inline uint8_t* get_address_of_m_day_3() { return &___m_day_3; }
	inline void set_m_day_3(uint8_t value)
	{
		___m_day_3 = value;
	}

	inline static int32_t get_offset_of_m_dayOfWeek_4() { return static_cast<int32_t>(offsetof(TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A, ___m_dayOfWeek_4)); }
	inline int32_t get_m_dayOfWeek_4() const { return ___m_dayOfWeek_4; }
	inline int32_t* get_address_of_m_dayOfWeek_4() { return &___m_dayOfWeek_4; }
	inline void set_m_dayOfWeek_4(int32_t value)
	{
		___m_dayOfWeek_4 = value;
	}

	inline static int32_t get_offset_of_m_isFixedDateRule_5() { return static_cast<int32_t>(offsetof(TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A, ___m_isFixedDateRule_5)); }
	inline bool get_m_isFixedDateRule_5() const { return ___m_isFixedDateRule_5; }
	inline bool* get_address_of_m_isFixedDateRule_5() { return &___m_isFixedDateRule_5; }
	inline void set_m_isFixedDateRule_5(bool value)
	{
		___m_isFixedDateRule_5 = value;
	}
};

// Native definition for P/Invoke marshalling of System.TimeZoneInfo/TransitionTime
struct TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A_marshaled_pinvoke
{
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___m_timeOfDay_0;
	uint8_t ___m_month_1;
	uint8_t ___m_week_2;
	uint8_t ___m_day_3;
	int32_t ___m_dayOfWeek_4;
	int32_t ___m_isFixedDateRule_5;
};
// Native definition for COM marshalling of System.TimeZoneInfo/TransitionTime
struct TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A_marshaled_com
{
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___m_timeOfDay_0;
	uint8_t ___m_month_1;
	uint8_t ___m_week_2;
	uint8_t ___m_day_3;
	int32_t ___m_dayOfWeek_4;
	int32_t ___m_isFixedDateRule_5;
};

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// System.ArgumentException
struct  ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.AsyncCallback
struct  AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// System.Console_WindowsConsole_WindowsCancelHandler
struct  WindowsCancelHandler_tFD0F0B721F93ACA04D9CD9340DA39075A8FF2ACF  : public MulticastDelegate_t
{
public:

public:
};


// System.InvalidOperationException
struct  InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.Runtime.Serialization.SerializationException
struct  SerializationException_tDB38C13A2ABF407C381E3F332D197AC1AD097A92  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};

struct SerializationException_tDB38C13A2ABF407C381E3F332D197AC1AD097A92_StaticFields
{
public:
	// System.String System.Runtime.Serialization.SerializationException::_nullMessage
	String_t* ____nullMessage_17;

public:
	inline static int32_t get_offset_of__nullMessage_17() { return static_cast<int32_t>(offsetof(SerializationException_tDB38C13A2ABF407C381E3F332D197AC1AD097A92_StaticFields, ____nullMessage_17)); }
	inline String_t* get__nullMessage_17() const { return ____nullMessage_17; }
	inline String_t** get_address_of__nullMessage_17() { return &____nullMessage_17; }
	inline void set__nullMessage_17(String_t* value)
	{
		____nullMessage_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____nullMessage_17), (void*)value);
	}
};


// System.Threading.ManualResetEvent
struct  ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA  : public EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C
{
public:

public:
};


// System.Threading.ThreadStart
struct  ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687  : public MulticastDelegate_t
{
public:

public:
};


// System.Threading.TimerCallback
struct  TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814  : public MulticastDelegate_t
{
public:

public:
};


// System.Threading.WaitCallback
struct  WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319  : public MulticastDelegate_t
{
public:

public:
};


// System.TimeZoneInfo_AdjustmentRule
struct  AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304  : public RuntimeObject
{
public:
	// System.DateTime System.TimeZoneInfo_AdjustmentRule::m_dateStart
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___m_dateStart_0;
	// System.DateTime System.TimeZoneInfo_AdjustmentRule::m_dateEnd
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___m_dateEnd_1;
	// System.TimeSpan System.TimeZoneInfo_AdjustmentRule::m_daylightDelta
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___m_daylightDelta_2;
	// System.TimeZoneInfo_TransitionTime System.TimeZoneInfo_AdjustmentRule::m_daylightTransitionStart
	TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  ___m_daylightTransitionStart_3;
	// System.TimeZoneInfo_TransitionTime System.TimeZoneInfo_AdjustmentRule::m_daylightTransitionEnd
	TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  ___m_daylightTransitionEnd_4;
	// System.TimeSpan System.TimeZoneInfo_AdjustmentRule::m_baseUtcOffsetDelta
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___m_baseUtcOffsetDelta_5;

public:
	inline static int32_t get_offset_of_m_dateStart_0() { return static_cast<int32_t>(offsetof(AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304, ___m_dateStart_0)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_m_dateStart_0() const { return ___m_dateStart_0; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_m_dateStart_0() { return &___m_dateStart_0; }
	inline void set_m_dateStart_0(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___m_dateStart_0 = value;
	}

	inline static int32_t get_offset_of_m_dateEnd_1() { return static_cast<int32_t>(offsetof(AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304, ___m_dateEnd_1)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_m_dateEnd_1() const { return ___m_dateEnd_1; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_m_dateEnd_1() { return &___m_dateEnd_1; }
	inline void set_m_dateEnd_1(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___m_dateEnd_1 = value;
	}

	inline static int32_t get_offset_of_m_daylightDelta_2() { return static_cast<int32_t>(offsetof(AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304, ___m_daylightDelta_2)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_m_daylightDelta_2() const { return ___m_daylightDelta_2; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_m_daylightDelta_2() { return &___m_daylightDelta_2; }
	inline void set_m_daylightDelta_2(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___m_daylightDelta_2 = value;
	}

	inline static int32_t get_offset_of_m_daylightTransitionStart_3() { return static_cast<int32_t>(offsetof(AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304, ___m_daylightTransitionStart_3)); }
	inline TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  get_m_daylightTransitionStart_3() const { return ___m_daylightTransitionStart_3; }
	inline TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * get_address_of_m_daylightTransitionStart_3() { return &___m_daylightTransitionStart_3; }
	inline void set_m_daylightTransitionStart_3(TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  value)
	{
		___m_daylightTransitionStart_3 = value;
	}

	inline static int32_t get_offset_of_m_daylightTransitionEnd_4() { return static_cast<int32_t>(offsetof(AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304, ___m_daylightTransitionEnd_4)); }
	inline TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  get_m_daylightTransitionEnd_4() const { return ___m_daylightTransitionEnd_4; }
	inline TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * get_address_of_m_daylightTransitionEnd_4() { return &___m_daylightTransitionEnd_4; }
	inline void set_m_daylightTransitionEnd_4(TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  value)
	{
		___m_daylightTransitionEnd_4 = value;
	}

	inline static int32_t get_offset_of_m_baseUtcOffsetDelta_5() { return static_cast<int32_t>(offsetof(AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304, ___m_baseUtcOffsetDelta_5)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_m_baseUtcOffsetDelta_5() const { return ___m_baseUtcOffsetDelta_5; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_m_baseUtcOffsetDelta_5() { return &___m_baseUtcOffsetDelta_5; }
	inline void set_m_baseUtcOffsetDelta_5(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___m_baseUtcOffsetDelta_5 = value;
	}
};


// System.ArgumentNullException
struct  ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};


// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};

struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
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
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};

IL2CPP_EXTERN_C void TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshal_pinvoke(const TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578& unmarshaled, TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshal_pinvoke_back(const TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshaled_pinvoke& marshaled, TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578& unmarshaled);
IL2CPP_EXTERN_C void TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshal_pinvoke_cleanup(TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshal_com(const TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578& unmarshaled, TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshaled_com& marshaled);
IL2CPP_EXTERN_C void TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshal_com_back(const TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshaled_com& marshaled, TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578& unmarshaled);
IL2CPP_EXTERN_C void TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshal_com_cleanup(TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshaled_com& marshaled);

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Capacity_mE316E0DB641CFB093F0309D091D773047F81B2CC_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m7A81900F3492DE11874B0EA9A0E5454F897E3079_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___value0, const RuntimeMethod* method);

// System.Void System.TimeZoneInfo/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m9DEEDA6DA97B7B98E7E8FFBDFFD70D67023DD420 (U3CU3Ec_t24F903F915888347E8B19C16314DF4C75387324E * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.DateTime System.TimeZoneInfo/AdjustmentRule::get_DateStart()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  AdjustmentRule_get_DateStart_m05FFD9D69391EC287D299B23A549FFB1F9FB14EE_inline (AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304 * __this, const RuntimeMethod* method);
// System.Int32 System.DateTime::CompareTo(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_CompareTo_m2864B0ABAE4B8748D4092D1D16AE56EE0B248F93 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method);
// System.Boolean System.DateTime::op_Equality(System.DateTime,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTime_op_Equality_m07957AECB8C66EA047B16511BF560DD9EDA1DA44 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___d10, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___d21, const RuntimeMethod* method);
// System.Boolean System.TimeSpan::op_Equality(System.TimeSpan,System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimeSpan_op_Equality_m8229F4B63064E2D43B244C6E82D55CB2B0360BB1 (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___t10, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___t21, const RuntimeMethod* method);
// System.Boolean System.TimeZoneInfo/TransitionTime::Equals(System.TimeZoneInfo/TransitionTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransitionTime_Equals_m4976405B1B8F5E7A5C269D4760CD239DC18E5631 (TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * __this, TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  ___other0, const RuntimeMethod* method);
// System.Int32 System.DateTime::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_GetHashCode_mC94DC52667BB5C0DE7A78C53BE24FDF5469BA49D (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, const RuntimeMethod* method);
// System.Void System.TimeZoneInfo/AdjustmentRule::ValidateAdjustmentRule(System.DateTime,System.DateTime,System.TimeSpan,System.TimeZoneInfo/TransitionTime,System.TimeZoneInfo/TransitionTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustmentRule_ValidateAdjustmentRule_m2D1CE9572A7AA306E36ADD93AA2CEA2858B77023 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___dateStart0, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___dateEnd1, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___daylightDelta2, TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  ___daylightTransitionStart3, TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  ___daylightTransitionEnd4, const RuntimeMethod* method);
// System.Void System.TimeZoneInfo/AdjustmentRule::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustmentRule__ctor_m6768FD1CD669E0678EC84422E516891EE71528CC (AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304 * __this, const RuntimeMethod* method);
// System.TimeZoneInfo/AdjustmentRule System.TimeZoneInfo/AdjustmentRule::CreateAdjustmentRule(System.DateTime,System.DateTime,System.TimeSpan,System.TimeZoneInfo/TransitionTime,System.TimeZoneInfo/TransitionTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304 * AdjustmentRule_CreateAdjustmentRule_mC90086998B3DF5F9492A4B2281CFEDED04E1E6AE (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___dateStart0, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___dateEnd1, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___daylightDelta2, TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  ___daylightTransitionStart3, TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  ___daylightTransitionEnd4, const RuntimeMethod* method);
// System.DateTimeKind System.DateTime::get_Kind()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Kind_mC7EC1A788CC9A875094117214C5A0C153A39F496 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, const RuntimeMethod* method);
// System.String System.Environment::GetResourceString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_GetResourceString_m8DFF827596B5FD533D3FE56900FA095F7D674617 (String_t* ___key0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Boolean System.DateTime::op_GreaterThan(System.DateTime,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTime_op_GreaterThan_m87A988E247EFDFFE61474088700F29840758E3DD (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___t10, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___t21, const RuntimeMethod* method);
// System.Boolean System.TimeZoneInfo::UtcOffsetOutOfRange(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimeZoneInfo_UtcOffsetOutOfRange_m1691F47564A06BA9E8B774DA68430FDBEE363BA8 (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___offset0, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m7C5B3BE7792B7C73E7D82C4DBAD4ACA2DAE71AA9 (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, String_t* ___paramName0, RuntimeObject * ___actualValue1, String_t* ___message2, const RuntimeMethod* method);
// System.Int64 System.TimeSpan::get_Ticks()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t TimeSpan_get_Ticks_mE4C9E1F27DC794028CEDCF7CB5BD092D16DBACD4_inline (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * __this, const RuntimeMethod* method);
// System.TimeSpan System.DateTime::get_TimeOfDay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  DateTime_get_TimeOfDay_mE6A177963C8D8AA8AA2830239F1C7B3D11AFC645 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, const RuntimeMethod* method);
// System.Boolean System.TimeSpan::op_Inequality(System.TimeSpan,System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimeSpan_op_Inequality_mDE127E1886D092054E24EA873CEE64D0857CD04C (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___t10, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___t21, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.SerializationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationException__ctor_m03F01FDBEB6469CCD85942C5C62BD46FFC6CE11C (SerializationException_tDB38C13A2ABF407C381E3F332D197AC1AD097A92 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m4E39B61DB324BA16CB228942756352329286C40B (SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * __this, String_t* ___name0, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value1, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_mA50C2668EF700C2239DDC362F8DB409020BB763D (SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * __this, String_t* ___name0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Object System.Runtime.Serialization.SerializationInfo::GetValue(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99 (SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * __this, String_t* ___name0, Type_t * ___type1, const RuntimeMethod* method);
// System.Object System.Runtime.Serialization.SerializationInfo::GetValueNoThrow(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SerializationInfo_GetValueNoThrow_mA1F5663511899C588B39643FF53002717A84DFF3 (SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * __this, String_t* ___name0, Type_t * ___type1, const RuntimeMethod* method);
// System.DateTime System.TimeZoneInfo/TransitionTime::get_TimeOfDay()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  TransitionTime_get_TimeOfDay_m95ECA2E981CA772D9D1DECC7F7421241D4144F44_inline (TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * __this, const RuntimeMethod* method);
// System.Int32 System.TimeZoneInfo/TransitionTime::get_Month()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TransitionTime_get_Month_m1E127ECF7312277ED31CEB769A6DC0503F1FAB2B_inline (TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * __this, const RuntimeMethod* method);
// System.Int32 System.TimeZoneInfo/TransitionTime::get_Week()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TransitionTime_get_Week_m9271C2A79DC390EF07020F63CAB641FA36E304BA_inline (TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * __this, const RuntimeMethod* method);
// System.Int32 System.TimeZoneInfo/TransitionTime::get_Day()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TransitionTime_get_Day_mF663C24FEFF09012299FA76BE6D65CC6C455C87C_inline (TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * __this, const RuntimeMethod* method);
// System.DayOfWeek System.TimeZoneInfo/TransitionTime::get_DayOfWeek()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TransitionTime_get_DayOfWeek_mDC32F75FFCC4AAE5826AFBBC11840C8290E08E52_inline (TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * __this, const RuntimeMethod* method);
// System.Boolean System.TimeZoneInfo/TransitionTime::get_IsFixedDateRule()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TransitionTime_get_IsFixedDateRule_m4E7A489F0B8E60893C80A70E768F36A10258E9FB_inline (TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * __this, const RuntimeMethod* method);
// System.Boolean System.TimeZoneInfo/TransitionTime::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransitionTime_Equals_mD63D4051F9FCD2B6277B194A42CCA50934E7C2B6 (TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 System.TimeZoneInfo/TransitionTime::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TransitionTime_GetHashCode_m375A0DD95EB4F4A3139592E11E0BDB1C8B99F36E (TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * __this, const RuntimeMethod* method);
// System.TimeZoneInfo/TransitionTime System.TimeZoneInfo/TransitionTime::CreateTransitionTime(System.DateTime,System.Int32,System.Int32,System.Int32,System.DayOfWeek,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  TransitionTime_CreateTransitionTime_m3B9B63724B97DF42141B69B6B561D36AE629434E (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___timeOfDay0, int32_t ___month1, int32_t ___week2, int32_t ___day3, int32_t ___dayOfWeek4, bool ___isFixedDateRule5, const RuntimeMethod* method);
// System.Void System.TimeZoneInfo/TransitionTime::ValidateTransitionTime(System.DateTime,System.Int32,System.Int32,System.Int32,System.DayOfWeek)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionTime_ValidateTransitionTime_m26FF63A3CD81059DCD206740F4C55820E979F844 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___timeOfDay0, int32_t ___month1, int32_t ___week2, int32_t ___day3, int32_t ___dayOfWeek4, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005 (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method);
// System.Int32 System.DateTime::get_Year()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Year_m977F96B53C996797BFBDCAA5679B8DCBA61AC185 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, const RuntimeMethod* method);
// System.Int32 System.DateTime::get_Month()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Month_m46CC2AED3F24A91104919B1F6B5103DD1F8BBAE8 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, const RuntimeMethod* method);
// System.Int32 System.DateTime::get_Day()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Day_m9D698CA2A7D1FBEE7BEC0A982A119239F513CBA8 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, const RuntimeMethod* method);
// System.Int64 System.DateTime::get_Ticks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DateTime_get_Ticks_m175EDB41A50DB06872CC48CAB603FEBD1DFF46A9 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, const RuntimeMethod* method);
// System.Void System.TimeZoneInfo/TransitionTime::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionTime_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m7531877356A7E49F851E7C075B15905C94DBA18B (TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * __this, RuntimeObject * ___sender0, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_mBE03953B805B6CE513241C7F4656F90DF5313979 (SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * __this, String_t* ___name0, uint8_t ___value1, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m324F3E0B02B746D5F460499F5A25988FD608AD7B (SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method);
// System.Void System.TimeZoneInfo/TransitionTime::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionTime_System_Runtime_Serialization_ISerializable_GetObjectData_mF3DC458CCBC82FA8027E237CE05A4B3D44E6D614 (TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method);
// System.Void System.TimeZoneInfo/TransitionTime::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionTime__ctor_mBE66AC04B8264C98E4EE51D0939F7CD57A3CBBC3 (TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method);
// System.Void System.Threading.Timer/Scheduler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scheduler__ctor_mFA8C77435650B38315E392A0D1C66EC7DC974E82 (Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * __this, const RuntimeMethod* method);
// System.Void System.Threading.ManualResetEvent::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetEvent__ctor_mF80BD5B0955BDA8CD514F48EBFF48698E5D03850 (ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * __this, bool ___initialState0, const RuntimeMethod* method);
// System.Void System.Threading.Timer/TimerComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerComparer__ctor_mB4F0DB5CDEB7A6E93F59950E0FB1D19BB4BBA0B4 (TimerComparer_t1899647CFE875978843BE8ABA01C10956F1E740B * __this, const RuntimeMethod* method);
// System.Void System.Collections.SortedList::.ctor(System.Collections.IComparer,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList__ctor_m0E1B0737647DC8D8B3E9FAD5F81168878E92E9F4 (SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * __this, RuntimeObject* ___comparer0, int32_t ___capacity1, const RuntimeMethod* method);
// System.Void System.Threading.ThreadStart::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadStart__ctor_m360F4EED0AD96A27D6A9612BF79671F26B30411F (ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Threading.Thread::.ctor(System.Threading.ThreadStart)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread__ctor_mF22465F0D0E47C11EF25DB552D1047402750BE90 (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * __this, ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687 * ___start0, const RuntimeMethod* method);
// System.Void System.Threading.Thread::set_IsBackground(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_set_IsBackground_m8CAEC157A236A574FE83FDB22D693AB1681B01B0 (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Threading.Thread::Start()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Thread_Start_m490124B23F5EFD0BB2BED8CA12C77195B9CD9E1B (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Int32 System.Threading.Timer/Scheduler::InternalRemove(System.Threading.Timer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scheduler_InternalRemove_m3154F260BA70D6D62BB855662FD4E59EBF25C538 (Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * __this, Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * ___timer0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Threading.Timer/Scheduler::Add(System.Threading.Timer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scheduler_Add_m97B241DC232711E7C7D9057DA0BF7D657808D981 (Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * __this, Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * ___timer0, const RuntimeMethod* method);
// System.Boolean System.Threading.EventWaitHandle::Set()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventWaitHandle_Set_m81764C887F38A1153224557B26CD688B59987B38 (EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * __this, const RuntimeMethod* method);
// System.Int32 System.Threading.Timer/Scheduler::FindByDueTime(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scheduler_FindByDueTime_m97EC1ECDEE06ABC0ADD1CD8D4C3B6F057680F677 (Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * __this, int64_t ___nr0, const RuntimeMethod* method);
// System.Void System.Threading.TimerCallback::Invoke(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerCallback_Invoke_m1318C110BA930390E8F61C8BAAAC8F1CA8776CFD (TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 * __this, RuntimeObject * ___state0, const RuntimeMethod* method);
// System.Threading.Thread System.Threading.Thread::get_CurrentThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * Thread_get_CurrentThread_m80236D2457FBCC1F76A08711E059A0B738DA71EC (const RuntimeMethod* method);
// System.Void System.Threading.Thread::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_set_Name_m920049DFD1306F42613F13CF7AD74C03661F4BAE (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Threading.Timer>::.ctor(System.Int32)
inline void List_1__ctor_m883AB85828B7C88FE9A8C7802E93E6CE979EA000 (List_1_t537143C180C9FB69517B6C26205D2AA824591563 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t537143C180C9FB69517B6C26205D2AA824591563 *, int32_t, const RuntimeMethod*))List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared)(__this, ___capacity0, method);
}
// System.Int64 System.Threading.Timer::GetTimeMonotonic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Timer_GetTimeMonotonic_m085737FA1918F06DE8264E85C1C2B8DFF2B65298 (const RuntimeMethod* method);
// System.Boolean System.Threading.EventWaitHandle::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventWaitHandle_Reset_m535429D7CC172C0B95EB8B7B9126B3F3761E2D30 (EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * __this, const RuntimeMethod* method);
// System.Void System.Threading.WaitCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitCallback__ctor_m50EFFE5096DF1DE733EA9895CEEC8EB6F142D5D5 (WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Boolean System.Threading.ThreadPool::UnsafeQueueUserWorkItem(System.Threading.WaitCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR bool ThreadPool_UnsafeQueueUserWorkItem_m9B9388DD623D33685D415D639455591D4DD967C6 (WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 * ___callBack0, RuntimeObject * ___state1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Threading.Timer>::Add(T)
inline void List_1_Add_mB29575CEA902024C74743A09C2AD6A27C71FA14C (List_1_t537143C180C9FB69517B6C26205D2AA824591563 * __this, Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t537143C180C9FB69517B6C26205D2AA824591563 *, Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Threading.Timer>::get_Count()
inline int32_t List_1_get_Count_m9F4CBA17931C03FCCABF06CE8F29187F98D1F260_inline (List_1_t537143C180C9FB69517B6C26205D2AA824591563 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t537143C180C9FB69517B6C26205D2AA824591563 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<System.Threading.Timer>::get_Item(System.Int32)
inline Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * List_1_get_Item_m9C036D14366E9BBB52436252522EDE206DC6EB35_inline (List_1_t537143C180C9FB69517B6C26205D2AA824591563 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * (*) (List_1_t537143C180C9FB69517B6C26205D2AA824591563 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<System.Threading.Timer>::Clear()
inline void List_1_Clear_mC1A3BC5C09490DE7BD41BBE1BFD81F870F508CC0 (List_1_t537143C180C9FB69517B6C26205D2AA824591563 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t537143C180C9FB69517B6C26205D2AA824591563 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Void System.Threading.Timer/Scheduler::ShrinkIfNeeded(System.Collections.Generic.List`1<System.Threading.Timer>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scheduler_ShrinkIfNeeded_m053057191CA310785B2C8EC2E8FB07A7E00E499C (Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * __this, List_1_t537143C180C9FB69517B6C26205D2AA824591563 * ___list0, int32_t ___initial1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Threading.Timer>::get_Capacity()
inline int32_t List_1_get_Capacity_mD0C25FAD6973D3D67381859E776ECAE953FDFD6B (List_1_t537143C180C9FB69517B6C26205D2AA824591563 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t537143C180C9FB69517B6C26205D2AA824591563 *, const RuntimeMethod*))List_1_get_Capacity_mE316E0DB641CFB093F0309D091D773047F81B2CC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Threading.Timer>::set_Capacity(System.Int32)
inline void List_1_set_Capacity_mEA0D56662D94226185342D2A0FD7C1860C5FFA7F (List_1_t537143C180C9FB69517B6C26205D2AA824591563 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t537143C180C9FB69517B6C26205D2AA824591563 *, int32_t, const RuntimeMethod*))List_1_set_Capacity_m7A81900F3492DE11874B0EA9A0E5454F897E3079_gshared)(__this, ___value0, method);
}
// System.Void System.TypeNames/ATypeName::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATypeName__ctor_m8F74703C78999B18C60B25DC9E5FAAFA777C48EC (ATypeName_t19F245ED1619C78770F92C899C4FE364DBF30861 * __this, const RuntimeMethod* method);
// System.String System.TypeIdentifiers/Display::GetInternalName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Display_GetInternalName_mD79548CF3F783D092209AED9C54C91E81DB87970 (Display_tB07FE33B5E37AC259B2FCC8EC820AC5CEDEAC41E * __this, const RuntimeMethod* method);
// System.String System.TypeSpec::UnescapeInternalName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TypeSpec_UnescapeInternalName_mA948D42382EE159391CEFB85748A7EFF37CE53A9 (String_t* ___displayName0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Boolean System.TypeNames/ATypeName::Equals(System.TypeName)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ATypeName_Equals_m6BDE7D1613B8F351AC3DCB2C9BDE29C23A92CC22 (ATypeName_t19F245ED1619C78770F92C899C4FE364DBF30861 * __this, RuntimeObject* ___other0, const RuntimeMethod* method);
// System.Void System.Text.DecoderNLS::.ctor(System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecoderNLS__ctor_mC526CB146E620885CBC054C3921E27A7949B2046 (DecoderNLS_tE5B1B7D68B698C0B65FBEE94EAE2453FFD3D538A * __this, Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___encoding0, const RuntimeMethod* method);
// System.Void System.Text.DecoderNLS::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecoderNLS__ctor_mDD4D4880457E73F1575479F8B309F9BB25BA0F4D (DecoderNLS_tE5B1B7D68B698C0B65FBEE94EAE2453FFD3D538A * __this, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m3DF5B182A63FFCD12287E97EA38944D0C6405BB5 (SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method);
// System.Void System.Text.DecoderFallback::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecoderFallback__ctor_m748C2C19AD4595C13154F9EEDF89AC2A2C10727E (DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * __this, const RuntimeMethod* method);
// System.Void System.Text.UTF7Encoding/DecoderUTF7FallbackBuffer::.ctor(System.Text.UTF7Encoding/DecoderUTF7Fallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecoderUTF7FallbackBuffer__ctor_mFA2B62E208804BB64A4893F1F91D8481B5C5BCB0 (DecoderUTF7FallbackBuffer_tED3431DB4A6B4F48D1F1433A8E672F8B110D819A * __this, DecoderUTF7Fallback_tBEF9A09732FAB23368825AE7C14C0EBF1F9028A8 * ___fallback0, const RuntimeMethod* method);
// System.Void System.Text.DecoderFallbackBuffer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecoderFallbackBuffer__ctor_m4944ABFBCC6CDED8F244EC1E5EA6B1F229C3495C (DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B * __this, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Text.EncoderNLS::.ctor(System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncoderNLS__ctor_mF9B45DA23BADBDD417E3F741C6C9BB45F3021513 (EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712 * __this, Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___encoding0, const RuntimeMethod* method);
// System.Void System.Text.EncoderNLS::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncoderNLS__ctor_m78E59E5DDEAE418A3936D0EAD2D2DB3D15E75CEF (EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712 * __this, const RuntimeMethod* method);
// System.Void System.Text.UnicodeEncoding::.ctor(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnicodeEncoding__ctor_mE077368843CAFC47B2C4AFC3C771F5B51F3B8DD0 (UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68 * __this, bool ___bigEndian0, bool ___byteOrderMark1, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m7B2342989B501DBA05C63C0D6E4FBD63541D4C38 (SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * __this, String_t* ___name0, Il2CppChar ___value1, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.IO.Stream/SynchronousAsyncResult/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m25FD09827E688A2665AA1918B69FB7B2421E8235 (U3CU3Ec_t0B9BA392160C64553C28F93C014479CD7CDC88CB * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// System.Void System.TimeZoneInfo_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m97C392FC85751EDF7BC34014E9CCC3213E438AFC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m97C392FC85751EDF7BC34014E9CCC3213E438AFC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t24F903F915888347E8B19C16314DF4C75387324E * L_0 = (U3CU3Ec_t24F903F915888347E8B19C16314DF4C75387324E *)il2cpp_codegen_object_new(U3CU3Ec_t24F903F915888347E8B19C16314DF4C75387324E_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m9DEEDA6DA97B7B98E7E8FFBDFFD70D67023DD420(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t24F903F915888347E8B19C16314DF4C75387324E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t24F903F915888347E8B19C16314DF4C75387324E_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void System.TimeZoneInfo_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m9DEEDA6DA97B7B98E7E8FFBDFFD70D67023DD420 (U3CU3Ec_t24F903F915888347E8B19C16314DF4C75387324E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 System.TimeZoneInfo_<>c::<CreateLocalUnity>b__19_0(System.TimeZoneInfo_AdjustmentRule,System.TimeZoneInfo_AdjustmentRule)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CCreateLocalUnityU3Eb__19_0_mB1A237DB978068C4662C45F442DC72B16E49F621 (U3CU3Ec_t24F903F915888347E8B19C16314DF4C75387324E * __this, AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304 * ___rule10, AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304 * ___rule21, const RuntimeMethod* method)
{
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304 * L_0 = ___rule10;
		NullCheck(L_0);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_1 = AdjustmentRule_get_DateStart_m05FFD9D69391EC287D299B23A549FFB1F9FB14EE_inline(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304 * L_2 = ___rule21;
		NullCheck(L_2);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_3 = AdjustmentRule_get_DateStart_m05FFD9D69391EC287D299B23A549FFB1F9FB14EE_inline(L_2, /*hidden argument*/NULL);
		int32_t L_4 = DateTime_CompareTo_m2864B0ABAE4B8748D4092D1D16AE56EE0B248F93((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_0), L_3, /*hidden argument*/NULL);
		return L_4;
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
// System.DateTime System.TimeZoneInfo_AdjustmentRule::get_DateStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  AdjustmentRule_get_DateStart_m05FFD9D69391EC287D299B23A549FFB1F9FB14EE (AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304 * __this, const RuntimeMethod* method)
{
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = __this->get_m_dateStart_0();
		return L_0;
	}
}
// System.DateTime System.TimeZoneInfo_AdjustmentRule::get_DateEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  AdjustmentRule_get_DateEnd_mE011DEEF8AB4DE944C2FF5F45112F468A92492BC (AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304 * __this, const RuntimeMethod* method)
{
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = __this->get_m_dateEnd_1();
		return L_0;
	}
}
// System.TimeSpan System.TimeZoneInfo_AdjustmentRule::get_DaylightDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  AdjustmentRule_get_DaylightDelta_m4C44F91C9ACBDFC572EBD831EFAA6253577B4FAD (AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304 * __this, const RuntimeMethod* method)
{
	{
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_0 = __this->get_m_daylightDelta_2();
		return L_0;
	}
}
// System.TimeZoneInfo_TransitionTime System.TimeZoneInfo_AdjustmentRule::get_DaylightTransitionStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  AdjustmentRule_get_DaylightTransitionStart_m5B17370369E5E5671EF1EF5F3C99AF4B39275B81 (AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304 * __this, const RuntimeMethod* method)
{
	{
		TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  L_0 = __this->get_m_daylightTransitionStart_3();
		return L_0;
	}
}
// System.TimeZoneInfo_TransitionTime System.TimeZoneInfo_AdjustmentRule::get_DaylightTransitionEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  AdjustmentRule_get_DaylightTransitionEnd_m219FBBD247700BDFF251BCB5A0ADE7C622AC2111 (AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304 * __this, const RuntimeMethod* method)
{
	{
		TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  L_0 = __this->get_m_daylightTransitionEnd_4();
		return L_0;
	}
}
// System.Boolean System.TimeZoneInfo_AdjustmentRule::Equals(System.TimeZoneInfo_AdjustmentRule)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AdjustmentRule_Equals_m51F598650B478A0A86830DF8445D12D7C6A0CE41 (AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304 * __this, AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AdjustmentRule_Equals_m51F598650B478A0A86830DF8445D12D7C6A0CE41_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B6_0 = 0;
	{
		AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304 * L_0 = ___other0;
		if (!L_0)
		{
			goto IL_004f;
		}
	}
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_1 = __this->get_m_dateStart_0();
		AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304 * L_2 = ___other0;
		NullCheck(L_2);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_3 = L_2->get_m_dateStart_0();
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		bool L_4 = DateTime_op_Equality_m07957AECB8C66EA047B16511BF560DD9EDA1DA44(L_1, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_004f;
		}
	}
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_5 = __this->get_m_dateEnd_1();
		AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304 * L_6 = ___other0;
		NullCheck(L_6);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_7 = L_6->get_m_dateEnd_1();
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		bool L_8 = DateTime_op_Equality_m07957AECB8C66EA047B16511BF560DD9EDA1DA44(L_5, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_004f;
		}
	}
	{
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_9 = __this->get_m_daylightDelta_2();
		AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304 * L_10 = ___other0;
		NullCheck(L_10);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_11 = L_10->get_m_daylightDelta_2();
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var);
		bool L_12 = TimeSpan_op_Equality_m8229F4B63064E2D43B244C6E82D55CB2B0360BB1(L_9, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_004f;
		}
	}
	{
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_13 = __this->get_m_baseUtcOffsetDelta_5();
		AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304 * L_14 = ___other0;
		NullCheck(L_14);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_15 = L_14->get_m_baseUtcOffsetDelta_5();
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var);
		bool L_16 = TimeSpan_op_Equality_m8229F4B63064E2D43B244C6E82D55CB2B0360BB1(L_13, L_15, /*hidden argument*/NULL);
		G_B6_0 = ((int32_t)(L_16));
		goto IL_0050;
	}

IL_004f:
	{
		G_B6_0 = 0;
	}

IL_0050:
	{
		if (!G_B6_0)
		{
			goto IL_0077;
		}
	}
	{
		TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * L_17 = __this->get_address_of_m_daylightTransitionEnd_4();
		AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304 * L_18 = ___other0;
		NullCheck(L_18);
		TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  L_19 = L_18->get_m_daylightTransitionEnd_4();
		bool L_20 = TransitionTime_Equals_m4976405B1B8F5E7A5C269D4760CD239DC18E5631((TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A *)L_17, L_19, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_0077;
		}
	}
	{
		TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * L_21 = __this->get_address_of_m_daylightTransitionStart_3();
		AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304 * L_22 = ___other0;
		NullCheck(L_22);
		TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  L_23 = L_22->get_m_daylightTransitionStart_3();
		bool L_24 = TransitionTime_Equals_m4976405B1B8F5E7A5C269D4760CD239DC18E5631((TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A *)L_21, L_23, /*hidden argument*/NULL);
		return L_24;
	}

IL_0077:
	{
		return (bool)0;
	}
}
// System.Int32 System.TimeZoneInfo_AdjustmentRule::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AdjustmentRule_GetHashCode_m771E09C011E894FAE92B5FD18C3E0875D3F5248C (AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304 * __this, const RuntimeMethod* method)
{
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * L_0 = __this->get_address_of_m_dateStart_0();
		int32_t L_1 = DateTime_GetHashCode_mC94DC52667BB5C0DE7A78C53BE24FDF5469BA49D((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.TimeZoneInfo_AdjustmentRule::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustmentRule__ctor_m6768FD1CD669E0678EC84422E516891EE71528CC (AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.TimeZoneInfo_AdjustmentRule System.TimeZoneInfo_AdjustmentRule::CreateAdjustmentRule(System.DateTime,System.DateTime,System.TimeSpan,System.TimeZoneInfo_TransitionTime,System.TimeZoneInfo_TransitionTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304 * AdjustmentRule_CreateAdjustmentRule_mC90086998B3DF5F9492A4B2281CFEDED04E1E6AE (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___dateStart0, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___dateEnd1, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___daylightDelta2, TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  ___daylightTransitionStart3, TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  ___daylightTransitionEnd4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AdjustmentRule_CreateAdjustmentRule_mC90086998B3DF5F9492A4B2281CFEDED04E1E6AE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = ___dateStart0;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_1 = ___dateEnd1;
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_2 = ___daylightDelta2;
		TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  L_3 = ___daylightTransitionStart3;
		TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  L_4 = ___daylightTransitionEnd4;
		AdjustmentRule_ValidateAdjustmentRule_m2D1CE9572A7AA306E36ADD93AA2CEA2858B77023(L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304 * L_5 = (AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304 *)il2cpp_codegen_object_new(AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304_il2cpp_TypeInfo_var);
		AdjustmentRule__ctor_m6768FD1CD669E0678EC84422E516891EE71528CC(L_5, /*hidden argument*/NULL);
		AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304 * L_6 = L_5;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_7 = ___dateStart0;
		NullCheck(L_6);
		L_6->set_m_dateStart_0(L_7);
		AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304 * L_8 = L_6;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_9 = ___dateEnd1;
		NullCheck(L_8);
		L_8->set_m_dateEnd_1(L_9);
		AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304 * L_10 = L_8;
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_11 = ___daylightDelta2;
		NullCheck(L_10);
		L_10->set_m_daylightDelta_2(L_11);
		AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304 * L_12 = L_10;
		TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  L_13 = ___daylightTransitionStart3;
		NullCheck(L_12);
		L_12->set_m_daylightTransitionStart_3(L_13);
		AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304 * L_14 = L_12;
		TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  L_15 = ___daylightTransitionEnd4;
		NullCheck(L_14);
		L_14->set_m_daylightTransitionEnd_4(L_15);
		AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304 * L_16 = L_14;
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_17 = ((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields*)il2cpp_codegen_static_fields_for(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var))->get_Zero_0();
		NullCheck(L_16);
		L_16->set_m_baseUtcOffsetDelta_5(L_17);
		return L_16;
	}
}
// System.TimeZoneInfo_AdjustmentRule System.TimeZoneInfo_AdjustmentRule::CreateAdjustmentRule(System.DateTime,System.DateTime,System.TimeSpan,System.TimeZoneInfo_TransitionTime,System.TimeZoneInfo_TransitionTime,System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304 * AdjustmentRule_CreateAdjustmentRule_mE956FDCAA996EA7E7B089C145F754A8FB88CB7EA (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___dateStart0, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___dateEnd1, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___daylightDelta2, TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  ___daylightTransitionStart3, TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  ___daylightTransitionEnd4, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___baseUtcOffsetDelta5, const RuntimeMethod* method)
{
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = ___dateStart0;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_1 = ___dateEnd1;
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_2 = ___daylightDelta2;
		TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  L_3 = ___daylightTransitionStart3;
		TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  L_4 = ___daylightTransitionEnd4;
		AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304 * L_5 = AdjustmentRule_CreateAdjustmentRule_mC90086998B3DF5F9492A4B2281CFEDED04E1E6AE(L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304 * L_6 = L_5;
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_7 = ___baseUtcOffsetDelta5;
		NullCheck(L_6);
		L_6->set_m_baseUtcOffsetDelta_5(L_7);
		return L_6;
	}
}
// System.Void System.TimeZoneInfo_AdjustmentRule::ValidateAdjustmentRule(System.DateTime,System.DateTime,System.TimeSpan,System.TimeZoneInfo_TransitionTime,System.TimeZoneInfo_TransitionTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustmentRule_ValidateAdjustmentRule_m2D1CE9572A7AA306E36ADD93AA2CEA2858B77023 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___dateStart0, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___dateEnd1, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___daylightDelta2, TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  ___daylightTransitionStart3, TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  ___daylightTransitionEnd4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AdjustmentRule_ValidateAdjustmentRule_m2D1CE9572A7AA306E36ADD93AA2CEA2858B77023_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = DateTime_get_Kind_mC7EC1A788CC9A875094117214C5A0C153A39F496((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&___dateStart0), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		String_t* L_1 = Environment_GetResourceString_m8DFF827596B5FD533D3FE56900FA095F7D674617(_stringLiteralE5A6B5B780158F734FA0A11A802E762EF7BDD272, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_2 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_2, L_1, _stringLiteralF1FA676B434A01F8B0C76AACD342F3261CDB272A, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, AdjustmentRule_ValidateAdjustmentRule_m2D1CE9572A7AA306E36ADD93AA2CEA2858B77023_RuntimeMethod_var);
	}

IL_001e:
	{
		int32_t L_3 = DateTime_get_Kind_mC7EC1A788CC9A875094117214C5A0C153A39F496((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&___dateEnd1), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		String_t* L_4 = Environment_GetResourceString_m8DFF827596B5FD533D3FE56900FA095F7D674617(_stringLiteralE5A6B5B780158F734FA0A11A802E762EF7BDD272, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_5 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_5, L_4, _stringLiteral445399A595B24C0202D28AE23969D8FFF38F572A, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, AdjustmentRule_ValidateAdjustmentRule_m2D1CE9572A7AA306E36ADD93AA2CEA2858B77023_RuntimeMethod_var);
	}

IL_003c:
	{
		TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  L_6 = ___daylightTransitionEnd4;
		bool L_7 = TransitionTime_Equals_m4976405B1B8F5E7A5C269D4760CD239DC18E5631((TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A *)(&___daylightTransitionStart3), L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_005c;
		}
	}
	{
		String_t* L_8 = Environment_GetResourceString_m8DFF827596B5FD533D3FE56900FA095F7D674617(_stringLiteralEA8C788F462D3BDFF1A2C0A8B053AAA9567571BA, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_9 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_9, L_8, _stringLiteralA4236146F56D25D2D915B8BCD28F0936D3257EE6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, AdjustmentRule_ValidateAdjustmentRule_m2D1CE9572A7AA306E36ADD93AA2CEA2858B77023_RuntimeMethod_var);
	}

IL_005c:
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_10 = ___dateStart0;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_11 = ___dateEnd1;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		bool L_12 = DateTime_op_GreaterThan_m87A988E247EFDFFE61474088700F29840758E3DD(L_10, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_007a;
		}
	}
	{
		String_t* L_13 = Environment_GetResourceString_m8DFF827596B5FD533D3FE56900FA095F7D674617(_stringLiteral018504CD3A7D232B591A18D6B7B570DEE8B65BAB, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_14 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_14, L_13, _stringLiteralF1FA676B434A01F8B0C76AACD342F3261CDB272A, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, AdjustmentRule_ValidateAdjustmentRule_m2D1CE9572A7AA306E36ADD93AA2CEA2858B77023_RuntimeMethod_var);
	}

IL_007a:
	{
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_15 = ___daylightDelta2;
		bool L_16 = TimeZoneInfo_UtcOffsetOutOfRange_m1691F47564A06BA9E8B774DA68430FDBEE363BA8(L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_009d;
		}
	}
	{
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_17 = ___daylightDelta2;
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_18 = L_17;
		RuntimeObject * L_19 = Box(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var, &L_18);
		String_t* L_20 = Environment_GetResourceString_m8DFF827596B5FD533D3FE56900FA095F7D674617(_stringLiteral74D560302B70C9D57AC7C2692A505F648FD1B1A4, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_21 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m7C5B3BE7792B7C73E7D82C4DBAD4ACA2DAE71AA9(L_21, _stringLiteral97788FC356CCFD978CEEDA2BF269D6954F4D0740, L_19, L_20, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, AdjustmentRule_ValidateAdjustmentRule_m2D1CE9572A7AA306E36ADD93AA2CEA2858B77023_RuntimeMethod_var);
	}

IL_009d:
	{
		int64_t L_22 = TimeSpan_get_Ticks_mE4C9E1F27DC794028CEDCF7CB5BD092D16DBACD4_inline((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)(&___daylightDelta2), /*hidden argument*/NULL);
		if (!((int64_t)((int64_t)L_22%(int64_t)(((int64_t)((int64_t)((int32_t)600000000)))))))
		{
			goto IL_00c2;
		}
	}
	{
		String_t* L_23 = Environment_GetResourceString_m8DFF827596B5FD533D3FE56900FA095F7D674617(_stringLiteralC093A43C681B135B2CCBFD21AF1C61BC84B52631, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_24 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_24, L_23, _stringLiteral97788FC356CCFD978CEEDA2BF269D6954F4D0740, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, AdjustmentRule_ValidateAdjustmentRule_m2D1CE9572A7AA306E36ADD93AA2CEA2858B77023_RuntimeMethod_var);
	}

IL_00c2:
	{
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_25 = DateTime_get_TimeOfDay_mE6A177963C8D8AA8AA2830239F1C7B3D11AFC645((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&___dateStart0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_26 = ((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields*)il2cpp_codegen_static_fields_for(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var))->get_Zero_0();
		bool L_27 = TimeSpan_op_Inequality_mDE127E1886D092054E24EA873CEE64D0857CD04C(L_25, L_26, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_00ea;
		}
	}
	{
		String_t* L_28 = Environment_GetResourceString_m8DFF827596B5FD533D3FE56900FA095F7D674617(_stringLiteralA7CB599B22D521F814BCCB6E5B683D86AA12640B, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_29 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_29, L_28, _stringLiteralF1FA676B434A01F8B0C76AACD342F3261CDB272A, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_29, AdjustmentRule_ValidateAdjustmentRule_m2D1CE9572A7AA306E36ADD93AA2CEA2858B77023_RuntimeMethod_var);
	}

IL_00ea:
	{
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_30 = DateTime_get_TimeOfDay_mE6A177963C8D8AA8AA2830239F1C7B3D11AFC645((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&___dateEnd1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_31 = ((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields*)il2cpp_codegen_static_fields_for(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var))->get_Zero_0();
		bool L_32 = TimeSpan_op_Inequality_mDE127E1886D092054E24EA873CEE64D0857CD04C(L_30, L_31, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_0112;
		}
	}
	{
		String_t* L_33 = Environment_GetResourceString_m8DFF827596B5FD533D3FE56900FA095F7D674617(_stringLiteralA7CB599B22D521F814BCCB6E5B683D86AA12640B, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_34 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_34, L_33, _stringLiteral445399A595B24C0202D28AE23969D8FFF38F572A, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_34, AdjustmentRule_ValidateAdjustmentRule_m2D1CE9572A7AA306E36ADD93AA2CEA2858B77023_RuntimeMethod_var);
	}

IL_0112:
	{
		return;
	}
}
// System.Void System.TimeZoneInfo_AdjustmentRule::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustmentRule_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m17BE62BEC7C588C0B755CBB5426287665986474D (AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304 * __this, RuntimeObject * ___sender0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AdjustmentRule_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m17BE62BEC7C588C0B755CBB5426287665986474D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = __this->get_m_dateStart_0();
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_1 = __this->get_m_dateEnd_1();
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_2 = __this->get_m_daylightDelta_2();
		TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  L_3 = __this->get_m_daylightTransitionStart_3();
		TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  L_4 = __this->get_m_daylightTransitionEnd_4();
		AdjustmentRule_ValidateAdjustmentRule_m2D1CE9572A7AA306E36ADD93AA2CEA2858B77023(L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		goto IL_0037;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0025;
		throw e;
	}

CATCH_0025:
	{ // begin catch(System.ArgumentException)
		V_0 = ((ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)__exception_local);
		String_t* L_5 = Environment_GetResourceString_m8DFF827596B5FD533D3FE56900FA095F7D674617(_stringLiteralA595476C6F6D3E2C3406DD69BC73859EA4408F2F, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_6 = V_0;
		SerializationException_tDB38C13A2ABF407C381E3F332D197AC1AD097A92 * L_7 = (SerializationException_tDB38C13A2ABF407C381E3F332D197AC1AD097A92 *)il2cpp_codegen_object_new(SerializationException_tDB38C13A2ABF407C381E3F332D197AC1AD097A92_il2cpp_TypeInfo_var);
		SerializationException__ctor_m03F01FDBEB6469CCD85942C5C62BD46FFC6CE11C(L_7, L_5, L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, AdjustmentRule_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m17BE62BEC7C588C0B755CBB5426287665986474D_RuntimeMethod_var);
	} // end catch (depth: 1)

IL_0037:
	{
		return;
	}
}
// System.Void System.TimeZoneInfo_AdjustmentRule::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustmentRule_System_Runtime_Serialization_ISerializable_GetObjectData_mCF3E994E8DEAF796477DCA219855A09423139754 (AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304 * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AdjustmentRule_System_Runtime_Serialization_ISerializable_GetObjectData_mCF3E994E8DEAF796477DCA219855A09423139754_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, _stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, AdjustmentRule_System_Runtime_Serialization_ISerializable_GetObjectData_mCF3E994E8DEAF796477DCA219855A09423139754_RuntimeMethod_var);
	}

IL_000e:
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_2 = ___info0;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_3 = __this->get_m_dateStart_0();
		NullCheck(L_2);
		SerializationInfo_AddValue_m4E39B61DB324BA16CB228942756352329286C40B(L_2, _stringLiteralD62A6E8579B9E226105A0C28889FEEC94AAE3E9A, L_3, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_4 = ___info0;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_5 = __this->get_m_dateEnd_1();
		NullCheck(L_4);
		SerializationInfo_AddValue_m4E39B61DB324BA16CB228942756352329286C40B(L_4, _stringLiteralF38018A5E6704152C358CEE388C935AA44BFE927, L_5, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_6 = ___info0;
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_7 = __this->get_m_daylightDelta_2();
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_8 = L_7;
		RuntimeObject * L_9 = Box(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		SerializationInfo_AddValue_mA50C2668EF700C2239DDC362F8DB409020BB763D(L_6, _stringLiteral76EE6AC9CE84AB75E1822F990EDC05A4A83E34CD, L_9, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_10 = ___info0;
		TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  L_11 = __this->get_m_daylightTransitionStart_3();
		TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  L_12 = L_11;
		RuntimeObject * L_13 = Box(TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_10);
		SerializationInfo_AddValue_mA50C2668EF700C2239DDC362F8DB409020BB763D(L_10, _stringLiteral592EDDBE99E3B537ABCB79EA8611A7CB7989097F, L_13, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_14 = ___info0;
		TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  L_15 = __this->get_m_daylightTransitionEnd_4();
		TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  L_16 = L_15;
		RuntimeObject * L_17 = Box(TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_14);
		SerializationInfo_AddValue_mA50C2668EF700C2239DDC362F8DB409020BB763D(L_14, _stringLiteral92057E8211A0EA82031051D2B0E70ADB04D156C7, L_17, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_18 = ___info0;
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_19 = __this->get_m_baseUtcOffsetDelta_5();
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_20 = L_19;
		RuntimeObject * L_21 = Box(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_18);
		SerializationInfo_AddValue_mA50C2668EF700C2239DDC362F8DB409020BB763D(L_18, _stringLiteral8BB31BB6FEE4CFF323F9B357F30EDA29E1B5CBA7, L_21, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.TimeZoneInfo_AdjustmentRule::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustmentRule__ctor_m2A972339AE991722C67C074B585F461F0AECEF3B (AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304 * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AdjustmentRule__ctor_m2A972339AE991722C67C074B585F461F0AECEF3B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, _stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, AdjustmentRule__ctor_m2A972339AE991722C67C074B585F461F0AECEF3B_RuntimeMethod_var);
	}

IL_0014:
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_2 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		RuntimeObject * L_5 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_2, _stringLiteralD62A6E8579B9E226105A0C28889FEEC94AAE3E9A, L_4, /*hidden argument*/NULL);
		__this->set_m_dateStart_0(((*(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)UnBox(L_5, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var)))));
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_6 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_0_0_0_var) };
		Type_t * L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		RuntimeObject * L_9 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_6, _stringLiteralF38018A5E6704152C358CEE388C935AA44BFE927, L_8, /*hidden argument*/NULL);
		__this->set_m_dateEnd_1(((*(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)UnBox(L_9, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var)))));
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_10 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_11 = { reinterpret_cast<intptr_t> (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_0_0_0_var) };
		Type_t * L_12 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		RuntimeObject * L_13 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_10, _stringLiteral76EE6AC9CE84AB75E1822F990EDC05A4A83E34CD, L_12, /*hidden argument*/NULL);
		__this->set_m_daylightDelta_2(((*(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)UnBox(L_13, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var)))));
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_14 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_15 = { reinterpret_cast<intptr_t> (TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A_0_0_0_var) };
		Type_t * L_16 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_15, /*hidden argument*/NULL);
		NullCheck(L_14);
		RuntimeObject * L_17 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_14, _stringLiteral592EDDBE99E3B537ABCB79EA8611A7CB7989097F, L_16, /*hidden argument*/NULL);
		__this->set_m_daylightTransitionStart_3(((*(TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A *)((TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A *)UnBox(L_17, TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A_il2cpp_TypeInfo_var)))));
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_18 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_19 = { reinterpret_cast<intptr_t> (TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A_0_0_0_var) };
		Type_t * L_20 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_19, /*hidden argument*/NULL);
		NullCheck(L_18);
		RuntimeObject * L_21 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_18, _stringLiteral92057E8211A0EA82031051D2B0E70ADB04D156C7, L_20, /*hidden argument*/NULL);
		__this->set_m_daylightTransitionEnd_4(((*(TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A *)((TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A *)UnBox(L_21, TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A_il2cpp_TypeInfo_var)))));
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_22 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_23 = { reinterpret_cast<intptr_t> (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_0_0_0_var) };
		Type_t * L_24 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_23, /*hidden argument*/NULL);
		NullCheck(L_22);
		RuntimeObject * L_25 = SerializationInfo_GetValueNoThrow_mA1F5663511899C588B39643FF53002717A84DFF3(L_22, _stringLiteral8BB31BB6FEE4CFF323F9B357F30EDA29E1B5CBA7, L_24, /*hidden argument*/NULL);
		V_0 = L_25;
		RuntimeObject * L_26 = V_0;
		if (!L_26)
		{
			goto IL_00d9;
		}
	}
	{
		RuntimeObject * L_27 = V_0;
		__this->set_m_baseUtcOffsetDelta_5(((*(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)((TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 *)UnBox(L_27, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var)))));
	}

IL_00d9:
	{
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


// Conversion methods for marshalling of: System.TimeZoneInfo/DYNAMIC_TIME_ZONE_INFORMATION
IL2CPP_EXTERN_C void DYNAMIC_TIME_ZONE_INFORMATION_t2A935E4357B99965B322E468058134B139805895_marshal_pinvoke(const DYNAMIC_TIME_ZONE_INFORMATION_t2A935E4357B99965B322E468058134B139805895& unmarshaled, DYNAMIC_TIME_ZONE_INFORMATION_t2A935E4357B99965B322E468058134B139805895_marshaled_pinvoke& marshaled)
{
	TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshal_pinvoke(unmarshaled.get_TZI_0(), marshaled.___TZI_0);
	il2cpp_codegen_marshal_wstring_fixed(unmarshaled.get_TimeZoneKeyName_1(), (Il2CppChar*)&marshaled.___TimeZoneKeyName_1, 128);
	marshaled.___DynamicDaylightTimeDisabled_2 = unmarshaled.get_DynamicDaylightTimeDisabled_2();
}
IL2CPP_EXTERN_C void DYNAMIC_TIME_ZONE_INFORMATION_t2A935E4357B99965B322E468058134B139805895_marshal_pinvoke_back(const DYNAMIC_TIME_ZONE_INFORMATION_t2A935E4357B99965B322E468058134B139805895_marshaled_pinvoke& marshaled, DYNAMIC_TIME_ZONE_INFORMATION_t2A935E4357B99965B322E468058134B139805895& unmarshaled)
{
	TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578  unmarshaled_TZI_temp_0;
	memset((&unmarshaled_TZI_temp_0), 0, sizeof(unmarshaled_TZI_temp_0));
	TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshal_pinvoke_back(marshaled.___TZI_0, unmarshaled_TZI_temp_0);
	unmarshaled.set_TZI_0(unmarshaled_TZI_temp_0);
	unmarshaled.set_TimeZoneKeyName_1(il2cpp_codegen_marshal_wstring_result(marshaled.___TimeZoneKeyName_1));
	uint8_t unmarshaled_DynamicDaylightTimeDisabled_temp_2 = 0x0;
	unmarshaled_DynamicDaylightTimeDisabled_temp_2 = marshaled.___DynamicDaylightTimeDisabled_2;
	unmarshaled.set_DynamicDaylightTimeDisabled_2(unmarshaled_DynamicDaylightTimeDisabled_temp_2);
}
// Conversion method for clean up from marshalling of: System.TimeZoneInfo/DYNAMIC_TIME_ZONE_INFORMATION
IL2CPP_EXTERN_C void DYNAMIC_TIME_ZONE_INFORMATION_t2A935E4357B99965B322E468058134B139805895_marshal_pinvoke_cleanup(DYNAMIC_TIME_ZONE_INFORMATION_t2A935E4357B99965B322E468058134B139805895_marshaled_pinvoke& marshaled)
{
	TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshal_pinvoke_cleanup(marshaled.___TZI_0);
}


// Conversion methods for marshalling of: System.TimeZoneInfo/DYNAMIC_TIME_ZONE_INFORMATION
IL2CPP_EXTERN_C void DYNAMIC_TIME_ZONE_INFORMATION_t2A935E4357B99965B322E468058134B139805895_marshal_com(const DYNAMIC_TIME_ZONE_INFORMATION_t2A935E4357B99965B322E468058134B139805895& unmarshaled, DYNAMIC_TIME_ZONE_INFORMATION_t2A935E4357B99965B322E468058134B139805895_marshaled_com& marshaled)
{
	TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshal_com(unmarshaled.get_TZI_0(), marshaled.___TZI_0);
	il2cpp_codegen_marshal_wstring_fixed(unmarshaled.get_TimeZoneKeyName_1(), (Il2CppChar*)&marshaled.___TimeZoneKeyName_1, 128);
	marshaled.___DynamicDaylightTimeDisabled_2 = unmarshaled.get_DynamicDaylightTimeDisabled_2();
}
IL2CPP_EXTERN_C void DYNAMIC_TIME_ZONE_INFORMATION_t2A935E4357B99965B322E468058134B139805895_marshal_com_back(const DYNAMIC_TIME_ZONE_INFORMATION_t2A935E4357B99965B322E468058134B139805895_marshaled_com& marshaled, DYNAMIC_TIME_ZONE_INFORMATION_t2A935E4357B99965B322E468058134B139805895& unmarshaled)
{
	TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578  unmarshaled_TZI_temp_0;
	memset((&unmarshaled_TZI_temp_0), 0, sizeof(unmarshaled_TZI_temp_0));
	TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshal_com_back(marshaled.___TZI_0, unmarshaled_TZI_temp_0);
	unmarshaled.set_TZI_0(unmarshaled_TZI_temp_0);
	unmarshaled.set_TimeZoneKeyName_1(il2cpp_codegen_marshal_wstring_result(marshaled.___TimeZoneKeyName_1));
	uint8_t unmarshaled_DynamicDaylightTimeDisabled_temp_2 = 0x0;
	unmarshaled_DynamicDaylightTimeDisabled_temp_2 = marshaled.___DynamicDaylightTimeDisabled_2;
	unmarshaled.set_DynamicDaylightTimeDisabled_2(unmarshaled_DynamicDaylightTimeDisabled_temp_2);
}
// Conversion method for clean up from marshalling of: System.TimeZoneInfo/DYNAMIC_TIME_ZONE_INFORMATION
IL2CPP_EXTERN_C void DYNAMIC_TIME_ZONE_INFORMATION_t2A935E4357B99965B322E468058134B139805895_marshal_com_cleanup(DYNAMIC_TIME_ZONE_INFORMATION_t2A935E4357B99965B322E468058134B139805895_marshaled_com& marshaled)
{
	TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshal_com_cleanup(marshaled.___TZI_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// Conversion methods for marshalling of: System.TimeZoneInfo/TIME_ZONE_INFORMATION
IL2CPP_EXTERN_C void TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshal_pinvoke(const TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578& unmarshaled, TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshaled_pinvoke& marshaled)
{
	marshaled.___Bias_0 = unmarshaled.get_Bias_0();
	il2cpp_codegen_marshal_wstring_fixed(unmarshaled.get_StandardName_1(), (Il2CppChar*)&marshaled.___StandardName_1, 32);
	marshaled.___StandardDate_2 = unmarshaled.get_StandardDate_2();
	marshaled.___StandardBias_3 = unmarshaled.get_StandardBias_3();
	il2cpp_codegen_marshal_wstring_fixed(unmarshaled.get_DaylightName_4(), (Il2CppChar*)&marshaled.___DaylightName_4, 32);
	marshaled.___DaylightDate_5 = unmarshaled.get_DaylightDate_5();
	marshaled.___DaylightBias_6 = unmarshaled.get_DaylightBias_6();
}
IL2CPP_EXTERN_C void TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshal_pinvoke_back(const TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshaled_pinvoke& marshaled, TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578& unmarshaled)
{
	int32_t unmarshaled_Bias_temp_0 = 0;
	unmarshaled_Bias_temp_0 = marshaled.___Bias_0;
	unmarshaled.set_Bias_0(unmarshaled_Bias_temp_0);
	unmarshaled.set_StandardName_1(il2cpp_codegen_marshal_wstring_result(marshaled.___StandardName_1));
	SYSTEMTIME_tDB5B1D262445C33D2FE644CCC1353DFB26184BA4  unmarshaled_StandardDate_temp_2;
	memset((&unmarshaled_StandardDate_temp_2), 0, sizeof(unmarshaled_StandardDate_temp_2));
	unmarshaled_StandardDate_temp_2 = marshaled.___StandardDate_2;
	unmarshaled.set_StandardDate_2(unmarshaled_StandardDate_temp_2);
	int32_t unmarshaled_StandardBias_temp_3 = 0;
	unmarshaled_StandardBias_temp_3 = marshaled.___StandardBias_3;
	unmarshaled.set_StandardBias_3(unmarshaled_StandardBias_temp_3);
	unmarshaled.set_DaylightName_4(il2cpp_codegen_marshal_wstring_result(marshaled.___DaylightName_4));
	SYSTEMTIME_tDB5B1D262445C33D2FE644CCC1353DFB26184BA4  unmarshaled_DaylightDate_temp_5;
	memset((&unmarshaled_DaylightDate_temp_5), 0, sizeof(unmarshaled_DaylightDate_temp_5));
	unmarshaled_DaylightDate_temp_5 = marshaled.___DaylightDate_5;
	unmarshaled.set_DaylightDate_5(unmarshaled_DaylightDate_temp_5);
	int32_t unmarshaled_DaylightBias_temp_6 = 0;
	unmarshaled_DaylightBias_temp_6 = marshaled.___DaylightBias_6;
	unmarshaled.set_DaylightBias_6(unmarshaled_DaylightBias_temp_6);
}
// Conversion method for clean up from marshalling of: System.TimeZoneInfo/TIME_ZONE_INFORMATION
IL2CPP_EXTERN_C void TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshal_pinvoke_cleanup(TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.TimeZoneInfo/TIME_ZONE_INFORMATION
IL2CPP_EXTERN_C void TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshal_com(const TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578& unmarshaled, TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshaled_com& marshaled)
{
	marshaled.___Bias_0 = unmarshaled.get_Bias_0();
	il2cpp_codegen_marshal_wstring_fixed(unmarshaled.get_StandardName_1(), (Il2CppChar*)&marshaled.___StandardName_1, 32);
	marshaled.___StandardDate_2 = unmarshaled.get_StandardDate_2();
	marshaled.___StandardBias_3 = unmarshaled.get_StandardBias_3();
	il2cpp_codegen_marshal_wstring_fixed(unmarshaled.get_DaylightName_4(), (Il2CppChar*)&marshaled.___DaylightName_4, 32);
	marshaled.___DaylightDate_5 = unmarshaled.get_DaylightDate_5();
	marshaled.___DaylightBias_6 = unmarshaled.get_DaylightBias_6();
}
IL2CPP_EXTERN_C void TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshal_com_back(const TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshaled_com& marshaled, TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578& unmarshaled)
{
	int32_t unmarshaled_Bias_temp_0 = 0;
	unmarshaled_Bias_temp_0 = marshaled.___Bias_0;
	unmarshaled.set_Bias_0(unmarshaled_Bias_temp_0);
	unmarshaled.set_StandardName_1(il2cpp_codegen_marshal_wstring_result(marshaled.___StandardName_1));
	SYSTEMTIME_tDB5B1D262445C33D2FE644CCC1353DFB26184BA4  unmarshaled_StandardDate_temp_2;
	memset((&unmarshaled_StandardDate_temp_2), 0, sizeof(unmarshaled_StandardDate_temp_2));
	unmarshaled_StandardDate_temp_2 = marshaled.___StandardDate_2;
	unmarshaled.set_StandardDate_2(unmarshaled_StandardDate_temp_2);
	int32_t unmarshaled_StandardBias_temp_3 = 0;
	unmarshaled_StandardBias_temp_3 = marshaled.___StandardBias_3;
	unmarshaled.set_StandardBias_3(unmarshaled_StandardBias_temp_3);
	unmarshaled.set_DaylightName_4(il2cpp_codegen_marshal_wstring_result(marshaled.___DaylightName_4));
	SYSTEMTIME_tDB5B1D262445C33D2FE644CCC1353DFB26184BA4  unmarshaled_DaylightDate_temp_5;
	memset((&unmarshaled_DaylightDate_temp_5), 0, sizeof(unmarshaled_DaylightDate_temp_5));
	unmarshaled_DaylightDate_temp_5 = marshaled.___DaylightDate_5;
	unmarshaled.set_DaylightDate_5(unmarshaled_DaylightDate_temp_5);
	int32_t unmarshaled_DaylightBias_temp_6 = 0;
	unmarshaled_DaylightBias_temp_6 = marshaled.___DaylightBias_6;
	unmarshaled.set_DaylightBias_6(unmarshaled_DaylightBias_temp_6);
}
// Conversion method for clean up from marshalling of: System.TimeZoneInfo/TIME_ZONE_INFORMATION
IL2CPP_EXTERN_C void TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshal_com_cleanup(TIME_ZONE_INFORMATION_t895CF3EE73EA839A7D135CD7187F514DA758F578_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: System.TimeZoneInfo/TransitionTime
IL2CPP_EXTERN_C void TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A_marshal_pinvoke(const TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A& unmarshaled, TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_timeOfDay_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_timeOfDay' of type 'TransitionTime'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_timeOfDay_0Exception, NULL);
}
IL2CPP_EXTERN_C void TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A_marshal_pinvoke_back(const TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A_marshaled_pinvoke& marshaled, TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A& unmarshaled)
{
	Exception_t* ___m_timeOfDay_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_timeOfDay' of type 'TransitionTime'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_timeOfDay_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.TimeZoneInfo/TransitionTime
IL2CPP_EXTERN_C void TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A_marshal_pinvoke_cleanup(TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.TimeZoneInfo/TransitionTime
IL2CPP_EXTERN_C void TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A_marshal_com(const TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A& unmarshaled, TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A_marshaled_com& marshaled)
{
	Exception_t* ___m_timeOfDay_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_timeOfDay' of type 'TransitionTime'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_timeOfDay_0Exception, NULL);
}
IL2CPP_EXTERN_C void TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A_marshal_com_back(const TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A_marshaled_com& marshaled, TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A& unmarshaled)
{
	Exception_t* ___m_timeOfDay_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_timeOfDay' of type 'TransitionTime'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_timeOfDay_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.TimeZoneInfo/TransitionTime
IL2CPP_EXTERN_C void TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A_marshal_com_cleanup(TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A_marshaled_com& marshaled)
{
}
// System.DateTime System.TimeZoneInfo_TransitionTime::get_TimeOfDay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  TransitionTime_get_TimeOfDay_m95ECA2E981CA772D9D1DECC7F7421241D4144F44 (TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * __this, const RuntimeMethod* method)
{
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = __this->get_m_timeOfDay_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  TransitionTime_get_TimeOfDay_m95ECA2E981CA772D9D1DECC7F7421241D4144F44_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * _thisAdjusted = reinterpret_cast<TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A *>(__this + _offset);
	return TransitionTime_get_TimeOfDay_m95ECA2E981CA772D9D1DECC7F7421241D4144F44_inline(_thisAdjusted, method);
}
// System.Int32 System.TimeZoneInfo_TransitionTime::get_Month()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TransitionTime_get_Month_m1E127ECF7312277ED31CEB769A6DC0503F1FAB2B (TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = __this->get_m_month_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t TransitionTime_get_Month_m1E127ECF7312277ED31CEB769A6DC0503F1FAB2B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * _thisAdjusted = reinterpret_cast<TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A *>(__this + _offset);
	return TransitionTime_get_Month_m1E127ECF7312277ED31CEB769A6DC0503F1FAB2B_inline(_thisAdjusted, method);
}
// System.Int32 System.TimeZoneInfo_TransitionTime::get_Week()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TransitionTime_get_Week_m9271C2A79DC390EF07020F63CAB641FA36E304BA (TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = __this->get_m_week_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t TransitionTime_get_Week_m9271C2A79DC390EF07020F63CAB641FA36E304BA_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * _thisAdjusted = reinterpret_cast<TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A *>(__this + _offset);
	return TransitionTime_get_Week_m9271C2A79DC390EF07020F63CAB641FA36E304BA_inline(_thisAdjusted, method);
}
// System.Int32 System.TimeZoneInfo_TransitionTime::get_Day()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TransitionTime_get_Day_mF663C24FEFF09012299FA76BE6D65CC6C455C87C (TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = __this->get_m_day_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t TransitionTime_get_Day_mF663C24FEFF09012299FA76BE6D65CC6C455C87C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * _thisAdjusted = reinterpret_cast<TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A *>(__this + _offset);
	return TransitionTime_get_Day_mF663C24FEFF09012299FA76BE6D65CC6C455C87C_inline(_thisAdjusted, method);
}
// System.DayOfWeek System.TimeZoneInfo_TransitionTime::get_DayOfWeek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TransitionTime_get_DayOfWeek_mDC32F75FFCC4AAE5826AFBBC11840C8290E08E52 (TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_dayOfWeek_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t TransitionTime_get_DayOfWeek_mDC32F75FFCC4AAE5826AFBBC11840C8290E08E52_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * _thisAdjusted = reinterpret_cast<TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A *>(__this + _offset);
	return TransitionTime_get_DayOfWeek_mDC32F75FFCC4AAE5826AFBBC11840C8290E08E52_inline(_thisAdjusted, method);
}
// System.Boolean System.TimeZoneInfo_TransitionTime::get_IsFixedDateRule()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransitionTime_get_IsFixedDateRule_m4E7A489F0B8E60893C80A70E768F36A10258E9FB (TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_m_isFixedDateRule_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool TransitionTime_get_IsFixedDateRule_m4E7A489F0B8E60893C80A70E768F36A10258E9FB_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * _thisAdjusted = reinterpret_cast<TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A *>(__this + _offset);
	return TransitionTime_get_IsFixedDateRule_m4E7A489F0B8E60893C80A70E768F36A10258E9FB_inline(_thisAdjusted, method);
}
// System.Boolean System.TimeZoneInfo_TransitionTime::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransitionTime_Equals_mD63D4051F9FCD2B6277B194A42CCA50934E7C2B6 (TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransitionTime_Equals_mD63D4051F9FCD2B6277B194A42CCA50934E7C2B6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A_il2cpp_TypeInfo_var)))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		bool L_2 = TransitionTime_Equals_m4976405B1B8F5E7A5C269D4760CD239DC18E5631((TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A *)__this, ((*(TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A *)((TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A *)UnBox(L_1, TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool TransitionTime_Equals_mD63D4051F9FCD2B6277B194A42CCA50934E7C2B6_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * _thisAdjusted = reinterpret_cast<TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A *>(__this + _offset);
	return TransitionTime_Equals_mD63D4051F9FCD2B6277B194A42CCA50934E7C2B6(_thisAdjusted, ___obj0, method);
}
// System.Boolean System.TimeZoneInfo_TransitionTime::op_Inequality(System.TimeZoneInfo_TransitionTime,System.TimeZoneInfo_TransitionTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransitionTime_op_Inequality_m30F06DED443B1F09A34F16DCB60E11414945C2FB (TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  ___t10, TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  ___t21, const RuntimeMethod* method)
{
	{
		TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  L_0 = ___t21;
		bool L_1 = TransitionTime_Equals_m4976405B1B8F5E7A5C269D4760CD239DC18E5631((TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A *)(&___t10), L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.TimeZoneInfo_TransitionTime::Equals(System.TimeZoneInfo_TransitionTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransitionTime_Equals_m4976405B1B8F5E7A5C269D4760CD239DC18E5631 (TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * __this, TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransitionTime_Equals_m4976405B1B8F5E7A5C269D4760CD239DC18E5631_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B10_0 = 0;
	{
		bool L_0 = __this->get_m_isFixedDateRule_5();
		TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  L_1 = ___other0;
		bool L_2 = L_1.get_m_isFixedDateRule_5();
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_0031;
		}
	}
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_3 = __this->get_m_timeOfDay_0();
		TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  L_4 = ___other0;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_5 = L_4.get_m_timeOfDay_0();
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		bool L_6 = DateTime_op_Equality_m07957AECB8C66EA047B16511BF560DD9EDA1DA44(L_3, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		uint8_t L_7 = __this->get_m_month_1();
		TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  L_8 = ___other0;
		uint8_t L_9 = L_8.get_m_month_1();
		G_B4_0 = ((((int32_t)L_7) == ((int32_t)L_9))? 1 : 0);
		goto IL_0032;
	}

IL_0031:
	{
		G_B4_0 = 0;
	}

IL_0032:
	{
		V_0 = (bool)G_B4_0;
		bool L_10 = V_0;
		if (!L_10)
		{
			goto IL_006f;
		}
	}
	{
		TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  L_11 = ___other0;
		bool L_12 = L_11.get_m_isFixedDateRule_5();
		if (!L_12)
		{
			goto IL_004f;
		}
	}
	{
		uint8_t L_13 = __this->get_m_day_3();
		TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  L_14 = ___other0;
		uint8_t L_15 = L_14.get_m_day_3();
		V_0 = (bool)((((int32_t)L_13) == ((int32_t)L_15))? 1 : 0);
		goto IL_006f;
	}

IL_004f:
	{
		uint8_t L_16 = __this->get_m_week_2();
		TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  L_17 = ___other0;
		uint8_t L_18 = L_17.get_m_week_2();
		if ((!(((uint32_t)L_16) == ((uint32_t)L_18))))
		{
			goto IL_006d;
		}
	}
	{
		int32_t L_19 = __this->get_m_dayOfWeek_4();
		TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  L_20 = ___other0;
		int32_t L_21 = L_20.get_m_dayOfWeek_4();
		G_B10_0 = ((((int32_t)L_19) == ((int32_t)L_21))? 1 : 0);
		goto IL_006e;
	}

IL_006d:
	{
		G_B10_0 = 0;
	}

IL_006e:
	{
		V_0 = (bool)G_B10_0;
	}

IL_006f:
	{
		bool L_22 = V_0;
		return L_22;
	}
}
IL2CPP_EXTERN_C  bool TransitionTime_Equals_m4976405B1B8F5E7A5C269D4760CD239DC18E5631_AdjustorThunk (RuntimeObject * __this, TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * _thisAdjusted = reinterpret_cast<TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A *>(__this + _offset);
	return TransitionTime_Equals_m4976405B1B8F5E7A5C269D4760CD239DC18E5631(_thisAdjusted, ___other0, method);
}
// System.Int32 System.TimeZoneInfo_TransitionTime::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TransitionTime_GetHashCode_m375A0DD95EB4F4A3139592E11E0BDB1C8B99F36E (TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = __this->get_m_month_1();
		uint8_t L_1 = __this->get_m_week_2();
		return ((int32_t)((int32_t)L_0^(int32_t)((int32_t)((int32_t)L_1<<(int32_t)8))));
	}
}
IL2CPP_EXTERN_C  int32_t TransitionTime_GetHashCode_m375A0DD95EB4F4A3139592E11E0BDB1C8B99F36E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * _thisAdjusted = reinterpret_cast<TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A *>(__this + _offset);
	return TransitionTime_GetHashCode_m375A0DD95EB4F4A3139592E11E0BDB1C8B99F36E(_thisAdjusted, method);
}
// System.TimeZoneInfo_TransitionTime System.TimeZoneInfo_TransitionTime::CreateFixedDateRule(System.DateTime,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  TransitionTime_CreateFixedDateRule_mD01CCFB588F2FF162626B6D876FDD053BD4F67F5 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___timeOfDay0, int32_t ___month1, int32_t ___day2, const RuntimeMethod* method)
{
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = ___timeOfDay0;
		int32_t L_1 = ___month1;
		int32_t L_2 = ___day2;
		TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  L_3 = TransitionTime_CreateTransitionTime_m3B9B63724B97DF42141B69B6B561D36AE629434E(L_0, L_1, 1, L_2, 0, (bool)1, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.TimeZoneInfo_TransitionTime System.TimeZoneInfo_TransitionTime::CreateFloatingDateRule(System.DateTime,System.Int32,System.Int32,System.DayOfWeek)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  TransitionTime_CreateFloatingDateRule_m220371E134BAF150869D46F849F4A099DE063B3A (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___timeOfDay0, int32_t ___month1, int32_t ___week2, int32_t ___dayOfWeek3, const RuntimeMethod* method)
{
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = ___timeOfDay0;
		int32_t L_1 = ___month1;
		int32_t L_2 = ___week2;
		int32_t L_3 = ___dayOfWeek3;
		TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  L_4 = TransitionTime_CreateTransitionTime_m3B9B63724B97DF42141B69B6B561D36AE629434E(L_0, L_1, L_2, 1, L_3, (bool)0, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.TimeZoneInfo_TransitionTime System.TimeZoneInfo_TransitionTime::CreateTransitionTime(System.DateTime,System.Int32,System.Int32,System.Int32,System.DayOfWeek,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  TransitionTime_CreateTransitionTime_m3B9B63724B97DF42141B69B6B561D36AE629434E (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___timeOfDay0, int32_t ___month1, int32_t ___week2, int32_t ___day3, int32_t ___dayOfWeek4, bool ___isFixedDateRule5, const RuntimeMethod* method)
{
	TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = ___timeOfDay0;
		int32_t L_1 = ___month1;
		int32_t L_2 = ___week2;
		int32_t L_3 = ___day3;
		int32_t L_4 = ___dayOfWeek4;
		TransitionTime_ValidateTransitionTime_m26FF63A3CD81059DCD206740F4C55820E979F844(L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		il2cpp_codegen_initobj((&V_0), sizeof(TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A ));
		bool L_5 = ___isFixedDateRule5;
		(&V_0)->set_m_isFixedDateRule_5(L_5);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_6 = ___timeOfDay0;
		(&V_0)->set_m_timeOfDay_0(L_6);
		int32_t L_7 = ___dayOfWeek4;
		(&V_0)->set_m_dayOfWeek_4(L_7);
		int32_t L_8 = ___day3;
		(&V_0)->set_m_day_3((uint8_t)(((int32_t)((uint8_t)L_8))));
		int32_t L_9 = ___week2;
		(&V_0)->set_m_week_2((uint8_t)(((int32_t)((uint8_t)L_9))));
		int32_t L_10 = ___month1;
		(&V_0)->set_m_month_1((uint8_t)(((int32_t)((uint8_t)L_10))));
		TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A  L_11 = V_0;
		return L_11;
	}
}
// System.Void System.TimeZoneInfo_TransitionTime::ValidateTransitionTime(System.DateTime,System.Int32,System.Int32,System.Int32,System.DayOfWeek)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionTime_ValidateTransitionTime_m26FF63A3CD81059DCD206740F4C55820E979F844 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___timeOfDay0, int32_t ___month1, int32_t ___week2, int32_t ___day3, int32_t ___dayOfWeek4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransitionTime_ValidateTransitionTime_m26FF63A3CD81059DCD206740F4C55820E979F844_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = DateTime_get_Kind_mC7EC1A788CC9A875094117214C5A0C153A39F496((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&___timeOfDay0), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		String_t* L_1 = Environment_GetResourceString_m8DFF827596B5FD533D3FE56900FA095F7D674617(_stringLiteralE5A6B5B780158F734FA0A11A802E762EF7BDD272, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_2 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_2, L_1, _stringLiteralC71EEB076C9C234A1E39FDB9B0DCFC8851BA4D7F, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, TransitionTime_ValidateTransitionTime_m26FF63A3CD81059DCD206740F4C55820E979F844_RuntimeMethod_var);
	}

IL_001e:
	{
		int32_t L_3 = ___month1;
		if ((((int32_t)L_3) < ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_4 = ___month1;
		if ((((int32_t)L_4) <= ((int32_t)((int32_t)12))))
		{
			goto IL_003c;
		}
	}

IL_0027:
	{
		String_t* L_5 = Environment_GetResourceString_m8DFF827596B5FD533D3FE56900FA095F7D674617(_stringLiteralD5E0D3D064AAABFE3EC781EFE9126A80D40BED15, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_6 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005(L_6, _stringLiteral30D99F99F1F4688CE08A3BF1B034C9CD49C19174, L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, TransitionTime_ValidateTransitionTime_m26FF63A3CD81059DCD206740F4C55820E979F844_RuntimeMethod_var);
	}

IL_003c:
	{
		int32_t L_7 = ___day3;
		if ((((int32_t)L_7) < ((int32_t)1)))
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_8 = ___day3;
		if ((((int32_t)L_8) <= ((int32_t)((int32_t)31))))
		{
			goto IL_005a;
		}
	}

IL_0045:
	{
		String_t* L_9 = Environment_GetResourceString_m8DFF827596B5FD533D3FE56900FA095F7D674617(_stringLiteral4B63EF6929AE971A204D72191783C54436124C51, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_10 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005(L_10, _stringLiteral645F0B83FF7CADECF44AD1B83B13002DA97FBA1E, L_9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, TransitionTime_ValidateTransitionTime_m26FF63A3CD81059DCD206740F4C55820E979F844_RuntimeMethod_var);
	}

IL_005a:
	{
		int32_t L_11 = ___week2;
		if ((((int32_t)L_11) < ((int32_t)1)))
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_12 = ___week2;
		if ((((int32_t)L_12) <= ((int32_t)5)))
		{
			goto IL_0077;
		}
	}

IL_0062:
	{
		String_t* L_13 = Environment_GetResourceString_m8DFF827596B5FD533D3FE56900FA095F7D674617(_stringLiteral27898ED9175E943FDE24F2BF2E86B60EEDFF15D2, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_14 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005(L_14, _stringLiteral0A2679566878DB123603B221EB69443EBD3A7BCB, L_13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, TransitionTime_ValidateTransitionTime_m26FF63A3CD81059DCD206740F4C55820E979F844_RuntimeMethod_var);
	}

IL_0077:
	{
		int32_t L_15 = ___dayOfWeek4;
		if ((((int32_t)L_15) < ((int32_t)0)))
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_16 = ___dayOfWeek4;
		if ((((int32_t)L_16) <= ((int32_t)6)))
		{
			goto IL_0096;
		}
	}

IL_0081:
	{
		String_t* L_17 = Environment_GetResourceString_m8DFF827596B5FD533D3FE56900FA095F7D674617(_stringLiteral83DC2909B9E8CF20AD23217F95DC9967B22DD3F5, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_18 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005(L_18, _stringLiteralA50A38EF2D7858A83B908FDB41C862EF6FD5FAE1, L_17, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, TransitionTime_ValidateTransitionTime_m26FF63A3CD81059DCD206740F4C55820E979F844_RuntimeMethod_var);
	}

IL_0096:
	{
		int32_t L_19 = DateTime_get_Year_m977F96B53C996797BFBDCAA5679B8DCBA61AC185((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&___timeOfDay0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_19) == ((uint32_t)1))))
		{
			goto IL_00c4;
		}
	}
	{
		int32_t L_20 = DateTime_get_Month_m46CC2AED3F24A91104919B1F6B5103DD1F8BBAE8((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&___timeOfDay0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_20) == ((uint32_t)1))))
		{
			goto IL_00c4;
		}
	}
	{
		int32_t L_21 = DateTime_get_Day_m9D698CA2A7D1FBEE7BEC0A982A119239F513CBA8((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&___timeOfDay0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_21) == ((uint32_t)1))))
		{
			goto IL_00c4;
		}
	}
	{
		int64_t L_22 = DateTime_get_Ticks_m175EDB41A50DB06872CC48CAB603FEBD1DFF46A9((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&___timeOfDay0), /*hidden argument*/NULL);
		if (!((int64_t)((int64_t)L_22%(int64_t)(((int64_t)((int64_t)((int32_t)10000)))))))
		{
			goto IL_00d9;
		}
	}

IL_00c4:
	{
		String_t* L_23 = Environment_GetResourceString_m8DFF827596B5FD533D3FE56900FA095F7D674617(_stringLiteral1C55B63DB181316212E6D01717E65E1FB557B6B8, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_24 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_24, L_23, _stringLiteralC71EEB076C9C234A1E39FDB9B0DCFC8851BA4D7F, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, TransitionTime_ValidateTransitionTime_m26FF63A3CD81059DCD206740F4C55820E979F844_RuntimeMethod_var);
	}

IL_00d9:
	{
		return;
	}
}
// System.Void System.TimeZoneInfo_TransitionTime::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionTime_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m7531877356A7E49F851E7C075B15905C94DBA18B (TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * __this, RuntimeObject * ___sender0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransitionTime_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m7531877356A7E49F851E7C075B15905C94DBA18B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = __this->get_m_timeOfDay_0();
		uint8_t L_1 = __this->get_m_month_1();
		uint8_t L_2 = __this->get_m_week_2();
		uint8_t L_3 = __this->get_m_day_3();
		int32_t L_4 = __this->get_m_dayOfWeek_4();
		TransitionTime_ValidateTransitionTime_m26FF63A3CD81059DCD206740F4C55820E979F844(L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		goto IL_0037;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0025;
		throw e;
	}

CATCH_0025:
	{ // begin catch(System.ArgumentException)
		V_0 = ((ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)__exception_local);
		String_t* L_5 = Environment_GetResourceString_m8DFF827596B5FD533D3FE56900FA095F7D674617(_stringLiteralA595476C6F6D3E2C3406DD69BC73859EA4408F2F, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_6 = V_0;
		SerializationException_tDB38C13A2ABF407C381E3F332D197AC1AD097A92 * L_7 = (SerializationException_tDB38C13A2ABF407C381E3F332D197AC1AD097A92 *)il2cpp_codegen_object_new(SerializationException_tDB38C13A2ABF407C381E3F332D197AC1AD097A92_il2cpp_TypeInfo_var);
		SerializationException__ctor_m03F01FDBEB6469CCD85942C5C62BD46FFC6CE11C(L_7, L_5, L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, TransitionTime_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m7531877356A7E49F851E7C075B15905C94DBA18B_RuntimeMethod_var);
	} // end catch (depth: 1)

IL_0037:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void TransitionTime_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m7531877356A7E49F851E7C075B15905C94DBA18B_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___sender0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * _thisAdjusted = reinterpret_cast<TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A *>(__this + _offset);
	TransitionTime_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m7531877356A7E49F851E7C075B15905C94DBA18B(_thisAdjusted, ___sender0, method);
}
// System.Void System.TimeZoneInfo_TransitionTime::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionTime_System_Runtime_Serialization_ISerializable_GetObjectData_mF3DC458CCBC82FA8027E237CE05A4B3D44E6D614 (TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransitionTime_System_Runtime_Serialization_ISerializable_GetObjectData_mF3DC458CCBC82FA8027E237CE05A4B3D44E6D614_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, _stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, TransitionTime_System_Runtime_Serialization_ISerializable_GetObjectData_mF3DC458CCBC82FA8027E237CE05A4B3D44E6D614_RuntimeMethod_var);
	}

IL_000e:
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_2 = ___info0;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_3 = __this->get_m_timeOfDay_0();
		NullCheck(L_2);
		SerializationInfo_AddValue_m4E39B61DB324BA16CB228942756352329286C40B(L_2, _stringLiteralD41010780259F355E00BAB0A989D365B9CD48A8F, L_3, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_4 = ___info0;
		uint8_t L_5 = __this->get_m_month_1();
		NullCheck(L_4);
		SerializationInfo_AddValue_mBE03953B805B6CE513241C7F4656F90DF5313979(L_4, _stringLiteral3AF0F65A629E1F9641A341CFA19B861690DA71B5, L_5, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_6 = ___info0;
		uint8_t L_7 = __this->get_m_week_2();
		NullCheck(L_6);
		SerializationInfo_AddValue_mBE03953B805B6CE513241C7F4656F90DF5313979(L_6, _stringLiteral91A84CFC28DE4E260ED3B9388BE19E585D150D7F, L_7, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_8 = ___info0;
		uint8_t L_9 = __this->get_m_day_3();
		NullCheck(L_8);
		SerializationInfo_AddValue_mBE03953B805B6CE513241C7F4656F90DF5313979(L_8, _stringLiteral79C59F2479E52A939A8A16D011943BDBDFBEE65E, L_9, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_10 = ___info0;
		int32_t L_11 = __this->get_m_dayOfWeek_4();
		int32_t L_12 = L_11;
		RuntimeObject * L_13 = Box(DayOfWeek_t9E9D87E7A85C119F741167E9F8C613ABFB0A4AC7_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_10);
		SerializationInfo_AddValue_mA50C2668EF700C2239DDC362F8DB409020BB763D(L_10, _stringLiteral83A0203482067140327BBF852248E02658CAE786, L_13, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_14 = ___info0;
		bool L_15 = __this->get_m_isFixedDateRule_5();
		NullCheck(L_14);
		SerializationInfo_AddValue_m324F3E0B02B746D5F460499F5A25988FD608AD7B(L_14, _stringLiteralD94C250F2B1277449096D60BF52D91C01BC28947, L_15, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransitionTime_System_Runtime_Serialization_ISerializable_GetObjectData_mF3DC458CCBC82FA8027E237CE05A4B3D44E6D614_AdjustorThunk (RuntimeObject * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * _thisAdjusted = reinterpret_cast<TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A *>(__this + _offset);
	TransitionTime_System_Runtime_Serialization_ISerializable_GetObjectData_mF3DC458CCBC82FA8027E237CE05A4B3D44E6D614(_thisAdjusted, ___info0, ___context1, method);
}
// System.Void System.TimeZoneInfo_TransitionTime::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionTime__ctor_mBE66AC04B8264C98E4EE51D0939F7CD57A3CBBC3 (TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransitionTime__ctor_mBE66AC04B8264C98E4EE51D0939F7CD57A3CBBC3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, _stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, TransitionTime__ctor_mBE66AC04B8264C98E4EE51D0939F7CD57A3CBBC3_RuntimeMethod_var);
	}

IL_000e:
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_2 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		RuntimeObject * L_5 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_2, _stringLiteralD41010780259F355E00BAB0A989D365B9CD48A8F, L_4, /*hidden argument*/NULL);
		__this->set_m_timeOfDay_0(((*(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)UnBox(L_5, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var)))));
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_6 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var) };
		Type_t * L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		RuntimeObject * L_9 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_6, _stringLiteral3AF0F65A629E1F9641A341CFA19B861690DA71B5, L_8, /*hidden argument*/NULL);
		__this->set_m_month_1(((*(uint8_t*)((uint8_t*)UnBox(L_9, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))));
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_10 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_11 = { reinterpret_cast<intptr_t> (Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var) };
		Type_t * L_12 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		RuntimeObject * L_13 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_10, _stringLiteral91A84CFC28DE4E260ED3B9388BE19E585D150D7F, L_12, /*hidden argument*/NULL);
		__this->set_m_week_2(((*(uint8_t*)((uint8_t*)UnBox(L_13, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))));
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_14 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_15 = { reinterpret_cast<intptr_t> (Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var) };
		Type_t * L_16 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_15, /*hidden argument*/NULL);
		NullCheck(L_14);
		RuntimeObject * L_17 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_14, _stringLiteral79C59F2479E52A939A8A16D011943BDBDFBEE65E, L_16, /*hidden argument*/NULL);
		__this->set_m_day_3(((*(uint8_t*)((uint8_t*)UnBox(L_17, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))));
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_18 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_19 = { reinterpret_cast<intptr_t> (DayOfWeek_t9E9D87E7A85C119F741167E9F8C613ABFB0A4AC7_0_0_0_var) };
		Type_t * L_20 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_19, /*hidden argument*/NULL);
		NullCheck(L_18);
		RuntimeObject * L_21 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_18, _stringLiteral83A0203482067140327BBF852248E02658CAE786, L_20, /*hidden argument*/NULL);
		__this->set_m_dayOfWeek_4(((*(int32_t*)((int32_t*)UnBox(L_21, DayOfWeek_t9E9D87E7A85C119F741167E9F8C613ABFB0A4AC7_il2cpp_TypeInfo_var)))));
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_22 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_23 = { reinterpret_cast<intptr_t> (Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var) };
		Type_t * L_24 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_23, /*hidden argument*/NULL);
		NullCheck(L_22);
		RuntimeObject * L_25 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_22, _stringLiteralD94C250F2B1277449096D60BF52D91C01BC28947, L_24, /*hidden argument*/NULL);
		__this->set_m_isFixedDateRule_5(((*(bool*)((bool*)UnBox(L_25, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var)))));
		return;
	}
}
IL2CPP_EXTERN_C  void TransitionTime__ctor_mBE66AC04B8264C98E4EE51D0939F7CD57A3CBBC3_AdjustorThunk (RuntimeObject * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * _thisAdjusted = reinterpret_cast<TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A *>(__this + _offset);
	TransitionTime__ctor_mBE66AC04B8264C98E4EE51D0939F7CD57A3CBBC3(_thisAdjusted, ___info0, ___context1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Threading.Timer_Scheduler::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scheduler__cctor_m36805653C9D55766CEE82413432DFBC5B5DBFB29 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Scheduler__cctor_m36805653C9D55766CEE82413432DFBC5B5DBFB29_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * L_0 = (Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 *)il2cpp_codegen_object_new(Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8_il2cpp_TypeInfo_var);
		Scheduler__ctor_mFA8C77435650B38315E392A0D1C66EC7DC974E82(L_0, /*hidden argument*/NULL);
		((Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8_StaticFields*)il2cpp_codegen_static_fields_for(Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8_il2cpp_TypeInfo_var))->set_instance_0(L_0);
		return;
	}
}
// System.Threading.Timer_Scheduler System.Threading.Timer_Scheduler::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * Scheduler_get_Instance_mEB15B6A61E0B259CFC8BABE4376A8DEC2962BC86 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Scheduler_get_Instance_mEB15B6A61E0B259CFC8BABE4376A8DEC2962BC86_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8_il2cpp_TypeInfo_var);
		Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * L_0 = ((Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8_StaticFields*)il2cpp_codegen_static_fields_for(Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8_il2cpp_TypeInfo_var))->get_instance_0();
		return L_0;
	}
}
// System.Void System.Threading.Timer_Scheduler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scheduler__ctor_mFA8C77435650B38315E392A0D1C66EC7DC974E82 (Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Scheduler__ctor_mFA8C77435650B38315E392A0D1C66EC7DC974E82_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_0 = (ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA *)il2cpp_codegen_object_new(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_il2cpp_TypeInfo_var);
		ManualResetEvent__ctor_mF80BD5B0955BDA8CD514F48EBFF48698E5D03850(L_0, (bool)0, /*hidden argument*/NULL);
		__this->set_changed_2(L_0);
		TimerComparer_t1899647CFE875978843BE8ABA01C10956F1E740B * L_1 = (TimerComparer_t1899647CFE875978843BE8ABA01C10956F1E740B *)il2cpp_codegen_object_new(TimerComparer_t1899647CFE875978843BE8ABA01C10956F1E740B_il2cpp_TypeInfo_var);
		TimerComparer__ctor_mB4F0DB5CDEB7A6E93F59950E0FB1D19BB4BBA0B4(L_1, /*hidden argument*/NULL);
		SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * L_2 = (SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 *)il2cpp_codegen_object_new(SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165_il2cpp_TypeInfo_var);
		SortedList__ctor_m0E1B0737647DC8D8B3E9FAD5F81168878E92E9F4(L_2, L_1, ((int32_t)1024), /*hidden argument*/NULL);
		__this->set_list_1(L_2);
		ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687 * L_3 = (ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687 *)il2cpp_codegen_object_new(ThreadStart_tA13019555BA3CB2B0128F0880760196BF790E687_il2cpp_TypeInfo_var);
		ThreadStart__ctor_m360F4EED0AD96A27D6A9612BF79671F26B30411F(L_3, __this, (intptr_t)((intptr_t)Scheduler_SchedulerThread_mDB9CB3C0FCB84658BB01FFF19F5995869778D8C7_RuntimeMethod_var), /*hidden argument*/NULL);
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_4 = (Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 *)il2cpp_codegen_object_new(Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414_il2cpp_TypeInfo_var);
		Thread__ctor_mF22465F0D0E47C11EF25DB552D1047402750BE90(L_4, L_3, /*hidden argument*/NULL);
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_5 = L_4;
		NullCheck(L_5);
		Thread_set_IsBackground_m8CAEC157A236A574FE83FDB22D693AB1681B01B0(L_5, (bool)1, /*hidden argument*/NULL);
		NullCheck(L_5);
		Thread_Start_m490124B23F5EFD0BB2BED8CA12C77195B9CD9E1B(L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Timer_Scheduler::Remove(System.Threading.Timer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scheduler_Remove_m34454A4F7A6AC0E05564A423140D7923771904D5 (Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * __this, Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * ___timer0, const RuntimeMethod* method)
{
	Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_0 = ___timer0;
		NullCheck(L_0);
		int64_t L_1 = L_0->get_next_run_6();
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_2 = ___timer0;
		NullCheck(L_2);
		int64_t L_3 = L_2->get_next_run_6();
		if ((!(((uint64_t)L_3) == ((uint64_t)((int64_t)(std::numeric_limits<int64_t>::max)())))))
		{
			goto IL_001a;
		}
	}

IL_0019:
	{
		return;
	}

IL_001a:
	{
		V_0 = __this;
		V_1 = (bool)0;
	}

IL_001e:
	try
	{ // begin try (depth: 1)
		Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * L_4 = V_0;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_4, (bool*)(&V_1), /*hidden argument*/NULL);
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_5 = ___timer0;
		Scheduler_InternalRemove_m3154F260BA70D6D62BB855662FD4E59EBF25C538(__this, L_5, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x3A, FINALLY_0030);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0030;
	}

FINALLY_0030:
	{ // begin finally (depth: 1)
		{
			bool L_6 = V_1;
			if (!L_6)
			{
				goto IL_0039;
			}
		}

IL_0033:
		{
			Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * L_7 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_7, /*hidden argument*/NULL);
		}

IL_0039:
		{
			IL2CPP_END_FINALLY(48)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(48)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3A, IL_003a)
	}

IL_003a:
	{
		return;
	}
}
// System.Void System.Threading.Timer_Scheduler::Change(System.Threading.Timer,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scheduler_Change_mB9519A7BE09D1CB449D40E231F43C97F8019685D (Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * __this, Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * ___timer0, int64_t ___new_next_run1, const RuntimeMethod* method)
{
	bool V_0 = false;
	Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * V_1 = NULL;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		V_0 = (bool)0;
		V_1 = __this;
		V_2 = (bool)0;
	}

IL_0006:
	try
	{ // begin try (depth: 1)
		{
			Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * L_0 = V_1;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_0, (bool*)(&V_2), /*hidden argument*/NULL);
			Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_1 = ___timer0;
			Scheduler_InternalRemove_m3154F260BA70D6D62BB855662FD4E59EBF25C538(__this, L_1, /*hidden argument*/NULL);
			int64_t L_2 = ___new_next_run1;
			if ((!(((uint64_t)L_2) == ((uint64_t)((int64_t)(std::numeric_limits<int64_t>::max)())))))
			{
				goto IL_002b;
			}
		}

IL_0022:
		{
			Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_3 = ___timer0;
			int64_t L_4 = ___new_next_run1;
			NullCheck(L_3);
			L_3->set_next_run_6(L_4);
			IL2CPP_LEAVE(0x6C, FINALLY_0053);
		}

IL_002b:
		{
			Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_5 = ___timer0;
			NullCheck(L_5);
			bool L_6 = L_5->get_disposed_7();
			if (L_6)
			{
				goto IL_0051;
			}
		}

IL_0033:
		{
			Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_7 = ___timer0;
			int64_t L_8 = ___new_next_run1;
			NullCheck(L_7);
			L_7->set_next_run_6(L_8);
			Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_9 = ___timer0;
			Scheduler_Add_m97B241DC232711E7C7D9057DA0BF7D657808D981(__this, L_9, /*hidden argument*/NULL);
			SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * L_10 = __this->get_list_1();
			NullCheck(L_10);
			RuntimeObject * L_11 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(25 /* System.Object System.Collections.SortedList::GetByIndex(System.Int32) */, L_10, 0);
			Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_12 = ___timer0;
			V_0 = (bool)((((RuntimeObject*)(RuntimeObject *)L_11) == ((RuntimeObject*)(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB *)L_12))? 1 : 0);
		}

IL_0051:
		{
			IL2CPP_LEAVE(0x5D, FINALLY_0053);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0053;
	}

FINALLY_0053:
	{ // begin finally (depth: 1)
		{
			bool L_13 = V_2;
			if (!L_13)
			{
				goto IL_005c;
			}
		}

IL_0056:
		{
			Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * L_14 = V_1;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_14, /*hidden argument*/NULL);
		}

IL_005c:
		{
			IL2CPP_END_FINALLY(83)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(83)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x6C, IL_006c)
		IL2CPP_JUMP_TBL(0x5D, IL_005d)
	}

IL_005d:
	{
		bool L_15 = V_0;
		if (!L_15)
		{
			goto IL_006c;
		}
	}
	{
		ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_16 = __this->get_changed_2();
		NullCheck(L_16);
		EventWaitHandle_Set_m81764C887F38A1153224557B26CD688B59987B38(L_16, /*hidden argument*/NULL);
	}

IL_006c:
	{
		return;
	}
}
// System.Int32 System.Threading.Timer_Scheduler::FindByDueTime(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scheduler_FindByDueTime_m97EC1ECDEE06ABC0ADD1CD8D4C3B6F057680F677 (Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * __this, int64_t ___nr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Scheduler_FindByDueTime_m97EC1ECDEE06ABC0ADD1CD8D4C3B6F057680F677_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * V_2 = NULL;
	int32_t V_3 = 0;
	Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * V_4 = NULL;
	{
		V_0 = 0;
		SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * L_0 = __this->get_list_1();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Int32 System.Collections.SortedList::get_Count() */, L_0);
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1));
		int32_t L_2 = V_1;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		return (-1);
	}

IL_0016:
	{
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)20))))
		{
			goto IL_008a;
		}
	}
	{
		goto IL_0049;
	}

IL_001d:
	{
		SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * L_4 = __this->get_list_1();
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject * L_6 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(25 /* System.Object System.Collections.SortedList::GetByIndex(System.Int32) */, L_4, L_5);
		V_2 = ((Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB *)CastclassSealed((RuntimeObject*)L_6, Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_il2cpp_TypeInfo_var));
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_7 = V_2;
		NullCheck(L_7);
		int64_t L_8 = L_7->get_next_run_6();
		int64_t L_9 = ___nr0;
		if ((!(((uint64_t)L_8) == ((uint64_t)L_9))))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_10 = V_0;
		return L_10;
	}

IL_003a:
	{
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_11 = V_2;
		NullCheck(L_11);
		int64_t L_12 = L_11->get_next_run_6();
		int64_t L_13 = ___nr0;
		if ((((int64_t)L_12) <= ((int64_t)L_13)))
		{
			goto IL_0045;
		}
	}
	{
		return (-1);
	}

IL_0045:
	{
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0049:
	{
		int32_t L_15 = V_0;
		int32_t L_16 = V_1;
		if ((((int32_t)L_15) <= ((int32_t)L_16)))
		{
			goto IL_001d;
		}
	}
	{
		return (-1);
	}

IL_004f:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = V_1;
		int32_t L_19 = V_0;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)L_19))>>(int32_t)1))));
		SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * L_20 = __this->get_list_1();
		int32_t L_21 = V_3;
		NullCheck(L_20);
		RuntimeObject * L_22 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(25 /* System.Object System.Collections.SortedList::GetByIndex(System.Int32) */, L_20, L_21);
		V_4 = ((Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB *)CastclassSealed((RuntimeObject*)L_22, Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_il2cpp_TypeInfo_var));
		int64_t L_23 = ___nr0;
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_24 = V_4;
		NullCheck(L_24);
		int64_t L_25 = L_24->get_next_run_6();
		if ((!(((uint64_t)L_23) == ((uint64_t)L_25))))
		{
			goto IL_0076;
		}
	}
	{
		int32_t L_26 = V_3;
		return L_26;
	}

IL_0076:
	{
		int64_t L_27 = ___nr0;
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_28 = V_4;
		NullCheck(L_28);
		int64_t L_29 = L_28->get_next_run_6();
		if ((((int64_t)L_27) <= ((int64_t)L_29)))
		{
			goto IL_0086;
		}
	}
	{
		int32_t L_30 = V_3;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
		goto IL_008a;
	}

IL_0086:
	{
		int32_t L_31 = V_3;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_31, (int32_t)1));
	}

IL_008a:
	{
		int32_t L_32 = V_0;
		int32_t L_33 = V_1;
		if ((((int32_t)L_32) <= ((int32_t)L_33)))
		{
			goto IL_004f;
		}
	}
	{
		return (-1);
	}
}
// System.Void System.Threading.Timer_Scheduler::Add(System.Threading.Timer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scheduler_Add_m97B241DC232711E7C7D9057DA0BF7D657808D981 (Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * __this, Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * ___timer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Scheduler_Add_m97B241DC232711E7C7D9057DA0BF7D657808D981_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t G_B4_0 = 0;
	{
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_0 = ___timer0;
		NullCheck(L_0);
		int64_t L_1 = L_0->get_next_run_6();
		int32_t L_2 = Scheduler_FindByDueTime_m97EC1ECDEE06ABC0ADD1CD8D4C3B6F057680F677(__this, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0081;
		}
	}
	{
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_4 = ___timer0;
		NullCheck(L_4);
		int64_t L_5 = L_4->get_next_run_6();
		if ((((int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)((int64_t)(std::numeric_limits<int64_t>::max)()), (int64_t)L_5))) > ((int64_t)(((int64_t)((int64_t)((int32_t)20000)))))))
		{
			goto IL_002c;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_002d;
	}

IL_002c:
	{
		G_B4_0 = 1;
	}

IL_002d:
	{
		V_1 = (bool)G_B4_0;
	}

IL_002e:
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_8 = ___timer0;
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_9 = L_8;
		NullCheck(L_9);
		int64_t L_10 = L_9->get_next_run_6();
		NullCheck(L_9);
		L_9->set_next_run_6(((int64_t)il2cpp_codegen_add((int64_t)L_10, (int64_t)(((int64_t)((int64_t)1))))));
		goto IL_0055;
	}

IL_0046:
	{
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_11 = ___timer0;
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_12 = L_11;
		NullCheck(L_12);
		int64_t L_13 = L_12->get_next_run_6();
		NullCheck(L_12);
		L_12->set_next_run_6(((int64_t)il2cpp_codegen_subtract((int64_t)L_13, (int64_t)(((int64_t)((int64_t)1))))));
	}

IL_0055:
	{
		int32_t L_14 = V_0;
		SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * L_15 = __this->get_list_1();
		NullCheck(L_15);
		int32_t L_16 = VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Int32 System.Collections.SortedList::get_Count() */, L_15);
		if ((((int32_t)L_14) >= ((int32_t)L_16)))
		{
			goto IL_0081;
		}
	}
	{
		SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * L_17 = __this->get_list_1();
		int32_t L_18 = V_0;
		NullCheck(L_17);
		RuntimeObject * L_19 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(25 /* System.Object System.Collections.SortedList::GetByIndex(System.Int32) */, L_17, L_18);
		NullCheck(((Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB *)CastclassSealed((RuntimeObject*)L_19, Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_il2cpp_TypeInfo_var)));
		int64_t L_20 = ((Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB *)CastclassSealed((RuntimeObject*)L_19, Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_il2cpp_TypeInfo_var))->get_next_run_6();
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_21 = ___timer0;
		NullCheck(L_21);
		int64_t L_22 = L_21->get_next_run_6();
		if ((((int64_t)L_20) == ((int64_t)L_22)))
		{
			goto IL_002e;
		}
	}

IL_0081:
	{
		SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * L_23 = __this->get_list_1();
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_24 = ___timer0;
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_25 = ___timer0;
		NullCheck(L_23);
		VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(15 /* System.Void System.Collections.SortedList::Add(System.Object,System.Object) */, L_23, L_24, L_25);
		return;
	}
}
// System.Int32 System.Threading.Timer_Scheduler::InternalRemove(System.Threading.Timer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scheduler_InternalRemove_m3154F260BA70D6D62BB855662FD4E59EBF25C538 (Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * __this, Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * ___timer0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * L_0 = __this->get_list_1();
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_1 = ___timer0;
		NullCheck(L_0);
		int32_t L_2 = VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(32 /* System.Int32 System.Collections.SortedList::IndexOfKey(System.Object) */, L_0, L_1);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * L_4 = __this->get_list_1();
		int32_t L_5 = V_0;
		NullCheck(L_4);
		VirtActionInvoker1< int32_t >::Invoke(34 /* System.Void System.Collections.SortedList::RemoveAt(System.Int32) */, L_4, L_5);
	}

IL_001d:
	{
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Void System.Threading.Timer_Scheduler::TimerCB(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scheduler_TimerCB_mFF78E60DAA18DD3E772F2113D46FB51241C957A6 (RuntimeObject * ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Scheduler_TimerCB_mFF78E60DAA18DD3E772F2113D46FB51241C957A6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___o0;
		V_0 = ((Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB *)CastclassSealed((RuntimeObject*)L_0, Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_il2cpp_TypeInfo_var));
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_1 = V_0;
		NullCheck(L_1);
		TimerCallback_tD193CC50BF27E129E6857E1E8A7EAC24BD131814 * L_2 = L_1->get_callback_2();
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_3 = V_0;
		NullCheck(L_3);
		RuntimeObject * L_4 = L_3->get_state_3();
		NullCheck(L_2);
		TimerCallback_Invoke_m1318C110BA930390E8F61C8BAAAC8F1CA8776CFD(L_2, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Threading.Timer_Scheduler::SchedulerThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scheduler_SchedulerThread_mDB9CB3C0FCB84658BB01FFF19F5995869778D8C7 (Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Scheduler_SchedulerThread_mDB9CB3C0FCB84658BB01FFF19F5995869778D8C7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t537143C180C9FB69517B6C26205D2AA824591563 * V_0 = NULL;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * V_3 = NULL;
	bool V_4 = false;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int64_t V_8 = 0;
	Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * V_9 = NULL;
	int64_t V_10 = 0;
	int64_t V_11 = 0;
	Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * V_12 = NULL;
	int64_t V_13 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B10_0 = 0;
	{
		Thread_tB9EB71664220EE16451AF3276D78DE6614D2A414 * L_0 = Thread_get_CurrentThread_m80236D2457FBCC1F76A08711E059A0B738DA71EC(/*hidden argument*/NULL);
		NullCheck(L_0);
		Thread_set_Name_m920049DFD1306F42613F13CF7AD74C03661F4BAE(L_0, _stringLiteral494836B9EFC41FFD5CB7E6CA5BA325833F323668, /*hidden argument*/NULL);
		List_1_t537143C180C9FB69517B6C26205D2AA824591563 * L_1 = (List_1_t537143C180C9FB69517B6C26205D2AA824591563 *)il2cpp_codegen_object_new(List_1_t537143C180C9FB69517B6C26205D2AA824591563_il2cpp_TypeInfo_var);
		List_1__ctor_m883AB85828B7C88FE9A8C7802E93E6CE979EA000(L_1, ((int32_t)512), /*hidden argument*/List_1__ctor_m883AB85828B7C88FE9A8C7802E93E6CE979EA000_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_001a:
	{
		V_1 = (-1);
		IL2CPP_RUNTIME_CLASS_INIT(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_il2cpp_TypeInfo_var);
		int64_t L_2 = Timer_GetTimeMonotonic_m085737FA1918F06DE8264E85C1C2B8DFF2B65298(/*hidden argument*/NULL);
		V_2 = L_2;
		V_3 = __this;
		V_4 = (bool)0;
	}

IL_0027:
	try
	{ // begin try (depth: 1)
		{
			Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * L_3 = V_3;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_3, (bool*)(&V_4), /*hidden argument*/NULL);
			ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_4 = __this->get_changed_2();
			NullCheck(L_4);
			EventWaitHandle_Reset_m535429D7CC172C0B95EB8B7B9126B3F3761E2D30(L_4, /*hidden argument*/NULL);
			SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * L_5 = __this->get_list_1();
			NullCheck(L_5);
			int32_t L_6 = VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Int32 System.Collections.SortedList::get_Count() */, L_5);
			V_6 = L_6;
			V_5 = 0;
			goto IL_010c;
		}

IL_0050:
		{
			SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * L_7 = __this->get_list_1();
			int32_t L_8 = V_5;
			NullCheck(L_7);
			RuntimeObject * L_9 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(25 /* System.Object System.Collections.SortedList::GetByIndex(System.Int32) */, L_7, L_8);
			V_9 = ((Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB *)CastclassSealed((RuntimeObject*)L_9, Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_il2cpp_TypeInfo_var));
			Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_10 = V_9;
			NullCheck(L_10);
			int64_t L_11 = L_10->get_next_run_6();
			int64_t L_12 = V_2;
			if ((((int64_t)L_11) > ((int64_t)L_12)))
			{
				goto IL_0115;
			}
		}

IL_0071:
		{
			SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * L_13 = __this->get_list_1();
			int32_t L_14 = V_5;
			NullCheck(L_13);
			VirtActionInvoker1< int32_t >::Invoke(34 /* System.Void System.Collections.SortedList::RemoveAt(System.Int32) */, L_13, L_14);
			int32_t L_15 = V_6;
			V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)1));
			int32_t L_16 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)1));
			WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 * L_17 = (WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319 *)il2cpp_codegen_object_new(WaitCallback_t82C85517E973DCC6390AFB0BC3C2276F3328A319_il2cpp_TypeInfo_var);
			WaitCallback__ctor_m50EFFE5096DF1DE733EA9895CEEC8EB6F142D5D5(L_17, NULL, (intptr_t)((intptr_t)Scheduler_TimerCB_mFF78E60DAA18DD3E772F2113D46FB51241C957A6_RuntimeMethod_var), /*hidden argument*/NULL);
			Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_18 = V_9;
			ThreadPool_UnsafeQueueUserWorkItem_m9B9388DD623D33685D415D639455591D4DD967C6(L_17, L_18, /*hidden argument*/NULL);
			Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_19 = V_9;
			NullCheck(L_19);
			int64_t L_20 = L_19->get_period_ms_5();
			V_10 = L_20;
			Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_21 = V_9;
			NullCheck(L_21);
			int64_t L_22 = L_21->get_due_time_ms_4();
			V_11 = L_22;
			int64_t L_23 = V_10;
			if ((((int64_t)L_23) == ((int64_t)(((int64_t)((int64_t)(-1)))))))
			{
				goto IL_00ce;
			}
		}

IL_00b6:
		{
			int64_t L_24 = V_10;
			if (!L_24)
			{
				goto IL_00c0;
			}
		}

IL_00ba:
		{
			int64_t L_25 = V_10;
			if ((!(((uint64_t)L_25) == ((uint64_t)(((int64_t)((int64_t)(-1))))))))
			{
				goto IL_00cb;
			}
		}

IL_00c0:
		{
			int64_t L_26 = V_11;
			G_B10_0 = ((((int32_t)((((int64_t)L_26) == ((int64_t)(((int64_t)((int64_t)(-1))))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			goto IL_00cf;
		}

IL_00cb:
		{
			G_B10_0 = 0;
			goto IL_00cf;
		}

IL_00ce:
		{
			G_B10_0 = 1;
		}

IL_00cf:
		{
			if (!G_B10_0)
			{
				goto IL_00e3;
			}
		}

IL_00d1:
		{
			Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_27 = V_9;
			NullCheck(L_27);
			L_27->set_next_run_6(((int64_t)(std::numeric_limits<int64_t>::max)()));
			goto IL_0106;
		}

IL_00e3:
		{
			Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_28 = V_9;
			IL2CPP_RUNTIME_CLASS_INIT(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_il2cpp_TypeInfo_var);
			int64_t L_29 = Timer_GetTimeMonotonic_m085737FA1918F06DE8264E85C1C2B8DFF2B65298(/*hidden argument*/NULL);
			Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_30 = V_9;
			NullCheck(L_30);
			int64_t L_31 = L_30->get_period_ms_5();
			NullCheck(L_28);
			L_28->set_next_run_6(((int64_t)il2cpp_codegen_add((int64_t)L_29, (int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)(((int64_t)((int64_t)((int32_t)10000)))), (int64_t)L_31)))));
			List_1_t537143C180C9FB69517B6C26205D2AA824591563 * L_32 = V_0;
			Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_33 = V_9;
			NullCheck(L_32);
			List_1_Add_mB29575CEA902024C74743A09C2AD6A27C71FA14C(L_32, L_33, /*hidden argument*/List_1_Add_mB29575CEA902024C74743A09C2AD6A27C71FA14C_RuntimeMethod_var);
		}

IL_0106:
		{
			int32_t L_34 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1));
		}

IL_010c:
		{
			int32_t L_35 = V_5;
			int32_t L_36 = V_6;
			if ((((int32_t)L_35) < ((int32_t)L_36)))
			{
				goto IL_0050;
			}
		}

IL_0115:
		{
			List_1_t537143C180C9FB69517B6C26205D2AA824591563 * L_37 = V_0;
			NullCheck(L_37);
			int32_t L_38 = List_1_get_Count_m9F4CBA17931C03FCCABF06CE8F29187F98D1F260_inline(L_37, /*hidden argument*/List_1_get_Count_m9F4CBA17931C03FCCABF06CE8F29187F98D1F260_RuntimeMethod_var);
			V_6 = L_38;
			V_5 = 0;
			goto IL_013a;
		}

IL_0122:
		{
			List_1_t537143C180C9FB69517B6C26205D2AA824591563 * L_39 = V_0;
			int32_t L_40 = V_5;
			NullCheck(L_39);
			Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_41 = List_1_get_Item_m9C036D14366E9BBB52436252522EDE206DC6EB35_inline(L_39, L_40, /*hidden argument*/List_1_get_Item_m9C036D14366E9BBB52436252522EDE206DC6EB35_RuntimeMethod_var);
			V_12 = L_41;
			Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_42 = V_12;
			Scheduler_Add_m97B241DC232711E7C7D9057DA0BF7D657808D981(__this, L_42, /*hidden argument*/NULL);
			int32_t L_43 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)1));
		}

IL_013a:
		{
			int32_t L_44 = V_5;
			int32_t L_45 = V_6;
			if ((((int32_t)L_44) < ((int32_t)L_45)))
			{
				goto IL_0122;
			}
		}

IL_0140:
		{
			List_1_t537143C180C9FB69517B6C26205D2AA824591563 * L_46 = V_0;
			NullCheck(L_46);
			List_1_Clear_mC1A3BC5C09490DE7BD41BBE1BFD81F870F508CC0(L_46, /*hidden argument*/List_1_Clear_mC1A3BC5C09490DE7BD41BBE1BFD81F870F508CC0_RuntimeMethod_var);
			List_1_t537143C180C9FB69517B6C26205D2AA824591563 * L_47 = V_0;
			Scheduler_ShrinkIfNeeded_m053057191CA310785B2C8EC2E8FB07A7E00E499C(__this, L_47, ((int32_t)512), /*hidden argument*/NULL);
			SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * L_48 = __this->get_list_1();
			NullCheck(L_48);
			int32_t L_49 = VirtFuncInvoker0< int32_t >::Invoke(16 /* System.Int32 System.Collections.SortedList::get_Capacity() */, L_48);
			V_7 = L_49;
			SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * L_50 = __this->get_list_1();
			NullCheck(L_50);
			int32_t L_51 = VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Int32 System.Collections.SortedList::get_Count() */, L_50);
			V_6 = L_51;
			int32_t L_52 = V_7;
			if ((((int32_t)L_52) <= ((int32_t)((int32_t)1024))))
			{
				goto IL_0191;
			}
		}

IL_0175:
		{
			int32_t L_53 = V_6;
			if ((((int32_t)L_53) <= ((int32_t)0)))
			{
				goto IL_0191;
			}
		}

IL_017a:
		{
			int32_t L_54 = V_7;
			int32_t L_55 = V_6;
			if ((((int32_t)((int32_t)((int32_t)L_54/(int32_t)L_55))) <= ((int32_t)3)))
			{
				goto IL_0191;
			}
		}

IL_0182:
		{
			SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * L_56 = __this->get_list_1();
			int32_t L_57 = V_6;
			NullCheck(L_56);
			VirtActionInvoker1< int32_t >::Invoke(17 /* System.Void System.Collections.SortedList::set_Capacity(System.Int32) */, L_56, ((int32_t)il2cpp_codegen_multiply((int32_t)L_57, (int32_t)2)));
		}

IL_0191:
		{
			V_8 = ((int64_t)(std::numeric_limits<int64_t>::max)());
			SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * L_58 = __this->get_list_1();
			NullCheck(L_58);
			int32_t L_59 = VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Int32 System.Collections.SortedList::get_Count() */, L_58);
			if ((((int32_t)L_59) <= ((int32_t)0)))
			{
				goto IL_01c2;
			}
		}

IL_01aa:
		{
			SortedList_t52B9ACC0DAA6CD074E375215F43251DE16366165 * L_60 = __this->get_list_1();
			NullCheck(L_60);
			RuntimeObject * L_61 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(25 /* System.Object System.Collections.SortedList::GetByIndex(System.Int32) */, L_60, 0);
			NullCheck(((Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB *)CastclassSealed((RuntimeObject*)L_61, Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_il2cpp_TypeInfo_var)));
			int64_t L_62 = ((Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB *)CastclassSealed((RuntimeObject*)L_61, Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_il2cpp_TypeInfo_var))->get_next_run_6();
			V_8 = L_62;
		}

IL_01c2:
		{
			V_1 = (-1);
			int64_t L_63 = V_8;
			if ((((int64_t)L_63) == ((int64_t)((int64_t)(std::numeric_limits<int64_t>::max)()))))
			{
				goto IL_01fe;
			}
		}

IL_01d1:
		{
			int64_t L_64 = V_8;
			IL2CPP_RUNTIME_CLASS_INIT(Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_il2cpp_TypeInfo_var);
			int64_t L_65 = Timer_GetTimeMonotonic_m085737FA1918F06DE8264E85C1C2B8DFF2B65298(/*hidden argument*/NULL);
			V_13 = ((int64_t)((int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_64, (int64_t)L_65))/(int64_t)(((int64_t)((int64_t)((int32_t)10000))))));
			int64_t L_66 = V_13;
			if ((((int64_t)L_66) <= ((int64_t)(((int64_t)((int64_t)((int32_t)2147483647LL)))))))
			{
				goto IL_01f4;
			}
		}

IL_01ec:
		{
			V_1 = ((int32_t)2147483646);
			IL2CPP_LEAVE(0x20B, FINALLY_0200);
		}

IL_01f4:
		{
			int64_t L_67 = V_13;
			V_1 = (((int32_t)((int32_t)L_67)));
			int32_t L_68 = V_1;
			if ((((int32_t)L_68) >= ((int32_t)0)))
			{
				goto IL_01fe;
			}
		}

IL_01fc:
		{
			V_1 = 0;
		}

IL_01fe:
		{
			IL2CPP_LEAVE(0x20B, FINALLY_0200);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0200;
	}

FINALLY_0200:
	{ // begin finally (depth: 1)
		{
			bool L_69 = V_4;
			if (!L_69)
			{
				goto IL_020a;
			}
		}

IL_0204:
		{
			Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * L_70 = V_3;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_70, /*hidden argument*/NULL);
		}

IL_020a:
		{
			IL2CPP_END_FINALLY(512)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(512)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x20B, IL_020b)
	}

IL_020b:
	{
		ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_71 = __this->get_changed_2();
		int32_t L_72 = V_1;
		NullCheck(L_71);
		VirtFuncInvoker1< bool, int32_t >::Invoke(10 /* System.Boolean System.Threading.WaitHandle::WaitOne(System.Int32) */, L_71, L_72);
		goto IL_001a;
	}
}
// System.Void System.Threading.Timer_Scheduler::ShrinkIfNeeded(System.Collections.Generic.List`1<System.Threading.Timer>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scheduler_ShrinkIfNeeded_m053057191CA310785B2C8EC2E8FB07A7E00E499C (Scheduler_tA54A9F57127EDB44B4AE39C04A488F33193349D8 * __this, List_1_t537143C180C9FB69517B6C26205D2AA824591563 * ___list0, int32_t ___initial1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Scheduler_ShrinkIfNeeded_m053057191CA310785B2C8EC2E8FB07A7E00E499C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		List_1_t537143C180C9FB69517B6C26205D2AA824591563 * L_0 = ___list0;
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Capacity_mD0C25FAD6973D3D67381859E776ECAE953FDFD6B(L_0, /*hidden argument*/List_1_get_Capacity_mD0C25FAD6973D3D67381859E776ECAE953FDFD6B_RuntimeMethod_var);
		V_0 = L_1;
		List_1_t537143C180C9FB69517B6C26205D2AA824591563 * L_2 = ___list0;
		NullCheck(L_2);
		int32_t L_3 = List_1_get_Count_m9F4CBA17931C03FCCABF06CE8F29187F98D1F260_inline(L_2, /*hidden argument*/List_1_get_Count_m9F4CBA17931C03FCCABF06CE8F29187F98D1F260_RuntimeMethod_var);
		V_1 = L_3;
		int32_t L_4 = V_0;
		int32_t L_5 = ___initial1;
		if ((((int32_t)L_4) <= ((int32_t)L_5)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_7 = V_0;
		int32_t L_8 = V_1;
		if ((((int32_t)((int32_t)((int32_t)L_7/(int32_t)L_8))) <= ((int32_t)3)))
		{
			goto IL_0025;
		}
	}
	{
		List_1_t537143C180C9FB69517B6C26205D2AA824591563 * L_9 = ___list0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		List_1_set_Capacity_mEA0D56662D94226185342D2A0FD7C1860C5FFA7F(L_9, ((int32_t)il2cpp_codegen_multiply((int32_t)L_10, (int32_t)2)), /*hidden argument*/List_1_set_Capacity_mEA0D56662D94226185342D2A0FD7C1860C5FFA7F_RuntimeMethod_var);
	}

IL_0025:
	{
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
// System.Int32 System.Threading.Timer_TimerComparer::Compare(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimerComparer_Compare_mC54D4F4F5F33A28C3981BD1D59A071659F9E90DE (TimerComparer_t1899647CFE875978843BE8ABA01C10956F1E740B * __this, RuntimeObject * ___x0, RuntimeObject * ___y1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimerComparer_Compare_mC54D4F4F5F33A28C3981BD1D59A071659F9E90DE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * V_0 = NULL;
	Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * V_1 = NULL;
	int64_t V_2 = 0;
	{
		RuntimeObject * L_0 = ___x0;
		V_0 = ((Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB *)IsInstSealed((RuntimeObject*)L_0, Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_il2cpp_TypeInfo_var));
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_1 = V_0;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		return (-1);
	}

IL_000c:
	{
		RuntimeObject * L_2 = ___y1;
		V_1 = ((Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB *)IsInstSealed((RuntimeObject*)L_2, Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB_il2cpp_TypeInfo_var));
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_3 = V_1;
		if (L_3)
		{
			goto IL_0018;
		}
	}
	{
		return 1;
	}

IL_0018:
	{
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_4 = V_0;
		NullCheck(L_4);
		int64_t L_5 = L_4->get_next_run_6();
		Timer_t31BE4EDDA5C1CB5CFDF698231850B47B7F9DE9CB * L_6 = V_1;
		NullCheck(L_6);
		int64_t L_7 = L_6->get_next_run_6();
		V_2 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_5, (int64_t)L_7));
		int64_t L_8 = V_2;
		if (L_8)
		{
			goto IL_0031;
		}
	}
	{
		RuntimeObject * L_9 = ___x0;
		RuntimeObject * L_10 = ___y1;
		if ((((RuntimeObject*)(RuntimeObject *)L_9) == ((RuntimeObject*)(RuntimeObject *)L_10)))
		{
			goto IL_002f;
		}
	}
	{
		return (-1);
	}

IL_002f:
	{
		return 0;
	}

IL_0031:
	{
		int64_t L_11 = V_2;
		if ((((int64_t)L_11) > ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_0038;
		}
	}
	{
		return (-1);
	}

IL_0038:
	{
		return 1;
	}
}
// System.Void System.Threading.Timer_TimerComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerComparer__ctor_mB4F0DB5CDEB7A6E93F59950E0FB1D19BB4BBA0B4 (TimerComparer_t1899647CFE875978843BE8ABA01C10956F1E740B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void System.TypeIdentifiers_Display::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Display__ctor_m16B5174A55477C5FA7E4BBEEB321BAC49C59EA78 (Display_tB07FE33B5E37AC259B2FCC8EC820AC5CEDEAC41E * __this, String_t* ___displayName0, const RuntimeMethod* method)
{
	{
		ATypeName__ctor_m8F74703C78999B18C60B25DC9E5FAAFA777C48EC(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___displayName0;
		__this->set_displayName_0(L_0);
		__this->set_internal_name_1((String_t*)NULL);
		return;
	}
}
// System.String System.TypeIdentifiers_Display::get_DisplayName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Display_get_DisplayName_m85B2DCE4C4F6F44EAF0BA7BDD82C0D94EA8F5847 (Display_tB07FE33B5E37AC259B2FCC8EC820AC5CEDEAC41E * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_displayName_0();
		return L_0;
	}
}
// System.String System.TypeIdentifiers_Display::get_InternalName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Display_get_InternalName_m6EAFBB13F110C5A11AC89AB9D74C79B27552EF39 (Display_tB07FE33B5E37AC259B2FCC8EC820AC5CEDEAC41E * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_internal_name_1();
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		String_t* L_1 = Display_GetInternalName_mD79548CF3F783D092209AED9C54C91E81DB87970(__this, /*hidden argument*/NULL);
		__this->set_internal_name_1(L_1);
	}

IL_0014:
	{
		String_t* L_2 = __this->get_internal_name_1();
		return L_2;
	}
}
// System.String System.TypeIdentifiers_Display::GetInternalName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Display_GetInternalName_mD79548CF3F783D092209AED9C54C91E81DB87970 (Display_tB07FE33B5E37AC259B2FCC8EC820AC5CEDEAC41E * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_displayName_0();
		String_t* L_1 = TypeSpec_UnescapeInternalName_mA948D42382EE159391CEFB85748A7EFF37CE53A9(L_0, /*hidden argument*/NULL);
		return L_1;
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
// System.Boolean System.TypeNames_ATypeName::Equals(System.TypeName)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ATypeName_Equals_m6BDE7D1613B8F351AC3DCB2C9BDE29C23A92CC22 (ATypeName_t19F245ED1619C78770F92C899C4FE364DBF30861 * __this, RuntimeObject* ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ATypeName_Equals_m6BDE7D1613B8F351AC3DCB2C9BDE29C23A92CC22_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___other0;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.TypeNames/ATypeName::get_DisplayName() */, __this);
		RuntimeObject* L_2 = ___other0;
		NullCheck(L_2);
		String_t* L_3 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String System.TypeName::get_DisplayName() */, TypeName_t714DD2B9BA4134CE17349D95281A1F750D78D60F_il2cpp_TypeInfo_var, L_2);
		bool L_4 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.Int32 System.TypeNames_ATypeName::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ATypeName_GetHashCode_mDC22C27DBC59F89F1A4CDA70985AB201BC879B07 (ATypeName_t19F245ED1619C78770F92C899C4FE364DBF30861 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.TypeNames/ATypeName::get_DisplayName() */, __this);
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		return L_1;
	}
}
// System.Boolean System.TypeNames_ATypeName::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ATypeName_Equals_m128A844F0CC6E6754CE865684C25F47EEAD342C1 (ATypeName_t19F245ED1619C78770F92C899C4FE364DBF30861 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ATypeName_Equals_m128A844F0CC6E6754CE865684C25F47EEAD342C1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___other0;
		bool L_1 = ATypeName_Equals_m6BDE7D1613B8F351AC3DCB2C9BDE29C23A92CC22(__this, ((RuntimeObject*)IsInst((RuntimeObject*)L_0, TypeName_t714DD2B9BA4134CE17349D95281A1F750D78D60F_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.TypeNames_ATypeName::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ATypeName__ctor_m8F74703C78999B18C60B25DC9E5FAAFA777C48EC (ATypeName_t19F245ED1619C78770F92C899C4FE364DBF30861 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Text.UTF32Encoding_UTF32Decoder::.ctor(System.Text.UTF32Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UTF32Decoder__ctor_mC43D242A0AB38688E7F1E68472B18B5CC2F15FF6 (UTF32Decoder_t38867B08AD03138702C713129B79529EC4528DB7 * __this, UTF32Encoding_t54B51C8FAC5B2EAB4BDFACBBA06DB6117A38D014 * ___encoding0, const RuntimeMethod* method)
{
	{
		UTF32Encoding_t54B51C8FAC5B2EAB4BDFACBBA06DB6117A38D014 * L_0 = ___encoding0;
		DecoderNLS__ctor_mC526CB146E620885CBC054C3921E27A7949B2046(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.UTF32Encoding_UTF32Decoder::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UTF32Decoder_Reset_mA255C09536BA93FCAD3F8ED62EADE0B2079E1C27 (UTF32Decoder_t38867B08AD03138702C713129B79529EC4528DB7 * __this, const RuntimeMethod* method)
{
	{
		__this->set_iChar_6(0);
		__this->set_readByteCount_7(0);
		DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B * L_0 = ((Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 *)__this)->get_m_fallbackBuffer_1();
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B * L_1 = ((Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 *)__this)->get_m_fallbackBuffer_1();
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(6 /* System.Void System.Text.DecoderFallbackBuffer::Reset() */, L_1);
	}

IL_0021:
	{
		return;
	}
}
// System.Boolean System.Text.UTF32Encoding_UTF32Decoder::get_HasState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UTF32Decoder_get_HasState_m59BC0A86B483ACC74E659469FFD39997B2646812 (UTF32Decoder_t38867B08AD03138702C713129B79529EC4528DB7 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_readByteCount_7();
		return (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
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
// System.Void System.Text.UTF7Encoding_Decoder::.ctor(System.Text.UTF7Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decoder__ctor_m3FAA7C0DCE7FBA64EEBD84A4AEBFC9317A92E9B9 (Decoder_t6C0639E0DF1E52128429AC770CA9F2557A8E54C9 * __this, UTF7Encoding_tA5454D96973119953BD301F20B9E59C77B5FA076 * ___encoding0, const RuntimeMethod* method)
{
	{
		UTF7Encoding_tA5454D96973119953BD301F20B9E59C77B5FA076 * L_0 = ___encoding0;
		DecoderNLS__ctor_mC526CB146E620885CBC054C3921E27A7949B2046(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.UTF7Encoding_Decoder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decoder__ctor_m30B1EA2BF40A4E5A3F4BF3C7B6FE7377380A1038 (Decoder_t6C0639E0DF1E52128429AC770CA9F2557A8E54C9 * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Decoder__ctor_m30B1EA2BF40A4E5A3F4BF3C7B6FE7377380A1038_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		DecoderNLS__ctor_mDD4D4880457E73F1575479F8B309F9BB25BA0F4D(__this, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, _stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, Decoder__ctor_m30B1EA2BF40A4E5A3F4BF3C7B6FE7377380A1038_RuntimeMethod_var);
	}

IL_0014:
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_2 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		RuntimeObject * L_5 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_2, _stringLiteral315818C03CCC2B10070DF2D4EBD09EB6C4C66E58, L_4, /*hidden argument*/NULL);
		__this->set_bits_6(((*(int32_t*)((int32_t*)UnBox(L_5, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))));
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_6 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		Type_t * L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		RuntimeObject * L_9 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_6, _stringLiteral0763FE5EB1EAC35DDF3CD44B5645A71888066226, L_8, /*hidden argument*/NULL);
		__this->set_bitCount_7(((*(int32_t*)((int32_t*)UnBox(L_9, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))));
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_10 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_11 = { reinterpret_cast<intptr_t> (Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var) };
		Type_t * L_12 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		RuntimeObject * L_13 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_10, _stringLiteralBDC4CEC2209B63293A24317DF536AF666EAC59E5, L_12, /*hidden argument*/NULL);
		__this->set_firstByte_8(((*(bool*)((bool*)UnBox(L_13, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var)))));
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_14 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_15 = { reinterpret_cast<intptr_t> (Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_0_0_0_var) };
		Type_t * L_16 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_15, /*hidden argument*/NULL);
		NullCheck(L_14);
		RuntimeObject * L_17 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_14, _stringLiteral29988D0F9BCADFABFF66CBF5AB73096D1CAE3128, L_16, /*hidden argument*/NULL);
		((DecoderNLS_tE5B1B7D68B698C0B65FBEE94EAE2453FFD3D538A *)__this)->set_m_encoding_2(((Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 *)CastclassClass((RuntimeObject*)L_17, Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void System.Text.UTF7Encoding_Decoder::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decoder_System_Runtime_Serialization_ISerializable_GetObjectData_m3ED01524C080A21879E3BB557F043586DA3C2AE0 (Decoder_t6C0639E0DF1E52128429AC770CA9F2557A8E54C9 * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Decoder_System_Runtime_Serialization_ISerializable_GetObjectData_m3ED01524C080A21879E3BB557F043586DA3C2AE0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, _stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, Decoder_System_Runtime_Serialization_ISerializable_GetObjectData_m3ED01524C080A21879E3BB557F043586DA3C2AE0_RuntimeMethod_var);
	}

IL_000e:
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_2 = ___info0;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_3 = ((DecoderNLS_tE5B1B7D68B698C0B65FBEE94EAE2453FFD3D538A *)__this)->get_m_encoding_2();
		NullCheck(L_2);
		SerializationInfo_AddValue_mA50C2668EF700C2239DDC362F8DB409020BB763D(L_2, _stringLiteral29988D0F9BCADFABFF66CBF5AB73096D1CAE3128, L_3, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_4 = ___info0;
		int32_t L_5 = __this->get_bits_6();
		NullCheck(L_4);
		SerializationInfo_AddValue_m3DF5B182A63FFCD12287E97EA38944D0C6405BB5(L_4, _stringLiteral315818C03CCC2B10070DF2D4EBD09EB6C4C66E58, L_5, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_6 = ___info0;
		int32_t L_7 = __this->get_bitCount_7();
		NullCheck(L_6);
		SerializationInfo_AddValue_m3DF5B182A63FFCD12287E97EA38944D0C6405BB5(L_6, _stringLiteral0763FE5EB1EAC35DDF3CD44B5645A71888066226, L_7, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_8 = ___info0;
		bool L_9 = __this->get_firstByte_8();
		NullCheck(L_8);
		SerializationInfo_AddValue_m324F3E0B02B746D5F460499F5A25988FD608AD7B(L_8, _stringLiteralBDC4CEC2209B63293A24317DF536AF666EAC59E5, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.UTF7Encoding_Decoder::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decoder_Reset_m0D006B1AE70E73B46BF2DF2550498CCF9D433769 (Decoder_t6C0639E0DF1E52128429AC770CA9F2557A8E54C9 * __this, const RuntimeMethod* method)
{
	{
		__this->set_bits_6(0);
		__this->set_bitCount_7((-1));
		__this->set_firstByte_8((bool)0);
		DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B * L_0 = ((Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 *)__this)->get_m_fallbackBuffer_1();
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B * L_1 = ((Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 *)__this)->get_m_fallbackBuffer_1();
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(6 /* System.Void System.Text.DecoderFallbackBuffer::Reset() */, L_1);
	}

IL_0028:
	{
		return;
	}
}
// System.Boolean System.Text.UTF7Encoding_Decoder::get_HasState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Decoder_get_HasState_mF435291CFF368657A42E3D00148A144590652907 (Decoder_t6C0639E0DF1E52128429AC770CA9F2557A8E54C9 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_bitCount_7();
		return (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
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
// System.Void System.Text.UTF7Encoding_DecoderUTF7Fallback::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecoderUTF7Fallback__ctor_m97CB6C70F4F4B390E79DA9A6A54F7C15611519F1 (DecoderUTF7Fallback_tBEF9A09732FAB23368825AE7C14C0EBF1F9028A8 * __this, const RuntimeMethod* method)
{
	{
		DecoderFallback__ctor_m748C2C19AD4595C13154F9EEDF89AC2A2C10727E(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Text.DecoderFallbackBuffer System.Text.UTF7Encoding_DecoderUTF7Fallback::CreateFallbackBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B * DecoderUTF7Fallback_CreateFallbackBuffer_m2A16D01FA0596522EC75B9424B19FC879714AD1F (DecoderUTF7Fallback_tBEF9A09732FAB23368825AE7C14C0EBF1F9028A8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DecoderUTF7Fallback_CreateFallbackBuffer_m2A16D01FA0596522EC75B9424B19FC879714AD1F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		DecoderUTF7FallbackBuffer_tED3431DB4A6B4F48D1F1433A8E672F8B110D819A * L_0 = (DecoderUTF7FallbackBuffer_tED3431DB4A6B4F48D1F1433A8E672F8B110D819A *)il2cpp_codegen_object_new(DecoderUTF7FallbackBuffer_tED3431DB4A6B4F48D1F1433A8E672F8B110D819A_il2cpp_TypeInfo_var);
		DecoderUTF7FallbackBuffer__ctor_mFA2B62E208804BB64A4893F1F91D8481B5C5BCB0(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 System.Text.UTF7Encoding_DecoderUTF7Fallback::get_MaxCharCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DecoderUTF7Fallback_get_MaxCharCount_mEB86DA7E072AE10245BA31204184B137DFB8F8D3 (DecoderUTF7Fallback_tBEF9A09732FAB23368825AE7C14C0EBF1F9028A8 * __this, const RuntimeMethod* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Text.UTF7Encoding_DecoderUTF7Fallback::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DecoderUTF7Fallback_Equals_m8A55122D6E31F8C487AD5AFAA5BE6352C0151656 (DecoderUTF7Fallback_tBEF9A09732FAB23368825AE7C14C0EBF1F9028A8 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DecoderUTF7Fallback_Equals_m8A55122D6E31F8C487AD5AFAA5BE6352C0151656_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___value0;
		if (!((DecoderUTF7Fallback_tBEF9A09732FAB23368825AE7C14C0EBF1F9028A8 *)IsInstSealed((RuntimeObject*)L_0, DecoderUTF7Fallback_tBEF9A09732FAB23368825AE7C14C0EBF1F9028A8_il2cpp_TypeInfo_var)))
		{
			goto IL_000a;
		}
	}
	{
		return (bool)1;
	}

IL_000a:
	{
		return (bool)0;
	}
}
// System.Int32 System.Text.UTF7Encoding_DecoderUTF7Fallback::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DecoderUTF7Fallback_GetHashCode_m87A146966E49C3DDB5C62ADABE62B84858D48160 (DecoderUTF7Fallback_tBEF9A09732FAB23368825AE7C14C0EBF1F9028A8 * __this, const RuntimeMethod* method)
{
	{
		return ((int32_t)984);
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
// System.Void System.Text.UTF7Encoding_DecoderUTF7FallbackBuffer::.ctor(System.Text.UTF7Encoding_DecoderUTF7Fallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecoderUTF7FallbackBuffer__ctor_mFA2B62E208804BB64A4893F1F91D8481B5C5BCB0 (DecoderUTF7FallbackBuffer_tED3431DB4A6B4F48D1F1433A8E672F8B110D819A * __this, DecoderUTF7Fallback_tBEF9A09732FAB23368825AE7C14C0EBF1F9028A8 * ___fallback0, const RuntimeMethod* method)
{
	{
		__this->set_iCount_3((-1));
		DecoderFallbackBuffer__ctor_m4944ABFBCC6CDED8F244EC1E5EA6B1F229C3495C(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Text.UTF7Encoding_DecoderUTF7FallbackBuffer::Fallback(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DecoderUTF7FallbackBuffer_Fallback_mBF6952B9A4A595ECF7CB92B8BC1177C726784227 (DecoderUTF7FallbackBuffer_tED3431DB4A6B4F48D1F1433A8E672F8B110D819A * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytesUnknown0, int32_t ___index1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytesUnknown0;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint8_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		__this->set_cFallback_2(L_2);
		Il2CppChar L_3 = __this->get_cFallback_2();
		if (L_3)
		{
			goto IL_0013;
		}
	}
	{
		return (bool)0;
	}

IL_0013:
	{
		int32_t L_4 = 1;
		V_0 = L_4;
		__this->set_iSize_4(L_4);
		int32_t L_5 = V_0;
		__this->set_iCount_3(L_5);
		return (bool)1;
	}
}
// System.Char System.Text.UTF7Encoding_DecoderUTF7FallbackBuffer::GetNextChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar DecoderUTF7FallbackBuffer_GetNextChar_mC2FD7150C2027744040DE6BC014598C48141419B (DecoderUTF7FallbackBuffer_tED3431DB4A6B4F48D1F1433A8E672F8B110D819A * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_iCount_3();
		V_0 = L_0;
		int32_t L_1 = V_0;
		__this->set_iCount_3(((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)));
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_001b;
		}
	}
	{
		Il2CppChar L_3 = __this->get_cFallback_2();
		return L_3;
	}

IL_001b:
	{
		return 0;
	}
}
// System.Void System.Text.UTF7Encoding_DecoderUTF7FallbackBuffer::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecoderUTF7FallbackBuffer_Reset_mE18A0A62630252473DE57B453B3C7344CE1077BA (DecoderUTF7FallbackBuffer_tED3431DB4A6B4F48D1F1433A8E672F8B110D819A * __this, const RuntimeMethod* method)
{
	{
		__this->set_iCount_3((-1));
		((DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B *)__this)->set_byteStart_0((uint8_t*)(((uintptr_t)0)));
		return;
	}
}
// System.Int32 System.Text.UTF7Encoding_DecoderUTF7FallbackBuffer::InternalFallback(System.Byte[],System.Byte*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DecoderUTF7FallbackBuffer_InternalFallback_mED8FF7722E62493ABE76E8CE1887618F6A720300 (DecoderUTF7FallbackBuffer_tED3431DB4A6B4F48D1F1433A8E672F8B110D819A * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, uint8_t* ___pBytes1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DecoderUTF7FallbackBuffer_InternalFallback_mED8FF7722E62493ABE76E8CE1887618F6A720300_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		NullCheck(L_0);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))))) == ((int32_t)1)))
		{
			goto IL_0016;
		}
	}
	{
		String_t* L_1 = Environment_GetResourceString_m8DFF827596B5FD533D3FE56900FA095F7D674617(_stringLiteralD3EDB56B30B60F6E6107AB89FE5358A528045F13, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_2 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_2, L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, DecoderUTF7FallbackBuffer_InternalFallback_mED8FF7722E62493ABE76E8CE1887618F6A720300_RuntimeMethod_var);
	}

IL_0016:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___bytes0;
		NullCheck(L_3);
		int32_t L_4 = 0;
		uint8_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		if (!L_5)
		{
			goto IL_001d;
		}
	}
	{
		return 1;
	}

IL_001d:
	{
		return 0;
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
// System.Void System.Text.UTF7Encoding_Encoder::.ctor(System.Text.UTF7Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder__ctor_m2E7349F37D2DEF844A91395DD099D93A6C88F167 (Encoder_tF895184EA91019AA3995A8547FD56A3E0D16D1B4 * __this, UTF7Encoding_tA5454D96973119953BD301F20B9E59C77B5FA076 * ___encoding0, const RuntimeMethod* method)
{
	{
		UTF7Encoding_tA5454D96973119953BD301F20B9E59C77B5FA076 * L_0 = ___encoding0;
		EncoderNLS__ctor_mF9B45DA23BADBDD417E3F741C6C9BB45F3021513(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.UTF7Encoding_Encoder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder__ctor_mD7BEBE37C16C8C8BFFFFDB86681B51F2142A8F7E (Encoder_tF895184EA91019AA3995A8547FD56A3E0D16D1B4 * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Encoder__ctor_mD7BEBE37C16C8C8BFFFFDB86681B51F2142A8F7E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EncoderNLS__ctor_m78E59E5DDEAE418A3936D0EAD2D2DB3D15E75CEF(__this, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, _stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, Encoder__ctor_mD7BEBE37C16C8C8BFFFFDB86681B51F2142A8F7E_RuntimeMethod_var);
	}

IL_0014:
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_2 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		RuntimeObject * L_5 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_2, _stringLiteral315818C03CCC2B10070DF2D4EBD09EB6C4C66E58, L_4, /*hidden argument*/NULL);
		__this->set_bits_7(((*(int32_t*)((int32_t*)UnBox(L_5, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))));
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_6 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		Type_t * L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		RuntimeObject * L_9 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_6, _stringLiteral0763FE5EB1EAC35DDF3CD44B5645A71888066226, L_8, /*hidden argument*/NULL);
		__this->set_bitCount_8(((*(int32_t*)((int32_t*)UnBox(L_9, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))));
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_10 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_11 = { reinterpret_cast<intptr_t> (Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_0_0_0_var) };
		Type_t * L_12 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		RuntimeObject * L_13 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_10, _stringLiteral29988D0F9BCADFABFF66CBF5AB73096D1CAE3128, L_12, /*hidden argument*/NULL);
		((EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712 *)__this)->set_m_encoding_3(((Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 *)CastclassClass((RuntimeObject*)L_13, Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void System.Text.UTF7Encoding_Encoder::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder_System_Runtime_Serialization_ISerializable_GetObjectData_m6092B473125DCAB361E2692A0A37F4F175154463 (Encoder_tF895184EA91019AA3995A8547FD56A3E0D16D1B4 * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Encoder_System_Runtime_Serialization_ISerializable_GetObjectData_m6092B473125DCAB361E2692A0A37F4F175154463_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, _stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, Encoder_System_Runtime_Serialization_ISerializable_GetObjectData_m6092B473125DCAB361E2692A0A37F4F175154463_RuntimeMethod_var);
	}

IL_000e:
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_2 = ___info0;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_3 = ((EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712 *)__this)->get_m_encoding_3();
		NullCheck(L_2);
		SerializationInfo_AddValue_mA50C2668EF700C2239DDC362F8DB409020BB763D(L_2, _stringLiteral29988D0F9BCADFABFF66CBF5AB73096D1CAE3128, L_3, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_4 = ___info0;
		int32_t L_5 = __this->get_bits_7();
		NullCheck(L_4);
		SerializationInfo_AddValue_m3DF5B182A63FFCD12287E97EA38944D0C6405BB5(L_4, _stringLiteral315818C03CCC2B10070DF2D4EBD09EB6C4C66E58, L_5, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_6 = ___info0;
		int32_t L_7 = __this->get_bitCount_8();
		NullCheck(L_6);
		SerializationInfo_AddValue_m3DF5B182A63FFCD12287E97EA38944D0C6405BB5(L_6, _stringLiteral0763FE5EB1EAC35DDF3CD44B5645A71888066226, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.UTF7Encoding_Encoder::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Encoder_Reset_m8D51317D2A8E22CDF2183DBEFE2538AC3360A9A9 (Encoder_tF895184EA91019AA3995A8547FD56A3E0D16D1B4 * __this, const RuntimeMethod* method)
{
	{
		__this->set_bitCount_8((-1));
		__this->set_bits_7(0);
		EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 * L_0 = ((Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A *)__this)->get_m_fallbackBuffer_1();
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 * L_1 = ((Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A *)__this)->get_m_fallbackBuffer_1();
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(9 /* System.Void System.Text.EncoderFallbackBuffer::Reset() */, L_1);
	}

IL_0021:
	{
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
// System.Void System.Text.UTF8Encoding_UTF8Decoder::.ctor(System.Text.UTF8Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UTF8Decoder__ctor_m9C1CB47A544EB17F0C9F1837836DB6DB50049B4C (UTF8Decoder_tD2359F0F52206B911EBC3222E627191C829F4C65 * __this, UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * ___encoding0, const RuntimeMethod* method)
{
	{
		UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * L_0 = ___encoding0;
		DecoderNLS__ctor_mC526CB146E620885CBC054C3921E27A7949B2046(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.UTF8Encoding_UTF8Decoder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UTF8Decoder__ctor_mF827B4315912C53F248B79A77CFDE99759111353 (UTF8Decoder_tD2359F0F52206B911EBC3222E627191C829F4C65 * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UTF8Decoder__ctor_mF827B4315912C53F248B79A77CFDE99759111353_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		DecoderNLS__ctor_mDD4D4880457E73F1575479F8B309F9BB25BA0F4D(__this, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, _stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, UTF8Decoder__ctor_mF827B4315912C53F248B79A77CFDE99759111353_RuntimeMethod_var);
	}

IL_0014:
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_2 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		RuntimeObject * L_5 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_2, _stringLiteral29988D0F9BCADFABFF66CBF5AB73096D1CAE3128, L_4, /*hidden argument*/NULL);
		((DecoderNLS_tE5B1B7D68B698C0B65FBEE94EAE2453FFD3D538A *)__this)->set_m_encoding_2(((Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 *)CastclassClass((RuntimeObject*)L_5, Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_il2cpp_TypeInfo_var)));
	}

IL_0034:
	try
	{ // begin try (depth: 1)
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_6 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		RuntimeObject * L_9 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_6, _stringLiteralD08F78ED8610B5137CB74E4B8EE06DCA431A6DF5, L_8, /*hidden argument*/NULL);
		__this->set_bits_6(((*(int32_t*)((int32_t*)UnBox(L_9, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))));
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_10 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_11 = { reinterpret_cast<intptr_t> (DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D_0_0_0_var) };
		Type_t * L_12 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		RuntimeObject * L_13 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_10, _stringLiteralAF00BC34B67009EEE0394C51F26D6D5457EC69F6, L_12, /*hidden argument*/NULL);
		((Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 *)__this)->set_m_fallback_0(((DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D *)CastclassClass((RuntimeObject*)L_13, DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D_il2cpp_TypeInfo_var)));
		goto IL_0087;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (SerializationException_tDB38C13A2ABF407C381E3F332D197AC1AD097A92_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0076;
		throw e;
	}

CATCH_0076:
	{ // begin catch(System.Runtime.Serialization.SerializationException)
		__this->set_bits_6(0);
		((Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 *)__this)->set_m_fallback_0((DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D *)NULL);
		goto IL_0087;
	} // end catch (depth: 1)

IL_0087:
	{
		return;
	}
}
// System.Void System.Text.UTF8Encoding_UTF8Decoder::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UTF8Decoder_System_Runtime_Serialization_ISerializable_GetObjectData_m660874DE4EB3E16DF79AF02610D1DCA0D9A2E4BB (UTF8Decoder_tD2359F0F52206B911EBC3222E627191C829F4C65 * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UTF8Decoder_System_Runtime_Serialization_ISerializable_GetObjectData_m660874DE4EB3E16DF79AF02610D1DCA0D9A2E4BB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, _stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, UTF8Decoder_System_Runtime_Serialization_ISerializable_GetObjectData_m660874DE4EB3E16DF79AF02610D1DCA0D9A2E4BB_RuntimeMethod_var);
	}

IL_000e:
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_2 = ___info0;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_3 = ((DecoderNLS_tE5B1B7D68B698C0B65FBEE94EAE2453FFD3D538A *)__this)->get_m_encoding_2();
		NullCheck(L_2);
		SerializationInfo_AddValue_mA50C2668EF700C2239DDC362F8DB409020BB763D(L_2, _stringLiteral29988D0F9BCADFABFF66CBF5AB73096D1CAE3128, L_3, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_4 = ___info0;
		int32_t L_5 = __this->get_bits_6();
		NullCheck(L_4);
		SerializationInfo_AddValue_m3DF5B182A63FFCD12287E97EA38944D0C6405BB5(L_4, _stringLiteralD08F78ED8610B5137CB74E4B8EE06DCA431A6DF5, L_5, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_6 = ___info0;
		DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * L_7 = ((Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 *)__this)->get_m_fallback_0();
		NullCheck(L_6);
		SerializationInfo_AddValue_mA50C2668EF700C2239DDC362F8DB409020BB763D(L_6, _stringLiteralAF00BC34B67009EEE0394C51F26D6D5457EC69F6, L_7, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_8 = ___info0;
		NullCheck(L_8);
		SerializationInfo_AddValue_m3DF5B182A63FFCD12287E97EA38944D0C6405BB5(L_8, _stringLiteral315818C03CCC2B10070DF2D4EBD09EB6C4C66E58, 0, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_9 = ___info0;
		NullCheck(L_9);
		SerializationInfo_AddValue_m3DF5B182A63FFCD12287E97EA38944D0C6405BB5(L_9, _stringLiteral8994D295B1EC3F358FB1CDEB6465D3A478A7F949, 0, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_10 = ___info0;
		NullCheck(L_10);
		SerializationInfo_AddValue_m324F3E0B02B746D5F460499F5A25988FD608AD7B(L_10, _stringLiteral9C4034C5C6F417782BE8DF6DD6771CA6B67948DF, (bool)0, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_11 = ___info0;
		NullCheck(L_11);
		SerializationInfo_AddValue_m3DF5B182A63FFCD12287E97EA38944D0C6405BB5(L_11, _stringLiteral49D64DCFE768AFB45BCA7F089DBB249FA1DA859C, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.UTF8Encoding_UTF8Decoder::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UTF8Decoder_Reset_m81E08FB668E8FAA2B75ECB823F9131933E48522A (UTF8Decoder_tD2359F0F52206B911EBC3222E627191C829F4C65 * __this, const RuntimeMethod* method)
{
	{
		__this->set_bits_6(0);
		DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B * L_0 = ((Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 *)__this)->get_m_fallbackBuffer_1();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B * L_1 = ((Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 *)__this)->get_m_fallbackBuffer_1();
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(6 /* System.Void System.Text.DecoderFallbackBuffer::Reset() */, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean System.Text.UTF8Encoding_UTF8Decoder::get_HasState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UTF8Decoder_get_HasState_mB8A652C38DB6D32A53AE51935F186F7929276381 (UTF8Decoder_tD2359F0F52206B911EBC3222E627191C829F4C65 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_bits_6();
		return (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
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
// System.Void System.Text.UTF8Encoding_UTF8Encoder::.ctor(System.Text.UTF8Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UTF8Encoder__ctor_m29DA8DC0472E7C071894DCB375E8487CFC55B327 (UTF8Encoder_t3408DBF93D79A981F50954F660E33BA13FE29FD3 * __this, UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * ___encoding0, const RuntimeMethod* method)
{
	{
		UTF8Encoding_t6EE88BC62116B5328F6CF4E39C9CC49EED2ED282 * L_0 = ___encoding0;
		EncoderNLS__ctor_mF9B45DA23BADBDD417E3F741C6C9BB45F3021513(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.UTF8Encoding_UTF8Encoder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UTF8Encoder__ctor_m21812FB83AD489EC7871F626BC251F3DEDFC8506 (UTF8Encoder_t3408DBF93D79A981F50954F660E33BA13FE29FD3 * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UTF8Encoder__ctor_m21812FB83AD489EC7871F626BC251F3DEDFC8506_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		EncoderNLS__ctor_m78E59E5DDEAE418A3936D0EAD2D2DB3D15E75CEF(__this, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, _stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, UTF8Encoder__ctor_m21812FB83AD489EC7871F626BC251F3DEDFC8506_RuntimeMethod_var);
	}

IL_0014:
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_2 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		RuntimeObject * L_5 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_2, _stringLiteral29988D0F9BCADFABFF66CBF5AB73096D1CAE3128, L_4, /*hidden argument*/NULL);
		((EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712 *)__this)->set_m_encoding_3(((Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 *)CastclassClass((RuntimeObject*)L_5, Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_il2cpp_TypeInfo_var)));
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_6 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		Type_t * L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		RuntimeObject * L_9 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_6, _stringLiteral01AC6AAA845493AD30953C71C8C9EABF0D0124E4, L_8, /*hidden argument*/NULL);
		__this->set_surrogateChar_7(((*(int32_t*)((int32_t*)UnBox(L_9, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))));
	}

IL_0054:
	try
	{ // begin try (depth: 1)
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_10 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_11 = { reinterpret_cast<intptr_t> (EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		RuntimeObject * L_13 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_10, _stringLiteralAF00BC34B67009EEE0394C51F26D6D5457EC69F6, L_12, /*hidden argument*/NULL);
		((Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A *)__this)->set_m_fallback_0(((EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 *)CastclassClass((RuntimeObject*)L_13, EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4_il2cpp_TypeInfo_var)));
		goto IL_0080;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (SerializationException_tDB38C13A2ABF407C381E3F332D197AC1AD097A92_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0076;
		throw e;
	}

CATCH_0076:
	{ // begin catch(System.Runtime.Serialization.SerializationException)
		((Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A *)__this)->set_m_fallback_0((EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 *)NULL);
		goto IL_0080;
	} // end catch (depth: 1)

IL_0080:
	{
		return;
	}
}
// System.Void System.Text.UTF8Encoding_UTF8Encoder::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UTF8Encoder_System_Runtime_Serialization_ISerializable_GetObjectData_m2EB22FA8BBBFC1038DA48A6014DDFD6FF57D93D2 (UTF8Encoder_t3408DBF93D79A981F50954F660E33BA13FE29FD3 * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UTF8Encoder_System_Runtime_Serialization_ISerializable_GetObjectData_m2EB22FA8BBBFC1038DA48A6014DDFD6FF57D93D2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B4_0 = NULL;
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * G_B4_1 = NULL;
	String_t* G_B3_0 = NULL;
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * G_B3_1 = NULL;
	int32_t G_B5_0 = 0;
	String_t* G_B5_1 = NULL;
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * G_B5_2 = NULL;
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, _stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, UTF8Encoder_System_Runtime_Serialization_ISerializable_GetObjectData_m2EB22FA8BBBFC1038DA48A6014DDFD6FF57D93D2_RuntimeMethod_var);
	}

IL_000e:
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_2 = ___info0;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_3 = ((EncoderNLS_tB071198C3F300408FDED1BD2C822F46A25115712 *)__this)->get_m_encoding_3();
		NullCheck(L_2);
		SerializationInfo_AddValue_mA50C2668EF700C2239DDC362F8DB409020BB763D(L_2, _stringLiteral29988D0F9BCADFABFF66CBF5AB73096D1CAE3128, L_3, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_4 = ___info0;
		int32_t L_5 = __this->get_surrogateChar_7();
		NullCheck(L_4);
		SerializationInfo_AddValue_m3DF5B182A63FFCD12287E97EA38944D0C6405BB5(L_4, _stringLiteral01AC6AAA845493AD30953C71C8C9EABF0D0124E4, L_5, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_6 = ___info0;
		EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * L_7 = ((Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A *)__this)->get_m_fallback_0();
		NullCheck(L_6);
		SerializationInfo_AddValue_mA50C2668EF700C2239DDC362F8DB409020BB763D(L_6, _stringLiteralAF00BC34B67009EEE0394C51F26D6D5457EC69F6, L_7, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_8 = ___info0;
		int32_t L_9 = __this->get_surrogateChar_7();
		G_B3_0 = _stringLiteral35FD9409286E50999789090A9930776FD3F2B13E;
		G_B3_1 = L_8;
		if ((((int32_t)L_9) > ((int32_t)0)))
		{
			G_B4_0 = _stringLiteral35FD9409286E50999789090A9930776FD3F2B13E;
			G_B4_1 = L_8;
			goto IL_0053;
		}
	}
	{
		G_B5_0 = 0;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_0054;
	}

IL_0053:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_0054:
	{
		NullCheck(G_B5_2);
		SerializationInfo_AddValue_m324F3E0B02B746D5F460499F5A25988FD608AD7B(G_B5_2, G_B5_1, (bool)G_B5_0, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_10 = ___info0;
		NullCheck(L_10);
		SerializationInfo_AddValue_m324F3E0B02B746D5F460499F5A25988FD608AD7B(L_10, _stringLiteralB5411972E9968E9978EF95EF84FB5F5FE4F0F734, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.UTF8Encoding_UTF8Encoder::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UTF8Encoder_Reset_m5CDF361E7CAE7E9BF5DE6C35348F253A1341030C (UTF8Encoder_t3408DBF93D79A981F50954F660E33BA13FE29FD3 * __this, const RuntimeMethod* method)
{
	{
		__this->set_surrogateChar_7(0);
		EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 * L_0 = ((Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A *)__this)->get_m_fallbackBuffer_1();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		EncoderFallbackBuffer_t088B2EDCFB7C53978D7C5F962DE31BE01D6968E0 * L_1 = ((Encoder_t5095F24D3B1D0F70D08762B980731B9F1ADEE56A *)__this)->get_m_fallbackBuffer_1();
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(9 /* System.Void System.Text.EncoderFallbackBuffer::Reset() */, L_1);
	}

IL_001a:
	{
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
// System.Void System.Text.UnicodeEncoding_Decoder::.ctor(System.Text.UnicodeEncoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decoder__ctor_m2E2F6F43F63332CC0E59AF2A0ADA80DE2CF0D187 (Decoder_tC3DC16951ED8FCF98278FC7F0804070A9C218109 * __this, UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68 * ___encoding0, const RuntimeMethod* method)
{
	{
		__this->set_lastByte_6((-1));
		UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68 * L_0 = ___encoding0;
		DecoderNLS__ctor_mC526CB146E620885CBC054C3921E27A7949B2046(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.UnicodeEncoding_Decoder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decoder__ctor_m8A1BF2DA9101627DEFF9629F0E16F8A0A8917DE1 (Decoder_tC3DC16951ED8FCF98278FC7F0804070A9C218109 * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Decoder__ctor_m8A1BF2DA9101627DEFF9629F0E16F8A0A8917DE1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		__this->set_lastByte_6((-1));
		DecoderNLS__ctor_mDD4D4880457E73F1575479F8B309F9BB25BA0F4D(__this, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, _stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, Decoder__ctor_m8A1BF2DA9101627DEFF9629F0E16F8A0A8917DE1_RuntimeMethod_var);
	}

IL_001b:
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_2 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		RuntimeObject * L_5 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_2, _stringLiteral2920727F7824CA7782C4813D6F7312ABCDA53CCD, L_4, /*hidden argument*/NULL);
		__this->set_lastByte_6(((*(int32_t*)((int32_t*)UnBox(L_5, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))));
	}

IL_003b:
	try
	{ // begin try (depth: 1)
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_6 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		RuntimeObject * L_9 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_6, _stringLiteral1450C988C6B4D028AF5A543FC4A7A8FA9BA62F30, L_8, /*hidden argument*/NULL);
		((DecoderNLS_tE5B1B7D68B698C0B65FBEE94EAE2453FFD3D538A *)__this)->set_m_encoding_2(((Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 *)CastclassClass((RuntimeObject*)L_9, Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_il2cpp_TypeInfo_var)));
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_10 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_11 = { reinterpret_cast<intptr_t> (Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var) };
		Type_t * L_12 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		RuntimeObject * L_13 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_10, _stringLiteralC760D2328BD1CF4750B1C22486E5906ACA0DD030, L_12, /*hidden argument*/NULL);
		__this->set_lastChar_7(((*(Il2CppChar*)((Il2CppChar*)UnBox(L_13, Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var)))));
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_14 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_15 = { reinterpret_cast<intptr_t> (DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D_0_0_0_var) };
		Type_t * L_16 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_15, /*hidden argument*/NULL);
		NullCheck(L_14);
		RuntimeObject * L_17 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_14, _stringLiteralAF00BC34B67009EEE0394C51F26D6D5457EC69F6, L_16, /*hidden argument*/NULL);
		((Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 *)__this)->set_m_fallback_0(((DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D *)CastclassClass((RuntimeObject*)L_17, DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D_il2cpp_TypeInfo_var)));
		goto IL_00c8;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (SerializationException_tDB38C13A2ABF407C381E3F332D197AC1AD097A92_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_009d;
		throw e;
	}

CATCH_009d:
	{ // begin catch(System.Runtime.Serialization.SerializationException)
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_18 = ___info0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_19 = { reinterpret_cast<intptr_t> (Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_20 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_19, /*hidden argument*/NULL);
		NullCheck(L_18);
		RuntimeObject * L_21 = SerializationInfo_GetValue_mF6E311779D55AD7C80B2D19FF2A7E9683AEF2A99(L_18, _stringLiteralD5FECA9C07F11E0EFEDB17DCA043A555B4DD4FF2, L_20, /*hidden argument*/NULL);
		V_0 = ((*(bool*)((bool*)UnBox(L_21, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var))));
		bool L_22 = V_0;
		UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68 * L_23 = (UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68 *)il2cpp_codegen_object_new(UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68_il2cpp_TypeInfo_var);
		UnicodeEncoding__ctor_mE077368843CAFC47B2C4AFC3C771F5B51F3B8DD0(L_23, L_22, (bool)0, /*hidden argument*/NULL);
		((DecoderNLS_tE5B1B7D68B698C0B65FBEE94EAE2453FFD3D538A *)__this)->set_m_encoding_2(L_23);
		goto IL_00c8;
	} // end catch (depth: 1)

IL_00c8:
	{
		return;
	}
}
// System.Void System.Text.UnicodeEncoding_Decoder::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decoder_System_Runtime_Serialization_ISerializable_GetObjectData_mFEA452EA85957C6375B8F3E3551D2DA9317E1165 (Decoder_tC3DC16951ED8FCF98278FC7F0804070A9C218109 * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Decoder_System_Runtime_Serialization_ISerializable_GetObjectData_mFEA452EA85957C6375B8F3E3551D2DA9317E1165_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, _stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, Decoder_System_Runtime_Serialization_ISerializable_GetObjectData_mFEA452EA85957C6375B8F3E3551D2DA9317E1165_RuntimeMethod_var);
	}

IL_000e:
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_2 = ___info0;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_3 = ((DecoderNLS_tE5B1B7D68B698C0B65FBEE94EAE2453FFD3D538A *)__this)->get_m_encoding_2();
		NullCheck(L_2);
		SerializationInfo_AddValue_mA50C2668EF700C2239DDC362F8DB409020BB763D(L_2, _stringLiteral1450C988C6B4D028AF5A543FC4A7A8FA9BA62F30, L_3, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_4 = ___info0;
		DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * L_5 = ((Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 *)__this)->get_m_fallback_0();
		NullCheck(L_4);
		SerializationInfo_AddValue_mA50C2668EF700C2239DDC362F8DB409020BB763D(L_4, _stringLiteralAF00BC34B67009EEE0394C51F26D6D5457EC69F6, L_5, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_6 = ___info0;
		Il2CppChar L_7 = __this->get_lastChar_7();
		NullCheck(L_6);
		SerializationInfo_AddValue_m7B2342989B501DBA05C63C0D6E4FBD63541D4C38(L_6, _stringLiteralC760D2328BD1CF4750B1C22486E5906ACA0DD030, L_7, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_8 = ___info0;
		int32_t L_9 = __this->get_lastByte_6();
		NullCheck(L_8);
		SerializationInfo_AddValue_m3DF5B182A63FFCD12287E97EA38944D0C6405BB5(L_8, _stringLiteral2920727F7824CA7782C4813D6F7312ABCDA53CCD, L_9, /*hidden argument*/NULL);
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_10 = ___info0;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_11 = ((DecoderNLS_tE5B1B7D68B698C0B65FBEE94EAE2453FFD3D538A *)__this)->get_m_encoding_2();
		NullCheck(((UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68 *)CastclassClass((RuntimeObject*)L_11, UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68_il2cpp_TypeInfo_var)));
		bool L_12 = ((UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68 *)CastclassClass((RuntimeObject*)L_11, UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68_il2cpp_TypeInfo_var))->get_bigEndian_17();
		NullCheck(L_10);
		SerializationInfo_AddValue_m324F3E0B02B746D5F460499F5A25988FD608AD7B(L_10, _stringLiteralD5FECA9C07F11E0EFEDB17DCA043A555B4DD4FF2, L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Text.UnicodeEncoding_Decoder::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decoder_Reset_mFE13742F618EE4CB1C7E680B93CD2EAF0DD2A588 (Decoder_tC3DC16951ED8FCF98278FC7F0804070A9C218109 * __this, const RuntimeMethod* method)
{
	{
		__this->set_lastByte_6((-1));
		__this->set_lastChar_7(0);
		DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B * L_0 = ((Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 *)__this)->get_m_fallbackBuffer_1();
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		DecoderFallbackBuffer_t236B3D4172A9BAD1C2150ED78958227F8F20C94B * L_1 = ((Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 *)__this)->get_m_fallbackBuffer_1();
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(6 /* System.Void System.Text.DecoderFallbackBuffer::Reset() */, L_1);
	}

IL_0021:
	{
		return;
	}
}
// System.Boolean System.Text.UnicodeEncoding_Decoder::get_HasState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Decoder_get_HasState_m77EB54613A273C583568810DC48F8ADFAA450190 (Decoder_tC3DC16951ED8FCF98278FC7F0804070A9C218109 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_lastByte_6();
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_0013;
		}
	}
	{
		Il2CppChar L_1 = __this->get_lastChar_7();
		return (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
	}

IL_0013:
	{
		return (bool)1;
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
// System.Void Microsoft.Win32.Win32Native_WIN32_FIND_DATA::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WIN32_FIND_DATA__ctor_mB7888151C7D80CA45AD0857773E8B1BB1CC003E3 (WIN32_FIND_DATA_tE88493B22E1CDD2E595CA4F800949555399AB3C7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C  bool DelegatePInvokeWrapper_WindowsCancelHandler_tFD0F0B721F93ACA04D9CD9340DA39075A8FF2ACF (WindowsCancelHandler_tFD0F0B721F93ACA04D9CD9340DA39075A8FF2ACF * __this, int32_t ___keyCode0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___keyCode0);

	return static_cast<bool>(returnValue);
}
// System.Void System.Console_WindowsConsole_WindowsCancelHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsCancelHandler__ctor_mE4F754395799D3462EE23E39126EE0AF14709B8E (WindowsCancelHandler_tFD0F0B721F93ACA04D9CD9340DA39075A8FF2ACF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean System.Console_WindowsConsole_WindowsCancelHandler::Invoke(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsCancelHandler_Invoke_mC8798AF8C04F477C72E281B924EBE6C738548068 (WindowsCancelHandler_tFD0F0B721F93ACA04D9CD9340DA39075A8FF2ACF * __this, int32_t ___keyCode0, const RuntimeMethod* method)
{
	bool result = false;
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
			if (___parameterCount == 1)
			{
				// open
				typedef bool (*FunctionPointerType) (int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___keyCode0, targetMethod);
			}
			else
			{
				// closed
				typedef bool (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___keyCode0, targetMethod);
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
						result = GenericInterfaceFuncInvoker1< bool, int32_t >::Invoke(targetMethod, targetThis, ___keyCode0);
					else
						result = GenericVirtFuncInvoker1< bool, int32_t >::Invoke(targetMethod, targetThis, ___keyCode0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< bool, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___keyCode0);
					else
						result = VirtFuncInvoker1< bool, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___keyCode0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef bool (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___keyCode0) - 1), targetMethod);
				}
				typedef bool (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___keyCode0, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult System.Console_WindowsConsole_WindowsCancelHandler::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WindowsCancelHandler_BeginInvoke_m3F4FB809BF25992CAA49781D6C2DAE6B8B967322 (WindowsCancelHandler_tFD0F0B721F93ACA04D9CD9340DA39075A8FF2ACF * __this, int32_t ___keyCode0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsCancelHandler_BeginInvoke_m3F4FB809BF25992CAA49781D6C2DAE6B8B967322_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___keyCode0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Boolean System.Console_WindowsConsole_WindowsCancelHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsCancelHandler_EndInvoke_m46613D19C0EB5D2A0B5CCB7BDA60906C95908609 (WindowsCancelHandler_tFD0F0B721F93ACA04D9CD9340DA39075A8FF2ACF * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Collections.ListDictionaryInternal_NodeKeyValueCollection_NodeKeyValueEnumerator::.ctor(System.Collections.ListDictionaryInternal,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeKeyValueEnumerator__ctor_m7ED70CB047C60530F22D3BB02B51EB2FE39FB65D (NodeKeyValueEnumerator_tE6977A5C0AF3F0E001B951488690F2693BAB3955 * __this, ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A * ___list0, bool ___isKeys1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A * L_0 = ___list0;
		__this->set_list_0(L_0);
		bool L_1 = ___isKeys1;
		__this->set_isKeys_3(L_1);
		ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A * L_2 = ___list0;
		NullCheck(L_2);
		int32_t L_3 = L_2->get_version_1();
		__this->set_version_2(L_3);
		__this->set_start_4((bool)1);
		__this->set_current_1((DictionaryNode_t9A01FA01782F6D162BA158736A5FB81CB893A33C *)NULL);
		return;
	}
}
// System.Object System.Collections.ListDictionaryInternal_NodeKeyValueCollection_NodeKeyValueEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * NodeKeyValueEnumerator_get_Current_m3D7CD1472E9AEA82F13366746FA675E0DCA7565A (NodeKeyValueEnumerator_tE6977A5C0AF3F0E001B951488690F2693BAB3955 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NodeKeyValueEnumerator_get_Current_m3D7CD1472E9AEA82F13366746FA675E0DCA7565A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		DictionaryNode_t9A01FA01782F6D162BA158736A5FB81CB893A33C * L_0 = __this->get_current_1();
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_1 = Environment_GetResourceString_m8DFF827596B5FD533D3FE56900FA095F7D674617(_stringLiteral63FC874122847D14784CB3ADBE59A08B9558FA97, /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_2 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_2, L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NodeKeyValueEnumerator_get_Current_m3D7CD1472E9AEA82F13366746FA675E0DCA7565A_RuntimeMethod_var);
	}

IL_0018:
	{
		bool L_3 = __this->get_isKeys_3();
		if (L_3)
		{
			goto IL_002c;
		}
	}
	{
		DictionaryNode_t9A01FA01782F6D162BA158736A5FB81CB893A33C * L_4 = __this->get_current_1();
		NullCheck(L_4);
		RuntimeObject * L_5 = L_4->get_value_1();
		return L_5;
	}

IL_002c:
	{
		DictionaryNode_t9A01FA01782F6D162BA158736A5FB81CB893A33C * L_6 = __this->get_current_1();
		NullCheck(L_6);
		RuntimeObject * L_7 = L_6->get_key_0();
		return L_7;
	}
}
// System.Boolean System.Collections.ListDictionaryInternal_NodeKeyValueCollection_NodeKeyValueEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NodeKeyValueEnumerator_MoveNext_mA39E1A22D0DAD6C05709B603A264DEAD6F5560DB (NodeKeyValueEnumerator_tE6977A5C0AF3F0E001B951488690F2693BAB3955 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NodeKeyValueEnumerator_MoveNext_mA39E1A22D0DAD6C05709B603A264DEAD6F5560DB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_version_2();
		ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A * L_1 = __this->get_list_0();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_version_1();
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_0023;
		}
	}
	{
		String_t* L_3 = Environment_GetResourceString_m8DFF827596B5FD533D3FE56900FA095F7D674617(_stringLiteralF8D08FCF1537043BF0289FA98C51BF5A3AC7C618, /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_4 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_4, L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NodeKeyValueEnumerator_MoveNext_mA39E1A22D0DAD6C05709B603A264DEAD6F5560DB_RuntimeMethod_var);
	}

IL_0023:
	{
		bool L_5 = __this->get_start_4();
		if (!L_5)
		{
			goto IL_0045;
		}
	}
	{
		ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A * L_6 = __this->get_list_0();
		NullCheck(L_6);
		DictionaryNode_t9A01FA01782F6D162BA158736A5FB81CB893A33C * L_7 = L_6->get_head_0();
		__this->set_current_1(L_7);
		__this->set_start_4((bool)0);
		goto IL_005e;
	}

IL_0045:
	{
		DictionaryNode_t9A01FA01782F6D162BA158736A5FB81CB893A33C * L_8 = __this->get_current_1();
		if (!L_8)
		{
			goto IL_005e;
		}
	}
	{
		DictionaryNode_t9A01FA01782F6D162BA158736A5FB81CB893A33C * L_9 = __this->get_current_1();
		NullCheck(L_9);
		DictionaryNode_t9A01FA01782F6D162BA158736A5FB81CB893A33C * L_10 = L_9->get_next_2();
		__this->set_current_1(L_10);
	}

IL_005e:
	{
		DictionaryNode_t9A01FA01782F6D162BA158736A5FB81CB893A33C * L_11 = __this->get_current_1();
		return (bool)((!(((RuntimeObject*)(DictionaryNode_t9A01FA01782F6D162BA158736A5FB81CB893A33C *)L_11) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
// System.Void System.Collections.ListDictionaryInternal_NodeKeyValueCollection_NodeKeyValueEnumerator::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeKeyValueEnumerator_Reset_m9F789418938587F29F3B212BCAF8112317FA5943 (NodeKeyValueEnumerator_tE6977A5C0AF3F0E001B951488690F2693BAB3955 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NodeKeyValueEnumerator_Reset_m9F789418938587F29F3B212BCAF8112317FA5943_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_version_2();
		ListDictionaryInternal_t41BC521E191A070D69C4D98B996314424BBFDA8A * L_1 = __this->get_list_0();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_version_1();
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_0023;
		}
	}
	{
		String_t* L_3 = Environment_GetResourceString_m8DFF827596B5FD533D3FE56900FA095F7D674617(_stringLiteralF8D08FCF1537043BF0289FA98C51BF5A3AC7C618, /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_4 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_4, L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NodeKeyValueEnumerator_Reset_m9F789418938587F29F3B212BCAF8112317FA5943_RuntimeMethod_var);
	}

IL_0023:
	{
		__this->set_start_4((bool)1);
		__this->set_current_1((DictionaryNode_t9A01FA01782F6D162BA158736A5FB81CB893A33C *)NULL);
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
// System.Void System.IO.Stream_SynchronousAsyncResult_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m7FB8166A66FF58669CB59F32A9301B483CB8BE4A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m7FB8166A66FF58669CB59F32A9301B483CB8BE4A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t0B9BA392160C64553C28F93C014479CD7CDC88CB * L_0 = (U3CU3Ec_t0B9BA392160C64553C28F93C014479CD7CDC88CB *)il2cpp_codegen_object_new(U3CU3Ec_t0B9BA392160C64553C28F93C014479CD7CDC88CB_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m25FD09827E688A2665AA1918B69FB7B2421E8235(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t0B9BA392160C64553C28F93C014479CD7CDC88CB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0B9BA392160C64553C28F93C014479CD7CDC88CB_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void System.IO.Stream_SynchronousAsyncResult_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m25FD09827E688A2665AA1918B69FB7B2421E8235 (U3CU3Ec_t0B9BA392160C64553C28F93C014479CD7CDC88CB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Threading.ManualResetEvent System.IO.Stream_SynchronousAsyncResult_<>c::<get_AsyncWaitHandle>b__12_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * U3CU3Ec_U3Cget_AsyncWaitHandleU3Eb__12_0_m30F2C3EEF4109B825474FF30D6A4A4291DC3848B (U3CU3Ec_t0B9BA392160C64553C28F93C014479CD7CDC88CB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3Cget_AsyncWaitHandleU3Eb__12_0_m30F2C3EEF4109B825474FF30D6A4A4291DC3848B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_0 = (ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA *)il2cpp_codegen_object_new(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_il2cpp_TypeInfo_var);
		ManualResetEvent__ctor_mF80BD5B0955BDA8CD514F48EBFF48698E5D03850(L_0, (bool)1, /*hidden argument*/NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  AdjustmentRule_get_DateStart_m05FFD9D69391EC287D299B23A549FFB1F9FB14EE_inline (AdjustmentRule_t15EC10F91D4E8CC287CF8610D8D24BD636A23304 * __this, const RuntimeMethod* method)
{
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = __this->get_m_dateStart_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t TimeSpan_get_Ticks_mE4C9E1F27DC794028CEDCF7CB5BD092D16DBACD4_inline (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * __this, const RuntimeMethod* method)
{
	{
		int64_t L_0 = __this->get__ticks_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  TransitionTime_get_TimeOfDay_m95ECA2E981CA772D9D1DECC7F7421241D4144F44_inline (TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * __this, const RuntimeMethod* method)
{
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = __this->get_m_timeOfDay_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TransitionTime_get_Month_m1E127ECF7312277ED31CEB769A6DC0503F1FAB2B_inline (TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = __this->get_m_month_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TransitionTime_get_Week_m9271C2A79DC390EF07020F63CAB641FA36E304BA_inline (TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = __this->get_m_week_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TransitionTime_get_Day_mF663C24FEFF09012299FA76BE6D65CC6C455C87C_inline (TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = __this->get_m_day_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TransitionTime_get_DayOfWeek_mDC32F75FFCC4AAE5826AFBBC11840C8290E08E52_inline (TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_dayOfWeek_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TransitionTime_get_IsFixedDateRule_m4E7A489F0B8E60893C80A70E768F36A10258E9FB_inline (TransitionTime_tD3B9CE442418566444BB123BA7297AE071D0D47A * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_m_isFixedDateRule_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
