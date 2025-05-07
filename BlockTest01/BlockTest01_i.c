

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


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



#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        EXTERN_C __declspec(selectany) const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif // !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_IUnitExample,0xb770e217,0x12f2,0x41c4,0x91,0x42,0xd5,0x48,0xdb,0x54,0x65,0xa1);


MIDL_DEFINE_GUID(IID, IID_IPortsArray,0xcfa97f6a,0x9424,0x481e,0x8a,0xa2,0x08,0x5d,0x27,0x52,0xac,0x8d);


MIDL_DEFINE_GUID(IID, IID_IMaterialPort,0xf0235771,0xcb94,0x47d3,0x9e,0x5a,0x34,0xc5,0x1c,0xb6,0x26,0xd5);


MIDL_DEFINE_GUID(IID, IID_IParameterArray,0x67ec64f2,0x5b2f,0x4a06,0x8d,0x7b,0xb1,0x9d,0x1b,0x8f,0x7a,0x26);


MIDL_DEFINE_GUID(IID, LIBID_BlockTest01Lib,0x5fe4e419,0xf915,0x44f5,0x9a,0xf0,0x78,0x92,0x85,0x80,0x7d,0xf1);


MIDL_DEFINE_GUID(CLSID, CLSID_UnitExample,0x7059ac7c,0x40f2,0x434e,0x8f,0x88,0x47,0xab,0x5c,0xa5,0xac,0x40);


MIDL_DEFINE_GUID(CLSID, CLSID_PortsArray,0x856fcaf2,0x6f2a,0x4a18,0xbf,0xaa,0xdc,0xf8,0xf3,0x13,0x37,0x8a);


MIDL_DEFINE_GUID(CLSID, CLSID_MaterialPort,0xc8b09757,0xdca4,0x4d3b,0xb4,0x35,0xe6,0xee,0xaf,0xe5,0x94,0xf0);


MIDL_DEFINE_GUID(CLSID, CLSID_ParameterArray,0xd5369f57,0xe7df,0x4ebb,0x89,0xfd,0x82,0x51,0xbd,0x93,0xa5,0x6a);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



