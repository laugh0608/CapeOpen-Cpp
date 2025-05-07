

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Tue Jan 19 11:14:07 2038
 */
/* Compiler settings for BlockTest01.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0628 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if defined(_M_AMD64)


#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#include "ndr64types.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif /* __RPCPROXY_H_VERSION__ */


#include "BlockTest01_i.h"

#define TYPE_FORMAT_STRING_SIZE   3                                 
#define PROC_FORMAT_STRING_SIZE   1                                 
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _BlockTest01_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } BlockTest01_MIDL_TYPE_FORMAT_STRING;

typedef struct _BlockTest01_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } BlockTest01_MIDL_PROC_FORMAT_STRING;

typedef struct _BlockTest01_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } BlockTest01_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax_2_0 = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};

static const RPC_SYNTAX_IDENTIFIER  _NDR64_RpcTransferSyntax_1_0 = 
{{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}};

#if defined(_CONTROL_FLOW_GUARD_XFG)
#define XFG_TRAMPOLINES(ObjectType)\
NDR_SHAREABLE unsigned long ObjectType ## _UserSize_XFG(unsigned long * pFlags, unsigned long Offset, void * pObject)\
{\
return  ObjectType ## _UserSize(pFlags, Offset, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserMarshal_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserMarshal(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserUnmarshal_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserUnmarshal(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE void ObjectType ## _UserFree_XFG(unsigned long * pFlags, void * pObject)\
{\
ObjectType ## _UserFree(pFlags, (ObjectType *)pObject);\
}
#define XFG_TRAMPOLINES64(ObjectType)\
NDR_SHAREABLE unsigned long ObjectType ## _UserSize64_XFG(unsigned long * pFlags, unsigned long Offset, void * pObject)\
{\
return  ObjectType ## _UserSize64(pFlags, Offset, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserMarshal64_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserMarshal64(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserUnmarshal64_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserUnmarshal64(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE void ObjectType ## _UserFree64_XFG(unsigned long * pFlags, void * pObject)\
{\
ObjectType ## _UserFree64(pFlags, (ObjectType *)pObject);\
}
#define XFG_BIND_TRAMPOLINES(HandleType, ObjectType)\
static void* ObjectType ## _bind_XFG(HandleType pObject)\
{\
return ObjectType ## _bind((ObjectType) pObject);\
}\
static void ObjectType ## _unbind_XFG(HandleType pObject, handle_t ServerHandle)\
{\
ObjectType ## _unbind((ObjectType) pObject, ServerHandle);\
}
#define XFG_TRAMPOLINE_FPTR(Function) Function ## _XFG
#define XFG_TRAMPOLINE_FPTR_DEPENDENT_SYMBOL(Symbol) Symbol ## _XFG
#else
#define XFG_TRAMPOLINES(ObjectType)
#define XFG_TRAMPOLINES64(ObjectType)
#define XFG_BIND_TRAMPOLINES(HandleType, ObjectType)
#define XFG_TRAMPOLINE_FPTR(Function) Function
#define XFG_TRAMPOLINE_FPTR_DEPENDENT_SYMBOL(Symbol) Symbol
#endif



extern const BlockTest01_MIDL_TYPE_FORMAT_STRING BlockTest01__MIDL_TypeFormatString;
extern const BlockTest01_MIDL_PROC_FORMAT_STRING BlockTest01__MIDL_ProcFormatString;
extern const BlockTest01_MIDL_EXPR_FORMAT_STRING BlockTest01__MIDL_ExprFormatString;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IUnitExample_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IUnitExample_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IPortsArray_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IPortsArray_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IMaterialPort_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IMaterialPort_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IParameterArray_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IParameterArray_ProxyInfo;



#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif

static const BlockTest01_MIDL_PROC_FORMAT_STRING BlockTest01__MIDL_ProcFormatString =
    {
        0,
        {

			0x0
        }
    };

static const BlockTest01_MIDL_TYPE_FORMAT_STRING BlockTest01__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */

			0x0
        }
    };


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IDispatch, ver. 0.0,
   GUID={0x00020400,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IUnitExample, ver. 0.0,
   GUID={0xb770e217,0x12f2,0x41c4,{0x91,0x42,0xd5,0x48,0xdb,0x54,0x65,0xa1}} */

#pragma code_seg(".orpc")
static const unsigned short IUnitExample_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0
    };



/* Object interface: IPortsArray, ver. 0.0,
   GUID={0xcfa97f6a,0x9424,0x481e,{0x8a,0xa2,0x08,0x5d,0x27,0x52,0xac,0x8d}} */

#pragma code_seg(".orpc")
static const unsigned short IPortsArray_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0
    };



/* Object interface: IMaterialPort, ver. 0.0,
   GUID={0xf0235771,0xcb94,0x47d3,{0x9e,0x5a,0x34,0xc5,0x1c,0xb6,0x26,0xd5}} */

#pragma code_seg(".orpc")
static const unsigned short IMaterialPort_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0
    };



/* Object interface: IParameterArray, ver. 0.0,
   GUID={0x67ec64f2,0x5b2f,0x4a06,{0x8d,0x7b,0xb1,0x9d,0x1b,0x8f,0x7a,0x26}} */

#pragma code_seg(".orpc")
static const unsigned short IParameterArray_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0
    };



#endif /* defined(_M_AMD64)*/



/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Tue Jan 19 11:14:07 2038
 */
/* Compiler settings for BlockTest01.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0628 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if defined(_M_AMD64)




#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif


#include "ndr64types.h"
#include "pshpack8.h"
#ifdef __cplusplus
namespace {
#endif


typedef 
NDR64_FORMAT_UINT32
__midl_frag1_t;
extern const __midl_frag1_t __midl_frag1;

static const __midl_frag1_t __midl_frag1 =
(NDR64_UINT32) 0 /* 0x0 */;
#ifdef __cplusplus
}
#endif


#include "poppack.h"



/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IDispatch, ver. 0.0,
   GUID={0x00020400,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IUnitExample, ver. 0.0,
   GUID={0xb770e217,0x12f2,0x41c4,{0x91,0x42,0xd5,0x48,0xdb,0x54,0x65,0xa1}} */

#pragma code_seg(".orpc")
static const FormatInfoRef IUnitExample_Ndr64ProcTable[] =
    {
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    0
    };


static const MIDL_SYNTAX_INFO IUnitExample_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    BlockTest01__MIDL_ProcFormatString.Format,
    &IUnitExample_FormatStringOffsetTable[-3],
    BlockTest01__MIDL_TypeFormatString.Format,
    0,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &IUnitExample_Ndr64ProcTable[-3],
    0,
    0,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO IUnitExample_ProxyInfo =
    {
    &Object_StubDesc,
    BlockTest01__MIDL_ProcFormatString.Format,
    &IUnitExample_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax_2_0,
    2,
    (MIDL_SYNTAX_INFO*)IUnitExample_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO IUnitExample_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    BlockTest01__MIDL_ProcFormatString.Format,
    (unsigned short *) &IUnitExample_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax_1_0,
    2,
    (MIDL_SYNTAX_INFO*)IUnitExample_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(7) _IUnitExampleProxyVtbl = 
{
    0,
    &IID_IUnitExample,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */
};


EXTERN_C DECLSPEC_SELECTANY const PRPC_STUB_FUNCTION IUnitExample_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION
};

CInterfaceStubVtbl _IUnitExampleStubVtbl =
{
    &IID_IUnitExample,
    &IUnitExample_ServerInfo,
    7,
    &IUnitExample_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IPortsArray, ver. 0.0,
   GUID={0xcfa97f6a,0x9424,0x481e,{0x8a,0xa2,0x08,0x5d,0x27,0x52,0xac,0x8d}} */

#pragma code_seg(".orpc")
static const FormatInfoRef IPortsArray_Ndr64ProcTable[] =
    {
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    0
    };


static const MIDL_SYNTAX_INFO IPortsArray_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    BlockTest01__MIDL_ProcFormatString.Format,
    &IPortsArray_FormatStringOffsetTable[-3],
    BlockTest01__MIDL_TypeFormatString.Format,
    0,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &IPortsArray_Ndr64ProcTable[-3],
    0,
    0,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO IPortsArray_ProxyInfo =
    {
    &Object_StubDesc,
    BlockTest01__MIDL_ProcFormatString.Format,
    &IPortsArray_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax_2_0,
    2,
    (MIDL_SYNTAX_INFO*)IPortsArray_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO IPortsArray_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    BlockTest01__MIDL_ProcFormatString.Format,
    (unsigned short *) &IPortsArray_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax_1_0,
    2,
    (MIDL_SYNTAX_INFO*)IPortsArray_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(7) _IPortsArrayProxyVtbl = 
{
    0,
    &IID_IPortsArray,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */
};


EXTERN_C DECLSPEC_SELECTANY const PRPC_STUB_FUNCTION IPortsArray_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION
};

CInterfaceStubVtbl _IPortsArrayStubVtbl =
{
    &IID_IPortsArray,
    &IPortsArray_ServerInfo,
    7,
    &IPortsArray_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IMaterialPort, ver. 0.0,
   GUID={0xf0235771,0xcb94,0x47d3,{0x9e,0x5a,0x34,0xc5,0x1c,0xb6,0x26,0xd5}} */

#pragma code_seg(".orpc")
static const FormatInfoRef IMaterialPort_Ndr64ProcTable[] =
    {
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    0
    };


static const MIDL_SYNTAX_INFO IMaterialPort_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    BlockTest01__MIDL_ProcFormatString.Format,
    &IMaterialPort_FormatStringOffsetTable[-3],
    BlockTest01__MIDL_TypeFormatString.Format,
    0,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &IMaterialPort_Ndr64ProcTable[-3],
    0,
    0,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO IMaterialPort_ProxyInfo =
    {
    &Object_StubDesc,
    BlockTest01__MIDL_ProcFormatString.Format,
    &IMaterialPort_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax_2_0,
    2,
    (MIDL_SYNTAX_INFO*)IMaterialPort_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO IMaterialPort_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    BlockTest01__MIDL_ProcFormatString.Format,
    (unsigned short *) &IMaterialPort_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax_1_0,
    2,
    (MIDL_SYNTAX_INFO*)IMaterialPort_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(7) _IMaterialPortProxyVtbl = 
{
    0,
    &IID_IMaterialPort,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */
};


EXTERN_C DECLSPEC_SELECTANY const PRPC_STUB_FUNCTION IMaterialPort_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION
};

CInterfaceStubVtbl _IMaterialPortStubVtbl =
{
    &IID_IMaterialPort,
    &IMaterialPort_ServerInfo,
    7,
    &IMaterialPort_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IParameterArray, ver. 0.0,
   GUID={0x67ec64f2,0x5b2f,0x4a06,{0x8d,0x7b,0xb1,0x9d,0x1b,0x8f,0x7a,0x26}} */

#pragma code_seg(".orpc")
static const FormatInfoRef IParameterArray_Ndr64ProcTable[] =
    {
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    0
    };


static const MIDL_SYNTAX_INFO IParameterArray_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    BlockTest01__MIDL_ProcFormatString.Format,
    &IParameterArray_FormatStringOffsetTable[-3],
    BlockTest01__MIDL_TypeFormatString.Format,
    0,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &IParameterArray_Ndr64ProcTable[-3],
    0,
    0,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO IParameterArray_ProxyInfo =
    {
    &Object_StubDesc,
    BlockTest01__MIDL_ProcFormatString.Format,
    &IParameterArray_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax_2_0,
    2,
    (MIDL_SYNTAX_INFO*)IParameterArray_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO IParameterArray_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    BlockTest01__MIDL_ProcFormatString.Format,
    (unsigned short *) &IParameterArray_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax_1_0,
    2,
    (MIDL_SYNTAX_INFO*)IParameterArray_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(7) _IParameterArrayProxyVtbl = 
{
    0,
    &IID_IParameterArray,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */
};


EXTERN_C DECLSPEC_SELECTANY const PRPC_STUB_FUNCTION IParameterArray_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION
};

CInterfaceStubVtbl _IParameterArrayStubVtbl =
{
    &IID_IParameterArray,
    &IParameterArray_ServerInfo,
    7,
    &IParameterArray_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};

#ifdef __cplusplus
namespace {
#endif
static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    BlockTest01__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x60001, /* Ndr library version */
    0,
    0x8010274, /* MIDL Version 8.1.628 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    0x2000001, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };
#ifdef __cplusplus
}
#endif

const CInterfaceProxyVtbl * const _BlockTest01_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IUnitExampleProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IPortsArrayProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IMaterialPortProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IParameterArrayProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _BlockTest01_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IUnitExampleStubVtbl,
    ( CInterfaceStubVtbl *) &_IPortsArrayStubVtbl,
    ( CInterfaceStubVtbl *) &_IMaterialPortStubVtbl,
    ( CInterfaceStubVtbl *) &_IParameterArrayStubVtbl,
    0
};

PCInterfaceName const _BlockTest01_InterfaceNamesList[] = 
{
    "IUnitExample",
    "IPortsArray",
    "IMaterialPort",
    "IParameterArray",
    0
};

const IID *  const _BlockTest01_BaseIIDList[] = 
{
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    0
};


#define _BlockTest01_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _BlockTest01, pIID, n)

int __stdcall _BlockTest01_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _BlockTest01, 4, 2 )
    IID_BS_LOOKUP_NEXT_TEST( _BlockTest01, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _BlockTest01, 4, *pIndex )
    
}

EXTERN_C const ExtendedProxyFileInfo BlockTest01_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _BlockTest01_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _BlockTest01_StubVtblList,
    (const PCInterfaceName * ) & _BlockTest01_InterfaceNamesList,
    (const IID ** ) & _BlockTest01_BaseIIDList,
    & _BlockTest01_IID_Lookup, 
    4,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* defined(_M_AMD64)*/

