#pragma once

// NVC_MFC_AxSub.h : main header file for NVC_MFC_AxSub.DLL

#if !defined( __AFXCTL_H__ )
#error "include 'afxctl.h' before including this file"
#endif

#include "resource.h"       // main symbols


// CNVC_MFC_AxSubApp : See NVC_MFC_AxSub.cpp for implementation.

class CNVC_MFC_AxSubApp : public COleControlModule
{
public:
	BOOL InitInstance();
	int ExitInstance();
};

extern const GUID CDECL _tlid;
extern const WORD _wVerMajor;
extern const WORD _wVerMinor;

