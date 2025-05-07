

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Tue Jan 19 11:14:07 2038
 */
/* Compiler settings for MyThermoTest.idl:
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

MIDL_DEFINE_GUID(IID, IID_IFluidPackageManager,0x18320331,0x78bd,0x46f2,0x96,0x8c,0x5e,0x11,0xd6,0x58,0xfe,0xab);


MIDL_DEFINE_GUID(IID, IID_IMaterialObject,0x99fd9434,0xb506,0x43a0,0x9e,0xf5,0xdb,0x5a,0x1f,0x43,0x51,0xd6);


MIDL_DEFINE_GUID(IID, LIBID_MyThermoTestLib,0xb521d5a4,0xb34b,0x4c72,0x9b,0x59,0x72,0xa5,0xe0,0xd0,0x13,0x9d);


MIDL_DEFINE_GUID(CLSID, CLSID_FluidPackageManager,0x6d34b620,0x82c1,0x4d7d,0xae,0xf0,0x14,0xaa,0x72,0x19,0x31,0x64);


MIDL_DEFINE_GUID(CLSID, CLSID_MaterialObject,0xe4129b60,0xa0cb,0x46a9,0xba,0xd9,0x5e,0x3d,0x05,0x2a,0xdf,0xf5);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



