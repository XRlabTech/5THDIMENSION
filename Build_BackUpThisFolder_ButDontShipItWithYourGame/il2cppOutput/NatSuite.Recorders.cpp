#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename T1, typename T2>
struct InvokerActionInvoker2
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2)
	{
		void* params[2] = { &p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<System.Single[]>
struct Action_1_t178AACF05C0F15030E739209018FAB278C66C6F3;
// System.Action`1<UnityEngine.Rendering.AsyncGPUReadbackRequest>
struct Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Comparison`1<UnityEngine.Camera>
struct Comparison_1_t49BE56523BDD8BC22EF3396960546FE16DE7B11A;
// System.Comparison`1<System.Object>
struct Comparison_1_t62E531E7B8260E2C6C2718C3BDB8CF8655139645;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Collections.Generic.IEnumerable`1<System.Threading.Tasks.Task>
struct IEnumerable_1_t1DFFC641A7E1B3EA95B376F5CDC305D0BDFE0543;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.Threading.Tasks.Task>
struct List_1_t84C257E858DDB8EA0B6269E08AAD9A2A2018A551;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37;
// System.Threading.Tasks.TaskCompletionSource`1<System.String>
struct TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372;
// System.Threading.Tasks.TaskFactory`1<System.Object>
struct TaskFactory_1_t6F188FE70F3006B0386002E392B799D85100732B;
// System.Threading.Tasks.TaskFactory`1<System.String>
struct TaskFactory_1_t7ABCD7F9503486A075E0B072E6EB95956CFE3106;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// UnityEngine.Camera[]
struct CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Threading.Tasks.Task[]
struct TaskU5BU5D_t368E447BD9A179BA9A26BAAABF1BAE9CA79F60B3;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// NatSuite.Recorders.Inputs.AsyncTextureInput
struct AsyncTextureInput_t96F659D0E82E8AF3081EE7471E12DFB5C5A4F0A5;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// NatSuite.Recorders.Inputs.AudioInput
struct AudioInput_t85AE05EC859D050D3150EE0DE8F147CBC4A89AB3;
// UnityEngine.AudioListener
struct AudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// NatSuite.Recorders.Inputs.CameraInput
struct CameraInput_t2EC933CD283AC613F0C5586F86A23207AC4CB64B;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.IO.DirectoryInfo
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2;
// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t17EF2929E06D6E252A205C3BFEB989954CB7DCAB;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Exception
struct Exception_t;
// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8;
// NatSuite.Recorders.Clocks.FixedIntervalClock
struct FixedIntervalClock_tB8A8A6DB68515A02FBBF5A83C03984BD5D743393;
// NatSuite.Recorders.GIFRecorder
struct GIFRecorder_tC16E0CC38C3663470CF0A4076A8C0D66C337DB90;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// NatSuite.Recorders.HEVCRecorder
struct HEVCRecorder_tF7999A4FC7068E2E00CEC6123AD4CFE9924D252D;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// NatSuite.Recorders.Clocks.IClock
struct IClock_t0C248C3D76DB9B8F0E141D83E155FDA754570A4D;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// NatSuite.Recorders.IMediaRecorder
struct IMediaRecorder_t075A0EFCE0700DA3B7600BCC859EFCA50D6CB39A;
// NatSuite.Recorders.Inputs.ITextureInput
struct ITextureInput_t50F07D47FAFA1FAD0B16D0EF9BFB53301889B0A7;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Runtime.CompilerServices.IsUnmanagedAttribute
struct IsUnmanagedAttribute_t5094E85972975DFC1A4F11FFBA6E975C2A1B51F7;
// NatSuite.Recorders.JPGRecorder
struct JPGRecorder_t1A5EC7A08AC34EFAFCD04AA71EEB72419F430A45;
// NatSuite.Recorders.MP4Recorder
struct MP4Recorder_tA916D815A1F3E89B8437E6EB7FB09C896B5BBC94;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// NatSuite.Recorders.Internal.NativeRecorder
struct NativeRecorder_tDA99002F4683A6CE1D49BA1791FCBFEA73D7CED2;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// NatSuite.Recorders.Clocks.RealtimeClock
struct RealtimeClock_tEF63149398A267D5573AA8A39DC18D8AD6BAF906;
// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
// System.Runtime.InteropServices.SafeBuffer
struct SafeBuffer_t75FD9565BE645665AB242CA8C8BB22E1A933DFCE;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.Diagnostics.Stopwatch
struct Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// NatSuite.Recorders.Inputs.TextureInput
struct TextureInput_t0D646F396A8A82557F5D7C855E74889519B2B4A6;
// System.IO.UnmanagedMemoryStream
struct UnmanagedMemoryStream_t83B223BCEF722E04E3AB3A7F6B73416F59BE630D;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// NatSuite.Recorders.WAVRecorder
struct WAVRecorder_tEC358A5EA1ABA568D5BA5558CBC4D503EB6C2E47;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663;
// NatSuite.Recorders.Inputs.AsyncTextureInput/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t3ABA0E6ECB6BD52ED7476BB4902C1281B420F46D;
// NatSuite.Recorders.Inputs.AudioInput/AudioInputAttachment
struct AudioInputAttachment_t3820CB977D17B35C265FDF8AECD34FAAA8BA29CC;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// NatSuite.Recorders.Inputs.CameraInput/<>c
struct U3CU3Ec_t65E9393167EC90097697389CCD12EA0898E4ED54;
// NatSuite.Recorders.Inputs.CameraInput/<CommitFrames>d__15
struct U3CCommitFramesU3Ed__15_t0F146564D0AC504754C6C93893D3D9A954D7F3C6;
// NatSuite.Recorders.Inputs.CameraInput/CameraInputAttachment
struct CameraInputAttachment_t17BF4C0461502F1F1599A74377F5016D32421AF2;
// NatSuite.Recorders.JPGRecorder/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t8D47B2C9522EE66235032697385E820B12EEC751;
// NatSuite.Recorders.Internal.NatCorder/RecordingHandler
struct RecordingHandler_t4482042BE3E54FBB6B0F1147F83E39F637BE15CC;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t178AACF05C0F15030E739209018FAB278C66C6F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTextureInput_t96F659D0E82E8AF3081EE7471E12DFB5C5A4F0A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Comparison_1_t49BE56523BDD8BC22EF3396960546FE16DE7B11A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IClock_t0C248C3D76DB9B8F0E141D83E155FDA754570A4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMediaRecorder_t075A0EFCE0700DA3B7600BCC859EFCA50D6CB39A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITextureInput_t50F07D47FAFA1FAD0B16D0EF9BFB53301889B0A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t84C257E858DDB8EA0B6269E08AAD9A2A2018A551_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RecordingHandler_t4482042BE3E54FBB6B0F1147F83E39F637BE15CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextureInput_t0D646F396A8A82557F5D7C855E74889519B2B4A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCommitFramesU3Ed__15_t0F146564D0AC504754C6C93893D3D9A954D7F3C6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass1_0_t3ABA0E6ECB6BD52ED7476BB4902C1281B420F46D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass6_0_t8D47B2C9522EE66235032697385E820B12EEC751_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t65E9393167EC90097697389CCD12EA0898E4ED54_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnmanagedMemoryStream_t83B223BCEF722E04E3AB3A7F6B73416F59BE630D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Utility_t5A11DCFA089788AF7F9BC0913DC4F74BF6ADC8A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral032439044D26AE70F7AABB9714F7C289E7FBEA63;
IL2CPP_EXTERN_C String_t* _stringLiteral0CA4721FC9D82D780671DE2AB61257837402697D;
IL2CPP_EXTERN_C String_t* _stringLiteral1A393EADBE457522A253BEE7EB8728BC667E188E;
IL2CPP_EXTERN_C String_t* _stringLiteral397D9AACB9455AB34FC59D3578E8E5FDCBA6AB9D;
IL2CPP_EXTERN_C String_t* _stringLiteral3CC467A802D81D30CFCC13435F3C9EF52A777208;
IL2CPP_EXTERN_C String_t* _stringLiteral3CD3D5F01224EC8D8396528954ADD021C5BB8DC4;
IL2CPP_EXTERN_C String_t* _stringLiteral54E6A56386072FAEC10025F380D0CC554BAC0758;
IL2CPP_EXTERN_C String_t* _stringLiteral589E32EA81914C1451BD9F2B02A23487D39F49E7;
IL2CPP_EXTERN_C String_t* _stringLiteral5B10C2D439EFA7BCD7BBF3A75423013529D71E14;
IL2CPP_EXTERN_C String_t* _stringLiteral647E0FB2B5E859CC4BD7C73623B82C8EFABA2563;
IL2CPP_EXTERN_C String_t* _stringLiteral8BD2893CB841B67CA243CFCB6AE6DE947F69AA77;
IL2CPP_EXTERN_C String_t* _stringLiteral925E896F2A445121600A77B1267364A2FC2F74F8;
IL2CPP_EXTERN_C String_t* _stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469;
IL2CPP_EXTERN_C String_t* _stringLiteralA77FDC67CD3D8A6113B858540BA409191CDF979E;
IL2CPP_EXTERN_C String_t* _stringLiteralB6894A493D9B16556A8AF2157FE4DFA1C4747B3F;
IL2CPP_EXTERN_C String_t* _stringLiteralC5AFEDBA9A699B056BA293F7275384300FA0D71F;
IL2CPP_EXTERN_C String_t* _stringLiteralCCC60E81F0167838C6290E77F15D3061869FFBEF;
IL2CPP_EXTERN_C String_t* _stringLiteralD36877C5F51DFCF27BD6E50EFE17F811114D9198;
IL2CPP_EXTERN_C String_t* _stringLiteralE9268471E97C5632747DCCD1D08EE3791D238A8E;
IL2CPP_EXTERN_C String_t* _stringLiteralEBF5FE0CBF3EEA67902EEA700B7216E3DB0D8E84;
IL2CPP_EXTERN_C String_t* _stringLiteralEE690CB32125E5CF173F31F1580D50D6CB94A584;
IL2CPP_EXTERN_C String_t* _stringLiteralF13FE9A5DB842114D70C053E3A1F4D1D3DBA8913;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Sort_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mC3829F48821660B3A8FA95D9C77391134C6BF019_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncGPUReadbackRequest_GetData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mC365851AEF03CCC25905B4A8808B40AB3969C136_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CFinishWritingU3Ed__7_tCF1C740DCA06F81A7E222E908BB9180A6E3A4C41_m4AD49CB19ED1F892CBF2B3BAB0A4827DDC36FE63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_m4CB15D06286C7AA0BA8318800D23A9D574CBE0E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m897218C2DB8D7BA446EB263573085805B8F0638C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mB79121C0ACAC704500FAA7350ED0FE6604DDA05E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_mE4D48B78E50CA2A3650A856ACF86A3CFBA249C30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CFinishWritingU3Ed__7_tCF1C740DCA06F81A7E222E908BB9180A6E3A4C41_m3B9874F29E2EA18E7AB7ABE57F3AD1BB9AAABD91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_m01EB243CF4396C9A2645F71572B47CF12151974E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AudioInput_OnSampleBuffer_m9C852C9333E34746C74F6434AD09D42C88487061_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GIFRecorder_Create_m8F800CD2610879074FE764036557C54878614880_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisAudioInputAttachment_t3820CB977D17B35C265FDF8AECD34FAAA8BA29CC_m856DA540549B6374AFA00D863810FE75DA61DE75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisCameraInputAttachment_t17BF4C0461502F1F1599A74377F5016D32421AF2_m14AB119591743F65098AAB5E2BD09F052BC819D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HEVCRecorder_Create_mCB8AC21D90C5B07BC2277B8B284279B7F32AA050_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImageConversion_EncodeNativeArrayToJPG_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDA433D0DE7FF15268FB8FC36554372068A2C7C7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0F464591A24D8751D7900E64ADEEAB1A08A42A13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0A28648201ABCDF216AD744C327E2ED8BDD80A22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MP4Recorder_Create_m0BA2A64C8621196A89BD73507395BCACE62DFDFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m43F0AE90A986A434C9B62B82562A021E0B5065C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD9261CD83E770034D4BDBB7D3907F4648D8ED4E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_ToArray_m2E1BCF853BB72AAB8C219A18582F0AB2FA05CF1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeRecorder_OnRecorderCompleted_mE307AABFEA179EC797CDE00FD5FADC0A99072676_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stopwatch_Start_m35906A38C7D336CF9DD35854C7E170D762A55915_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stopwatch_Stop_m8F2A2EFD9D7D5B4180A5E5379E5443864618D7DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetResult_mA4FD1E75C7272079BE7032F18BCDC158463FE3E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1__ctor_m1E0F0E41DAFB9401D33DE03A55F9BDC5565F0CF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_get_Task_m11D993ACE1C12B89F69CA41E3BAAE3698C3AE587_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_FromResult_TisString_t_mCE9554AC91EE79860B171D4EFD627B46F6688E0C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Texture2D_GetRawTextureData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m225198C8CEB0AB84CF9FE0B40337778AA4C75608_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCommitFramesU3Ed__15_System_Collections_IEnumerator_Reset_m13F554D35E88163490C518DF060AC1DE04A1A695_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__7_0_mEB2C1B3BFAD9501F86AD60C2BB57A829B96CB5CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass1_0_U3CCommitFrameU3Eb__0_m7E4FE4972F3FEF18A3E58E5C8CE21B747674356D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass6_0_U3CCommitFrameU3Eb__0_m9DA335675E098F525B4242FA578EB20C42FA0613_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_2__ctor_mF5D8FB18DBF2C4B2F879F8E8E12D8FB8FCDB5477_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t05F8B8C2DBBD10BC593517B4F58928DE81FD2E37 
{
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Threading.Tasks.Task>
struct List_1_t84C257E858DDB8EA0B6269E08AAD9A2A2018A551  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TaskU5BU5D_t368E447BD9A179BA9A26BAAABF1BAE9CA79F60B3* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t84C257E858DDB8EA0B6269E08AAD9A2A2018A551_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TaskU5BU5D_t368E447BD9A179BA9A26BAAABF1BAE9CA79F60B3* ___s_emptyArray_5;
};

// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ____task_0;
};

// System.Threading.Tasks.TaskCompletionSource`1<System.String>
struct TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::_task
	Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* ____task_0;
};
struct Il2CppArrayBounds;

// NatSuite.Recorders.Inputs.AsyncTextureInput
struct AsyncTextureInput_t96F659D0E82E8AF3081EE7471E12DFB5C5A4F0A5  : public RuntimeObject
{
	// NatSuite.Recorders.IMediaRecorder NatSuite.Recorders.Inputs.AsyncTextureInput::recorder
	RuntimeObject* ___recorder_0;
};

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// NatSuite.Recorders.Inputs.AudioInput
struct AudioInput_t85AE05EC859D050D3150EE0DE8F147CBC4A89AB3  : public RuntimeObject
{
	// NatSuite.Recorders.IMediaRecorder NatSuite.Recorders.Inputs.AudioInput::recorder
	RuntimeObject* ___recorder_0;
	// NatSuite.Recorders.Clocks.IClock NatSuite.Recorders.Inputs.AudioInput::clock
	RuntimeObject* ___clock_1;
	// NatSuite.Recorders.Inputs.AudioInput/AudioInputAttachment NatSuite.Recorders.Inputs.AudioInput::attachment
	AudioInputAttachment_t3820CB977D17B35C265FDF8AECD34FAAA8BA29CC* ___attachment_2;
	// System.Boolean NatSuite.Recorders.Inputs.AudioInput::mute
	bool ___mute_3;
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// NatSuite.Recorders.Clocks.FixedIntervalClock
struct FixedIntervalClock_tB8A8A6DB68515A02FBBF5A83C03984BD5D743393  : public RuntimeObject
{
	// System.Double NatSuite.Recorders.Clocks.FixedIntervalClock::interval
	double ___interval_0;
	// System.Boolean NatSuite.Recorders.Clocks.FixedIntervalClock::autoTick
	bool ___autoTick_1;
	// System.Int64 NatSuite.Recorders.Clocks.FixedIntervalClock::ticks
	int64_t ___ticks_2;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// NatSuite.Recorders.Internal.NatCorder
struct NatCorder_t3E1962215F53A162F272C53ED0C79F0BD27261BF  : public RuntimeObject
{
};

// NatSuite.Recorders.Clocks.RealtimeClock
struct RealtimeClock_tEF63149398A267D5573AA8A39DC18D8AD6BAF906  : public RuntimeObject
{
	// System.Diagnostics.Stopwatch NatSuite.Recorders.Clocks.RealtimeClock::stopwatch
	Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* ___stopwatch_0;
};

// System.Diagnostics.Stopwatch
struct Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043  : public RuntimeObject
{
	// System.Int64 System.Diagnostics.Stopwatch::elapsed
	int64_t ___elapsed_2;
	// System.Int64 System.Diagnostics.Stopwatch::started
	int64_t ___started_3;
	// System.Boolean System.Diagnostics.Stopwatch::is_running
	bool ___is_running_4;
};

struct Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_StaticFields
{
	// System.Int64 System.Diagnostics.Stopwatch::Frequency
	int64_t ___Frequency_0;
	// System.Boolean System.Diagnostics.Stopwatch::IsHighResolution
	bool ___IsHighResolution_1;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_23;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_26;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_24;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_25;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_27;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_30;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_31;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_32;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_33;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_34;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_36;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_37;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_28;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_29;
};

// NatSuite.Recorders.Inputs.TextureInput
struct TextureInput_t0D646F396A8A82557F5D7C855E74889519B2B4A6  : public RuntimeObject
{
	// NatSuite.Recorders.IMediaRecorder NatSuite.Recorders.Inputs.TextureInput::recorder
	RuntimeObject* ___recorder_0;
	// UnityEngine.Texture2D NatSuite.Recorders.Inputs.TextureInput::readbackBuffer
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___readbackBuffer_1;
};

// NatSuite.Recorders.Internal.Utility
struct Utility_t5A11DCFA089788AF7F9BC0913DC4F74BF6ADC8A8  : public RuntimeObject
{
};

struct Utility_t5A11DCFA089788AF7F9BC0913DC4F74BF6ADC8A8_StaticFields
{
	// System.String NatSuite.Recorders.Internal.Utility::directory
	String_t* ___directory_0;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// NatSuite.Recorders.WAVRecorder
struct WAVRecorder_tEC358A5EA1ABA568D5BA5558CBC4D503EB6C2E47  : public RuntimeObject
{
	// System.Int32 NatSuite.Recorders.WAVRecorder::sampleRate
	int32_t ___sampleRate_0;
	// System.Int32 NatSuite.Recorders.WAVRecorder::channelCount
	int32_t ___channelCount_1;
	// System.IO.FileStream NatSuite.Recorders.WAVRecorder::stream
	FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* ___stream_2;
	// System.Int32 NatSuite.Recorders.WAVRecorder::sampleCount
	int32_t ___sampleCount_3;
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// NatSuite.Recorders.Inputs.AsyncTextureInput/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_t3ABA0E6ECB6BD52ED7476BB4902C1281B420F46D  : public RuntimeObject
{
	// NatSuite.Recorders.Inputs.AsyncTextureInput NatSuite.Recorders.Inputs.AsyncTextureInput/<>c__DisplayClass1_0::<>4__this
	AsyncTextureInput_t96F659D0E82E8AF3081EE7471E12DFB5C5A4F0A5* ___U3CU3E4__this_0;
	// System.Int64 NatSuite.Recorders.Inputs.AsyncTextureInput/<>c__DisplayClass1_0::timestamp
	int64_t ___timestamp_1;
};

// NatSuite.Recorders.Inputs.CameraInput/<>c
struct U3CU3Ec_t65E9393167EC90097697389CCD12EA0898E4ED54  : public RuntimeObject
{
};

struct U3CU3Ec_t65E9393167EC90097697389CCD12EA0898E4ED54_StaticFields
{
	// NatSuite.Recorders.Inputs.CameraInput/<>c NatSuite.Recorders.Inputs.CameraInput/<>c::<>9
	U3CU3Ec_t65E9393167EC90097697389CCD12EA0898E4ED54* ___U3CU3E9_0;
	// System.Comparison`1<UnityEngine.Camera> NatSuite.Recorders.Inputs.CameraInput/<>c::<>9__7_0
	Comparison_1_t49BE56523BDD8BC22EF3396960546FE16DE7B11A* ___U3CU3E9__7_0_1;
};

// NatSuite.Recorders.Inputs.CameraInput/<CommitFrames>d__15
struct U3CCommitFramesU3Ed__15_t0F146564D0AC504754C6C93893D3D9A954D7F3C6  : public RuntimeObject
{
	// System.Int32 NatSuite.Recorders.Inputs.CameraInput/<CommitFrames>d__15::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object NatSuite.Recorders.Inputs.CameraInput/<CommitFrames>d__15::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// NatSuite.Recorders.Inputs.CameraInput NatSuite.Recorders.Inputs.CameraInput/<CommitFrames>d__15::<>4__this
	CameraInput_t2EC933CD283AC613F0C5586F86A23207AC4CB64B* ___U3CU3E4__this_2;
	// UnityEngine.WaitForEndOfFrame NatSuite.Recorders.Inputs.CameraInput/<CommitFrames>d__15::<yielder>5__2
	WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* ___U3CyielderU3E5__2_3;
};

// NatSuite.Recorders.JPGRecorder/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t8D47B2C9522EE66235032697385E820B12EEC751  : public RuntimeObject
{
	// NatSuite.Recorders.JPGRecorder NatSuite.Recorders.JPGRecorder/<>c__DisplayClass6_0::<>4__this
	JPGRecorder_t1A5EC7A08AC34EFAFCD04AA71EEB72419F430A45* ___U3CU3E4__this_0;
	// System.Int32 NatSuite.Recorders.JPGRecorder/<>c__DisplayClass6_0::frameIndex
	int32_t ___frameIndex_1;
	// System.Byte[] NatSuite.Recorders.JPGRecorder/<>c__DisplayClass6_0::buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer_2;
};

// Unity.Collections.NativeArray`1<System.Byte>
struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject* ___m_result_38;
};

struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t6F188FE70F3006B0386002E392B799D85100732B* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	String_t* ___m_result_38;
};

struct Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t7ABCD7F9503486A075E0B072E6EB95956CFE3106* ___s_defaultFactory_39;
};

// System.ValueTuple`2<System.Int32,System.Int32>
struct ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D 
{
	// T1 System.ValueTuple`2::Item1
	int32_t ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	int32_t ___Item2_1;
};

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t17EF2929E06D6E252A205C3BFEB989954CB7DCAB  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.Runtime.CompilerServices.IsUnmanagedAttribute
struct IsUnmanagedAttribute_t5094E85972975DFC1A4F11FFBA6E975C2A1B51F7  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// UnityEngine.RenderTextureDescriptor
struct RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 
{
	// System.Int32 UnityEngine.RenderTextureDescriptor::<width>k__BackingField
	int32_t ___U3CwidthU3Ek__BackingField_0;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<height>k__BackingField
	int32_t ___U3CheightU3Ek__BackingField_1;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<msaaSamples>k__BackingField
	int32_t ___U3CmsaaSamplesU3Ek__BackingField_2;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<volumeDepth>k__BackingField
	int32_t ___U3CvolumeDepthU3Ek__BackingField_3;
	// System.Int32 UnityEngine.RenderTextureDescriptor::<mipCount>k__BackingField
	int32_t ___U3CmipCountU3Ek__BackingField_4;
	// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.RenderTextureDescriptor::_graphicsFormat
	int32_t ____graphicsFormat_5;
	// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.RenderTextureDescriptor::<stencilFormat>k__BackingField
	int32_t ___U3CstencilFormatU3Ek__BackingField_6;
	// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.RenderTextureDescriptor::<depthStencilFormat>k__BackingField
	int32_t ___U3CdepthStencilFormatU3Ek__BackingField_7;
	// UnityEngine.Rendering.TextureDimension UnityEngine.RenderTextureDescriptor::<dimension>k__BackingField
	int32_t ___U3CdimensionU3Ek__BackingField_8;
	// UnityEngine.Rendering.ShadowSamplingMode UnityEngine.RenderTextureDescriptor::<shadowSamplingMode>k__BackingField
	int32_t ___U3CshadowSamplingModeU3Ek__BackingField_9;
	// UnityEngine.VRTextureUsage UnityEngine.RenderTextureDescriptor::<vrUsage>k__BackingField
	int32_t ___U3CvrUsageU3Ek__BackingField_10;
	// UnityEngine.RenderTextureCreationFlags UnityEngine.RenderTextureDescriptor::_flags
	int32_t ____flags_11;
	// UnityEngine.RenderTextureMemoryless UnityEngine.RenderTextureDescriptor::<memoryless>k__BackingField
	int32_t ___U3CmemorylessU3Ek__BackingField_12;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_4;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 
{
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_pinvoke
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_com
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
};

// Interop/Sys/FileStatus
struct FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 
{
	// Interop/Sys/FileStatusFlags Interop/Sys/FileStatus::Flags
	int32_t ___Flags_0;
	// System.Int32 Interop/Sys/FileStatus::Mode
	int32_t ___Mode_1;
	// System.UInt32 Interop/Sys/FileStatus::Uid
	uint32_t ___Uid_2;
	// System.UInt32 Interop/Sys/FileStatus::Gid
	uint32_t ___Gid_3;
	// System.Int64 Interop/Sys/FileStatus::Size
	int64_t ___Size_4;
	// System.Int64 Interop/Sys/FileStatus::ATime
	int64_t ___ATime_5;
	// System.Int64 Interop/Sys/FileStatus::ATimeNsec
	int64_t ___ATimeNsec_6;
	// System.Int64 Interop/Sys/FileStatus::MTime
	int64_t ___MTime_7;
	// System.Int64 Interop/Sys/FileStatus::MTimeNsec
	int64_t ___MTimeNsec_8;
	// System.Int64 Interop/Sys/FileStatus::CTime
	int64_t ___CTime_9;
	// System.Int64 Interop/Sys/FileStatus::CTimeNsec
	int64_t ___CTimeNsec_10;
	// System.Int64 Interop/Sys/FileStatus::BirthTime
	int64_t ___BirthTime_11;
	// System.Int64 Interop/Sys/FileStatus::BirthTimeNsec
	int64_t ___BirthTimeNsec_12;
	// System.Int64 Interop/Sys/FileStatus::Dev
	int64_t ___Dev_13;
	// System.Int64 Interop/Sys/FileStatus::Ino
	int64_t ___Ino_14;
	// System.UInt32 Interop/Sys/FileStatus::UserFlags
	uint32_t ___UserFlags_15;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>
struct AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* ___s_defaultResultTask_0;
};

// UnityEngine.Rendering.AsyncGPUReadbackRequest
struct AsyncGPUReadbackRequest_t6A735D3E0F1DEF8F43EBD0E6FE550FAE564519C7 
{
	// System.IntPtr UnityEngine.Rendering.AsyncGPUReadbackRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Int32 UnityEngine.Rendering.AsyncGPUReadbackRequest::m_Version
	int32_t ___m_Version_1;
};

// NatSuite.Recorders.Inputs.CameraInput
struct CameraInput_t2EC933CD283AC613F0C5586F86A23207AC4CB64B  : public RuntimeObject
{
	// System.Int32 NatSuite.Recorders.Inputs.CameraInput::frameSkip
	int32_t ___frameSkip_0;
	// NatSuite.Recorders.Inputs.ITextureInput NatSuite.Recorders.Inputs.CameraInput::input
	RuntimeObject* ___input_1;
	// NatSuite.Recorders.Clocks.IClock NatSuite.Recorders.Inputs.CameraInput::clock
	RuntimeObject* ___clock_2;
	// UnityEngine.Camera[] NatSuite.Recorders.Inputs.CameraInput::cameras
	CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* ___cameras_3;
	// NatSuite.Recorders.Inputs.CameraInput/CameraInputAttachment NatSuite.Recorders.Inputs.CameraInput::attachment
	CameraInputAttachment_t17BF4C0461502F1F1599A74377F5016D32421AF2* ___attachment_4;
	// UnityEngine.RenderTextureDescriptor NatSuite.Recorders.Inputs.CameraInput::frameDescriptor
	RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 ___frameDescriptor_5;
	// System.Int32 NatSuite.Recorders.Inputs.CameraInput::frameCount
	int32_t ___frameCount_6;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5 
{
	// Interop/Sys/FileStatus System.IO.FileStatus::_fileStatus
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_3;
	// System.Int32 System.IO.FileStatus::_fileStatusInitialized
	int32_t ____fileStatusInitialized_4;
	// System.Boolean System.IO.FileStatus::<InitiallyDirectory>k__BackingField
	bool ___U3CInitiallyDirectoryU3Ek__BackingField_5;
	// System.Boolean System.IO.FileStatus::_isDirectory
	bool ____isDirectory_6;
	// System.Boolean System.IO.FileStatus::_exists
	bool ____exists_7;
};
// Native definition for P/Invoke marshalling of System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshaled_pinvoke
{
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_3;
	int32_t ____fileStatusInitialized_4;
	int32_t ___U3CInitiallyDirectoryU3Ek__BackingField_5;
	int32_t ____isDirectory_6;
	int32_t ____exists_7;
};
// Native definition for COM marshalling of System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshaled_com
{
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_3;
	int32_t ____fileStatusInitialized_4;
	int32_t ___U3CInitiallyDirectoryU3Ek__BackingField_5;
	int32_t ____isDirectory_6;
	int32_t ____exists_7;
};

// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_8;
	// System.String System.IO.FileStream::name
	String_t* ___name_9;
	// Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::safeHandle
	SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E* ___safeHandle_10;
	// System.Boolean System.IO.FileStream::isExposed
	bool ___isExposed_11;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_12;
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_13;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_14;
	// System.Boolean System.IO.FileStream::async
	bool ___async_15;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_16;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_17;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_18;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_19;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_20;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_21;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_22;
};

struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_StaticFields
{
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_recycle_6;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject* ___buf_recycle_lock_7;
};

// System.Runtime.InteropServices.GCHandle
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	// System.IntPtr System.Runtime.InteropServices.GCHandle::handle
	intptr_t ___handle_0;
};

// NatSuite.Recorders.JPGRecorder
struct JPGRecorder_t1A5EC7A08AC34EFAFCD04AA71EEB72419F430A45  : public RuntimeObject
{
	// System.ValueTuple`2<System.Int32,System.Int32> NatSuite.Recorders.JPGRecorder::<frameSize>k__BackingField
	ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___U3CframeSizeU3Ek__BackingField_0;
	// System.Int32 NatSuite.Recorders.JPGRecorder::quality
	int32_t ___quality_1;
	// System.String NatSuite.Recorders.JPGRecorder::recordingPath
	String_t* ___recordingPath_2;
	// System.Collections.Generic.List`1<System.Threading.Tasks.Task> NatSuite.Recorders.JPGRecorder::writeTasks
	List_1_t84C257E858DDB8EA0B6269E08AAD9A2A2018A551* ___writeTasks_3;
	// System.Int32 NatSuite.Recorders.JPGRecorder::frameCount
	int32_t ___frameCount_4;
};

// NatSuite.Recorders.Internal.NativeRecorder
struct NativeRecorder_tDA99002F4683A6CE1D49BA1791FCBFEA73D7CED2  : public RuntimeObject
{
	// System.IntPtr NatSuite.Recorders.Internal.NativeRecorder::recorder
	intptr_t ___recorder_0;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.IO.UnmanagedMemoryStream
struct UnmanagedMemoryStream_t83B223BCEF722E04E3AB3A7F6B73416F59BE630D  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Runtime.InteropServices.SafeBuffer System.IO.UnmanagedMemoryStream::_buffer
	SafeBuffer_t75FD9565BE645665AB242CA8C8BB22E1A933DFCE* ____buffer_5;
	// System.Byte* System.IO.UnmanagedMemoryStream::_mem
	uint8_t* ____mem_6;
	// System.Int64 System.IO.UnmanagedMemoryStream::_length
	int64_t ____length_7;
	// System.Int64 System.IO.UnmanagedMemoryStream::_capacity
	int64_t ____capacity_8;
	// System.Int64 System.IO.UnmanagedMemoryStream::_position
	int64_t ____position_9;
	// System.Int64 System.IO.UnmanagedMemoryStream::_offset
	int64_t ____offset_10;
	// System.IO.FileAccess System.IO.UnmanagedMemoryStream::_access
	int32_t ____access_11;
	// System.Boolean System.IO.UnmanagedMemoryStream::_isOpen
	bool ____isOpen_12;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.UnmanagedMemoryStream::_lastReadTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ____lastReadTask_13;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.IO.FileSystemInfo
struct FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.FileStatus System.IO.FileSystemInfo::_fileStatus
	FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5 ____fileStatus_1;
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath_2;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath_3;
	// System.String System.IO.FileSystemInfo::_name
	String_t* ____name_4;
};

// NatSuite.Recorders.GIFRecorder
struct GIFRecorder_tC16E0CC38C3663470CF0A4076A8C0D66C337DB90  : public NativeRecorder_tDA99002F4683A6CE1D49BA1791FCBFEA73D7CED2
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// NatSuite.Recorders.HEVCRecorder
struct HEVCRecorder_tF7999A4FC7068E2E00CEC6123AD4CFE9924D252D  : public NativeRecorder_tDA99002F4683A6CE1D49BA1791FCBFEA73D7CED2
{
};

// NatSuite.Recorders.MP4Recorder
struct MP4Recorder_tA916D815A1F3E89B8437E6EB7FB09C896B5BBC94  : public NativeRecorder_tDA99002F4683A6CE1D49BA1791FCBFEA73D7CED2
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// NatSuite.Recorders.JPGRecorder/<FinishWriting>d__7
struct U3CFinishWritingU3Ed__7_tCF1C740DCA06F81A7E222E908BB9180A6E3A4C41 
{
	// System.Int32 NatSuite.Recorders.JPGRecorder/<FinishWriting>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String> NatSuite.Recorders.JPGRecorder/<FinishWriting>d__7::<>t__builder
	AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E ___U3CU3Et__builder_1;
	// NatSuite.Recorders.JPGRecorder NatSuite.Recorders.JPGRecorder/<FinishWriting>d__7::<>4__this
	JPGRecorder_t1A5EC7A08AC34EFAFCD04AA71EEB72419F430A45* ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter NatSuite.Recorders.JPGRecorder/<FinishWriting>d__7::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_3;
};

// System.Action`1<System.Single[]>
struct Action_1_t178AACF05C0F15030E739209018FAB278C66C6F3  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.Rendering.AsyncGPUReadbackRequest>
struct Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Comparison`1<UnityEngine.Camera>
struct Comparison_1_t49BE56523BDD8BC22EF3396960546FE16DE7B11A  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.IO.DirectoryInfo
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2  : public FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// NatSuite.Recorders.Internal.NatCorder/RecordingHandler
struct RecordingHandler_t4482042BE3E54FBB6B0F1147F83E39F637BE15CC  : public MulticastDelegate_t
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioListener
struct AudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// NatSuite.Recorders.Inputs.AudioInput/AudioInputAttachment
struct AudioInputAttachment_t3820CB977D17B35C265FDF8AECD34FAAA8BA29CC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action`1<System.Single[]> NatSuite.Recorders.Inputs.AudioInput/AudioInputAttachment::sampleBufferDelegate
	Action_1_t178AACF05C0F15030E739209018FAB278C66C6F3* ___sampleBufferDelegate_4;
};

// NatSuite.Recorders.Inputs.CameraInput/CameraInputAttachment
struct CameraInputAttachment_t17BF4C0461502F1F1599A74377F5016D32421AF2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

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
// System.Int16[]
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB  : public RuntimeArray
{
	ALIGN_FIELD (8) int16_t m_Items[1];

	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Camera[]
struct CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B  : public RuntimeArray
{
	ALIGN_FIELD (8) Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* m_Items[1];

	inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.ValueTuple`2<System.Int32,System.Int32>::.ctor(T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_2__ctor_mF5D8FB18DBF2C4B2F879F8E8E12D8FB8FCDB5477_gshared (ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D* __this, int32_t ___item10, int32_t ___item21, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<System.Byte>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m43F0AE90A986A434C9B62B82562A021E0B5065C0_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<System.Byte> UnityEngine.ImageConversion::EncodeNativeArrayToJPG<System.Byte>(Unity.Collections.NativeArray`1<T>,UnityEngine.Experimental.Rendering.GraphicsFormat,System.UInt32,System.UInt32,System.UInt32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ImageConversion_EncodeNativeArrayToJPG_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDA433D0DE7FF15268FB8FC36554372068A2C7C7F_gshared (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___input0, int32_t ___format1, uint32_t ___width2, uint32_t ___height3, uint32_t ___rowBytes4, int32_t ___quality5, const RuntimeMethod* method) ;
// T[] Unity.Collections.NativeArray`1<System.Byte>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* NativeArray_1_ToArray_m2E1BCF853BB72AAB8C219A18582F0AB2FA05CF1F_gshared (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0 AsyncTaskMethodBuilder_1_Create_mAFCDBB3F3D94DC87243FAB2D72DD85D1EFB68441_gshared (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<NatSuite.Recorders.JPGRecorder/<FinishWriting>d__7>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CFinishWritingU3Ed__7_tCF1C740DCA06F81A7E222E908BB9180A6E3A4C41_m8136E055D62F627295C43E70DA64EAEA1CA44E17_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CFinishWritingU3Ed__7_tCF1C740DCA06F81A7E222E908BB9180A6E3A4C41* ___stateMachine0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,NatSuite.Recorders.JPGRecorder/<FinishWriting>d__7>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CFinishWritingU3Ed__7_tCF1C740DCA06F81A7E222E908BB9180A6E3A4C41_m58910DDC9AD6C358C7A8511BE787392F48F4E8FD_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CFinishWritingU3Ed__7_tCF1C740DCA06F81A7E222E908BB9180A6E3A4C41* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, RuntimeObject* ___result0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromResult<System.Object>(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* Task_FromResult_TisRuntimeObject_mCF2DB27B9C76CBB36764EAAC15108BE463AC3A0A_gshared (RuntimeObject* ___result0, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1__ctor_mBF9A903AD14C4E9CF044B227776C532BA9C40D60_gshared (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<System.Object>::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_gshared_inline (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetResult_m948378015A7A0E42647452EB7003466406B831A4_gshared (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, RuntimeObject* ___result0, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.Rendering.AsyncGPUReadbackRequest>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m347338A163A1A0840FA150F7ACCC029D46339777_gshared (Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> UnityEngine.Rendering.AsyncGPUReadbackRequest::GetData<System.Byte>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF AsyncGPUReadbackRequest_GetData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mC365851AEF03CCC25905B4A8808B40AB3969C136_gshared (AsyncGPUReadbackRequest_t6A735D3E0F1DEF8F43EBD0E6FE550FAE564519C7* __this, int32_t ___layer0, const RuntimeMethod* method) ;
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafeReadOnlyPtr<System.Byte>(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD9261CD83E770034D4BDBB7D3907F4648D8ED4E6_gshared (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___nativeArray0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Comparison`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Comparison_1__ctor_mC1E8799BBCE317B612875123C9C894BD470BFE6A_gshared (Comparison_1_t62E531E7B8260E2C6C2718C3BDB8CF8655139645* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Array::Sort<System.Object>(T[],System.Comparison`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisRuntimeObject_mE0EF1BE62619EC75FDB798E19BF6961E7F623CB3_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___array0, Comparison_1_t62E531E7B8260E2C6C2718C3BDB8CF8655139645* ___comparison1, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> UnityEngine.Texture2D::GetRawTextureData<System.Byte>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF Texture2D_GetRawTextureData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m225198C8CEB0AB84CF9FE0B40337778AA4C75608_gshared (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;

// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.IntPtr NatSuite.Recorders.GIFRecorder::Create(System.Int32,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GIFRecorder_Create_m8F800CD2610879074FE764036557C54878614880 (int32_t ___width0, int32_t ___height1, float ___frameDuration2, const RuntimeMethod* method) ;
// System.Void NatSuite.Recorders.Internal.NativeRecorder::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeRecorder__ctor_m7FB0F5A570781DD826F2D9C83F6F27B74CA5F877 (NativeRecorder_tDA99002F4683A6CE1D49BA1791FCBFEA73D7CED2* __this, intptr_t ___recorder0, const RuntimeMethod* method) ;
// System.Void NatSuite.Recorders.Internal.NativeRecorder::CommitFrame(System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeRecorder_CommitFrame_m157913F3860ADBA4D20DC4C9A2E918DCA595BD3B (NativeRecorder_tDA99002F4683A6CE1D49BA1791FCBFEA73D7CED2* __this, void* ___nativeBuffer0, int64_t ___timestamp1, const RuntimeMethod* method) ;
// System.Void NatSuite.Recorders.Internal.NativeRecorder::CommitSamples(System.Single[],System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeRecorder_CommitSamples_mF73B0CB85EFA8DE0FEDC3A7FC5A8FBCA1A422BDE (NativeRecorder_tDA99002F4683A6CE1D49BA1791FCBFEA73D7CED2* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___sampleBuffer0, int64_t ___timestamp1, const RuntimeMethod* method) ;
// System.Void NatSuite.Recorders.Internal.NativeRecorder::CommitSamples(System.Single*,System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeRecorder_CommitSamples_m2A7FA2C79D4B842C5AD1F76CE9B738E9E72D2326 (NativeRecorder_tDA99002F4683A6CE1D49BA1791FCBFEA73D7CED2* __this, float* ___nativeBuffer0, int32_t ___sampleCount1, int64_t ___timestamp2, const RuntimeMethod* method) ;
// System.String NatSuite.Recorders.Internal.Utility::GetPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Utility_GetPath_m890864A644FBE33558777D65EDA3E35FBE54F1B5 (String_t* ___extension0, const RuntimeMethod* method) ;
// System.Void NatSuite.Recorders.Internal.NatCorder::CreateGIFRecorder(System.String,System.Int32,System.Int32,System.Single,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatCorder_CreateGIFRecorder_mA916B8638821F82B766A8506064547D97577B5F6 (String_t* ___path0, int32_t ___width1, int32_t ___height2, float ___frameDuration3, intptr_t* ___recorder4, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.IntPtr NatSuite.Recorders.HEVCRecorder::Create(System.Int32,System.Int32,System.Single,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t HEVCRecorder_Create_mCB8AC21D90C5B07BC2277B8B284279B7F32AA050 (int32_t ___width0, int32_t ___height1, float ___frameRate2, int32_t ___sampleRate3, int32_t ___channelCount4, int32_t ___videoBitRate5, int32_t ___keyframeInterval6, int32_t ___audioBitRate7, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method) ;
// System.Void NatSuite.Recorders.Internal.NatCorder::CreateHEVCRecorder(System.String,System.Int32,System.Int32,System.Single,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatCorder_CreateHEVCRecorder_m4F0D52AF26E6123AEA2528E7602CCE9DC09B5766 (String_t* ___path0, int32_t ___width1, int32_t ___height2, float ___frameRate3, int32_t ___sampleRate4, int32_t ___channelCount5, int32_t ___videoBitRate6, int32_t ___keyframeInterval7, int32_t ___audioBitRate8, intptr_t* ___recorder9, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.ValueTuple`2<System.Int32,System.Int32>::.ctor(T1,T2)
inline void ValueTuple_2__ctor_mF5D8FB18DBF2C4B2F879F8E8E12D8FB8FCDB5477 (ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D* __this, int32_t ___item10, int32_t ___item21, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D*, int32_t, int32_t, const RuntimeMethod*))ValueTuple_2__ctor_mF5D8FB18DBF2C4B2F879F8E8E12D8FB8FCDB5477_gshared)(__this, ___item10, ___item21, method);
}
// System.Void NatSuite.Recorders.JPGRecorder::set_frameSize(System.ValueTuple`2<System.Int32,System.Int32>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JPGRecorder_set_frameSize_mDD904FDA5E3C73D13FB4AE8B86C27BD0A19BCF09_inline (JPGRecorder_t1A5EC7A08AC34EFAFCD04AA71EEB72419F430A45* __this, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_mA48718D9A20D8972EDD41714CEF6BBF864F442EA_inline (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::.ctor()
inline void List_1__ctor_m0A28648201ABCDF216AD744C327E2ED8BDD80A22 (List_1_t84C257E858DDB8EA0B6269E08AAD9A2A2018A551* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t84C257E858DDB8EA0B6269E08AAD9A2A2018A551*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.IO.DirectoryInfo System.IO.Directory::CreateDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* Directory_CreateDirectory_mD89FECDFB25BC52F866DC0B1BB8552334FB249D2 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void NatSuite.Recorders.JPGRecorder/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_mEBC6D0C1A3753C8F736C6BB88D1FADAB6A424A72 (U3CU3Ec__DisplayClass6_0_t8D47B2C9522EE66235032697385E820B12EEC751* __this, const RuntimeMethod* method) ;
// System.ValueTuple`2<System.Int32,System.Int32> NatSuite.Recorders.JPGRecorder::get_frameSize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D JPGRecorder_get_frameSize_m52A148E7CAD4C1E86FE8F649420A59C2B3A26D19_inline (JPGRecorder_t1A5EC7A08AC34EFAFCD04AA71EEB72419F430A45* __this, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<System.Byte>(System.Void*,System.Int32,Unity.Collections.Allocator)
inline NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m43F0AE90A986A434C9B62B82562A021E0B5065C0 (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m43F0AE90A986A434C9B62B82562A021E0B5065C0_gshared)(___dataPointer0, ___length1, ___allocator2, method);
}
// Unity.Collections.NativeArray`1<System.Byte> UnityEngine.ImageConversion::EncodeNativeArrayToJPG<System.Byte>(Unity.Collections.NativeArray`1<T>,UnityEngine.Experimental.Rendering.GraphicsFormat,System.UInt32,System.UInt32,System.UInt32,System.Int32)
inline NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ImageConversion_EncodeNativeArrayToJPG_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDA433D0DE7FF15268FB8FC36554372068A2C7C7F (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___input0, int32_t ___format1, uint32_t ___width2, uint32_t ___height3, uint32_t ___rowBytes4, int32_t ___quality5, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF (*) (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF, int32_t, uint32_t, uint32_t, uint32_t, int32_t, const RuntimeMethod*))ImageConversion_EncodeNativeArrayToJPG_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDA433D0DE7FF15268FB8FC36554372068A2C7C7F_gshared)(___input0, ___format1, ___width2, ___height3, ___rowBytes4, ___quality5, method);
}
// T[] Unity.Collections.NativeArray`1<System.Byte>::ToArray()
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* NativeArray_1_ToArray_m2E1BCF853BB72AAB8C219A18582F0AB2FA05CF1F (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF*, const RuntimeMethod*))NativeArray_1_ToArray_m2E1BCF853BB72AAB8C219A18582F0AB2FA05CF1F_gshared)(__this, method);
}
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::Run(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_Run_mBD6EF33232D13F2183A43D0A526A220C4F0181B4 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Threading.Tasks.Task>::Add(T)
inline void List_1_Add_m0F464591A24D8751D7900E64ADEEAB1A08A42A13_inline (List_1_t84C257E858DDB8EA0B6269E08AAD9A2A2018A551* __this, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t84C257E858DDB8EA0B6269E08AAD9A2A2018A551*, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::Create()
inline AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E AsyncTaskMethodBuilder_1_Create_m4CB15D06286C7AA0BA8318800D23A9D574CBE0E8 (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_mAFCDBB3F3D94DC87243FAB2D72DD85D1EFB68441_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::Start<NatSuite.Recorders.JPGRecorder/<FinishWriting>d__7>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CFinishWritingU3Ed__7_tCF1C740DCA06F81A7E222E908BB9180A6E3A4C41_m3B9874F29E2EA18E7AB7ABE57F3AD1BB9AAABD91 (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* __this, U3CFinishWritingU3Ed__7_tCF1C740DCA06F81A7E222E908BB9180A6E3A4C41* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E*, U3CFinishWritingU3Ed__7_tCF1C740DCA06F81A7E222E908BB9180A6E3A4C41*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CFinishWritingU3Ed__7_tCF1C740DCA06F81A7E222E908BB9180A6E3A4C41_m8136E055D62F627295C43E70DA64EAEA1CA44E17_gshared)(__this, ___stateMachine0, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::get_Task()
inline Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* AsyncTaskMethodBuilder_1_get_Task_m01EB243CF4396C9A2645F71572B47CF12151974E (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* (*) (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_m64754D4E08990CE1EBC41CDF197807EE4B115474 (String_t* ___path10, String_t* ___path21, const RuntimeMethod* method) ;
// System.Void System.IO.File::WriteAllBytes(System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_WriteAllBytes_m72C1A24339B30F84A655E6BF516AE1638B2C4668 (String_t* ___path0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::WhenAll(System.Collections.Generic.IEnumerable`1<System.Threading.Tasks.Task>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_WhenAll_m5F2F68F0C44E2A7750AD51DDB00787DDF41EDA7D (RuntimeObject* ___tasks0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8 (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,NatSuite.Recorders.JPGRecorder/<FinishWriting>d__7>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CFinishWritingU3Ed__7_tCF1C740DCA06F81A7E222E908BB9180A6E3A4C41_m4AD49CB19ED1F892CBF2B3BAB0A4827DDC36FE63 (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CFinishWritingU3Ed__7_tCF1C740DCA06F81A7E222E908BB9180A6E3A4C41* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CFinishWritingU3Ed__7_tCF1C740DCA06F81A7E222E908BB9180A6E3A4C41*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CFinishWritingU3Ed__7_tCF1C740DCA06F81A7E222E908BB9180A6E3A4C41_m58910DDC9AD6C358C7A8511BE787392F48F4E8FD_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m897218C2DB8D7BA446EB263573085805B8F0638C (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared)(__this, ___exception0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_mB79121C0ACAC704500FAA7350ED0FE6604DDA05E (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* __this, String_t* ___result0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E*, String_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared)(__this, ___result0, method);
}
// System.Void NatSuite.Recorders.JPGRecorder/<FinishWriting>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFinishWritingU3Ed__7_MoveNext_m5CBC3AF74C258FE56638F1A303E74F5B40214FBD (U3CFinishWritingU3Ed__7_tCF1C740DCA06F81A7E222E908BB9180A6E3A4C41* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_mE4D48B78E50CA2A3650A856ACF86A3CFBA249C30 (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared)(__this, ___stateMachine0, method);
}
// System.Void NatSuite.Recorders.JPGRecorder/<FinishWriting>d__7::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFinishWritingU3Ed__7_SetStateMachine_mE877E6B7F3CC15B769DBE35FDB3887208F38F3D7 (U3CFinishWritingU3Ed__7_tCF1C740DCA06F81A7E222E908BB9180A6E3A4C41* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.IntPtr NatSuite.Recorders.MP4Recorder::Create(System.Int32,System.Int32,System.Single,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t MP4Recorder_Create_m0BA2A64C8621196A89BD73507395BCACE62DFDFE (int32_t ___width0, int32_t ___height1, float ___frameRate2, int32_t ___sampleRate3, int32_t ___channelCount4, int32_t ___videoBitRate5, int32_t ___keyframeInterval6, int32_t ___audioBitRate7, const RuntimeMethod* method) ;
// System.Void NatSuite.Recorders.Internal.NatCorder::CreateMP4Recorder(System.String,System.Int32,System.Int32,System.Single,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatCorder_CreateMP4Recorder_m06F15A519F09E09D65225C72E4A382E749DF4BFD (String_t* ___path0, int32_t ___width1, int32_t ___height2, float ___frameRate3, int32_t ___sampleRate4, int32_t ___channelCount5, int32_t ___videoBitrate6, int32_t ___keyframeInterval7, int32_t ___audioBitRate8, intptr_t* ___recorder9, const RuntimeMethod* method) ;
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileStream__ctor_m78499F9BE2BE31DA34F123B4399AA457716BD6E6 (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* __this, String_t* ___path0, int32_t ___mode1, const RuntimeMethod* method) ;
// System.Void NatSuite.Recorders.WAVRecorder::CommitSamples(System.Single*,System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WAVRecorder_CommitSamples_m4A701AC11E61F028D4ECCA72BDB7A748F79AB25B (WAVRecorder_tEC358A5EA1ABA568D5BA5558CBC4D503EB6C2E47* __this, float* ___nativeBuffer0, int32_t ___sampleCount1, int64_t ___timestamp2, const RuntimeMethod* method) ;
// System.Void System.IO.UnmanagedMemoryStream::.ctor(System.Byte*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnmanagedMemoryStream__ctor_mBDBE61F9FD55A6F5C937E57F0FA854B12A2B5105 (UnmanagedMemoryStream_t83B223BCEF722E04E3AB3A7F6B73416F59BE630D* __this, uint8_t* ___pointer0, int64_t ___length1, const RuntimeMethod* method) ;
// System.Void System.IO.Stream::CopyTo(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_CopyTo_m61DC54FF3708C2B8AB5C5D63D300AA57ADA01999 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___destination0, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336 (const RuntimeMethod* method) ;
// System.Byte[] System.BitConverter::GetBytes(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BitConverter_GetBytes_m2C128EDCD9B369F1429E1A0B7F687C98526115BF (int64_t ___value0, const RuntimeMethod* method) ;
// System.Byte[] System.BitConverter::GetBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BitConverter_GetBytes_m343FFC3DD8CF8D0139D0CAEB8ABB0A4D6DAA98F4 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Byte[] System.BitConverter::GetBytes(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BitConverter_GetBytes_m1B3C2C0E976C781ACD76AFA80DDBCA844FC73D50 (uint16_t ___value0, const RuntimeMethod* method) ;
// System.Void System.IO.Stream::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_Dispose_mCDB42F32A17541CCA6D3A5906827A401570B07A8 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromResult<System.String>(TResult)
inline Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* Task_FromResult_TisString_t_mCE9554AC91EE79860B171D4EFD627B46F6688E0C (String_t* ___result0, const RuntimeMethod* method)
{
	return ((  Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* (*) (String_t*, const RuntimeMethod*))Task_FromResult_TisRuntimeObject_mCF2DB27B9C76CBB36764EAAC15108BE463AC3A0A_gshared)(___result0, method);
}
// System.Void NatSuite.Recorders.Internal.NativeRecorder::OnRecorderCompleted(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeRecorder_OnRecorderCompleted_mE307AABFEA179EC797CDE00FD5FADC0A99072676 (intptr_t ___context0, intptr_t ___path1, const RuntimeMethod* method) ;
// System.Void NatSuite.Recorders.Internal.NatCorder::FrameSize(System.IntPtr,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatCorder_FrameSize_mDEB6D4B0B1974507130E91478F6802C7912C83DC (intptr_t ___recorder0, int32_t* ___width1, int32_t* ___height2, const RuntimeMethod* method) ;
// System.Void NatSuite.Recorders.Internal.NatCorder::CommitFrame(System.IntPtr,System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatCorder_CommitFrame_m29A388F563827D9EAB9396EFF1AC3CFE6CA0821A (intptr_t ___recorder0, void* ___pixelBuffer1, int64_t ___timestamp2, const RuntimeMethod* method) ;
// System.Void NatSuite.Recorders.Internal.NatCorder::CommitSamples(System.IntPtr,System.Single*,System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatCorder_CommitSamples_mB904D74E4EFCCF3149330AB6D459EC45E5B37874 (intptr_t ___recorder0, float* ___sampleBuffer1, int32_t ___sampleCount2, int64_t ___timestamp3, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.String>::.ctor()
inline void TaskCompletionSource_1__ctor_m1E0F0E41DAFB9401D33DE03A55F9BDC5565F0CF1 (TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372*, const RuntimeMethod*))TaskCompletionSource_1__ctor_mBF9A903AD14C4E9CF044B227776C532BA9C40D60_gshared)(__this, method);
}
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object,System.Runtime.InteropServices.GCHandleType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GCHandle_Alloc_m1FC35418B654D3F48B4F70D525EBD6A208A59075 (RuntimeObject* ___value0, int32_t ___type1, const RuntimeMethod* method) ;
// System.Void NatSuite.Recorders.Internal.NatCorder/RecordingHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordingHandler__ctor_mF3856ADEE508C55616713C629C1DA977FF9A5EE9 (RecordingHandler_t4482042BE3E54FBB6B0F1147F83E39F637BE15CC* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.GCHandle::op_Explicit(System.Runtime.InteropServices.GCHandle)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t GCHandle_op_Explicit_m67A1C3E8BC6C8163C5775AE62A514000D00CD9B6_inline (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___value0, const RuntimeMethod* method) ;
// System.Void NatSuite.Recorders.Internal.NatCorder::FinishWriting(System.IntPtr,NatSuite.Recorders.Internal.NatCorder/RecordingHandler,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatCorder_FinishWriting_m175CA50EF9A9F55E45A8C4C3657AF6C9AB4FE731 (intptr_t ___recorder0, RecordingHandler_t4482042BE3E54FBB6B0F1147F83E39F637BE15CC* ___handler1, intptr_t ___context2, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<System.String>::get_Task()
inline Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* TaskCompletionSource_1_get_Task_m11D993ACE1C12B89F69CA41E3BAAE3698C3AE587_inline (TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* (*) (TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372*, const RuntimeMethod*))TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_gshared_inline)(__this, method);
}
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GCHandle_op_Explicit_m500B99BF54D923E624C5235A4B370A37C8B7050C (intptr_t ___value0, const RuntimeMethod* method) ;
// System.Object System.Runtime.InteropServices.GCHandle::get_Target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.GCHandle::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// System.String System.Runtime.InteropServices.Marshal::PtrToStringAnsi(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Marshal_PtrToStringAnsi_m86CDF46D9E4810BD7DB9BB52C1036E24A7DD46EE (intptr_t ___ptr0, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.String>::SetResult(TResult)
inline void TaskCompletionSource_1_SetResult_mA4FD1E75C7272079BE7032F18BCDC158463FE3E1 (TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* __this, String_t* ___result0, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372*, String_t*, const RuntimeMethod*))TaskCompletionSource_1_SetResult_m948378015A7A0E42647452EB7003466406B831A4_gshared)(__this, ___result0, method);
}
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D (const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_m787EBC9B0862E7617DCD6CABD2147E61717EAC17 (const RuntimeMethod* method) ;
// System.String System.IO.Directory::GetCurrentDirectory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Directory_GetCurrentDirectory_m7EA69F721BEEC05DC0FBF8E9189990BF9F856363 (const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_Now_mC336498972C48439ADCD5C50D35FAE0F2A48B0F0 (const RuntimeMethod* method) ;
// System.String System.DateTime::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m6963A84785C320DA776C9FCFFEDAF26C8F1A8D78 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void NatSuite.Recorders.Inputs.AsyncTextureInput/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_m16B517147A3F078783AA1E2AB52FA065DDC19B30 (U3CU3Ec__DisplayClass1_0_t3ABA0E6ECB6BD52ED7476BB4902C1281B420F46D* __this, const RuntimeMethod* method) ;
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(System.Int32,System.Int32,System.Int32,UnityEngine.RenderTextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* RenderTexture_GetTemporary_mEB21705B78CAF6B8F1F6617453A8EE8A94498DE2 (int32_t ___width0, int32_t ___height1, int32_t ___depthBuffer2, int32_t ___format3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_Blit_m066854D684B6042B266D306E8E012D2C6C1787BE (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___dest1, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.Rendering.AsyncGPUReadbackRequest>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m347338A163A1A0840FA150F7ACCC029D46339777 (Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m347338A163A1A0840FA150F7ACCC029D46339777_gshared)(__this, ___object0, ___method1, method);
}
// UnityEngine.Rendering.AsyncGPUReadbackRequest UnityEngine.Rendering.AsyncGPUReadback::Request(UnityEngine.Texture,System.Int32,System.Action`1<UnityEngine.Rendering.AsyncGPUReadbackRequest>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncGPUReadbackRequest_t6A735D3E0F1DEF8F43EBD0E6FE550FAE564519C7 AsyncGPUReadback_Request_mCEA6A5F99AAA3AE580396779B4AB70BFF9AECC63 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___src0, int32_t ___mipIndex1, Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* ___callback2, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::ReleaseTemporary(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_ReleaseTemporary_m7D9B385460ED0D0CF7BCC033605CEBD60A1A232F (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___temp0, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> UnityEngine.Rendering.AsyncGPUReadbackRequest::GetData<System.Byte>(System.Int32)
inline NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF AsyncGPUReadbackRequest_GetData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mC365851AEF03CCC25905B4A8808B40AB3969C136 (AsyncGPUReadbackRequest_t6A735D3E0F1DEF8F43EBD0E6FE550FAE564519C7* __this, int32_t ___layer0, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF (*) (AsyncGPUReadbackRequest_t6A735D3E0F1DEF8F43EBD0E6FE550FAE564519C7*, int32_t, const RuntimeMethod*))AsyncGPUReadbackRequest_GetData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mC365851AEF03CCC25905B4A8808B40AB3969C136_gshared)(__this, ___layer0, method);
}
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafeReadOnlyPtr<System.Byte>(Unity.Collections.NativeArray`1<T>)
inline void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD9261CD83E770034D4BDBB7D3907F4648D8ED4E6 (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___nativeArray0, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD9261CD83E770034D4BDBB7D3907F4648D8ED4E6_gshared)(___nativeArray0, method);
}
// System.Void NatSuite.Recorders.Inputs.AudioInput::.ctor(NatSuite.Recorders.IMediaRecorder,NatSuite.Recorders.Clocks.IClock,UnityEngine.AudioListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioInput__ctor_mF68444BB5FBABF11D20349BC4BD4BE4EBC96B740 (AudioInput_t85AE05EC859D050D3150EE0DE8F147CBC4A89AB3* __this, RuntimeObject* ___recorder0, RuntimeObject* ___clock1, AudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35* ___audioListener2, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void NatSuite.Recorders.Inputs.AudioInput::.ctor(NatSuite.Recorders.IMediaRecorder,NatSuite.Recorders.Clocks.IClock,UnityEngine.GameObject,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioInput__ctor_m9E93E985572B38223F412E4B5CF62242514F0BD3 (AudioInput_t85AE05EC859D050D3150EE0DE8F147CBC4A89AB3* __this, RuntimeObject* ___recorder0, RuntimeObject* ___clock1, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject2, bool ___mute3, const RuntimeMethod* method) ;
// System.Void NatSuite.Recorders.Inputs.AudioInput::.ctor(NatSuite.Recorders.IMediaRecorder,NatSuite.Recorders.Clocks.IClock,UnityEngine.AudioSource,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioInput__ctor_m758CC383DAB0F998BBA4463CBC4B3EA789157094 (AudioInput_t85AE05EC859D050D3150EE0DE8F147CBC4A89AB3* __this, RuntimeObject* ___recorder0, RuntimeObject* ___clock1, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioSource2, bool ___mute3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<NatSuite.Recorders.Inputs.AudioInput/AudioInputAttachment>()
inline AudioInputAttachment_t3820CB977D17B35C265FDF8AECD34FAAA8BA29CC* GameObject_AddComponent_TisAudioInputAttachment_t3820CB977D17B35C265FDF8AECD34FAAA8BA29CC_m856DA540549B6374AFA00D863810FE75DA61DE75 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  AudioInputAttachment_t3820CB977D17B35C265FDF8AECD34FAAA8BA29CC* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void System.Action`1<System.Single[]>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m7120346688C18407FB878E541FC58DC27377537F (Action_1_t178AACF05C0F15030E739209018FAB278C66C6F3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t178AACF05C0F15030E739209018FAB278C66C6F3*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Int32 UnityEngine.AndroidJNI::AttachCurrentThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNI_AttachCurrentThread_mD5647083E547A77F9377BDB78106D426878A00E7 (const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Single[]>::Invoke(T)
inline void Action_1_Invoke_mBE0A0BDCAD5FEDE1C45EA97B02BFEB89E5AA3728_inline (Action_1_t178AACF05C0F15030E739209018FAB278C66C6F3* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t178AACF05C0F15030E739209018FAB278C66C6F3*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// UnityEngine.RenderTextureFormat UnityEngine.RenderTextureDescriptor::get_colorFormat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RenderTextureDescriptor_get_colorFormat_mF87FD5E3AC4688BBB921568003ED4A1FFB1614FF (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTextureDescriptor::set_colorFormat(UnityEngine.RenderTextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_colorFormat_m61B0FA4FCDE8A0F8A843DD6BF74097C21021C4FE (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void NatSuite.Recorders.Inputs.CameraInput::.ctor(NatSuite.Recorders.IMediaRecorder,NatSuite.Recorders.Clocks.IClock,UnityEngine.Camera[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraInput__ctor_mC7DB6707DAF54B0B929D00EAC9075E440A9FA945 (CameraInput_t2EC933CD283AC613F0C5586F86A23207AC4CB64B* __this, RuntimeObject* ___recorder0, RuntimeObject* ___clock1, CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* ___cameras2, const RuntimeMethod* method) ;
// NatSuite.Recorders.Inputs.ITextureInput NatSuite.Recorders.Inputs.CameraInput::CreateInput(NatSuite.Recorders.IMediaRecorder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CameraInput_CreateInput_mB507E1DA0726CDB8C021141EAC40391E5ADB5713 (RuntimeObject* ___recorder0, const RuntimeMethod* method) ;
// System.Void NatSuite.Recorders.Inputs.CameraInput::.ctor(NatSuite.Recorders.Inputs.ITextureInput,NatSuite.Recorders.Clocks.IClock,UnityEngine.Camera[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraInput__ctor_mFEA4077B99FE1A1BDA315A520355DFE3AD6A954A (CameraInput_t2EC933CD283AC613F0C5586F86A23207AC4CB64B* __this, RuntimeObject* ___input0, RuntimeObject* ___clock1, CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* ___cameras2, const RuntimeMethod* method) ;
// System.Void System.Comparison`1<UnityEngine.Camera>::.ctor(System.Object,System.IntPtr)
inline void Comparison_1__ctor_mA05E36D38BB75F9EF78F876803A19445EDF81CD5 (Comparison_1_t49BE56523BDD8BC22EF3396960546FE16DE7B11A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Comparison_1_t49BE56523BDD8BC22EF3396960546FE16DE7B11A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Comparison_1__ctor_mC1E8799BBCE317B612875123C9C894BD470BFE6A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Array::Sort<UnityEngine.Camera>(T[],System.Comparison`1<T>)
inline void Array_Sort_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mC3829F48821660B3A8FA95D9C77391134C6BF019 (CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* ___array0, Comparison_1_t49BE56523BDD8BC22EF3396960546FE16DE7B11A* ___comparison1, const RuntimeMethod* method)
{
	((  void (*) (CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B*, Comparison_1_t49BE56523BDD8BC22EF3396960546FE16DE7B11A*, const RuntimeMethod*))Array_Sort_TisRuntimeObject_mE0EF1BE62619EC75FDB798E19BF6961E7F623CB3_gshared)(___array0, ___comparison1, method);
}
// System.Void UnityEngine.RenderTextureDescriptor::.ctor(System.Int32,System.Int32,UnityEngine.RenderTextureFormat,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTextureDescriptor__ctor_mE27A3C225736C1F806C12A7C31C0DC66A0AFE61B (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, int32_t ___width0, int32_t ___height1, int32_t ___colorFormat2, int32_t ___depthBufferBits3, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTextureDescriptor::set_sRGB(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_sRGB_mAB7A494EE8C496C22B3BBBCB90488312D46F3429 (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.QualitySettings::get_antiAliasing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QualitySettings_get_antiAliasing_m1E38110F0E9A028F8CA4D3889D32E6B873912EB0 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Max(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Max_m8A4C189A6749DFE3ED8B66D9D3CACD8DB333974F_inline (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTextureDescriptor::set_msaaSamples(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_msaaSamples_m6910E09489372746391B14FBAF59A7237539D6C4_inline (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<NatSuite.Recorders.Inputs.CameraInput/CameraInputAttachment>()
inline CameraInputAttachment_t17BF4C0461502F1F1599A74377F5016D32421AF2* GameObject_AddComponent_TisCameraInputAttachment_t17BF4C0461502F1F1599A74377F5016D32421AF2_m14AB119591743F65098AAB5E2BD09F052BC819D1 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CameraInputAttachment_t17BF4C0461502F1F1599A74377F5016D32421AF2* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Collections.IEnumerator NatSuite.Recorders.Inputs.CameraInput::CommitFrames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CameraInput_CommitFrames_mB6390CE2057EC94403FF0CA0FCDC612958A4306E (CameraInput_t2EC933CD283AC613F0C5586F86A23207AC4CB64B* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void NatSuite.Recorders.Inputs.CameraInput/<CommitFrames>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCommitFramesU3Ed__15__ctor_m470FB10276A830AA393387977EA42BDB4BAC34DD (U3CCommitFramesU3Ed__15_t0F146564D0AC504754C6C93893D3D9A954D7F3C6* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// UnityEngine.RenderTexture UnityEngine.Camera::get_targetTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* Camera_get_targetTexture_mC856D7FF8351476068D04E245E4F08F5C56A55BD (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_targetTexture(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_targetTexture_mE6C740F21A72DA47FB5B1D31D208710738A836C4 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::Render()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_Render_m6089001EB6710DA9A21C87185D65922F13A24509 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SystemInfo::get_supportsAsyncGPUReadback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SystemInfo_get_supportsAsyncGPUReadback_mB4C08F57C9A314EF6DE70A1322486F9F9B06C1D1 (const RuntimeMethod* method) ;
// System.Void NatSuite.Recorders.Inputs.AsyncTextureInput::.ctor(NatSuite.Recorders.IMediaRecorder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTextureInput__ctor_mC41BFCA2A58AE733A482504F20E9EBC0B6A74A34 (AsyncTextureInput_t96F659D0E82E8AF3081EE7471E12DFB5C5A4F0A5* __this, RuntimeObject* ___recorder0, const RuntimeMethod* method) ;
// System.Void NatSuite.Recorders.Inputs.TextureInput::.ctor(NatSuite.Recorders.IMediaRecorder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureInput__ctor_m76E0113A4068F1194152B99D75C7A96001D022F2 (TextureInput_t0D646F396A8A82557F5D7C855E74889519B2B4A6* __this, RuntimeObject* ___recorder0, const RuntimeMethod* method) ;
// System.Void NatSuite.Recorders.Inputs.CameraInput/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m81FFDC0AEEC28DF5A13E034A972F53FC9AA30590 (U3CU3Ec_t65E9393167EC90097697389CCD12EA0898E4ED54* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_depth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_depth_mDF67FFF8ED61750467DFC4C6D8F236850AD1BB1D (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* __this, const RuntimeMethod* method) ;
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(UnityEngine.RenderTextureDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* RenderTexture_GetTemporary_m67446280ADE53A43FC26C671AFE7FE6912888CB5 (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 ___desc0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_mC3F84195D1DCEFC0536B3FBD40A8F8E865A4F32A (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___width0, int32_t ___height1, int32_t ___textureFormat2, bool ___mipChain3, bool ___linear4, const RuntimeMethod* method) ;
// UnityEngine.RenderTexture UnityEngine.RenderTexture::get_active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* RenderTexture_get_active_m2204DF860773F9A8CDFF92BDB35CEB72A0643345 (const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::set_active(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_active_m045EA53D62FBF79693265E33D14D8E0E8151A37E (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::ReadPixels(UnityEngine.Rect,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_ReadPixels_m7483DB211233F02E46418E9A6077487925F0024C (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___source0, int32_t ___destX1, int32_t ___destY2, bool ___recalculateMipMaps3, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> UnityEngine.Texture2D::GetRawTextureData<System.Byte>()
inline NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF Texture2D_GetRawTextureData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m225198C8CEB0AB84CF9FE0B40337778AA4C75608 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF (*) (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*, const RuntimeMethod*))Texture2D_GetRawTextureData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m225198C8CEB0AB84CF9FE0B40337778AA4C75608_gshared)(__this, method);
}
// System.TimeSpan System.Diagnostics.Stopwatch::get_Elapsed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A Stopwatch_get_Elapsed_mF16CCA2F9B7E2EAEFCAF8D81F44370DBAC1B2178 (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* __this, const RuntimeMethod* method) ;
// System.Int64 System.TimeSpan::get_Ticks()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t TimeSpan_get_Ticks_mC50131E57621F29FACC53B3241432ABB874FA1B5_inline (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Diagnostics.Stopwatch::get_IsRunning()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Stopwatch_get_IsRunning_mB1C465B7089DFB8A94BF56CC694F5EF72A55E5B6_inline (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* __this, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.Stopwatch::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch_Start_m35906A38C7D336CF9DD35854C7E170D762A55915 (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* __this, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.Stopwatch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch__ctor_mAFE6B2F45CF1C3469EF6D5307972BC098B473D0A (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* __this, const RuntimeMethod* method) ;
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_NatCorder_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL NCMediaRecorderFrameSize(intptr_t, int32_t*, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_NatCorder_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL NCMediaRecorderCommitFrame(intptr_t, void*, int64_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_NatCorder_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL NCMediaRecorderCommitSamples(intptr_t, float*, int32_t, int64_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_NatCorder_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL NCMediaRecorderFinishWriting(intptr_t, Il2CppMethodPointer, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_NatCorder_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL NCCreateMP4Recorder(char*, int32_t, int32_t, float, int32_t, int32_t, int32_t, int32_t, int32_t, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_NatCorder_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL NCCreateHEVCRecorder(char*, int32_t, int32_t, float, int32_t, int32_t, int32_t, int32_t, int32_t, intptr_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_NatCorder_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL NCCreateGIFRecorder(char*, int32_t, int32_t, float, intptr_t*);
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
// System.Void Microsoft.CodeAnalysis.EmbeddedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_mEC5F806C3792C492C116D5DE80D2D07E74DB11F9 (EmbeddedAttribute_t17EF2929E06D6E252A205C3BFEB989954CB7DCAB* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void System.Runtime.CompilerServices.IsUnmanagedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsUnmanagedAttribute__ctor_m845BB45528CA8BD60A72878036334C3FF9953AE6 (IsUnmanagedAttribute_t5094E85972975DFC1A4F11FFBA6E975C2A1B51F7* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void NatSuite.Recorders.GIFRecorder::.ctor(System.Int32,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GIFRecorder__ctor_m3E12C71A8C2E8D23FF76DF584F249307F28BB545 (GIFRecorder_tC16E0CC38C3663470CF0A4076A8C0D66C337DB90* __this, int32_t ___width0, int32_t ___height1, float ___frameDuration2, const RuntimeMethod* method) 
{
	{
		// ) : base(Create(width, height, frameDuration)) { }
		int32_t L_0 = ___width0;
		int32_t L_1 = ___height1;
		float L_2 = ___frameDuration2;
		intptr_t L_3;
		L_3 = GIFRecorder_Create_m8F800CD2610879074FE764036557C54878614880(L_0, L_1, L_2, NULL);
		NativeRecorder__ctor_m7FB0F5A570781DD826F2D9C83F6F27B74CA5F877(__this, L_3, NULL);
		// ) : base(Create(width, height, frameDuration)) { }
		return;
	}
}
// System.Void NatSuite.Recorders.GIFRecorder::CommitFrame(System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GIFRecorder_CommitFrame_mB8F68000EBDF41EA5808EB71828EB25F5A30A116 (GIFRecorder_tC16E0CC38C3663470CF0A4076A8C0D66C337DB90* __this, void* ___nativeBuffer0, int64_t ___timestamp1, const RuntimeMethod* method) 
{
	{
		// base.CommitFrame(nativeBuffer, timestamp);
		void* L_0 = ___nativeBuffer0;
		int64_t L_1 = ___timestamp1;
		NativeRecorder_CommitFrame_m157913F3860ADBA4D20DC4C9A2E918DCA595BD3B(__this, L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void NatSuite.Recorders.GIFRecorder::CommitSamples(System.Single[],System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GIFRecorder_CommitSamples_mB22266FD63A982866511F19E1A28DA95884E1BFB (GIFRecorder_tC16E0CC38C3663470CF0A4076A8C0D66C337DB90* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___sampleBuffer0, int64_t ___timestamp1, const RuntimeMethod* method) 
{
	{
		// base.CommitSamples(sampleBuffer, timestamp);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___sampleBuffer0;
		int64_t L_1 = ___timestamp1;
		NativeRecorder_CommitSamples_mF73B0CB85EFA8DE0FEDC3A7FC5A8FBCA1A422BDE(__this, L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void NatSuite.Recorders.GIFRecorder::CommitSamples(System.Single*,System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GIFRecorder_CommitSamples_m61662889743E87B2E187054F11B51241C730573F (GIFRecorder_tC16E0CC38C3663470CF0A4076A8C0D66C337DB90* __this, float* ___nativeBuffer0, int32_t ___sampleCount1, int64_t ___timestamp2, const RuntimeMethod* method) 
{
	{
		// base.CommitSamples(nativeBuffer, sampleCount, timestamp);
		float* L_0 = ___nativeBuffer0;
		int32_t L_1 = ___sampleCount1;
		int64_t L_2 = ___timestamp2;
		NativeRecorder_CommitSamples_m2A7FA2C79D4B842C5AD1F76CE9B738E9E72D2326(__this, L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.IntPtr NatSuite.Recorders.GIFRecorder::Create(System.Int32,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GIFRecorder_Create_m8F800CD2610879074FE764036557C54878614880 (int32_t ___width0, int32_t ___height1, float ___frameDuration2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CA4721FC9D82D780671DE2AB61257837402697D);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// NatCorder.CreateGIFRecorder(Utility.GetPath(@".gif"), width, height, frameDuration, out var recorder);
		String_t* L_0;
		L_0 = Utility_GetPath_m890864A644FBE33558777D65EDA3E35FBE54F1B5(_stringLiteral0CA4721FC9D82D780671DE2AB61257837402697D, NULL);
		int32_t L_1 = ___width0;
		int32_t L_2 = ___height1;
		float L_3 = ___frameDuration2;
		NatCorder_CreateGIFRecorder_mA916B8638821F82B766A8506064547D97577B5F6(L_0, L_1, L_2, L_3, (&V_0), NULL);
		// if (recorder != IntPtr.Zero)
		intptr_t L_4 = V_0;
		bool L_5;
		L_5 = IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1(L_4, (0), NULL);
		if (!L_5)
		{
			goto IL_0023;
		}
	}
	{
		// return recorder;
		intptr_t L_6 = V_0;
		return L_6;
	}

IL_0023:
	{
		// throw new InvalidOperationException(@"Failed to create GIFRecorder");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_7 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral925E896F2A445121600A77B1267364A2FC2F74F8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GIFRecorder_Create_m8F800CD2610879074FE764036557C54878614880_RuntimeMethod_var)));
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
// System.Void NatSuite.Recorders.HEVCRecorder::.ctor(System.Int32,System.Int32,System.Single,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HEVCRecorder__ctor_mC0628EB145EE0B989008CD6AE52F51C4D15BC83D (HEVCRecorder_tF7999A4FC7068E2E00CEC6123AD4CFE9924D252D* __this, int32_t ___width0, int32_t ___height1, float ___frameRate2, int32_t ___sampleRate3, int32_t ___channelCount4, int32_t ___videoBitRate5, int32_t ___keyframeInterval6, int32_t ___audioBitRate7, const RuntimeMethod* method) 
{
	{
		// ) : base(Create(width, height, frameRate, sampleRate, channelCount, videoBitRate, keyframeInterval, audioBitRate)) { }
		int32_t L_0 = ___width0;
		int32_t L_1 = ___height1;
		float L_2 = ___frameRate2;
		int32_t L_3 = ___sampleRate3;
		int32_t L_4 = ___channelCount4;
		int32_t L_5 = ___videoBitRate5;
		int32_t L_6 = ___keyframeInterval6;
		int32_t L_7 = ___audioBitRate7;
		intptr_t L_8;
		L_8 = HEVCRecorder_Create_mCB8AC21D90C5B07BC2277B8B284279B7F32AA050(L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, NULL);
		NativeRecorder__ctor_m7FB0F5A570781DD826F2D9C83F6F27B74CA5F877(__this, L_8, NULL);
		// ) : base(Create(width, height, frameRate, sampleRate, channelCount, videoBitRate, keyframeInterval, audioBitRate)) { }
		return;
	}
}
// System.IntPtr NatSuite.Recorders.HEVCRecorder::Create(System.Int32,System.Int32,System.Single,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t HEVCRecorder_Create_mCB8AC21D90C5B07BC2277B8B284279B7F32AA050 (int32_t ___width0, int32_t ___height1, float ___frameRate2, int32_t ___sampleRate3, int32_t ___channelCount4, int32_t ___videoBitRate5, int32_t ___keyframeInterval6, int32_t ___audioBitRate7, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3CC467A802D81D30CFCC13435F3C9EF52A777208);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (width % 2 != 0)
		int32_t L_0 = ___width0;
		if (!((int32_t)(L_0%2)))
		{
			goto IL_0015;
		}
	}
	{
		// throw new ArgumentException(@"HEVCRecorder width must be divisible by 2", nameof(width));
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_1 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral032439044D26AE70F7AABB9714F7C289E7FBEA63)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEBF5FE0CBF3EEA67902EEA700B7216E3DB0D8E84)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HEVCRecorder_Create_mCB8AC21D90C5B07BC2277B8B284279B7F32AA050_RuntimeMethod_var)));
	}

IL_0015:
	{
		// if (height % 2 != 0)
		int32_t L_2 = ___height1;
		if (!((int32_t)(L_2%2)))
		{
			goto IL_002a;
		}
	}
	{
		// throw new ArgumentException(@"HEVCRecorder height must be divisible by 2", nameof(height));
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEE690CB32125E5CF173F31F1580D50D6CB94A584)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral647E0FB2B5E859CC4BD7C73623B82C8EFABA2563)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HEVCRecorder_Create_mCB8AC21D90C5B07BC2277B8B284279B7F32AA050_RuntimeMethod_var)));
	}

IL_002a:
	{
		// NatCorder.CreateHEVCRecorder(
		//     Utility.GetPath(@".mp4"),
		//     width,
		//     height,
		//     frameRate,
		//     sampleRate,
		//     channelCount,
		//     videoBitRate,
		//     keyframeInterval,
		//     audioBitRate,
		//     out var recorder
		// );
		String_t* L_4;
		L_4 = Utility_GetPath_m890864A644FBE33558777D65EDA3E35FBE54F1B5(_stringLiteral3CC467A802D81D30CFCC13435F3C9EF52A777208, NULL);
		int32_t L_5 = ___width0;
		int32_t L_6 = ___height1;
		float L_7 = ___frameRate2;
		int32_t L_8 = ___sampleRate3;
		int32_t L_9 = ___channelCount4;
		int32_t L_10 = ___videoBitRate5;
		int32_t L_11 = ___keyframeInterval6;
		int32_t L_12 = ___audioBitRate7;
		NatCorder_CreateHEVCRecorder_m4F0D52AF26E6123AEA2528E7602CCE9DC09B5766(L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, (&V_0), NULL);
		// if (recorder == IntPtr.Zero)
		intptr_t L_13 = V_0;
		bool L_14;
		L_14 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_13, (0), NULL);
		if (!L_14)
		{
			goto IL_005f;
		}
	}
	{
		// throw new InvalidOperationException(@"Failed to create HEVCRecorder");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_15 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_15);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCCC60E81F0167838C6290E77F15D3061869FFBEF)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HEVCRecorder_Create_mCB8AC21D90C5B07BC2277B8B284279B7F32AA050_RuntimeMethod_var)));
	}

IL_005f:
	{
		// return recorder;
		intptr_t L_16 = V_0;
		return L_16;
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
// System.ValueTuple`2<System.Int32,System.Int32> NatSuite.Recorders.JPGRecorder::get_frameSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D JPGRecorder_get_frameSize_m52A148E7CAD4C1E86FE8F649420A59C2B3A26D19 (JPGRecorder_t1A5EC7A08AC34EFAFCD04AA71EEB72419F430A45* __this, const RuntimeMethod* method) 
{
	{
		// public (int width, int height) frameSize { get; private set; }
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_0 = __this->___U3CframeSizeU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void NatSuite.Recorders.JPGRecorder::set_frameSize(System.ValueTuple`2<System.Int32,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JPGRecorder_set_frameSize_mDD904FDA5E3C73D13FB4AE8B86C27BD0A19BCF09 (JPGRecorder_t1A5EC7A08AC34EFAFCD04AA71EEB72419F430A45* __this, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___value0, const RuntimeMethod* method) 
{
	{
		// public (int width, int height) frameSize { get; private set; }
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_0 = ___value0;
		__this->___U3CframeSizeU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Void NatSuite.Recorders.JPGRecorder::.ctor(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JPGRecorder__ctor_m4F5FDAA16F2DFFD344181192BD9E1A73A0E9616C (JPGRecorder_t1A5EC7A08AC34EFAFCD04AA71EEB72419F430A45* __this, int32_t ___width0, int32_t ___height1, int32_t ___quality2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0A28648201ABCDF216AD744C327E2ED8BDD80A22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t84C257E858DDB8EA0B6269E08AAD9A2A2018A551_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTuple_2__ctor_mF5D8FB18DBF2C4B2F879F8E8E12D8FB8FCDB5477_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public JPGRecorder (int width, int height, int quality = 80) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.frameSize = (width, height);
		int32_t L_0 = ___width0;
		int32_t L_1 = ___height1;
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_2;
		memset((&L_2), 0, sizeof(L_2));
		ValueTuple_2__ctor_mF5D8FB18DBF2C4B2F879F8E8E12D8FB8FCDB5477((&L_2), L_0, L_1, /*hidden argument*/ValueTuple_2__ctor_mF5D8FB18DBF2C4B2F879F8E8E12D8FB8FCDB5477_RuntimeMethod_var);
		JPGRecorder_set_frameSize_mDD904FDA5E3C73D13FB4AE8B86C27BD0A19BCF09_inline(__this, L_2, NULL);
		// this.quality = Mathf.Clamp(quality, 1, 100);
		int32_t L_3 = ___quality2;
		int32_t L_4;
		L_4 = Mathf_Clamp_mA48718D9A20D8972EDD41714CEF6BBF864F442EA_inline(L_3, 1, ((int32_t)100), NULL);
		__this->___quality_1 = L_4;
		// this.writeTasks = new List<Task>();
		List_1_t84C257E858DDB8EA0B6269E08AAD9A2A2018A551* L_5 = (List_1_t84C257E858DDB8EA0B6269E08AAD9A2A2018A551*)il2cpp_codegen_object_new(List_1_t84C257E858DDB8EA0B6269E08AAD9A2A2018A551_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_m0A28648201ABCDF216AD744C327E2ED8BDD80A22(L_5, List_1__ctor_m0A28648201ABCDF216AD744C327E2ED8BDD80A22_RuntimeMethod_var);
		__this->___writeTasks_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___writeTasks_3), (void*)L_5);
		// this.recordingPath = Utility.GetPath(string.Empty);
		String_t* L_6 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		String_t* L_7;
		L_7 = Utility_GetPath_m890864A644FBE33558777D65EDA3E35FBE54F1B5(L_6, NULL);
		__this->___recordingPath_2 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___recordingPath_2), (void*)L_7);
		// Directory.CreateDirectory(recordingPath);
		String_t* L_8 = __this->___recordingPath_2;
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_9;
		L_9 = Directory_CreateDirectory_mD89FECDFB25BC52F866DC0B1BB8552334FB249D2(L_8, NULL);
		// }
		return;
	}
}
// System.Void NatSuite.Recorders.JPGRecorder::CommitFrame(System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JPGRecorder_CommitFrame_m28C96E125F436BAC725C87C92B7EB011AD7C80E5 (JPGRecorder_t1A5EC7A08AC34EFAFCD04AA71EEB72419F430A45* __this, void* ___nativeBuffer0, int64_t ___timestamp1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageConversion_EncodeNativeArrayToJPG_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDA433D0DE7FF15268FB8FC36554372068A2C7C7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0F464591A24D8751D7900E64ADEEAB1A08A42A13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m43F0AE90A986A434C9B62B82562A021E0B5065C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_ToArray_m2E1BCF853BB72AAB8C219A18582F0AB2FA05CF1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_U3CCommitFrameU3Eb__0_m9DA335675E098F525B4242FA578EB20C42FA0613_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_t8D47B2C9522EE66235032697385E820B12EEC751_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF V_0;
	memset((&V_0), 0, sizeof(V_0));
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* V_1 = NULL;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	{
		U3CU3Ec__DisplayClass6_0_t8D47B2C9522EE66235032697385E820B12EEC751* L_0 = (U3CU3Ec__DisplayClass6_0_t8D47B2C9522EE66235032697385E820B12EEC751*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass6_0_t8D47B2C9522EE66235032697385E820B12EEC751_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass6_0__ctor_mEBC6D0C1A3753C8F736C6BB88D1FADAB6A424A72(L_0, NULL);
		U3CU3Ec__DisplayClass6_0_t8D47B2C9522EE66235032697385E820B12EEC751* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		// var nativeArray = NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<byte>(
		//     nativeBuffer,
		//     frameSize.width * frameSize.height * 4,
		//     Allocator.None
		// );
		void* L_2 = ___nativeBuffer0;
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_3;
		L_3 = JPGRecorder_get_frameSize_m52A148E7CAD4C1E86FE8F649420A59C2B3A26D19_inline(__this, NULL);
		int32_t L_4 = L_3.___Item1_0;
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_5;
		L_5 = JPGRecorder_get_frameSize_m52A148E7CAD4C1E86FE8F649420A59C2B3A26D19_inline(__this, NULL);
		int32_t L_6 = L_5.___Item2_1;
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_7;
		L_7 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m43F0AE90A986A434C9B62B82562A021E0B5065C0(L_2, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_4, L_6)), 4)), 1, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m43F0AE90A986A434C9B62B82562A021E0B5065C0_RuntimeMethod_var);
		V_0 = L_7;
		// var buffer = ImageConversion.EncodeNativeArrayToJPG(
		//     nativeArray,
		//     GraphicsFormat.R8G8B8A8_UNorm,
		//     (uint)frameSize.width,
		//     (uint)frameSize.height,
		//     quality: quality
		// ).ToArray();
		U3CU3Ec__DisplayClass6_0_t8D47B2C9522EE66235032697385E820B12EEC751* L_8 = L_1;
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_9 = V_0;
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_10;
		L_10 = JPGRecorder_get_frameSize_m52A148E7CAD4C1E86FE8F649420A59C2B3A26D19_inline(__this, NULL);
		int32_t L_11 = L_10.___Item1_0;
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_12;
		L_12 = JPGRecorder_get_frameSize_m52A148E7CAD4C1E86FE8F649420A59C2B3A26D19_inline(__this, NULL);
		int32_t L_13 = L_12.___Item2_1;
		int32_t L_14 = __this->___quality_1;
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_15;
		L_15 = ImageConversion_EncodeNativeArrayToJPG_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDA433D0DE7FF15268FB8FC36554372068A2C7C7F(L_9, 8, L_11, L_13, 0, L_14, ImageConversion_EncodeNativeArrayToJPG_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDA433D0DE7FF15268FB8FC36554372068A2C7C7F_RuntimeMethod_var);
		V_2 = L_15;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16;
		L_16 = NativeArray_1_ToArray_m2E1BCF853BB72AAB8C219A18582F0AB2FA05CF1F((&V_2), NativeArray_1_ToArray_m2E1BCF853BB72AAB8C219A18582F0AB2FA05CF1F_RuntimeMethod_var);
		NullCheck(L_8);
		L_8->___buffer_2 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___buffer_2), (void*)L_16);
		// var frameIndex = ++frameCount;
		U3CU3Ec__DisplayClass6_0_t8D47B2C9522EE66235032697385E820B12EEC751* L_17 = L_8;
		int32_t L_18 = __this->___frameCount_4;
		V_3 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		int32_t L_19 = V_3;
		__this->___frameCount_4 = L_19;
		int32_t L_20 = V_3;
		NullCheck(L_17);
		L_17->___frameIndex_1 = L_20;
		// var task = Task.Run(() => File.WriteAllBytes(Path.Combine(recordingPath, $"{frameIndex}.jpg"), buffer));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_21 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_21, L_17, (intptr_t)((void*)U3CU3Ec__DisplayClass6_0_U3CCommitFrameU3Eb__0_m9DA335675E098F525B4242FA578EB20C42FA0613_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_22;
		L_22 = Task_Run_mBD6EF33232D13F2183A43D0A526A220C4F0181B4(L_21, NULL);
		V_1 = L_22;
		// writeTasks.Add(task);
		List_1_t84C257E858DDB8EA0B6269E08AAD9A2A2018A551* L_23 = __this->___writeTasks_3;
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_24 = V_1;
		NullCheck(L_23);
		List_1_Add_m0F464591A24D8751D7900E64ADEEAB1A08A42A13_inline(L_23, L_24, List_1_Add_m0F464591A24D8751D7900E64ADEEAB1A08A42A13_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Threading.Tasks.Task`1<System.String> NatSuite.Recorders.JPGRecorder::FinishWriting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* JPGRecorder_FinishWriting_mA0867867FFE4CB0E29EFEB82AA0C9FD68E734BA9 (JPGRecorder_t1A5EC7A08AC34EFAFCD04AA71EEB72419F430A45* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m4CB15D06286C7AA0BA8318800D23A9D574CBE0E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CFinishWritingU3Ed__7_tCF1C740DCA06F81A7E222E908BB9180A6E3A4C41_m3B9874F29E2EA18E7AB7ABE57F3AD1BB9AAABD91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_m01EB243CF4396C9A2645F71572B47CF12151974E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CFinishWritingU3Ed__7_tCF1C740DCA06F81A7E222E908BB9180A6E3A4C41 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_m4CB15D06286C7AA0BA8318800D23A9D574CBE0E8(AsyncTaskMethodBuilder_1_Create_m4CB15D06286C7AA0BA8318800D23A9D574CBE0E8_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CFinishWritingU3Ed__7_tCF1C740DCA06F81A7E222E908BB9180A6E3A4C41_m3B9874F29E2EA18E7AB7ABE57F3AD1BB9AAABD91(L_1, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CFinishWritingU3Ed__7_tCF1C740DCA06F81A7E222E908BB9180A6E3A4C41_m3B9874F29E2EA18E7AB7ABE57F3AD1BB9AAABD91_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* L_2 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* L_3;
		L_3 = AsyncTaskMethodBuilder_1_get_Task_m01EB243CF4396C9A2645F71572B47CF12151974E(L_2, AsyncTaskMethodBuilder_1_get_Task_m01EB243CF4396C9A2645F71572B47CF12151974E_RuntimeMethod_var);
		return L_3;
	}
}
// System.Void NatSuite.Recorders.JPGRecorder::NatSuite.Recorders.IMediaRecorder.CommitSamples(System.Single[],System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JPGRecorder_NatSuite_Recorders_IMediaRecorder_CommitSamples_m236B509410C903739DC6839E0D2372A85CBCACBF (JPGRecorder_t1A5EC7A08AC34EFAFCD04AA71EEB72419F430A45* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___sampleBuffer0, int64_t ___timestamp1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMediaRecorder_t075A0EFCE0700DA3B7600BCC859EFCA50D6CB39A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float* V_0 = NULL;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_1 = NULL;
	{
		// fixed (float* baseAddress = sampleBuffer)
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___sampleBuffer0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = L_0;
		V_1 = L_1;
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = V_1;
		NullCheck(L_2);
		if (((int32_t)(((RuntimeArray*)L_2)->max_length)))
		{
			goto IL_000f;
		}
	}

IL_000a:
	{
		V_0 = (float*)((uintptr_t)0);
		goto IL_0018;
	}

IL_000f:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = V_1;
		NullCheck(L_3);
		V_0 = (float*)((uintptr_t)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0018:
	{
		// (this as IMediaRecorder).CommitSamples(baseAddress, sampleBuffer.Length, timestamp);
		float* L_4 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = ___sampleBuffer0;
		NullCheck(L_5);
		int64_t L_6 = ___timestamp1;
		InterfaceActionInvoker3< float*, int32_t, int64_t >::Invoke(4 /* System.Void NatSuite.Recorders.IMediaRecorder::CommitSamples(System.Single*,System.Int32,System.Int64) */, IMediaRecorder_t075A0EFCE0700DA3B7600BCC859EFCA50D6CB39A_il2cpp_TypeInfo_var, __this, L_4, ((int32_t)(((RuntimeArray*)L_5)->max_length)), L_6);
		V_1 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)NULL;
		// }
		return;
	}
}
// System.Void NatSuite.Recorders.JPGRecorder::NatSuite.Recorders.IMediaRecorder.CommitSamples(System.Single*,System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JPGRecorder_NatSuite_Recorders_IMediaRecorder_CommitSamples_mF0F26BD268F33214B5DC53C028F1CC1D122A2E4E (JPGRecorder_t1A5EC7A08AC34EFAFCD04AA71EEB72419F430A45* __this, float* ___sampleBuffer0, int32_t ___sampleCount1, int64_t ___timestamp2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5AFEDBA9A699B056BA293F7275384300FA0D71F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogError("NatCorder Error: JPGRecorder does not support committing audio samples");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteralC5AFEDBA9A699B056BA293F7275384300FA0D71F, NULL);
		// }
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
// System.Void NatSuite.Recorders.JPGRecorder/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_mEBC6D0C1A3753C8F736C6BB88D1FADAB6A424A72 (U3CU3Ec__DisplayClass6_0_t8D47B2C9522EE66235032697385E820B12EEC751* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void NatSuite.Recorders.JPGRecorder/<>c__DisplayClass6_0::<CommitFrame>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0_U3CCommitFrameU3Eb__0_m9DA335675E098F525B4242FA578EB20C42FA0613 (U3CU3Ec__DisplayClass6_0_t8D47B2C9522EE66235032697385E820B12EEC751* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral589E32EA81914C1451BD9F2B02A23487D39F49E7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var task = Task.Run(() => File.WriteAllBytes(Path.Combine(recordingPath, $"{frameIndex}.jpg"), buffer));
		JPGRecorder_t1A5EC7A08AC34EFAFCD04AA71EEB72419F430A45* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		String_t* L_1 = L_0->___recordingPath_2;
		int32_t L_2 = __this->___frameIndex_1;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5;
		L_5 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral589E32EA81914C1451BD9F2B02A23487D39F49E7, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_6;
		L_6 = Path_Combine_m64754D4E08990CE1EBC41CDF197807EE4B115474(L_1, L_5, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___buffer_2;
		File_WriteAllBytes_m72C1A24339B30F84A655E6BF516AE1638B2C4668(L_6, L_7, NULL);
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
// System.Void NatSuite.Recorders.JPGRecorder/<FinishWriting>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFinishWritingU3Ed__7_MoveNext_m5CBC3AF74C258FE56638F1A303E74F5B40214FBD (U3CFinishWritingU3Ed__7_tCF1C740DCA06F81A7E222E908BB9180A6E3A4C41* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CFinishWritingU3Ed__7_tCF1C740DCA06F81A7E222E908BB9180A6E3A4C41_m4AD49CB19ED1F892CBF2B3BAB0A4827DDC36FE63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mB79121C0ACAC704500FAA7350ED0FE6604DDA05E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	JPGRecorder_t1A5EC7A08AC34EFAFCD04AA71EEB72419F430A45* V_1 = NULL;
	String_t* V_2 = NULL;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		JPGRecorder_t1A5EC7A08AC34EFAFCD04AA71EEB72419F430A45* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_004b_1;
			}
		}
		{
			// await Task.WhenAll(writeTasks);
			JPGRecorder_t1A5EC7A08AC34EFAFCD04AA71EEB72419F430A45* L_3 = V_1;
			NullCheck(L_3);
			List_1_t84C257E858DDB8EA0B6269E08AAD9A2A2018A551* L_4 = L_3->___writeTasks_3;
			il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_5;
			L_5 = Task_WhenAll_m5F2F68F0C44E2A7750AD51DDB00787DDF41EDA7D(L_4, NULL);
			NullCheck(L_5);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_6;
			L_6 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_5, NULL);
			V_3 = L_6;
			bool L_7;
			L_7 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_3), NULL);
			if (L_7)
			{
				goto IL_0067_1;
			}
		}
		{
			int32_t L_8 = 0;
			V_0 = L_8;
			__this->___U3CU3E1__state_0 = L_8;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_9 = V_3;
			__this->___U3CU3Eu__1_3 = L_9;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* L_10 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CFinishWritingU3Ed__7_tCF1C740DCA06F81A7E222E908BB9180A6E3A4C41_m4AD49CB19ED1F892CBF2B3BAB0A4827DDC36FE63(L_10, (&V_3), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CFinishWritingU3Ed__7_tCF1C740DCA06F81A7E222E908BB9180A6E3A4C41_m4AD49CB19ED1F892CBF2B3BAB0A4827DDC36FE63_RuntimeMethod_var);
			goto IL_00a4;
		}

IL_004b_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_11 = __this->___U3CU3Eu__1_3;
			V_3 = L_11;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_12 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_12, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_13 = (-1);
			V_0 = L_13;
			__this->___U3CU3E1__state_0 = L_13;
		}

IL_0067_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_3), NULL);
			// return recordingPath;
			JPGRecorder_t1A5EC7A08AC34EFAFCD04AA71EEB72419F430A45* L_14 = V_1;
			NullCheck(L_14);
			String_t* L_15 = L_14->___recordingPath_2;
			V_2 = L_15;
			goto IL_0090;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0077;
		}
		throw e;
	}

CATCH_0077:
	{// begin catch(System.Exception)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* L_16 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_17 = V_4;
		AsyncTaskMethodBuilder_1_SetException_m897218C2DB8D7BA446EB263573085805B8F0638C(L_16, L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m897218C2DB8D7BA446EB263573085805B8F0638C_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00a4;
	}// end catch (depth: 1)

IL_0090:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* L_18 = (&__this->___U3CU3Et__builder_1);
		String_t* L_19 = V_2;
		AsyncTaskMethodBuilder_1_SetResult_mB79121C0ACAC704500FAA7350ED0FE6604DDA05E(L_18, L_19, AsyncTaskMethodBuilder_1_SetResult_mB79121C0ACAC704500FAA7350ED0FE6604DDA05E_RuntimeMethod_var);
	}

IL_00a4:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CFinishWritingU3Ed__7_MoveNext_m5CBC3AF74C258FE56638F1A303E74F5B40214FBD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CFinishWritingU3Ed__7_tCF1C740DCA06F81A7E222E908BB9180A6E3A4C41* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CFinishWritingU3Ed__7_tCF1C740DCA06F81A7E222E908BB9180A6E3A4C41*>(__this + _offset);
	U3CFinishWritingU3Ed__7_MoveNext_m5CBC3AF74C258FE56638F1A303E74F5B40214FBD(_thisAdjusted, method);
}
// System.Void NatSuite.Recorders.JPGRecorder/<FinishWriting>d__7::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFinishWritingU3Ed__7_SetStateMachine_mE877E6B7F3CC15B769DBE35FDB3887208F38F3D7 (U3CFinishWritingU3Ed__7_tCF1C740DCA06F81A7E222E908BB9180A6E3A4C41* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_mE4D48B78E50CA2A3650A856ACF86A3CFBA249C30_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_tA28B0962049DC249BEC0054E2394B1962E28E90E* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_mE4D48B78E50CA2A3650A856ACF86A3CFBA249C30(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_mE4D48B78E50CA2A3650A856ACF86A3CFBA249C30_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CFinishWritingU3Ed__7_SetStateMachine_mE877E6B7F3CC15B769DBE35FDB3887208F38F3D7_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CFinishWritingU3Ed__7_tCF1C740DCA06F81A7E222E908BB9180A6E3A4C41* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CFinishWritingU3Ed__7_tCF1C740DCA06F81A7E222E908BB9180A6E3A4C41*>(__this + _offset);
	U3CFinishWritingU3Ed__7_SetStateMachine_mE877E6B7F3CC15B769DBE35FDB3887208F38F3D7(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NatSuite.Recorders.MP4Recorder::.ctor(System.Int32,System.Int32,System.Single,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MP4Recorder__ctor_mA902D5707599D71EC5130AB022ED362E47B91913 (MP4Recorder_tA916D815A1F3E89B8437E6EB7FB09C896B5BBC94* __this, int32_t ___width0, int32_t ___height1, float ___frameRate2, int32_t ___sampleRate3, int32_t ___channelCount4, int32_t ___videoBitRate5, int32_t ___keyframeInterval6, int32_t ___audioBitRate7, const RuntimeMethod* method) 
{
	{
		// ) : base(Create(width, height, frameRate, sampleRate, channelCount, videoBitRate, keyframeInterval, audioBitRate)) { }
		int32_t L_0 = ___width0;
		int32_t L_1 = ___height1;
		float L_2 = ___frameRate2;
		int32_t L_3 = ___sampleRate3;
		int32_t L_4 = ___channelCount4;
		int32_t L_5 = ___videoBitRate5;
		int32_t L_6 = ___keyframeInterval6;
		int32_t L_7 = ___audioBitRate7;
		intptr_t L_8;
		L_8 = MP4Recorder_Create_m0BA2A64C8621196A89BD73507395BCACE62DFDFE(L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, NULL);
		NativeRecorder__ctor_m7FB0F5A570781DD826F2D9C83F6F27B74CA5F877(__this, L_8, NULL);
		// ) : base(Create(width, height, frameRate, sampleRate, channelCount, videoBitRate, keyframeInterval, audioBitRate)) { }
		return;
	}
}
// System.IntPtr NatSuite.Recorders.MP4Recorder::Create(System.Int32,System.Int32,System.Single,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t MP4Recorder_Create_m0BA2A64C8621196A89BD73507395BCACE62DFDFE (int32_t ___width0, int32_t ___height1, float ___frameRate2, int32_t ___sampleRate3, int32_t ___channelCount4, int32_t ___videoBitRate5, int32_t ___keyframeInterval6, int32_t ___audioBitRate7, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3CC467A802D81D30CFCC13435F3C9EF52A777208);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (width % 2 != 0)
		int32_t L_0 = ___width0;
		if (!((int32_t)(L_0%2)))
		{
			goto IL_0015;
		}
	}
	{
		// throw new ArgumentException(@"MP4Recorder width must be divisible by 2", nameof(width));
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_1 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE9268471E97C5632747DCCD1D08EE3791D238A8E)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEBF5FE0CBF3EEA67902EEA700B7216E3DB0D8E84)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MP4Recorder_Create_m0BA2A64C8621196A89BD73507395BCACE62DFDFE_RuntimeMethod_var)));
	}

IL_0015:
	{
		// if (height % 2 != 0)
		int32_t L_2 = ___height1;
		if (!((int32_t)(L_2%2)))
		{
			goto IL_002a;
		}
	}
	{
		// throw new ArgumentException(@"MP4Recorder height must be divisible by 2", nameof(height));
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3CD3D5F01224EC8D8396528954ADD021C5BB8DC4)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral647E0FB2B5E859CC4BD7C73623B82C8EFABA2563)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MP4Recorder_Create_m0BA2A64C8621196A89BD73507395BCACE62DFDFE_RuntimeMethod_var)));
	}

IL_002a:
	{
		// NatCorder.CreateMP4Recorder(
		//     Utility.GetPath(@".mp4"),
		//     width,
		//     height,
		//     frameRate,
		//     sampleRate,
		//     channelCount,
		//     videoBitRate,
		//     keyframeInterval,
		//     audioBitRate,
		//     out var recorder
		// );
		String_t* L_4;
		L_4 = Utility_GetPath_m890864A644FBE33558777D65EDA3E35FBE54F1B5(_stringLiteral3CC467A802D81D30CFCC13435F3C9EF52A777208, NULL);
		int32_t L_5 = ___width0;
		int32_t L_6 = ___height1;
		float L_7 = ___frameRate2;
		int32_t L_8 = ___sampleRate3;
		int32_t L_9 = ___channelCount4;
		int32_t L_10 = ___videoBitRate5;
		int32_t L_11 = ___keyframeInterval6;
		int32_t L_12 = ___audioBitRate7;
		NatCorder_CreateMP4Recorder_m06F15A519F09E09D65225C72E4A382E749DF4BFD(L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, (&V_0), NULL);
		// if (recorder == IntPtr.Zero)
		intptr_t L_13 = V_0;
		bool L_14;
		L_14 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_13, (0), NULL);
		if (!L_14)
		{
			goto IL_005f;
		}
	}
	{
		// throw new InvalidOperationException(@"Failed to create MP4Recorder");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_15 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_15);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8BD2893CB841B67CA243CFCB6AE6DE947F69AA77)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MP4Recorder_Create_m0BA2A64C8621196A89BD73507395BCACE62DFDFE_RuntimeMethod_var)));
	}

IL_005f:
	{
		// return recorder;
		intptr_t L_16 = V_0;
		return L_16;
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
// System.ValueTuple`2<System.Int32,System.Int32> NatSuite.Recorders.WAVRecorder::get_frameSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D WAVRecorder_get_frameSize_m9082B80BB9F8626CD2E1BC27B616349EB3DF5C49 (WAVRecorder_tEC358A5EA1ABA568D5BA5558CBC4D503EB6C2E47* __this, const RuntimeMethod* method) 
{
	ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public (int width, int height) frameSize => default;
		il2cpp_codegen_initobj((&V_0), sizeof(ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D));
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_0 = V_0;
		return L_0;
	}
}
// System.Void NatSuite.Recorders.WAVRecorder::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WAVRecorder__ctor_mCA295415812C8C8D7003334C1AC5EFA4C28E08C8 (WAVRecorder_tEC358A5EA1ABA568D5BA5558CBC4D503EB6C2E47* __this, int32_t ___sampleRate0, int32_t ___channelCount1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD36877C5F51DFCF27BD6E50EFE17F811114D9198);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// public WAVRecorder (int sampleRate, int channelCount) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.sampleRate = sampleRate;
		int32_t L_0 = ___sampleRate0;
		__this->___sampleRate_0 = L_0;
		// this.channelCount = channelCount;
		int32_t L_1 = ___channelCount1;
		__this->___channelCount_1 = L_1;
		// this.stream = new FileStream(Utility.GetPath(@".wav"), FileMode.Create);
		String_t* L_2;
		L_2 = Utility_GetPath_m890864A644FBE33558777D65EDA3E35FBE54F1B5(_stringLiteralD36877C5F51DFCF27BD6E50EFE17F811114D9198, NULL);
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_3 = (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8*)il2cpp_codegen_object_new(FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		FileStream__ctor_m78499F9BE2BE31DA34F123B4399AA457716BD6E6(L_3, L_2, 2, NULL);
		__this->___stream_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___stream_2), (void*)L_3);
		// this.sampleCount = 0;
		__this->___sampleCount_3 = 0;
		// var header = new byte[44];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)44));
		V_0 = L_4;
		// stream.Write(header, 0, header.Length);
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_5 = __this->___stream_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		NullCheck(L_7);
		NullCheck(L_5);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_5, L_6, 0, ((int32_t)(((RuntimeArray*)L_7)->max_length)));
		// }
		return;
	}
}
// System.Void NatSuite.Recorders.WAVRecorder::CommitSamples(System.Single[],System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WAVRecorder_CommitSamples_m3E229040EDCBF5D38E0285DEC3C823DDA14504FB (WAVRecorder_tEC358A5EA1ABA568D5BA5558CBC4D503EB6C2E47* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___sampleBuffer0, int64_t ___timestamp1, const RuntimeMethod* method) 
{
	float* V_0 = NULL;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_1 = NULL;
	{
		// fixed (float* baseAddress = sampleBuffer)
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___sampleBuffer0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = L_0;
		V_1 = L_1;
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = V_1;
		NullCheck(L_2);
		if (((int32_t)(((RuntimeArray*)L_2)->max_length)))
		{
			goto IL_000f;
		}
	}

IL_000a:
	{
		V_0 = (float*)((uintptr_t)0);
		goto IL_0018;
	}

IL_000f:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = V_1;
		NullCheck(L_3);
		V_0 = (float*)((uintptr_t)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0018:
	{
		// CommitSamples(baseAddress, sampleBuffer.Length, timestamp);
		float* L_4 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = ___sampleBuffer0;
		NullCheck(L_5);
		int64_t L_6 = ___timestamp1;
		WAVRecorder_CommitSamples_m4A701AC11E61F028D4ECCA72BDB7A748F79AB25B(__this, L_4, ((int32_t)(((RuntimeArray*)L_5)->max_length)), L_6, NULL);
		V_1 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)NULL;
		// }
		return;
	}
}
// System.Void NatSuite.Recorders.WAVRecorder::CommitSamples(System.Single*,System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WAVRecorder_CommitSamples_m4A701AC11E61F028D4ECCA72BDB7A748F79AB25B (WAVRecorder_tEC358A5EA1ABA568D5BA5558CBC4D503EB6C2E47* __this, float* ___nativeBuffer0, int32_t ___sampleCount1, int64_t ___timestamp2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnmanagedMemoryStream_t83B223BCEF722E04E3AB3A7F6B73416F59BE630D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int16_t* V_0 = NULL;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// fixed (short* shortBuffer = new short[sampleCount]) {
		int32_t L_0 = ___sampleCount1;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_1 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var, (uint32_t)L_0);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_2 = L_1;
		V_1 = L_2;
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_3 = V_1;
		NullCheck(L_3);
		if (((int32_t)(((RuntimeArray*)L_3)->max_length)))
		{
			goto IL_0014;
		}
	}

IL_000f:
	{
		V_0 = (int16_t*)((uintptr_t)0);
		goto IL_001d;
	}

IL_0014:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_4 = V_1;
		NullCheck(L_4);
		V_0 = (int16_t*)((uintptr_t)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_001d:
	{
		// for (var i = 0; i < sampleCount; ++i)
		V_2 = 0;
		goto IL_003a;
	}

IL_0021:
	{
		// shortBuffer[i] = (short)(nativeBuffer[i] * short.MaxValue);
		int16_t* L_5 = V_0;
		int32_t L_6 = V_2;
		float* L_7 = ___nativeBuffer0;
		int32_t L_8 = V_2;
		float L_9 = *((float*)((float*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), 4)))));
		*((int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_6), 2))))) = (int16_t)il2cpp_codegen_cast_double_to_int<int16_t>(((float)il2cpp_codegen_multiply(L_9, (32767.0f))));
		// for (var i = 0; i < sampleCount; ++i)
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_003a:
	{
		// for (var i = 0; i < sampleCount; ++i)
		int32_t L_11 = V_2;
		int32_t L_12 = ___sampleCount1;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0021;
		}
	}
	{
		// new UnmanagedMemoryStream((byte*)shortBuffer, sampleCount * sizeof(short)).CopyTo(stream);
		int16_t* L_13 = V_0;
		int32_t L_14 = ___sampleCount1;
		UnmanagedMemoryStream_t83B223BCEF722E04E3AB3A7F6B73416F59BE630D* L_15 = (UnmanagedMemoryStream_t83B223BCEF722E04E3AB3A7F6B73416F59BE630D*)il2cpp_codegen_object_new(UnmanagedMemoryStream_t83B223BCEF722E04E3AB3A7F6B73416F59BE630D_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		UnmanagedMemoryStream__ctor_mBDBE61F9FD55A6F5C937E57F0FA854B12A2B5105(L_15, (uint8_t*)L_13, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_14, 2))), NULL);
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_16 = __this->___stream_2;
		NullCheck(L_15);
		Stream_CopyTo_m61DC54FF3708C2B8AB5C5D63D300AA57ADA01999(L_15, L_16, NULL);
		V_1 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)NULL;
		// this.sampleCount += sampleCount;
		int32_t L_17 = __this->___sampleCount_3;
		int32_t L_18 = ___sampleCount1;
		__this->___sampleCount_3 = ((int32_t)il2cpp_codegen_add(L_17, L_18));
		// }
		return;
	}
}
// System.Threading.Tasks.Task`1<System.String> NatSuite.Recorders.WAVRecorder::FinishWriting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* WAVRecorder_FinishWriting_m6E21C0B53C3F0273C7407CD6C30FB8B7C08D81C2 (WAVRecorder_tEC358A5EA1ABA568D5BA5558CBC4D503EB6C2E47* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_FromResult_TisString_t_mCE9554AC91EE79860B171D4EFD627B46F6688E0C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54E6A56386072FAEC10025F380D0CC554BAC0758);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA77FDC67CD3D8A6113B858540BA409191CDF979E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6894A493D9B16556A8AF2157FE4DFA1C4747B3F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// stream.Seek(0, SeekOrigin.Begin);
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_0 = __this->___stream_2;
		NullCheck(L_0);
		int64_t L_1;
		L_1 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(31 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_0, ((int64_t)0), 0);
		// stream.Write(Encoding.UTF8.GetBytes("RIFF"), 0, 4);
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_2 = __this->___stream_2;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_3;
		L_3 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		NullCheck(L_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_3, _stringLiteral54E6A56386072FAEC10025F380D0CC554BAC0758);
		NullCheck(L_2);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_2, L_4, 0, 4);
		// stream.Write(BitConverter.GetBytes(stream.Length - 8), 0, 4);
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_5 = __this->___stream_2;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_6 = __this->___stream_2;
		NullCheck(L_6);
		int64_t L_7;
		L_7 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, L_6);
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = BitConverter_GetBytes_m2C128EDCD9B369F1429E1A0B7F687C98526115BF(((int64_t)il2cpp_codegen_subtract(L_7, ((int64_t)8))), NULL);
		NullCheck(L_5);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_5, L_8, 0, 4);
		// stream.Write(Encoding.UTF8.GetBytes("WAVE"), 0, 4);
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_9 = __this->___stream_2;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_10;
		L_10 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		NullCheck(L_10);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
		L_11 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_10, _stringLiteralA77FDC67CD3D8A6113B858540BA409191CDF979E);
		NullCheck(L_9);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_9, L_11, 0, 4);
		// stream.Write(Encoding.UTF8.GetBytes("fmt "), 0, 4);
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_12 = __this->___stream_2;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_13;
		L_13 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		NullCheck(L_13);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14;
		L_14 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_13, _stringLiteralB6894A493D9B16556A8AF2157FE4DFA1C4747B3F);
		NullCheck(L_12);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_12, L_14, 0, 4);
		// stream.Write(BitConverter.GetBytes(16), 0, 4);
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_15 = __this->___stream_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16;
		L_16 = BitConverter_GetBytes_m343FFC3DD8CF8D0139D0CAEB8ABB0A4D6DAA98F4(((int32_t)16), NULL);
		NullCheck(L_15);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_15, L_16, 0, 4);
		// stream.Write(BitConverter.GetBytes((ushort)1), 0, 2);
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_17 = __this->___stream_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18;
		L_18 = BitConverter_GetBytes_m1B3C2C0E976C781ACD76AFA80DDBCA844FC73D50((uint16_t)1, NULL);
		NullCheck(L_17);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_17, L_18, 0, 2);
		// stream.Write(BitConverter.GetBytes(channelCount), 0, 2);                              // Channel count
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_19 = __this->___stream_2;
		int32_t L_20 = __this->___channelCount_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21;
		L_21 = BitConverter_GetBytes_m343FFC3DD8CF8D0139D0CAEB8ABB0A4D6DAA98F4(L_20, NULL);
		NullCheck(L_19);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_19, L_21, 0, 2);
		// stream.Write(BitConverter.GetBytes(sampleRate), 0, 4);                                // Sample rate
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_22 = __this->___stream_2;
		int32_t L_23 = __this->___sampleRate_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24;
		L_24 = BitConverter_GetBytes_m343FFC3DD8CF8D0139D0CAEB8ABB0A4D6DAA98F4(L_23, NULL);
		NullCheck(L_22);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_22, L_24, 0, 4);
		// stream.Write(BitConverter.GetBytes(sampleRate * channelCount * sizeof(short)), 0, 4); // Output rate in bytes
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_25 = __this->___stream_2;
		int32_t L_26 = __this->___sampleRate_0;
		int32_t L_27 = __this->___channelCount_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28;
		L_28 = BitConverter_GetBytes_m343FFC3DD8CF8D0139D0CAEB8ABB0A4D6DAA98F4(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_26, L_27)), 2)), NULL);
		NullCheck(L_25);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_25, L_28, 0, 4);
		// stream.Write(BitConverter.GetBytes((ushort)(channelCount * 2)), 0, 2);                // Block alignment
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_29 = __this->___stream_2;
		int32_t L_30 = __this->___channelCount_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31;
		L_31 = BitConverter_GetBytes_m1B3C2C0E976C781ACD76AFA80DDBCA844FC73D50((uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_multiply(L_30, 2))), NULL);
		NullCheck(L_29);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_29, L_31, 0, 2);
		// stream.Write(BitConverter.GetBytes((ushort)16), 0, 2);                                // Bits per sample
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_32 = __this->___stream_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33;
		L_33 = BitConverter_GetBytes_m1B3C2C0E976C781ACD76AFA80DDBCA844FC73D50((uint16_t)((int32_t)16), NULL);
		NullCheck(L_32);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_32, L_33, 0, 2);
		// stream.Write(Encoding.UTF8.GetBytes("data"), 0, 4);
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_34 = __this->___stream_2;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_35;
		L_35 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		NullCheck(L_35);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36;
		L_36 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_35, _stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469);
		NullCheck(L_34);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_34, L_36, 0, 4);
		// stream.Write(BitConverter.GetBytes(sampleCount * sizeof(ushort)), 0, 4);             // Total sample count
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_37 = __this->___stream_2;
		int32_t L_38 = __this->___sampleCount_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39;
		L_39 = BitConverter_GetBytes_m343FFC3DD8CF8D0139D0CAEB8ABB0A4D6DAA98F4(((int32_t)il2cpp_codegen_multiply(L_38, 2)), NULL);
		NullCheck(L_37);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(36 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_37, L_39, 0, 4);
		// stream.Dispose();
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_40 = __this->___stream_2;
		NullCheck(L_40);
		Stream_Dispose_mCDB42F32A17541CCA6D3A5906827A401570B07A8(L_40, NULL);
		// return Task.FromResult(stream.Name);
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_41 = __this->___stream_2;
		NullCheck(L_41);
		String_t* L_42;
		L_42 = VirtualFuncInvoker0< String_t* >::Invoke(39 /* System.String System.IO.FileStream::get_Name() */, L_41);
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* L_43;
		L_43 = Task_FromResult_TisString_t_mCE9554AC91EE79860B171D4EFD627B46F6688E0C(L_42, Task_FromResult_TisString_t_mCE9554AC91EE79860B171D4EFD627B46F6688E0C_RuntimeMethod_var);
		return L_43;
	}
}
// System.Void NatSuite.Recorders.WAVRecorder::NatSuite.Recorders.IMediaRecorder.CommitFrame(System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WAVRecorder_NatSuite_Recorders_IMediaRecorder_CommitFrame_m42CD5455A2A46AABF9571150D5AE7526ED0E3C96 (WAVRecorder_tEC358A5EA1ABA568D5BA5558CBC4D503EB6C2E47* __this, void* ___nativeBuffer0, int64_t ___timestamp1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B10C2D439EFA7BCD7BBF3A75423013529D71E14);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityEngine.Debug.LogError("NatCorder Error: WAVRecorder does not support committing video frames");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral5B10C2D439EFA7BCD7BBF3A75423013529D71E14, NULL);
		// }
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
// System.Void NatSuite.Recorders.Internal.NatCorder::FrameSize(System.IntPtr,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatCorder_FrameSize_mDEB6D4B0B1974507130E91478F6802C7912C83DC (intptr_t ___recorder0, int32_t* ___width1, int32_t* ___height2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t*, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_NatCorder_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("NatCorder"), "NCMediaRecorderFrameSize", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_NatCorder_INTERNAL
	reinterpret_cast<PInvokeFunc>(NCMediaRecorderFrameSize)(___recorder0, ___width1, ___height2);
	#else
	il2cppPInvokeFunc(___recorder0, ___width1, ___height2);
	#endif

}
// System.Void NatSuite.Recorders.Internal.NatCorder::CommitFrame(System.IntPtr,System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatCorder_CommitFrame_m29A388F563827D9EAB9396EFF1AC3CFE6CA0821A (intptr_t ___recorder0, void* ___pixelBuffer1, int64_t ___timestamp2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, void*, int64_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_NatCorder_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int64_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("NatCorder"), "NCMediaRecorderCommitFrame", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_NatCorder_INTERNAL
	reinterpret_cast<PInvokeFunc>(NCMediaRecorderCommitFrame)(___recorder0, ___pixelBuffer1, ___timestamp2);
	#else
	il2cppPInvokeFunc(___recorder0, ___pixelBuffer1, ___timestamp2);
	#endif

}
// System.Void NatSuite.Recorders.Internal.NatCorder::CommitSamples(System.IntPtr,System.Single*,System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatCorder_CommitSamples_mB904D74E4EFCCF3149330AB6D459EC45E5B37874 (intptr_t ___recorder0, float* ___sampleBuffer1, int32_t ___sampleCount2, int64_t ___timestamp3, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, float*, int32_t, int64_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_NatCorder_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(float*) + sizeof(int32_t) + sizeof(int64_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("NatCorder"), "NCMediaRecorderCommitSamples", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_NatCorder_INTERNAL
	reinterpret_cast<PInvokeFunc>(NCMediaRecorderCommitSamples)(___recorder0, ___sampleBuffer1, ___sampleCount2, ___timestamp3);
	#else
	il2cppPInvokeFunc(___recorder0, ___sampleBuffer1, ___sampleCount2, ___timestamp3);
	#endif

}
// System.Void NatSuite.Recorders.Internal.NatCorder::FinishWriting(System.IntPtr,NatSuite.Recorders.Internal.NatCorder/RecordingHandler,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatCorder_FinishWriting_m175CA50EF9A9F55E45A8C4C3657AF6C9AB4FE731 (intptr_t ___recorder0, RecordingHandler_t4482042BE3E54FBB6B0F1147F83E39F637BE15CC* ___handler1, intptr_t ___context2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, Il2CppMethodPointer, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_NatCorder_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("NatCorder"), "NCMediaRecorderFinishWriting", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___handler1' to native representation
	Il2CppMethodPointer ____handler1_marshaled = NULL;
	____handler1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___handler1));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_NatCorder_INTERNAL
	reinterpret_cast<PInvokeFunc>(NCMediaRecorderFinishWriting)(___recorder0, ____handler1_marshaled, ___context2);
	#else
	il2cppPInvokeFunc(___recorder0, ____handler1_marshaled, ___context2);
	#endif

}
// System.Void NatSuite.Recorders.Internal.NatCorder::CreateMP4Recorder(System.String,System.Int32,System.Int32,System.Single,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatCorder_CreateMP4Recorder_m06F15A519F09E09D65225C72E4A382E749DF4BFD (String_t* ___path0, int32_t ___width1, int32_t ___height2, float ___frameRate3, int32_t ___sampleRate4, int32_t ___channelCount5, int32_t ___videoBitrate6, int32_t ___keyframeInterval7, int32_t ___audioBitRate8, intptr_t* ___recorder9, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t, int32_t, float, int32_t, int32_t, int32_t, int32_t, int32_t, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_NatCorder_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*) + sizeof(int32_t) + sizeof(int32_t) + sizeof(float) + sizeof(int32_t) + sizeof(int32_t) + sizeof(int32_t) + sizeof(int32_t) + sizeof(int32_t) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("NatCorder"), "NCCreateMP4Recorder", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___path0' to native representation
	char* ____path0_marshaled = NULL;
	____path0_marshaled = il2cpp_codegen_marshal_string(___path0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_NatCorder_INTERNAL
	reinterpret_cast<PInvokeFunc>(NCCreateMP4Recorder)(____path0_marshaled, ___width1, ___height2, ___frameRate3, ___sampleRate4, ___channelCount5, ___videoBitrate6, ___keyframeInterval7, ___audioBitRate8, ___recorder9);
	#else
	il2cppPInvokeFunc(____path0_marshaled, ___width1, ___height2, ___frameRate3, ___sampleRate4, ___channelCount5, ___videoBitrate6, ___keyframeInterval7, ___audioBitRate8, ___recorder9);
	#endif

	// Marshaling cleanup of parameter '___path0' native representation
	il2cpp_codegen_marshal_free(____path0_marshaled);
	____path0_marshaled = NULL;

}
// System.Void NatSuite.Recorders.Internal.NatCorder::CreateHEVCRecorder(System.String,System.Int32,System.Int32,System.Single,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatCorder_CreateHEVCRecorder_m4F0D52AF26E6123AEA2528E7602CCE9DC09B5766 (String_t* ___path0, int32_t ___width1, int32_t ___height2, float ___frameRate3, int32_t ___sampleRate4, int32_t ___channelCount5, int32_t ___videoBitRate6, int32_t ___keyframeInterval7, int32_t ___audioBitRate8, intptr_t* ___recorder9, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t, int32_t, float, int32_t, int32_t, int32_t, int32_t, int32_t, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_NatCorder_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*) + sizeof(int32_t) + sizeof(int32_t) + sizeof(float) + sizeof(int32_t) + sizeof(int32_t) + sizeof(int32_t) + sizeof(int32_t) + sizeof(int32_t) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("NatCorder"), "NCCreateHEVCRecorder", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___path0' to native representation
	char* ____path0_marshaled = NULL;
	____path0_marshaled = il2cpp_codegen_marshal_string(___path0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_NatCorder_INTERNAL
	reinterpret_cast<PInvokeFunc>(NCCreateHEVCRecorder)(____path0_marshaled, ___width1, ___height2, ___frameRate3, ___sampleRate4, ___channelCount5, ___videoBitRate6, ___keyframeInterval7, ___audioBitRate8, ___recorder9);
	#else
	il2cppPInvokeFunc(____path0_marshaled, ___width1, ___height2, ___frameRate3, ___sampleRate4, ___channelCount5, ___videoBitRate6, ___keyframeInterval7, ___audioBitRate8, ___recorder9);
	#endif

	// Marshaling cleanup of parameter '___path0' native representation
	il2cpp_codegen_marshal_free(____path0_marshaled);
	____path0_marshaled = NULL;

}
// System.Void NatSuite.Recorders.Internal.NatCorder::CreateGIFRecorder(System.String,System.Int32,System.Int32,System.Single,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NatCorder_CreateGIFRecorder_mA916B8638821F82B766A8506064547D97577B5F6 (String_t* ___path0, int32_t ___width1, int32_t ___height2, float ___frameDuration3, intptr_t* ___recorder4, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t, int32_t, float, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_NatCorder_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(char*) + sizeof(int32_t) + sizeof(int32_t) + sizeof(float) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("NatCorder"), "NCCreateGIFRecorder", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___path0' to native representation
	char* ____path0_marshaled = NULL;
	____path0_marshaled = il2cpp_codegen_marshal_string(___path0);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_NatCorder_INTERNAL
	reinterpret_cast<PInvokeFunc>(NCCreateGIFRecorder)(____path0_marshaled, ___width1, ___height2, ___frameDuration3, ___recorder4);
	#else
	il2cppPInvokeFunc(____path0_marshaled, ___width1, ___height2, ___frameDuration3, ___recorder4);
	#endif

	// Marshaling cleanup of parameter '___path0' native representation
	il2cpp_codegen_marshal_free(____path0_marshaled);
	____path0_marshaled = NULL;

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void RecordingHandler_Invoke_m15CCCB50ECDB98812FF204106A1706AB476AAB4B_Multicast(RecordingHandler_t4482042BE3E54FBB6B0F1147F83E39F637BE15CC* __this, intptr_t ___context0, intptr_t ___path1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		RecordingHandler_t4482042BE3E54FBB6B0F1147F83E39F637BE15CC* currentDelegate = reinterpret_cast<RecordingHandler_t4482042BE3E54FBB6B0F1147F83E39F637BE15CC*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___context0, ___path1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void RecordingHandler_Invoke_m15CCCB50ECDB98812FF204106A1706AB476AAB4B_Open(RecordingHandler_t4482042BE3E54FBB6B0F1147F83E39F637BE15CC* __this, intptr_t ___context0, intptr_t ___path1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___context0, ___path1, method);
}
void RecordingHandler_Invoke_m15CCCB50ECDB98812FF204106A1706AB476AAB4B_OpenStaticInvoker(RecordingHandler_t4482042BE3E54FBB6B0F1147F83E39F637BE15CC* __this, intptr_t ___context0, intptr_t ___path1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< intptr_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___context0, ___path1);
}
void RecordingHandler_Invoke_m15CCCB50ECDB98812FF204106A1706AB476AAB4B_ClosedStaticInvoker(RecordingHandler_t4482042BE3E54FBB6B0F1147F83E39F637BE15CC* __this, intptr_t ___context0, intptr_t ___path1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, intptr_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___context0, ___path1);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_RecordingHandler_t4482042BE3E54FBB6B0F1147F83E39F637BE15CC (RecordingHandler_t4482042BE3E54FBB6B0F1147F83E39F637BE15CC* __this, intptr_t ___context0, intptr_t ___path1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___context0, ___path1);

}
// System.Void NatSuite.Recorders.Internal.NatCorder/RecordingHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordingHandler__ctor_mF3856ADEE508C55616713C629C1DA977FF9A5EE9 (RecordingHandler_t4482042BE3E54FBB6B0F1147F83E39F637BE15CC* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&RecordingHandler_Invoke_m15CCCB50ECDB98812FF204106A1706AB476AAB4B_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&RecordingHandler_Invoke_m15CCCB50ECDB98812FF204106A1706AB476AAB4B_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&RecordingHandler_Invoke_m15CCCB50ECDB98812FF204106A1706AB476AAB4B_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&RecordingHandler_Invoke_m15CCCB50ECDB98812FF204106A1706AB476AAB4B_Multicast;
}
// System.Void NatSuite.Recorders.Internal.NatCorder/RecordingHandler::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordingHandler_Invoke_m15CCCB50ECDB98812FF204106A1706AB476AAB4B (RecordingHandler_t4482042BE3E54FBB6B0F1147F83E39F637BE15CC* __this, intptr_t ___context0, intptr_t ___path1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___context0, ___path1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult NatSuite.Recorders.Internal.NatCorder/RecordingHandler::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RecordingHandler_BeginInvoke_mF323B9C15B0C2C67565ACC0B9BFE440E2689097B (RecordingHandler_t4482042BE3E54FBB6B0F1147F83E39F637BE15CC* __this, intptr_t ___context0, intptr_t ___path1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___context0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___path1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void NatSuite.Recorders.Internal.NatCorder/RecordingHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordingHandler_EndInvoke_mEC2EDB74573FFA37D9EC7EBAB4782B6C44372EC1 (RecordingHandler_t4482042BE3E54FBB6B0F1147F83E39F637BE15CC* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_NativeRecorder_OnRecorderCompleted_mE307AABFEA179EC797CDE00FD5FADC0A99072676(intptr_t ___context0, intptr_t ___path1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	NativeRecorder_OnRecorderCompleted_mE307AABFEA179EC797CDE00FD5FADC0A99072676(___context0, ___path1, NULL);

}
// System.ValueTuple`2<System.Int32,System.Int32> NatSuite.Recorders.Internal.NativeRecorder::get_frameSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D NativeRecorder_get_frameSize_m3ED041AB68AD0471B3D8C31C07624A50F992D0E9 (NativeRecorder_tDA99002F4683A6CE1D49BA1791FCBFEA73D7CED2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTuple_2__ctor_mF5D8FB18DBF2C4B2F879F8E8E12D8FB8FCDB5477_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// recorder.FrameSize(out var width, out var height);
		intptr_t L_0 = __this->___recorder_0;
		NatCorder_FrameSize_mDEB6D4B0B1974507130E91478F6802C7912C83DC(L_0, (&V_0), (&V_1), NULL);
		// return (width, height);
		int32_t L_1 = V_0;
		int32_t L_2 = V_1;
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_3;
		memset((&L_3), 0, sizeof(L_3));
		ValueTuple_2__ctor_mF5D8FB18DBF2C4B2F879F8E8E12D8FB8FCDB5477((&L_3), L_1, L_2, /*hidden argument*/ValueTuple_2__ctor_mF5D8FB18DBF2C4B2F879F8E8E12D8FB8FCDB5477_RuntimeMethod_var);
		return L_3;
	}
}
// System.Void NatSuite.Recorders.Internal.NativeRecorder::CommitFrame(System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeRecorder_CommitFrame_m157913F3860ADBA4D20DC4C9A2E918DCA595BD3B (NativeRecorder_tDA99002F4683A6CE1D49BA1791FCBFEA73D7CED2* __this, void* ___nativeBuffer0, int64_t ___timestamp1, const RuntimeMethod* method) 
{
	{
		// recorder.CommitFrame(nativeBuffer, timestamp);
		intptr_t L_0 = __this->___recorder_0;
		void* L_1 = ___nativeBuffer0;
		int64_t L_2 = ___timestamp1;
		NatCorder_CommitFrame_m29A388F563827D9EAB9396EFF1AC3CFE6CA0821A(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void NatSuite.Recorders.Internal.NativeRecorder::CommitSamples(System.Single[],System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeRecorder_CommitSamples_mF73B0CB85EFA8DE0FEDC3A7FC5A8FBCA1A422BDE (NativeRecorder_tDA99002F4683A6CE1D49BA1791FCBFEA73D7CED2* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___sampleBuffer0, int64_t ___timestamp1, const RuntimeMethod* method) 
{
	float* V_0 = NULL;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_1 = NULL;
	{
		// fixed (float* baseAddress = sampleBuffer)
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___sampleBuffer0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = L_0;
		V_1 = L_1;
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = V_1;
		NullCheck(L_2);
		if (((int32_t)(((RuntimeArray*)L_2)->max_length)))
		{
			goto IL_000f;
		}
	}

IL_000a:
	{
		V_0 = (float*)((uintptr_t)0);
		goto IL_0018;
	}

IL_000f:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = V_1;
		NullCheck(L_3);
		V_0 = (float*)((uintptr_t)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0018:
	{
		// CommitSamples(baseAddress, sampleBuffer.Length, timestamp);
		float* L_4 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = ___sampleBuffer0;
		NullCheck(L_5);
		int64_t L_6 = ___timestamp1;
		VirtualActionInvoker3< float*, int32_t, int64_t >::Invoke(14 /* System.Void NatSuite.Recorders.Internal.NativeRecorder::CommitSamples(System.Single*,System.Int32,System.Int64) */, __this, L_4, ((int32_t)(((RuntimeArray*)L_5)->max_length)), L_6);
		V_1 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)NULL;
		// }
		return;
	}
}
// System.Void NatSuite.Recorders.Internal.NativeRecorder::CommitSamples(System.Single*,System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeRecorder_CommitSamples_m2A7FA2C79D4B842C5AD1F76CE9B738E9E72D2326 (NativeRecorder_tDA99002F4683A6CE1D49BA1791FCBFEA73D7CED2* __this, float* ___nativeBuffer0, int32_t ___sampleCount1, int64_t ___timestamp2, const RuntimeMethod* method) 
{
	{
		// recorder.CommitSamples(nativeBuffer, sampleCount, timestamp);
		intptr_t L_0 = __this->___recorder_0;
		float* L_1 = ___nativeBuffer0;
		int32_t L_2 = ___sampleCount1;
		int64_t L_3 = ___timestamp2;
		NatCorder_CommitSamples_mB904D74E4EFCCF3149330AB6D459EC45E5B37874(L_0, L_1, L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Threading.Tasks.Task`1<System.String> NatSuite.Recorders.Internal.NativeRecorder::FinishWriting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* NativeRecorder_FinishWriting_m18F64471435CE2D2B787CBA7AAF465A8B99E807D (NativeRecorder_tDA99002F4683A6CE1D49BA1791FCBFEA73D7CED2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeRecorder_OnRecorderCompleted_mE307AABFEA179EC797CDE00FD5FADC0A99072676_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecordingHandler_t4482042BE3E54FBB6B0F1147F83E39F637BE15CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1__ctor_m1E0F0E41DAFB9401D33DE03A55F9BDC5565F0CF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_m11D993ACE1C12B89F69CA41E3BAAE3698C3AE587_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var recordingTask = new TaskCompletionSource<string>();
		TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* L_0 = (TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372*)il2cpp_codegen_object_new(TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		TaskCompletionSource_1__ctor_m1E0F0E41DAFB9401D33DE03A55F9BDC5565F0CF1(L_0, TaskCompletionSource_1__ctor_m1E0F0E41DAFB9401D33DE03A55F9BDC5565F0CF1_RuntimeMethod_var);
		// var handle = GCHandle.Alloc(recordingTask, GCHandleType.Normal);
		TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* L_1 = L_0;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_2;
		L_2 = GCHandle_Alloc_m1FC35418B654D3F48B4F70D525EBD6A208A59075(L_1, 2, NULL);
		V_0 = L_2;
		// recorder.FinishWriting(OnRecorderCompleted, (IntPtr)handle);
		intptr_t L_3 = __this->___recorder_0;
		RecordingHandler_t4482042BE3E54FBB6B0F1147F83E39F637BE15CC* L_4 = (RecordingHandler_t4482042BE3E54FBB6B0F1147F83E39F637BE15CC*)il2cpp_codegen_object_new(RecordingHandler_t4482042BE3E54FBB6B0F1147F83E39F637BE15CC_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		RecordingHandler__ctor_mF3856ADEE508C55616713C629C1DA977FF9A5EE9(L_4, NULL, (intptr_t)((void*)NativeRecorder_OnRecorderCompleted_mE307AABFEA179EC797CDE00FD5FADC0A99072676_RuntimeMethod_var), NULL);
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_5 = V_0;
		intptr_t L_6;
		L_6 = GCHandle_op_Explicit_m67A1C3E8BC6C8163C5775AE62A514000D00CD9B6_inline(L_5, NULL);
		NatCorder_FinishWriting_m175CA50EF9A9F55E45A8C4C3657AF6C9AB4FE731(L_3, L_4, L_6, NULL);
		// return recordingTask.Task;
		NullCheck(L_1);
		Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* L_7;
		L_7 = TaskCompletionSource_1_get_Task_m11D993ACE1C12B89F69CA41E3BAAE3698C3AE587_inline(L_1, TaskCompletionSource_1_get_Task_m11D993ACE1C12B89F69CA41E3BAAE3698C3AE587_RuntimeMethod_var);
		return L_7;
	}
}
// System.Void NatSuite.Recorders.Internal.NativeRecorder::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeRecorder__ctor_m7FB0F5A570781DD826F2D9C83F6F27B74CA5F877 (NativeRecorder_tDA99002F4683A6CE1D49BA1791FCBFEA73D7CED2* __this, intptr_t ___recorder0, const RuntimeMethod* method) 
{
	{
		// protected NativeRecorder (IntPtr recorder) => this.recorder = recorder;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// protected NativeRecorder (IntPtr recorder) => this.recorder = recorder;
		intptr_t L_0 = ___recorder0;
		__this->___recorder_0 = L_0;
		return;
	}
}
// System.Void NatSuite.Recorders.Internal.NativeRecorder::OnRecorderCompleted(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeRecorder_OnRecorderCompleted_mE307AABFEA179EC797CDE00FD5FADC0A99072676 (intptr_t ___context0, intptr_t ___path1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetResult_mA4FD1E75C7272079BE7032F18BCDC158463FE3E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* V_1 = NULL;
	{
		// var handle = (GCHandle)context;
		intptr_t L_0 = ___context0;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_1;
		L_1 = GCHandle_op_Explicit_m500B99BF54D923E624C5235A4B370A37C8B7050C(L_0, NULL);
		V_0 = L_1;
		// var recordingTask = handle.Target as TaskCompletionSource<string>;
		RuntimeObject* L_2;
		L_2 = GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5((&V_0), NULL);
		V_1 = ((TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372*)IsInstClass((RuntimeObject*)L_2, TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372_il2cpp_TypeInfo_var));
		// handle.Free();
		GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3((&V_0), NULL);
		// recordingTask.SetResult(Marshal.PtrToStringAnsi(path));
		TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* L_3 = V_1;
		intptr_t L_4 = ___path1;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		String_t* L_5;
		L_5 = Marshal_PtrToStringAnsi_m86CDF46D9E4810BD7DB9BB52C1036E24A7DD46EE(L_4, NULL);
		NullCheck(L_3);
		TaskCompletionSource_1_SetResult_mA4FD1E75C7272079BE7032F18BCDC158463FE3E1(L_3, L_5, TaskCompletionSource_1_SetResult_mA4FD1E75C7272079BE7032F18BCDC158463FE3E1_RuntimeMethod_var);
		// }
		return;
	}
}
// System.IntPtr NatSuite.Recorders.Internal.NativeRecorder::op_Implicit(NatSuite.Recorders.Internal.NativeRecorder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeRecorder_op_Implicit_mDA092516DD981A17AA4D57308547BDE52694D34C (NativeRecorder_tDA99002F4683A6CE1D49BA1791FCBFEA73D7CED2* ___recorder0, const RuntimeMethod* method) 
{
	{
		// public static implicit operator IntPtr (NativeRecorder recorder) => recorder.recorder;
		NativeRecorder_tDA99002F4683A6CE1D49BA1791FCBFEA73D7CED2* L_0 = ___recorder0;
		NullCheck(L_0);
		intptr_t L_1 = L_0->___recorder_0;
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
// System.String NatSuite.Recorders.Internal.Utility::GetPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Utility_GetPath_m890864A644FBE33558777D65EDA3E35FBE54F1B5 (String_t* ___extension0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t5A11DCFA089788AF7F9BC0913DC4F74BF6ADC8A8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A393EADBE457522A253BEE7EB8728BC667E188E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF13FE9A5DB842114D70C053E3A1F4D1D3DBA8913);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t G_B4_0 = 0;
	String_t* G_B7_0 = NULL;
	{
		// if (directory == null) {
		String_t* L_0 = ((Utility_t5A11DCFA089788AF7F9BC0913DC4F74BF6ADC8A8_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t5A11DCFA089788AF7F9BC0913DC4F74BF6ADC8A8_il2cpp_TypeInfo_var))->___directory_0;
		if (L_0)
		{
			goto IL_002c;
		}
	}
	{
		// var editor = Application.platform == RuntimePlatform.OSXEditor || Application.platform == RuntimePlatform.WindowsEditor;
		int32_t L_1;
		L_1 = Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D(NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2;
		L_2 = Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D(NULL);
		G_B4_0 = ((((int32_t)L_2) == ((int32_t)7))? 1 : 0);
		goto IL_0019;
	}

IL_0018:
	{
		G_B4_0 = 1;
	}

IL_0019:
	{
		// directory = editor ? Directory.GetCurrentDirectory() : Application.persistentDataPath;
		if (G_B4_0)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_3;
		L_3 = Application_get_persistentDataPath_m787EBC9B0862E7617DCD6CABD2147E61717EAC17(NULL);
		G_B7_0 = L_3;
		goto IL_0027;
	}

IL_0022:
	{
		String_t* L_4;
		L_4 = Directory_GetCurrentDirectory_m7EA69F721BEEC05DC0FBF8E9189990BF9F856363(NULL);
		G_B7_0 = L_4;
	}

IL_0027:
	{
		((Utility_t5A11DCFA089788AF7F9BC0913DC4F74BF6ADC8A8_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t5A11DCFA089788AF7F9BC0913DC4F74BF6ADC8A8_il2cpp_TypeInfo_var))->___directory_0 = G_B7_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Utility_t5A11DCFA089788AF7F9BC0913DC4F74BF6ADC8A8_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t5A11DCFA089788AF7F9BC0913DC4F74BF6ADC8A8_il2cpp_TypeInfo_var))->___directory_0), (void*)G_B7_0);
	}

IL_002c:
	{
		// var timestamp = DateTime.Now.ToString("yyyy_MM_dd_HH_mm_ss_fff");
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_5;
		L_5 = DateTime_get_Now_mC336498972C48439ADCD5C50D35FAE0F2A48B0F0(NULL);
		V_2 = L_5;
		String_t* L_6;
		L_6 = DateTime_ToString_m6963A84785C320DA776C9FCFFEDAF26C8F1A8D78((&V_2), _stringLiteral1A393EADBE457522A253BEE7EB8728BC667E188E, NULL);
		V_0 = L_6;
		// var name = $"recording_{timestamp}{extension}";
		String_t* L_7 = V_0;
		String_t* L_8 = ___extension0;
		String_t* L_9;
		L_9 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralF13FE9A5DB842114D70C053E3A1F4D1D3DBA8913, L_7, L_8, NULL);
		V_1 = L_9;
		// var path = Path.Combine(directory, name);
		String_t* L_10 = ((Utility_t5A11DCFA089788AF7F9BC0913DC4F74BF6ADC8A8_StaticFields*)il2cpp_codegen_static_fields_for(Utility_t5A11DCFA089788AF7F9BC0913DC4F74BF6ADC8A8_il2cpp_TypeInfo_var))->___directory_0;
		String_t* L_11 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_12;
		L_12 = Path_Combine_m64754D4E08990CE1EBC41CDF197807EE4B115474(L_10, L_11, NULL);
		// return path;
		return L_12;
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
// System.Void NatSuite.Recorders.Inputs.AsyncTextureInput::.ctor(NatSuite.Recorders.IMediaRecorder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTextureInput__ctor_mC41BFCA2A58AE733A482504F20E9EBC0B6A74A34 (AsyncTextureInput_t96F659D0E82E8AF3081EE7471E12DFB5C5A4F0A5* __this, RuntimeObject* ___recorder0, const RuntimeMethod* method) 
{
	{
		// public AsyncTextureInput (IMediaRecorder recorder) => this.recorder = recorder;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// public AsyncTextureInput (IMediaRecorder recorder) => this.recorder = recorder;
		RuntimeObject* L_0 = ___recorder0;
		__this->___recorder_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___recorder_0), (void*)L_0);
		return;
	}
}
// System.Void NatSuite.Recorders.Inputs.AsyncTextureInput::CommitFrame(UnityEngine.Texture,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTextureInput_CommitFrame_m9D2D6C82548DDE0AC58C10CF60DDE648B10555F8 (AsyncTextureInput_t96F659D0E82E8AF3081EE7471E12DFB5C5A4F0A5* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture0, int64_t ___timestamp1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMediaRecorder_t075A0EFCE0700DA3B7600BCC859EFCA50D6CB39A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_U3CCommitFrameU3Eb__0_m7E4FE4972F3FEF18A3E58E5C8CE21B747674356D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_t3ABA0E6ECB6BD52ED7476BB4902C1281B420F46D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass1_0_t3ABA0E6ECB6BD52ED7476BB4902C1281B420F46D* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_3 = NULL;
	{
		U3CU3Ec__DisplayClass1_0_t3ABA0E6ECB6BD52ED7476BB4902C1281B420F46D* L_0 = (U3CU3Ec__DisplayClass1_0_t3ABA0E6ECB6BD52ED7476BB4902C1281B420F46D*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass1_0_t3ABA0E6ECB6BD52ED7476BB4902C1281B420F46D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass1_0__ctor_m16B517147A3F078783AA1E2AB52FA065DDC19B30(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass1_0_t3ABA0E6ECB6BD52ED7476BB4902C1281B420F46D* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass1_0_t3ABA0E6ECB6BD52ED7476BB4902C1281B420F46D* L_2 = V_0;
		int64_t L_3 = ___timestamp1;
		NullCheck(L_2);
		L_2->___timestamp_1 = L_3;
		// var (width, height) = recorder.frameSize;
		RuntimeObject* L_4 = __this->___recorder_0;
		NullCheck(L_4);
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_5;
		L_5 = InterfaceFuncInvoker0< ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D >::Invoke(0 /* System.ValueTuple`2<System.Int32,System.Int32> NatSuite.Recorders.IMediaRecorder::get_frameSize() */, IMediaRecorder_t075A0EFCE0700DA3B7600BCC859EFCA50D6CB39A_il2cpp_TypeInfo_var, L_4);
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_6 = L_5;
		int32_t L_7 = L_6.___Item1_0;
		V_1 = L_7;
		int32_t L_8 = L_6.___Item2_1;
		V_2 = L_8;
		// var renderTexture = RenderTexture.GetTemporary(width, height, 24, RenderTextureFormat.ARGB32);
		int32_t L_9 = V_1;
		int32_t L_10 = V_2;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_11;
		L_11 = RenderTexture_GetTemporary_mEB21705B78CAF6B8F1F6617453A8EE8A94498DE2(L_9, L_10, ((int32_t)24), 0, NULL);
		V_3 = L_11;
		// Graphics.Blit(texture, renderTexture);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_12 = ___texture0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_13 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m066854D684B6042B266D306E8E012D2C6C1787BE(L_12, L_13, NULL);
		// AsyncGPUReadback.Request(
		//     renderTexture,
		//     0,
		//     request => recorder?.CommitFrame(request.GetData<byte>().GetUnsafeReadOnlyPtr(), timestamp)
		// );
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_14 = V_3;
		U3CU3Ec__DisplayClass1_0_t3ABA0E6ECB6BD52ED7476BB4902C1281B420F46D* L_15 = V_0;
		Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* L_16 = (Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F*)il2cpp_codegen_object_new(Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		Action_1__ctor_m347338A163A1A0840FA150F7ACCC029D46339777(L_16, L_15, (intptr_t)((void*)U3CU3Ec__DisplayClass1_0_U3CCommitFrameU3Eb__0_m7E4FE4972F3FEF18A3E58E5C8CE21B747674356D_RuntimeMethod_var), NULL);
		AsyncGPUReadbackRequest_t6A735D3E0F1DEF8F43EBD0E6FE550FAE564519C7 L_17;
		L_17 = AsyncGPUReadback_Request_mCEA6A5F99AAA3AE580396779B4AB70BFF9AECC63(L_14, 0, L_16, NULL);
		// RenderTexture.ReleaseTemporary(renderTexture);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_18 = V_3;
		RenderTexture_ReleaseTemporary_m7D9B385460ED0D0CF7BCC033605CEBD60A1A232F(L_18, NULL);
		// }
		return;
	}
}
// System.Void NatSuite.Recorders.Inputs.AsyncTextureInput::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTextureInput_Dispose_m45AEC63D8E4CB7D3A802C7CF1BD770491EF3726C (AsyncTextureInput_t96F659D0E82E8AF3081EE7471E12DFB5C5A4F0A5* __this, const RuntimeMethod* method) 
{
	{
		// public void Dispose () => recorder = null;
		__this->___recorder_0 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___recorder_0), (void*)(RuntimeObject*)NULL);
		return;
	}
}
// System.ValueTuple`2<System.Int32,System.Int32> NatSuite.Recorders.Inputs.AsyncTextureInput::NatSuite.Recorders.Inputs.ITextureInput.get_frameSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D AsyncTextureInput_NatSuite_Recorders_Inputs_ITextureInput_get_frameSize_m6448F9F18DEB41559C71015ABFBAC9B6C43D477A (AsyncTextureInput_t96F659D0E82E8AF3081EE7471E12DFB5C5A4F0A5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMediaRecorder_t075A0EFCE0700DA3B7600BCC859EFCA50D6CB39A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// (int, int) ITextureInput.frameSize => recorder.frameSize;
		RuntimeObject* L_0 = __this->___recorder_0;
		NullCheck(L_0);
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_1;
		L_1 = InterfaceFuncInvoker0< ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D >::Invoke(0 /* System.ValueTuple`2<System.Int32,System.Int32> NatSuite.Recorders.IMediaRecorder::get_frameSize() */, IMediaRecorder_t075A0EFCE0700DA3B7600BCC859EFCA50D6CB39A_il2cpp_TypeInfo_var, L_0);
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
// System.Void NatSuite.Recorders.Inputs.AsyncTextureInput/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_m16B517147A3F078783AA1E2AB52FA065DDC19B30 (U3CU3Ec__DisplayClass1_0_t3ABA0E6ECB6BD52ED7476BB4902C1281B420F46D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void NatSuite.Recorders.Inputs.AsyncTextureInput/<>c__DisplayClass1_0::<CommitFrame>b__0(UnityEngine.Rendering.AsyncGPUReadbackRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0_U3CCommitFrameU3Eb__0_m7E4FE4972F3FEF18A3E58E5C8CE21B747674356D (U3CU3Ec__DisplayClass1_0_t3ABA0E6ECB6BD52ED7476BB4902C1281B420F46D* __this, AsyncGPUReadbackRequest_t6A735D3E0F1DEF8F43EBD0E6FE550FAE564519C7 ___request0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncGPUReadbackRequest_GetData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mC365851AEF03CCC25905B4A8808B40AB3969C136_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMediaRecorder_t075A0EFCE0700DA3B7600BCC859EFCA50D6CB39A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD9261CD83E770034D4BDBB7D3907F4648D8ED4E6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// request => recorder?.CommitFrame(request.GetData<byte>().GetUnsafeReadOnlyPtr(), timestamp)
		AsyncTextureInput_t96F659D0E82E8AF3081EE7471E12DFB5C5A4F0A5* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___recorder_0;
		RuntimeObject* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_3;
		L_3 = AsyncGPUReadbackRequest_GetData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mC365851AEF03CCC25905B4A8808B40AB3969C136((&___request0), 0, AsyncGPUReadbackRequest_GetData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mC365851AEF03CCC25905B4A8808B40AB3969C136_RuntimeMethod_var);
		void* L_4;
		L_4 = NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD9261CD83E770034D4BDBB7D3907F4648D8ED4E6(L_3, NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD9261CD83E770034D4BDBB7D3907F4648D8ED4E6_RuntimeMethod_var);
		int64_t L_5 = __this->___timestamp_1;
		NullCheck(G_B2_0);
		InterfaceActionInvoker2< void*, int64_t >::Invoke(2 /* System.Void NatSuite.Recorders.IMediaRecorder::CommitFrame(System.Void*,System.Int64) */, IMediaRecorder_t075A0EFCE0700DA3B7600BCC859EFCA50D6CB39A_il2cpp_TypeInfo_var, G_B2_0, L_4, L_5);
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
// System.Void NatSuite.Recorders.Inputs.AudioInput::.ctor(NatSuite.Recorders.IMediaRecorder,UnityEngine.AudioListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioInput__ctor_mB290AB13EDF29CEC6A42FC6284D60A55510B26C7 (AudioInput_t85AE05EC859D050D3150EE0DE8F147CBC4A89AB3* __this, RuntimeObject* ___recorder0, AudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35* ___audioListener1, const RuntimeMethod* method) 
{
	{
		// public AudioInput (IMediaRecorder recorder, AudioListener audioListener) : this(recorder, default, audioListener) {}
		RuntimeObject* L_0 = ___recorder0;
		AudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35* L_1 = ___audioListener1;
		AudioInput__ctor_mF68444BB5FBABF11D20349BC4BD4BE4EBC96B740(__this, L_0, (RuntimeObject*)NULL, L_1, NULL);
		// public AudioInput (IMediaRecorder recorder, AudioListener audioListener) : this(recorder, default, audioListener) {}
		return;
	}
}
// System.Void NatSuite.Recorders.Inputs.AudioInput::.ctor(NatSuite.Recorders.IMediaRecorder,NatSuite.Recorders.Clocks.IClock,UnityEngine.AudioListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioInput__ctor_mF68444BB5FBABF11D20349BC4BD4BE4EBC96B740 (AudioInput_t85AE05EC859D050D3150EE0DE8F147CBC4A89AB3* __this, RuntimeObject* ___recorder0, RuntimeObject* ___clock1, AudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35* ___audioListener2, const RuntimeMethod* method) 
{
	{
		// public AudioInput (IMediaRecorder recorder, IClock clock, AudioListener audioListener) : this(recorder, clock, audioListener.gameObject) {}
		RuntimeObject* L_0 = ___recorder0;
		RuntimeObject* L_1 = ___clock1;
		AudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35* L_2 = ___audioListener2;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		AudioInput__ctor_m9E93E985572B38223F412E4B5CF62242514F0BD3(__this, L_0, L_1, L_3, (bool)0, NULL);
		// public AudioInput (IMediaRecorder recorder, IClock clock, AudioListener audioListener) : this(recorder, clock, audioListener.gameObject) {}
		return;
	}
}
// System.Void NatSuite.Recorders.Inputs.AudioInput::.ctor(NatSuite.Recorders.IMediaRecorder,UnityEngine.AudioSource,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioInput__ctor_m26B2E8F74D782569C4947AFB46C12DBF5E5806F1 (AudioInput_t85AE05EC859D050D3150EE0DE8F147CBC4A89AB3* __this, RuntimeObject* ___recorder0, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioSource1, bool ___mute2, const RuntimeMethod* method) 
{
	{
		// public AudioInput (IMediaRecorder recorder, AudioSource audioSource, bool mute = false) : this(recorder, default, audioSource, mute) {}
		RuntimeObject* L_0 = ___recorder0;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = ___audioSource1;
		bool L_2 = ___mute2;
		AudioInput__ctor_m758CC383DAB0F998BBA4463CBC4B3EA789157094(__this, L_0, (RuntimeObject*)NULL, L_1, L_2, NULL);
		// public AudioInput (IMediaRecorder recorder, AudioSource audioSource, bool mute = false) : this(recorder, default, audioSource, mute) {}
		return;
	}
}
// System.Void NatSuite.Recorders.Inputs.AudioInput::.ctor(NatSuite.Recorders.IMediaRecorder,NatSuite.Recorders.Clocks.IClock,UnityEngine.AudioSource,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioInput__ctor_m758CC383DAB0F998BBA4463CBC4B3EA789157094 (AudioInput_t85AE05EC859D050D3150EE0DE8F147CBC4A89AB3* __this, RuntimeObject* ___recorder0, RuntimeObject* ___clock1, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioSource2, bool ___mute3, const RuntimeMethod* method) 
{
	{
		// public AudioInput (IMediaRecorder recorder, IClock clock, AudioSource audioSource, bool mute = false) : this(recorder, clock, audioSource.gameObject, mute) {}
		RuntimeObject* L_0 = ___recorder0;
		RuntimeObject* L_1 = ___clock1;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = ___audioSource2;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		bool L_4 = ___mute3;
		AudioInput__ctor_m9E93E985572B38223F412E4B5CF62242514F0BD3(__this, L_0, L_1, L_3, L_4, NULL);
		// public AudioInput (IMediaRecorder recorder, IClock clock, AudioSource audioSource, bool mute = false) : this(recorder, clock, audioSource.gameObject, mute) {}
		return;
	}
}
// System.Void NatSuite.Recorders.Inputs.AudioInput::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioInput_Dispose_m616B7343F491D894B0E60570529F6DD85AD41E20 (AudioInput_t85AE05EC859D050D3150EE0DE8F147CBC4A89AB3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void Dispose () => AudioInputAttachment.Destroy(attachment);
		AudioInputAttachment_t3820CB977D17B35C265FDF8AECD34FAAA8BA29CC* L_0 = __this->___attachment_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_0, NULL);
		return;
	}
}
// System.Void NatSuite.Recorders.Inputs.AudioInput::.ctor(NatSuite.Recorders.IMediaRecorder,NatSuite.Recorders.Clocks.IClock,UnityEngine.GameObject,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioInput__ctor_m9E93E985572B38223F412E4B5CF62242514F0BD3 (AudioInput_t85AE05EC859D050D3150EE0DE8F147CBC4A89AB3* __this, RuntimeObject* ___recorder0, RuntimeObject* ___clock1, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject2, bool ___mute3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t178AACF05C0F15030E739209018FAB278C66C6F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioInput_OnSampleBuffer_m9C852C9333E34746C74F6434AD09D42C88487061_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisAudioInputAttachment_t3820CB977D17B35C265FDF8AECD34FAAA8BA29CC_m856DA540549B6374AFA00D863810FE75DA61DE75_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private AudioInput (IMediaRecorder recorder, IClock clock, GameObject gameObject, bool mute = false) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.recorder = recorder;
		RuntimeObject* L_0 = ___recorder0;
		__this->___recorder_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___recorder_0), (void*)L_0);
		// this.clock = clock;
		RuntimeObject* L_1 = ___clock1;
		__this->___clock_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___clock_1), (void*)L_1);
		// this.attachment = gameObject.AddComponent<AudioInputAttachment>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ___gameObject2;
		NullCheck(L_2);
		AudioInputAttachment_t3820CB977D17B35C265FDF8AECD34FAAA8BA29CC* L_3;
		L_3 = GameObject_AddComponent_TisAudioInputAttachment_t3820CB977D17B35C265FDF8AECD34FAAA8BA29CC_m856DA540549B6374AFA00D863810FE75DA61DE75(L_2, GameObject_AddComponent_TisAudioInputAttachment_t3820CB977D17B35C265FDF8AECD34FAAA8BA29CC_m856DA540549B6374AFA00D863810FE75DA61DE75_RuntimeMethod_var);
		__this->___attachment_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___attachment_2), (void*)L_3);
		// this.attachment.sampleBufferDelegate = OnSampleBuffer;
		AudioInputAttachment_t3820CB977D17B35C265FDF8AECD34FAAA8BA29CC* L_4 = __this->___attachment_2;
		Action_1_t178AACF05C0F15030E739209018FAB278C66C6F3* L_5 = (Action_1_t178AACF05C0F15030E739209018FAB278C66C6F3*)il2cpp_codegen_object_new(Action_1_t178AACF05C0F15030E739209018FAB278C66C6F3_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action_1__ctor_m7120346688C18407FB878E541FC58DC27377537F(L_5, __this, (intptr_t)((void*)AudioInput_OnSampleBuffer_m9C852C9333E34746C74F6434AD09D42C88487061_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		L_4->___sampleBufferDelegate_4 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___sampleBufferDelegate_4), (void*)L_5);
		// this.mute = mute;
		bool L_6 = ___mute3;
		__this->___mute_3 = L_6;
		// }
		return;
	}
}
// System.Void NatSuite.Recorders.Inputs.AudioInput::OnSampleBuffer(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioInput_OnSampleBuffer_m9C852C9333E34746C74F6434AD09D42C88487061 (AudioInput_t85AE05EC859D050D3150EE0DE8F147CBC4A89AB3* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IClock_t0C248C3D76DB9B8F0E141D83E155FDA754570A4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMediaRecorder_t075A0EFCE0700DA3B7600BCC859EFCA50D6CB39A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* G_B2_1 = NULL;
	RuntimeObject* G_B2_2 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* G_B1_1 = NULL;
	RuntimeObject* G_B1_2 = NULL;
	int64_t G_B3_0 = 0;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* G_B3_1 = NULL;
	RuntimeObject* G_B3_2 = NULL;
	{
		// AndroidJNI.AttachCurrentThread();
		int32_t L_0;
		L_0 = AndroidJNI_AttachCurrentThread_mD5647083E547A77F9377BDB78106D426878A00E7(NULL);
		// recorder.CommitSamples(data, clock?.timestamp ?? 0L);
		RuntimeObject* L_1 = __this->___recorder_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = ___data0;
		RuntimeObject* L_3 = __this->___clock_1;
		RuntimeObject* L_4 = L_3;
		G_B1_0 = L_4;
		G_B1_1 = L_2;
		G_B1_2 = L_1;
		if (L_4)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_2;
			G_B2_2 = L_1;
			goto IL_001b;
		}
	}
	{
		G_B3_0 = ((int64_t)0);
		G_B3_1 = G_B1_1;
		G_B3_2 = G_B1_2;
		goto IL_0020;
	}

IL_001b:
	{
		NullCheck(G_B2_0);
		int64_t L_5;
		L_5 = InterfaceFuncInvoker0< int64_t >::Invoke(0 /* System.Int64 NatSuite.Recorders.Clocks.IClock::get_timestamp() */, IClock_t0C248C3D76DB9B8F0E141D83E155FDA754570A4D_il2cpp_TypeInfo_var, G_B2_0);
		G_B3_0 = L_5;
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
	}

IL_0020:
	{
		NullCheck(G_B3_2);
		InterfaceActionInvoker2< SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, int64_t >::Invoke(3 /* System.Void NatSuite.Recorders.IMediaRecorder::CommitSamples(System.Single[],System.Int64) */, IMediaRecorder_t075A0EFCE0700DA3B7600BCC859EFCA50D6CB39A_il2cpp_TypeInfo_var, G_B3_2, G_B3_1, G_B3_0);
		// if (mute)
		bool L_6 = __this->___mute_3;
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		// Array.Clear(data, 0, data.Length);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_7 = ___data0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_8 = ___data0;
		NullCheck(L_8);
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_7, 0, ((int32_t)(((RuntimeArray*)L_8)->max_length)), NULL);
	}

IL_0037:
	{
		// }
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
// System.Void NatSuite.Recorders.Inputs.AudioInput/AudioInputAttachment::OnAudioFilterRead(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioInputAttachment_OnAudioFilterRead_m25366134BAE9EE1CF6FCF7D28D23E3FFDECE37FD (AudioInputAttachment_t3820CB977D17B35C265FDF8AECD34FAAA8BA29CC* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___data0, int32_t ___channels1, const RuntimeMethod* method) 
{
	Action_1_t178AACF05C0F15030E739209018FAB278C66C6F3* G_B2_0 = NULL;
	Action_1_t178AACF05C0F15030E739209018FAB278C66C6F3* G_B1_0 = NULL;
	{
		// private void OnAudioFilterRead (float[] data, int channels) => sampleBufferDelegate?.Invoke(data);
		Action_1_t178AACF05C0F15030E739209018FAB278C66C6F3* L_0 = __this->___sampleBufferDelegate_4;
		Action_1_t178AACF05C0F15030E739209018FAB278C66C6F3* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = ___data0;
		NullCheck(G_B2_0);
		Action_1_Invoke_mBE0A0BDCAD5FEDE1C45EA97B02BFEB89E5AA3728_inline(G_B2_0, L_2, NULL);
		return;
	}
}
// System.Void NatSuite.Recorders.Inputs.AudioInput/AudioInputAttachment::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioInputAttachment__ctor_m48EFA1680B70202B1BFADC5FCFC247E78C41BFC3 (AudioInputAttachment_t3820CB977D17B35C265FDF8AECD34FAAA8BA29CC* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Boolean NatSuite.Recorders.Inputs.CameraInput::get_HDR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CameraInput_get_HDR_mC77CFC5CC13D59A9627C18D7B8075C2E4F143571 (CameraInput_t2EC933CD283AC613F0C5586F86A23207AC4CB64B* __this, const RuntimeMethod* method) 
{
	{
		// get => frameDescriptor.colorFormat == RenderTextureFormat.ARGBHalf;
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* L_0 = (&__this->___frameDescriptor_5);
		int32_t L_1;
		L_1 = RenderTextureDescriptor_get_colorFormat_mF87FD5E3AC4688BBB921568003ED4A1FFB1614FF(L_0, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)2))? 1 : 0);
	}
}
// System.Void NatSuite.Recorders.Inputs.CameraInput::set_HDR(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraInput_set_HDR_m40C545957A1F1A0C70ABAD3399C7529FE8D9DA54 (CameraInput_t2EC933CD283AC613F0C5586F86A23207AC4CB64B* __this, bool ___value0, const RuntimeMethod* method) 
{
	RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* G_B2_0 = NULL;
	RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* G_B3_1 = NULL;
	{
		// set => frameDescriptor.colorFormat = value ? RenderTextureFormat.ARGBHalf : RenderTextureFormat.ARGB32;
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* L_0 = (&__this->___frameDescriptor_5);
		bool L_1 = ___value0;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_000c;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_000c:
	{
		G_B3_0 = 2;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		RenderTextureDescriptor_set_colorFormat_m61B0FA4FCDE8A0F8A843DD6BF74097C21021C4FE(G_B3_1, G_B3_0, NULL);
		return;
	}
}
// System.Void NatSuite.Recorders.Inputs.CameraInput::.ctor(NatSuite.Recorders.IMediaRecorder,UnityEngine.Camera[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraInput__ctor_m8B006FE6506134A1797D9452D95D23667B54EC70 (CameraInput_t2EC933CD283AC613F0C5586F86A23207AC4CB64B* __this, RuntimeObject* ___recorder0, CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* ___cameras1, const RuntimeMethod* method) 
{
	{
		// public CameraInput (IMediaRecorder recorder, params Camera[] cameras) : this(recorder, default, cameras) { }
		RuntimeObject* L_0 = ___recorder0;
		CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* L_1 = ___cameras1;
		CameraInput__ctor_mC7DB6707DAF54B0B929D00EAC9075E440A9FA945(__this, L_0, (RuntimeObject*)NULL, L_1, NULL);
		// public CameraInput (IMediaRecorder recorder, params Camera[] cameras) : this(recorder, default, cameras) { }
		return;
	}
}
// System.Void NatSuite.Recorders.Inputs.CameraInput::.ctor(NatSuite.Recorders.IMediaRecorder,NatSuite.Recorders.Clocks.IClock,UnityEngine.Camera[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraInput__ctor_mC7DB6707DAF54B0B929D00EAC9075E440A9FA945 (CameraInput_t2EC933CD283AC613F0C5586F86A23207AC4CB64B* __this, RuntimeObject* ___recorder0, RuntimeObject* ___clock1, CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* ___cameras2, const RuntimeMethod* method) 
{
	{
		// public CameraInput (IMediaRecorder recorder, IClock clock, params Camera[] cameras) : this(CreateInput(recorder), clock, cameras) { }
		RuntimeObject* L_0 = ___recorder0;
		RuntimeObject* L_1;
		L_1 = CameraInput_CreateInput_mB507E1DA0726CDB8C021141EAC40391E5ADB5713(L_0, NULL);
		RuntimeObject* L_2 = ___clock1;
		CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* L_3 = ___cameras2;
		CameraInput__ctor_mFEA4077B99FE1A1BDA315A520355DFE3AD6A954A(__this, L_1, L_2, L_3, NULL);
		// public CameraInput (IMediaRecorder recorder, IClock clock, params Camera[] cameras) : this(CreateInput(recorder), clock, cameras) { }
		return;
	}
}
// System.Void NatSuite.Recorders.Inputs.CameraInput::.ctor(NatSuite.Recorders.Inputs.ITextureInput,UnityEngine.Camera[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraInput__ctor_mD469135DF74FC383F16B9FD5367ADA35D45A0082 (CameraInput_t2EC933CD283AC613F0C5586F86A23207AC4CB64B* __this, RuntimeObject* ___input0, CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* ___cameras1, const RuntimeMethod* method) 
{
	{
		// public CameraInput (ITextureInput input, params Camera[] cameras) : this(input, default, cameras) { }
		RuntimeObject* L_0 = ___input0;
		CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* L_1 = ___cameras1;
		CameraInput__ctor_mFEA4077B99FE1A1BDA315A520355DFE3AD6A954A(__this, L_0, (RuntimeObject*)NULL, L_1, NULL);
		// public CameraInput (ITextureInput input, params Camera[] cameras) : this(input, default, cameras) { }
		return;
	}
}
// System.Void NatSuite.Recorders.Inputs.CameraInput::.ctor(NatSuite.Recorders.Inputs.ITextureInput,NatSuite.Recorders.Clocks.IClock,UnityEngine.Camera[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraInput__ctor_mFEA4077B99FE1A1BDA315A520355DFE3AD6A954A (CameraInput_t2EC933CD283AC613F0C5586F86A23207AC4CB64B* __this, RuntimeObject* ___input0, RuntimeObject* ___clock1, CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* ___cameras2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Sort_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mC3829F48821660B3A8FA95D9C77391134C6BF019_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comparison_1_t49BE56523BDD8BC22EF3396960546FE16DE7B11A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisCameraInputAttachment_t17BF4C0461502F1F1599A74377F5016D32421AF2_m14AB119591743F65098AAB5E2BD09F052BC819D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITextureInput_t50F07D47FAFA1FAD0B16D0EF9BFB53301889B0A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__7_0_mEB2C1B3BFAD9501F86AD60C2BB57A829B96CB5CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t65E9393167EC90097697389CCD12EA0898E4ED54_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral397D9AACB9455AB34FC59D3578E8E5FDCBA6AB9D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Comparison_1_t49BE56523BDD8BC22EF3396960546FE16DE7B11A* G_B2_0 = NULL;
	CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* G_B2_1 = NULL;
	Comparison_1_t49BE56523BDD8BC22EF3396960546FE16DE7B11A* G_B1_0 = NULL;
	CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* G_B1_1 = NULL;
	{
		// public CameraInput (ITextureInput input, IClock clock, params Camera[] cameras) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Array.Sort(cameras, (a, b) => (int)(100 * (a.depth - b.depth)));
		CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* L_0 = ___cameras2;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t65E9393167EC90097697389CCD12EA0898E4ED54_il2cpp_TypeInfo_var);
		Comparison_1_t49BE56523BDD8BC22EF3396960546FE16DE7B11A* L_1 = ((U3CU3Ec_t65E9393167EC90097697389CCD12EA0898E4ED54_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t65E9393167EC90097697389CCD12EA0898E4ED54_il2cpp_TypeInfo_var))->___U3CU3E9__7_0_1;
		Comparison_1_t49BE56523BDD8BC22EF3396960546FE16DE7B11A* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0026;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t65E9393167EC90097697389CCD12EA0898E4ED54_il2cpp_TypeInfo_var);
		U3CU3Ec_t65E9393167EC90097697389CCD12EA0898E4ED54* L_3 = ((U3CU3Ec_t65E9393167EC90097697389CCD12EA0898E4ED54_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t65E9393167EC90097697389CCD12EA0898E4ED54_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Comparison_1_t49BE56523BDD8BC22EF3396960546FE16DE7B11A* L_4 = (Comparison_1_t49BE56523BDD8BC22EF3396960546FE16DE7B11A*)il2cpp_codegen_object_new(Comparison_1_t49BE56523BDD8BC22EF3396960546FE16DE7B11A_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Comparison_1__ctor_mA05E36D38BB75F9EF78F876803A19445EDF81CD5(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3C_ctorU3Eb__7_0_mEB2C1B3BFAD9501F86AD60C2BB57A829B96CB5CC_RuntimeMethod_var), NULL);
		Comparison_1_t49BE56523BDD8BC22EF3396960546FE16DE7B11A* L_5 = L_4;
		((U3CU3Ec_t65E9393167EC90097697389CCD12EA0898E4ED54_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t65E9393167EC90097697389CCD12EA0898E4ED54_il2cpp_TypeInfo_var))->___U3CU3E9__7_0_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t65E9393167EC90097697389CCD12EA0898E4ED54_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t65E9393167EC90097697389CCD12EA0898E4ED54_il2cpp_TypeInfo_var))->___U3CU3E9__7_0_1), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0026:
	{
		Array_Sort_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mC3829F48821660B3A8FA95D9C77391134C6BF019(G_B2_1, G_B2_0, Array_Sort_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mC3829F48821660B3A8FA95D9C77391134C6BF019_RuntimeMethod_var);
		// var (width, height) = input.frameSize;
		RuntimeObject* L_6 = ___input0;
		NullCheck(L_6);
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_7;
		L_7 = InterfaceFuncInvoker0< ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D >::Invoke(0 /* System.ValueTuple`2<System.Int32,System.Int32> NatSuite.Recorders.Inputs.ITextureInput::get_frameSize() */, ITextureInput_t50F07D47FAFA1FAD0B16D0EF9BFB53301889B0A7_il2cpp_TypeInfo_var, L_6);
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_8 = L_7;
		int32_t L_9 = L_8.___Item1_0;
		V_0 = L_9;
		int32_t L_10 = L_8.___Item2_1;
		V_1 = L_10;
		// this.input = input;
		RuntimeObject* L_11 = ___input0;
		__this->___input_1 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___input_1), (void*)L_11);
		// this.clock = clock;
		RuntimeObject* L_12 = ___clock1;
		__this->___clock_2 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___clock_2), (void*)L_12);
		// this.cameras = cameras;
		CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* L_13 = ___cameras2;
		__this->___cameras_3 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cameras_3), (void*)L_13);
		// this.frameDescriptor = new RenderTextureDescriptor(width, height, RenderTextureFormat.ARGB32, 24) {
		//     sRGB = true,
		//     msaaSamples = Mathf.Max(QualitySettings.antiAliasing, 1)
		// };
		int32_t L_14 = V_0;
		int32_t L_15 = V_1;
		RenderTextureDescriptor__ctor_mE27A3C225736C1F806C12A7C31C0DC66A0AFE61B((&V_2), L_14, L_15, 0, ((int32_t)24), NULL);
		RenderTextureDescriptor_set_sRGB_mAB7A494EE8C496C22B3BBBCB90488312D46F3429((&V_2), (bool)1, NULL);
		int32_t L_16;
		L_16 = QualitySettings_get_antiAliasing_m1E38110F0E9A028F8CA4D3889D32E6B873912EB0(NULL);
		int32_t L_17;
		L_17 = Mathf_Max_m8A4C189A6749DFE3ED8B66D9D3CACD8DB333974F_inline(L_16, 1, NULL);
		RenderTextureDescriptor_set_msaaSamples_m6910E09489372746391B14FBAF59A7237539D6C4_inline((&V_2), L_17, NULL);
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 L_18 = V_2;
		__this->___frameDescriptor_5 = L_18;
		// attachment = new GameObject("NatCorder CameraInputAttachment").AddComponent<CameraInputAttachment>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_19, _stringLiteral397D9AACB9455AB34FC59D3578E8E5FDCBA6AB9D, NULL);
		NullCheck(L_19);
		CameraInputAttachment_t17BF4C0461502F1F1599A74377F5016D32421AF2* L_20;
		L_20 = GameObject_AddComponent_TisCameraInputAttachment_t17BF4C0461502F1F1599A74377F5016D32421AF2_m14AB119591743F65098AAB5E2BD09F052BC819D1(L_19, GameObject_AddComponent_TisCameraInputAttachment_t17BF4C0461502F1F1599A74377F5016D32421AF2_m14AB119591743F65098AAB5E2BD09F052BC819D1_RuntimeMethod_var);
		__this->___attachment_4 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___attachment_4), (void*)L_20);
		// attachment.StartCoroutine(CommitFrames());
		CameraInputAttachment_t17BF4C0461502F1F1599A74377F5016D32421AF2* L_21 = __this->___attachment_4;
		RuntimeObject* L_22;
		L_22 = CameraInput_CommitFrames_mB6390CE2057EC94403FF0CA0FCDC612958A4306E(__this, NULL);
		NullCheck(L_21);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_23;
		L_23 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_21, L_22, NULL);
		// }
		return;
	}
}
// System.Void NatSuite.Recorders.Inputs.CameraInput::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraInput_Dispose_mF7BFBEBD23444A5CED7985274E9D9AC6EE78A226 (CameraInput_t2EC933CD283AC613F0C5586F86A23207AC4CB64B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject.Destroy(attachment.gameObject);
		CameraInputAttachment_t17BF4C0461502F1F1599A74377F5016D32421AF2* L_0 = __this->___attachment_4;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_1, NULL);
		// input.Dispose();
		RuntimeObject* L_2 = __this->___input_1;
		NullCheck(L_2);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
		// }
		return;
	}
}
// System.Collections.IEnumerator NatSuite.Recorders.Inputs.CameraInput::CommitFrames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CameraInput_CommitFrames_mB6390CE2057EC94403FF0CA0FCDC612958A4306E (CameraInput_t2EC933CD283AC613F0C5586F86A23207AC4CB64B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCommitFramesU3Ed__15_t0F146564D0AC504754C6C93893D3D9A954D7F3C6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCommitFramesU3Ed__15_t0F146564D0AC504754C6C93893D3D9A954D7F3C6* L_0 = (U3CCommitFramesU3Ed__15_t0F146564D0AC504754C6C93893D3D9A954D7F3C6*)il2cpp_codegen_object_new(U3CCommitFramesU3Ed__15_t0F146564D0AC504754C6C93893D3D9A954D7F3C6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CCommitFramesU3Ed__15__ctor_m470FB10276A830AA393387977EA42BDB4BAC34DD(L_0, 0, NULL);
		U3CCommitFramesU3Ed__15_t0F146564D0AC504754C6C93893D3D9A954D7F3C6* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void NatSuite.Recorders.Inputs.CameraInput::CommitFrame(UnityEngine.Camera,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraInput_CommitFrame_m3EEBBDE971817D454E5E5391D81E4AC429899B77 (CameraInput_t2EC933CD283AC613F0C5586F86A23207AC4CB64B* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___destination1, const RuntimeMethod* method) 
{
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_0 = NULL;
	{
		// var prevTarget = source.targetTexture;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = ___source0;
		NullCheck(L_0);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_1;
		L_1 = Camera_get_targetTexture_mC856D7FF8351476068D04E245E4F08F5C56A55BD(L_0, NULL);
		V_0 = L_1;
		// source.targetTexture = destination;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_3 = ___destination1;
		NullCheck(L_2);
		Camera_set_targetTexture_mE6C740F21A72DA47FB5B1D31D208710738A836C4(L_2, L_3, NULL);
		// source.Render();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4 = ___source0;
		NullCheck(L_4);
		Camera_Render_m6089001EB6710DA9A21C87185D65922F13A24509(L_4, NULL);
		// source.targetTexture = prevTarget;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5 = ___source0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_6 = V_0;
		NullCheck(L_5);
		Camera_set_targetTexture_mE6C740F21A72DA47FB5B1D31D208710738A836C4(L_5, L_6, NULL);
		// }
		return;
	}
}
// NatSuite.Recorders.Inputs.ITextureInput NatSuite.Recorders.Inputs.CameraInput::CreateInput(NatSuite.Recorders.IMediaRecorder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CameraInput_CreateInput_mB507E1DA0726CDB8C021141EAC40391E5ADB5713 (RuntimeObject* ___recorder0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTextureInput_t96F659D0E82E8AF3081EE7471E12DFB5C5A4F0A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureInput_t0D646F396A8A82557F5D7C855E74889519B2B4A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (SystemInfo.supportsAsyncGPUReadback)
		bool L_0;
		L_0 = SystemInfo_get_supportsAsyncGPUReadback_mB4C08F57C9A314EF6DE70A1322486F9F9B06C1D1(NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// return new AsyncTextureInput(recorder);
		RuntimeObject* L_1 = ___recorder0;
		AsyncTextureInput_t96F659D0E82E8AF3081EE7471E12DFB5C5A4F0A5* L_2 = (AsyncTextureInput_t96F659D0E82E8AF3081EE7471E12DFB5C5A4F0A5*)il2cpp_codegen_object_new(AsyncTextureInput_t96F659D0E82E8AF3081EE7471E12DFB5C5A4F0A5_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AsyncTextureInput__ctor_mC41BFCA2A58AE733A482504F20E9EBC0B6A74A34(L_2, L_1, NULL);
		return L_2;
	}

IL_000e:
	{
		// return new TextureInput(recorder);
		RuntimeObject* L_3 = ___recorder0;
		TextureInput_t0D646F396A8A82557F5D7C855E74889519B2B4A6* L_4 = (TextureInput_t0D646F396A8A82557F5D7C855E74889519B2B4A6*)il2cpp_codegen_object_new(TextureInput_t0D646F396A8A82557F5D7C855E74889519B2B4A6_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		TextureInput__ctor_m76E0113A4068F1194152B99D75C7A96001D022F2(L_4, L_3, NULL);
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
// System.Void NatSuite.Recorders.Inputs.CameraInput/CameraInputAttachment::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraInputAttachment__ctor_m4F4E740E28759DF13BECD49A96E4ABD0074D23D0 (CameraInputAttachment_t17BF4C0461502F1F1599A74377F5016D32421AF2* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void NatSuite.Recorders.Inputs.CameraInput/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m20DB6A0D33C63A74EABCA29B3C5ADB749E8938EB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t65E9393167EC90097697389CCD12EA0898E4ED54_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t65E9393167EC90097697389CCD12EA0898E4ED54* L_0 = (U3CU3Ec_t65E9393167EC90097697389CCD12EA0898E4ED54*)il2cpp_codegen_object_new(U3CU3Ec_t65E9393167EC90097697389CCD12EA0898E4ED54_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m81FFDC0AEEC28DF5A13E034A972F53FC9AA30590(L_0, NULL);
		((U3CU3Ec_t65E9393167EC90097697389CCD12EA0898E4ED54_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t65E9393167EC90097697389CCD12EA0898E4ED54_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t65E9393167EC90097697389CCD12EA0898E4ED54_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t65E9393167EC90097697389CCD12EA0898E4ED54_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void NatSuite.Recorders.Inputs.CameraInput/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m81FFDC0AEEC28DF5A13E034A972F53FC9AA30590 (U3CU3Ec_t65E9393167EC90097697389CCD12EA0898E4ED54* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Int32 NatSuite.Recorders.Inputs.CameraInput/<>c::<.ctor>b__7_0(UnityEngine.Camera,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3C_ctorU3Eb__7_0_mEB2C1B3BFAD9501F86AD60C2BB57A829B96CB5CC (U3CU3Ec_t65E9393167EC90097697389CCD12EA0898E4ED54* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___a0, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___b1, const RuntimeMethod* method) 
{
	{
		// Array.Sort(cameras, (a, b) => (int)(100 * (a.depth - b.depth)));
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = ___a0;
		NullCheck(L_0);
		float L_1;
		L_1 = Camera_get_depth_mDF67FFF8ED61750467DFC4C6D8F236850AD1BB1D(L_0, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = ___b1;
		NullCheck(L_2);
		float L_3;
		L_3 = Camera_get_depth_mDF67FFF8ED61750467DFC4C6D8F236850AD1BB1D(L_2, NULL);
		return il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply((100.0f), ((float)il2cpp_codegen_subtract(L_1, L_3)))));
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
// System.Void NatSuite.Recorders.Inputs.CameraInput/<CommitFrames>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCommitFramesU3Ed__15__ctor_m470FB10276A830AA393387977EA42BDB4BAC34DD (U3CCommitFramesU3Ed__15_t0F146564D0AC504754C6C93893D3D9A954D7F3C6* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void NatSuite.Recorders.Inputs.CameraInput/<CommitFrames>d__15::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCommitFramesU3Ed__15_System_IDisposable_Dispose_mA8C1382ED516D4406829DB6206653ABB718B16CA (U3CCommitFramesU3Ed__15_t0F146564D0AC504754C6C93893D3D9A954D7F3C6* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean NatSuite.Recorders.Inputs.CameraInput/<CommitFrames>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCommitFramesU3Ed__15_MoveNext_mAC7B82626DC9A45477D9BE3405AC6ED29A11020E (U3CCommitFramesU3Ed__15_t0F146564D0AC504754C6C93893D3D9A954D7F3C6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IClock_t0C248C3D76DB9B8F0E141D83E155FDA754570A4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITextureInput_t50F07D47FAFA1FAD0B16D0EF9BFB53301889B0A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	CameraInput_t2EC933CD283AC613F0C5586F86A23207AC4CB64B* V_1 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	RuntimeObject* G_B11_0 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B11_1 = NULL;
	RuntimeObject* G_B11_2 = NULL;
	RuntimeObject* G_B10_0 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B10_1 = NULL;
	RuntimeObject* G_B10_2 = NULL;
	int64_t G_B12_0 = 0;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B12_1 = NULL;
	RuntimeObject* G_B12_2 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		CameraInput_t2EC933CD283AC613F0C5586F86A23207AC4CB64B* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_003e;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// var yielder = new WaitForEndOfFrame();
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_4 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663*)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_4, NULL);
		__this->___U3CyielderU3E5__2_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CyielderU3E5__2_3), (void*)L_4);
	}

IL_0029:
	{
		// yield return yielder;
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_5 = __this->___U3CyielderU3E5__2_3;
		__this->___U3CU3E2__current_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_5);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_003e:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (frameCount++ % (frameSkip + 1) != 0)
		CameraInput_t2EC933CD283AC613F0C5586F86A23207AC4CB64B* L_6 = V_1;
		CameraInput_t2EC933CD283AC613F0C5586F86A23207AC4CB64B* L_7 = V_1;
		NullCheck(L_7);
		int32_t L_8 = L_7->___frameCount_6;
		V_3 = L_8;
		int32_t L_9 = V_3;
		NullCheck(L_6);
		L_6->___frameCount_6 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		int32_t L_10 = V_3;
		CameraInput_t2EC933CD283AC613F0C5586F86A23207AC4CB64B* L_11 = V_1;
		NullCheck(L_11);
		int32_t L_12 = L_11->___frameSkip_0;
		if (((int32_t)(L_10%((int32_t)il2cpp_codegen_add(L_12, 1)))))
		{
			goto IL_0029;
		}
	}
	{
		// var frameBuffer = RenderTexture.GetTemporary(frameDescriptor);
		CameraInput_t2EC933CD283AC613F0C5586F86A23207AC4CB64B* L_13 = V_1;
		NullCheck(L_13);
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 L_14 = L_13->___frameDescriptor_5;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_15;
		L_15 = RenderTexture_GetTemporary_m67446280ADE53A43FC26C671AFE7FE6912888CB5(L_14, NULL);
		V_2 = L_15;
		// for (var i = 0; i < cameras.Length; i++)
		V_4 = 0;
		goto IL_0088;
	}

IL_0072:
	{
		// CommitFrame(cameras[i], frameBuffer);
		CameraInput_t2EC933CD283AC613F0C5586F86A23207AC4CB64B* L_16 = V_1;
		CameraInput_t2EC933CD283AC613F0C5586F86A23207AC4CB64B* L_17 = V_1;
		NullCheck(L_17);
		CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* L_18 = L_17->___cameras_3;
		int32_t L_19 = V_4;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_22 = V_2;
		NullCheck(L_16);
		VirtualActionInvoker2< Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* >::Invoke(5 /* System.Void NatSuite.Recorders.Inputs.CameraInput::CommitFrame(UnityEngine.Camera,UnityEngine.RenderTexture) */, L_16, L_21, L_22);
		// for (var i = 0; i < cameras.Length; i++)
		int32_t L_23 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0088:
	{
		// for (var i = 0; i < cameras.Length; i++)
		int32_t L_24 = V_4;
		CameraInput_t2EC933CD283AC613F0C5586F86A23207AC4CB64B* L_25 = V_1;
		NullCheck(L_25);
		CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* L_26 = L_25->___cameras_3;
		NullCheck(L_26);
		if ((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length)))))
		{
			goto IL_0072;
		}
	}
	{
		// input.CommitFrame(frameBuffer, clock?.timestamp ?? 0L);
		CameraInput_t2EC933CD283AC613F0C5586F86A23207AC4CB64B* L_27 = V_1;
		NullCheck(L_27);
		RuntimeObject* L_28 = L_27->___input_1;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_29 = V_2;
		CameraInput_t2EC933CD283AC613F0C5586F86A23207AC4CB64B* L_30 = V_1;
		NullCheck(L_30);
		RuntimeObject* L_31 = L_30->___clock_2;
		RuntimeObject* L_32 = L_31;
		G_B10_0 = L_32;
		G_B10_1 = L_29;
		G_B10_2 = L_28;
		if (L_32)
		{
			G_B11_0 = L_32;
			G_B11_1 = L_29;
			G_B11_2 = L_28;
			goto IL_00a9;
		}
	}
	{
		G_B12_0 = ((int64_t)0);
		G_B12_1 = G_B10_1;
		G_B12_2 = G_B10_2;
		goto IL_00ae;
	}

IL_00a9:
	{
		NullCheck(G_B11_0);
		int64_t L_33;
		L_33 = InterfaceFuncInvoker0< int64_t >::Invoke(0 /* System.Int64 NatSuite.Recorders.Clocks.IClock::get_timestamp() */, IClock_t0C248C3D76DB9B8F0E141D83E155FDA754570A4D_il2cpp_TypeInfo_var, G_B11_0);
		G_B12_0 = L_33;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
	}

IL_00ae:
	{
		NullCheck(G_B12_2);
		InterfaceActionInvoker2< Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*, int64_t >::Invoke(1 /* System.Void NatSuite.Recorders.Inputs.ITextureInput::CommitFrame(UnityEngine.Texture,System.Int64) */, ITextureInput_t50F07D47FAFA1FAD0B16D0EF9BFB53301889B0A7_il2cpp_TypeInfo_var, G_B12_2, G_B12_1, G_B12_0);
		// RenderTexture.ReleaseTemporary(frameBuffer);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_34 = V_2;
		RenderTexture_ReleaseTemporary_m7D9B385460ED0D0CF7BCC033605CEBD60A1A232F(L_34, NULL);
		goto IL_0029;
	}
}
// System.Object NatSuite.Recorders.Inputs.CameraInput/<CommitFrames>d__15::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCommitFramesU3Ed__15_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m440EE8D3176174973EEF92D199367F9354C77022 (U3CCommitFramesU3Ed__15_t0F146564D0AC504754C6C93893D3D9A954D7F3C6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void NatSuite.Recorders.Inputs.CameraInput/<CommitFrames>d__15::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCommitFramesU3Ed__15_System_Collections_IEnumerator_Reset_m13F554D35E88163490C518DF060AC1DE04A1A695 (U3CCommitFramesU3Ed__15_t0F146564D0AC504754C6C93893D3D9A954D7F3C6* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCommitFramesU3Ed__15_System_Collections_IEnumerator_Reset_m13F554D35E88163490C518DF060AC1DE04A1A695_RuntimeMethod_var)));
	}
}
// System.Object NatSuite.Recorders.Inputs.CameraInput/<CommitFrames>d__15::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCommitFramesU3Ed__15_System_Collections_IEnumerator_get_Current_m8769B03BB2E4D390618A8A4BAA84AA4A613B1D46 (U3CCommitFramesU3Ed__15_t0F146564D0AC504754C6C93893D3D9A954D7F3C6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void NatSuite.Recorders.Inputs.TextureInput::.ctor(NatSuite.Recorders.IMediaRecorder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureInput__ctor_m76E0113A4068F1194152B99D75C7A96001D022F2 (TextureInput_t0D646F396A8A82557F5D7C855E74889519B2B4A6* __this, RuntimeObject* ___recorder0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMediaRecorder_t075A0EFCE0700DA3B7600BCC859EFCA50D6CB39A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public TextureInput (IMediaRecorder recorder) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.recorder = recorder;
		RuntimeObject* L_0 = ___recorder0;
		__this->___recorder_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___recorder_0), (void*)L_0);
		// this.readbackBuffer = new Texture2D(
		//     recorder.frameSize.width,
		//     recorder.frameSize.height,
		//     TextureFormat.RGBA32,
		//     false,
		//     false
		// );
		RuntimeObject* L_1 = ___recorder0;
		NullCheck(L_1);
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_2;
		L_2 = InterfaceFuncInvoker0< ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D >::Invoke(0 /* System.ValueTuple`2<System.Int32,System.Int32> NatSuite.Recorders.IMediaRecorder::get_frameSize() */, IMediaRecorder_t075A0EFCE0700DA3B7600BCC859EFCA50D6CB39A_il2cpp_TypeInfo_var, L_1);
		int32_t L_3 = L_2.___Item1_0;
		RuntimeObject* L_4 = ___recorder0;
		NullCheck(L_4);
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_5;
		L_5 = InterfaceFuncInvoker0< ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D >::Invoke(0 /* System.ValueTuple`2<System.Int32,System.Int32> NatSuite.Recorders.IMediaRecorder::get_frameSize() */, IMediaRecorder_t075A0EFCE0700DA3B7600BCC859EFCA50D6CB39A_il2cpp_TypeInfo_var, L_4);
		int32_t L_6 = L_5.___Item2_1;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_7 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Texture2D__ctor_mC3F84195D1DCEFC0536B3FBD40A8F8E865A4F32A(L_7, L_3, L_6, 4, (bool)0, (bool)0, NULL);
		__this->___readbackBuffer_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___readbackBuffer_1), (void*)L_7);
		// }
		return;
	}
}
// System.Void NatSuite.Recorders.Inputs.TextureInput::CommitFrame(UnityEngine.Texture,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureInput_CommitFrame_mA45DE6D4C8392C0FE9AEC4DF0304EB4BE2CC6F21 (TextureInput_t0D646F396A8A82557F5D7C855E74889519B2B4A6* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture0, int64_t ___timestamp1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMediaRecorder_t075A0EFCE0700DA3B7600BCC859EFCA50D6CB39A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD9261CD83E770034D4BDBB7D3907F4648D8ED4E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_GetRawTextureData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m225198C8CEB0AB84CF9FE0B40337778AA4C75608_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_2 = NULL;
	{
		// var (width, height) = recorder.frameSize;
		RuntimeObject* L_0 = __this->___recorder_0;
		NullCheck(L_0);
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_1;
		L_1 = InterfaceFuncInvoker0< ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D >::Invoke(0 /* System.ValueTuple`2<System.Int32,System.Int32> NatSuite.Recorders.IMediaRecorder::get_frameSize() */, IMediaRecorder_t075A0EFCE0700DA3B7600BCC859EFCA50D6CB39A_il2cpp_TypeInfo_var, L_0);
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_2 = L_1;
		int32_t L_3 = L_2.___Item1_0;
		V_0 = L_3;
		int32_t L_4 = L_2.___Item2_1;
		V_1 = L_4;
		// var renderTexture = RenderTexture.GetTemporary(width, height, 24, RenderTextureFormat.ARGB32);
		int32_t L_5 = V_0;
		int32_t L_6 = V_1;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_7;
		L_7 = RenderTexture_GetTemporary_mEB21705B78CAF6B8F1F6617453A8EE8A94498DE2(L_5, L_6, ((int32_t)24), 0, NULL);
		V_2 = L_7;
		// Graphics.Blit(texture, renderTexture);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_8 = ___texture0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_9 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m066854D684B6042B266D306E8E012D2C6C1787BE(L_8, L_9, NULL);
		// var prevActive = RenderTexture.active;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_10;
		L_10 = RenderTexture_get_active_m2204DF860773F9A8CDFF92BDB35CEB72A0643345(NULL);
		// RenderTexture.active = renderTexture;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_11 = V_2;
		RenderTexture_set_active_m045EA53D62FBF79693265E33D14D8E0E8151A37E(L_11, NULL);
		// readbackBuffer.ReadPixels(new Rect(0, 0, width, height), 0, 0, false);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_12 = __this->___readbackBuffer_1;
		int32_t L_13 = V_0;
		int32_t L_14 = V_1;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_15;
		memset((&L_15), 0, sizeof(L_15));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_15), (0.0f), (0.0f), ((float)L_13), ((float)L_14), /*hidden argument*/NULL);
		NullCheck(L_12);
		Texture2D_ReadPixels_m7483DB211233F02E46418E9A6077487925F0024C(L_12, L_15, 0, 0, (bool)0, NULL);
		// RenderTexture.active = prevActive;
		RenderTexture_set_active_m045EA53D62FBF79693265E33D14D8E0E8151A37E(L_10, NULL);
		// RenderTexture.ReleaseTemporary(renderTexture);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_16 = V_2;
		RenderTexture_ReleaseTemporary_m7D9B385460ED0D0CF7BCC033605CEBD60A1A232F(L_16, NULL);
		// recorder.CommitFrame(
		//     readbackBuffer.GetRawTextureData<byte>().GetUnsafeReadOnlyPtr(),
		//     timestamp
		// );
		RuntimeObject* L_17 = __this->___recorder_0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_18 = __this->___readbackBuffer_1;
		NullCheck(L_18);
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_19;
		L_19 = Texture2D_GetRawTextureData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m225198C8CEB0AB84CF9FE0B40337778AA4C75608(L_18, Texture2D_GetRawTextureData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m225198C8CEB0AB84CF9FE0B40337778AA4C75608_RuntimeMethod_var);
		void* L_20;
		L_20 = NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD9261CD83E770034D4BDBB7D3907F4648D8ED4E6(L_19, NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD9261CD83E770034D4BDBB7D3907F4648D8ED4E6_RuntimeMethod_var);
		int64_t L_21 = ___timestamp1;
		NullCheck(L_17);
		InterfaceActionInvoker2< void*, int64_t >::Invoke(2 /* System.Void NatSuite.Recorders.IMediaRecorder::CommitFrame(System.Void*,System.Int64) */, IMediaRecorder_t075A0EFCE0700DA3B7600BCC859EFCA50D6CB39A_il2cpp_TypeInfo_var, L_17, L_20, L_21);
		// }
		return;
	}
}
// System.Void NatSuite.Recorders.Inputs.TextureInput::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureInput_Dispose_mF9582F1B2CAE0F6DFEDA932D96538CC63E84F469 (TextureInput_t0D646F396A8A82557F5D7C855E74889519B2B4A6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void Dispose () => Texture2D.Destroy(readbackBuffer);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = __this->___readbackBuffer_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_0, NULL);
		return;
	}
}
// System.ValueTuple`2<System.Int32,System.Int32> NatSuite.Recorders.Inputs.TextureInput::NatSuite.Recorders.Inputs.ITextureInput.get_frameSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D TextureInput_NatSuite_Recorders_Inputs_ITextureInput_get_frameSize_m719650F0AC8C6CB656A8B0390892542594637941 (TextureInput_t0D646F396A8A82557F5D7C855E74889519B2B4A6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMediaRecorder_t075A0EFCE0700DA3B7600BCC859EFCA50D6CB39A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// (int, int) ITextureInput.frameSize => recorder.frameSize;
		RuntimeObject* L_0 = __this->___recorder_0;
		NullCheck(L_0);
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_1;
		L_1 = InterfaceFuncInvoker0< ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D >::Invoke(0 /* System.ValueTuple`2<System.Int32,System.Int32> NatSuite.Recorders.IMediaRecorder::get_frameSize() */, IMediaRecorder_t075A0EFCE0700DA3B7600BCC859EFCA50D6CB39A_il2cpp_TypeInfo_var, L_0);
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
// System.Int64 NatSuite.Recorders.Clocks.FixedIntervalClock::get_timestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t FixedIntervalClock_get_timestamp_mCF29BF6C5DB46679B707CB1BF0E41244CA2098CA (FixedIntervalClock_tB8A8A6DB68515A02FBBF5A83C03984BD5D743393* __this, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	int64_t G_B3_0 = 0;
	{
		// get => (long)((autoTick ? ticks++ : ticks) * interval * 1e+9);
		bool L_0 = __this->___autoTick_1;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		int64_t L_1 = __this->___ticks_2;
		G_B3_0 = L_1;
		goto IL_0022;
	}

IL_0010:
	{
		int64_t L_2 = __this->___ticks_2;
		V_0 = L_2;
		int64_t L_3 = V_0;
		__this->___ticks_2 = ((int64_t)il2cpp_codegen_add(L_3, ((int64_t)1)));
		int64_t L_4 = V_0;
		G_B3_0 = L_4;
	}

IL_0022:
	{
		double L_5 = __this->___interval_0;
		return il2cpp_codegen_cast_double_to_int<int64_t>(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(((double)G_B3_0), L_5)), (1000000000.0))));
	}
}
// System.Void NatSuite.Recorders.Clocks.FixedIntervalClock::.ctor(System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixedIntervalClock__ctor_m9F1179DB20845159257DABA785F84577DFE6CCEE (FixedIntervalClock_tB8A8A6DB68515A02FBBF5A83C03984BD5D743393* __this, float ___framerate0, bool ___autoTick1, const RuntimeMethod* method) 
{
	{
		// public FixedIntervalClock (float framerate, bool autoTick = true) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.interval = 1.0 / framerate;
		float L_0 = ___framerate0;
		__this->___interval_0 = ((double)((1.0)/((double)L_0)));
		// this.ticks = 0L;
		__this->___ticks_2 = ((int64_t)0);
		// this.autoTick = autoTick;
		bool L_1 = ___autoTick1;
		__this->___autoTick_1 = L_1;
		// }
		return;
	}
}
// System.Void NatSuite.Recorders.Clocks.FixedIntervalClock::Tick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixedIntervalClock_Tick_m0D7BBCC50463086C1EF93E7DBED7310FCC49EFA5 (FixedIntervalClock_tB8A8A6DB68515A02FBBF5A83C03984BD5D743393* __this, const RuntimeMethod* method) 
{
	{
		// public void Tick () => ticks++;
		int64_t L_0 = __this->___ticks_2;
		__this->___ticks_2 = ((int64_t)il2cpp_codegen_add(L_0, ((int64_t)1)));
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
// System.Int64 NatSuite.Recorders.Clocks.RealtimeClock::get_timestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t RealtimeClock_get_timestamp_mA2E621B2F23BC43CA25FDA82CD74BBBC4CBF9FAE (RealtimeClock_tEF63149398A267D5573AA8A39DC18D8AD6BAF906* __this, const RuntimeMethod* method) 
{
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	int64_t G_B2_0 = 0;
	int64_t G_B1_0 = 0;
	{
		// var time = stopwatch.Elapsed.Ticks * 100L;
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_0 = __this->___stopwatch_0;
		NullCheck(L_0);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_1;
		L_1 = Stopwatch_get_Elapsed_mF16CCA2F9B7E2EAEFCAF8D81F44370DBAC1B2178(L_0, NULL);
		V_0 = L_1;
		int64_t L_2;
		L_2 = TimeSpan_get_Ticks_mC50131E57621F29FACC53B3241432ABB874FA1B5_inline((&V_0), NULL);
		// if (!stopwatch.IsRunning)
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_3 = __this->___stopwatch_0;
		NullCheck(L_3);
		bool L_4;
		L_4 = Stopwatch_get_IsRunning_mB1C465B7089DFB8A94BF56CC694F5EF72A55E5B6_inline(L_3, NULL);
		G_B1_0 = ((int64_t)il2cpp_codegen_multiply(L_2, ((int64_t)((int32_t)100))));
		if (L_4)
		{
			G_B2_0 = ((int64_t)il2cpp_codegen_multiply(L_2, ((int64_t)((int32_t)100))));
			goto IL_002f;
		}
	}
	{
		// stopwatch.Start();
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_5 = __this->___stopwatch_0;
		NullCheck(L_5);
		Stopwatch_Start_m35906A38C7D336CF9DD35854C7E170D762A55915(L_5, NULL);
		G_B2_0 = G_B1_0;
	}

IL_002f:
	{
		// return time;
		return G_B2_0;
	}
}
// System.Boolean NatSuite.Recorders.Clocks.RealtimeClock::get_paused()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RealtimeClock_get_paused_mA0C13135BA4770F369CC811A87979E302A09E801 (RealtimeClock_tEF63149398A267D5573AA8A39DC18D8AD6BAF906* __this, const RuntimeMethod* method) 
{
	{
		// [MethodImpl(MethodImplOptions.Synchronized)] get => !stopwatch.IsRunning;
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_0 = __this->___stopwatch_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Stopwatch_get_IsRunning_mB1C465B7089DFB8A94BF56CC694F5EF72A55E5B6_inline(L_0, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void NatSuite.Recorders.Clocks.RealtimeClock::set_paused(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RealtimeClock_set_paused_m02F34B80DCBACE5ADCD2A883C161CFD51592E2B9 (RealtimeClock_tEF63149398A267D5573AA8A39DC18D8AD6BAF906* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stopwatch_Start_m35906A38C7D336CF9DD35854C7E170D762A55915_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stopwatch_Stop_m8F2A2EFD9D7D5B4180A5E5379E5443864618D7DC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B3_0 = NULL;
	{
		// [MethodImpl(MethodImplOptions.Synchronized)] set => (value ? (Action)stopwatch.Stop : stopwatch.Start)();
		bool L_0 = ___value0;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_1 = __this->___stopwatch_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_2, L_1, (intptr_t)((void*)Stopwatch_Start_m35906A38C7D336CF9DD35854C7E170D762A55915_RuntimeMethod_var), NULL);
		G_B3_0 = L_2;
		goto IL_0027;
	}

IL_0016:
	{
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_3 = __this->___stopwatch_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_4, L_3, (intptr_t)((void*)Stopwatch_Stop_m8F2A2EFD9D7D5B4180A5E5379E5443864618D7DC_RuntimeMethod_var), NULL);
		G_B3_0 = L_4;
	}

IL_0027:
	{
		NullCheck(G_B3_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B3_0, NULL);
		return;
	}
}
// System.Void NatSuite.Recorders.Clocks.RealtimeClock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RealtimeClock__ctor_m67161647CD3B0C42E8FE8F7535CBB4F14C53CF8C (RealtimeClock_tEF63149398A267D5573AA8A39DC18D8AD6BAF906* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public RealtimeClock () => this.stopwatch = new Stopwatch();
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// public RealtimeClock () => this.stopwatch = new Stopwatch();
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_0 = (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043*)il2cpp_codegen_object_new(Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Stopwatch__ctor_mAFE6B2F45CF1C3469EF6D5307972BC098B473D0A(L_0, NULL);
		__this->___stopwatch_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___stopwatch_0), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JPGRecorder_set_frameSize_mDD904FDA5E3C73D13FB4AE8B86C27BD0A19BCF09_inline (JPGRecorder_t1A5EC7A08AC34EFAFCD04AA71EEB72419F430A45* __this, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___value0, const RuntimeMethod* method) 
{
	{
		// public (int width, int height) frameSize { get; private set; }
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_0 = ___value0;
		__this->___U3CframeSizeU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_mA48718D9A20D8972EDD41714CEF6BBF864F442EA_inline (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___value0;
		int32_t L_1 = ___min1;
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		int32_t L_4 = ___value0;
		int32_t L_5 = ___max2;
		V_1 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		int32_t L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		int32_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D JPGRecorder_get_frameSize_m52A148E7CAD4C1E86FE8F649420A59C2B3A26D19_inline (JPGRecorder_t1A5EC7A08AC34EFAFCD04AA71EEB72419F430A45* __this, const RuntimeMethod* method) 
{
	{
		// public (int width, int height) frameSize { get; private set; }
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_0 = __this->___U3CframeSizeU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t GCHandle_op_Explicit_m67A1C3E8BC6C8163C5775AE62A514000D00CD9B6_inline (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___value0, const RuntimeMethod* method) 
{
	{
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_0 = ___value0;
		intptr_t L_1 = L_0.___handle_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Max_m8A4C189A6749DFE3ED8B66D9D3CACD8DB333974F_inline (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___a0;
		int32_t L_1 = ___b1;
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		int32_t L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_msaaSamples_m6910E09489372746391B14FBAF59A7237539D6C4_inline (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CmsaaSamplesU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t TimeSpan_get_Ticks_mC50131E57621F29FACC53B3241432ABB874FA1B5_inline (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->____ticks_22;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Stopwatch_get_IsRunning_mB1C465B7089DFB8A94BF56CC694F5EF72A55E5B6_inline (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___is_running_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_gshared_inline (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, const RuntimeMethod* method) 
{
	{
		Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_0 = (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2*)__this->____task_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
