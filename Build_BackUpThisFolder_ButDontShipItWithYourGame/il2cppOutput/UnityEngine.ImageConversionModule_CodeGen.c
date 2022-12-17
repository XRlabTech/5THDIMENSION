#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Byte[] UnityEngine.ImageConversion::EncodeToPNG(UnityEngine.Texture2D)
extern void ImageConversion_EncodeToPNG_m0FFFD0F0DC0EC22073BC937A5294067C57008391 (void);
// 0x00000002 System.Byte[] UnityEngine.ImageConversion::EncodeToJPG(UnityEngine.Texture2D,System.Int32)
extern void ImageConversion_EncodeToJPG_mABBC4FA7AF9A69EB41FDE1CFE73A3F8656546385 (void);
// 0x00000003 System.Boolean UnityEngine.ImageConversion::LoadImage(UnityEngine.Texture2D,System.Byte[],System.Boolean)
extern void ImageConversion_LoadImage_mE2D612F3895FDD7A87805E1C9D77A79C019213E2 (void);
// 0x00000004 System.Boolean UnityEngine.ImageConversion::LoadImage(UnityEngine.Texture2D,System.Byte[])
extern void ImageConversion_LoadImage_mBB2DFA1F5BDFF2B81DD0453356EFB092BC5180EC (void);
// 0x00000005 Unity.Collections.NativeArray`1<System.Byte> UnityEngine.ImageConversion::EncodeNativeArrayToJPG(Unity.Collections.NativeArray`1<T>,UnityEngine.Experimental.Rendering.GraphicsFormat,System.UInt32,System.UInt32,System.UInt32,System.Int32)
// 0x00000006 System.Void* UnityEngine.ImageConversion::UnsafeEncodeNativeArrayToJPG(System.Void*,System.Int32&,UnityEngine.Experimental.Rendering.GraphicsFormat,System.UInt32,System.UInt32,System.UInt32,System.Int32)
extern void ImageConversion_UnsafeEncodeNativeArrayToJPG_m81611E6A24B8091313FDC583A6C1070EF17C5724 (void);
static Il2CppMethodPointer s_methodPointers[6] = 
{
	ImageConversion_EncodeToPNG_m0FFFD0F0DC0EC22073BC937A5294067C57008391,
	ImageConversion_EncodeToJPG_mABBC4FA7AF9A69EB41FDE1CFE73A3F8656546385,
	ImageConversion_LoadImage_mE2D612F3895FDD7A87805E1C9D77A79C019213E2,
	ImageConversion_LoadImage_mBB2DFA1F5BDFF2B81DD0453356EFB092BC5180EC,
	NULL,
	ImageConversion_UnsafeEncodeNativeArrayToJPG_m81611E6A24B8091313FDC583A6C1070EF17C5724,
};
static const int32_t s_InvokerIndices[6] = 
{
	17325,
	15351,
	13776,
	14940,
	0,
	11690,
};
static const Il2CppTokenRangePair s_rgctxIndices[1] = 
{
	{ 0x06000005, { 0, 2 } },
};
extern const uint32_t g_rgctx_UnsafeUtility_SizeOf_TisT_tEB259725AFD12627D363D423760BBD2ED38E3C5B_mF364E6B50528530DAB36FCD8AA9F5E1634F71B63;
extern const uint32_t g_rgctx_NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_TisT_tEB259725AFD12627D363D423760BBD2ED38E3C5B_m2637964733B2CE6C98F0F039A5A093098D210DF4;
static const Il2CppRGCTXDefinition s_rgctxValues[2] = 
{
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_UnsafeUtility_SizeOf_TisT_tEB259725AFD12627D363D423760BBD2ED38E3C5B_mF364E6B50528530DAB36FCD8AA9F5E1634F71B63 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_TisT_tEB259725AFD12627D363D423760BBD2ED38E3C5B_m2637964733B2CE6C98F0F039A5A093098D210DF4 },
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_UnityEngine_ImageConversionModule_CodeGenModule;
const Il2CppCodeGenModule g_UnityEngine_ImageConversionModule_CodeGenModule = 
{
	"UnityEngine.ImageConversionModule.dll",
	6,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	1,
	s_rgctxIndices,
	2,
	s_rgctxValues,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
