﻿// ParameterArray.h: CParameterArray 的声明

#pragma once
#include "resource.h"       // 主符号



#include "BlockTest01_i.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Windows CE 平台(如不提供完全 DCOM 支持的 Windows Mobile 平台)上无法正确支持单线程 COM 对象。定义 _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA 可强制 ATL 支持创建单线程 COM 对象实现并允许使用其单线程 COM 对象实现。rgs 文件中的线程模型已被设置为“Free”，原因是该模型是非 DCOM Windows CE 平台支持的唯一线程模型。"
#endif

using namespace ATL;


// CParameterArray

class ATL_NO_VTABLE CParameterArray :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CParameterArray, &CLSID_ParameterArray>,
	public IDispatchImpl<IParameterArray, &IID_IParameterArray, &LIBID_BlockTest01Lib, /*wMajor =*/ 1, /*wMinor =*/ 0>,
	public IDispatchImpl<ICapeCollection, &__uuidof(ICapeCollection), &LIBID_CAPEOPEN110, /* wMajor = */ 1, /* wMinor = */ 1>
{
public:
	CParameterArray()
	{
	}

DECLARE_REGISTRY_RESOURCEID(109)


BEGIN_COM_MAP(CParameterArray)
	COM_INTERFACE_ENTRY(IParameterArray)
	COM_INTERFACE_ENTRY2(IDispatch, ICapeCollection)
	COM_INTERFACE_ENTRY(ICapeCollection)
END_COM_MAP()



	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
	}

public:




// ICapeCollection Methods
public:
	STDMETHOD(Item)(VARIANT id, LPDISPATCH *Item)
	{
		// 返回一个空数组，暂不做实现

		return S_OK;
	}

	STDMETHOD(Count)(long *pCount)
	{
		// 返回一个空数组，暂不做实现
		*pCount = NULL;

		return S_OK;
	}

};

OBJECT_ENTRY_AUTO(__uuidof(ParameterArray), CParameterArray)
