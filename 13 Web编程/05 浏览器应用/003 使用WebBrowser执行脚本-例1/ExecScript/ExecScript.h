// ExecScript.h : main header file for the EXECSCRIPT application
//

#if !defined(AFX_EXECSCRIPT_H__577FF22F_A2DC_4A39_A4FD_CF7B046BA5B9__INCLUDED_)
#define AFX_EXECSCRIPT_H__577FF22F_A2DC_4A39_A4FD_CF7B046BA5B9__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CExecScriptApp:
// See ExecScript.cpp for the implementation of this class
//

class CExecScriptApp : public CWinApp
{
public:
	CExecScriptApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CExecScriptApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CExecScriptApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_EXECSCRIPT_H__577FF22F_A2DC_4A39_A4FD_CF7B046BA5B9__INCLUDED_)
