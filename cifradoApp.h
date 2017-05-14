//---------------------------------------------------------------------------
//
// Name:        cifradoApp.h
// Author:      Olivero
// Created:     04/05/2017 08:19:22 p.m.
// Description: 
//
//---------------------------------------------------------------------------

#ifndef __CIFRADOFRMApp_h__
#define __CIFRADOFRMApp_h__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
#else
	#include <wx/wxprec.h>
#endif

class cifradoFrmApp : public wxApp
{
	public:
		bool OnInit();
		int OnExit();
};

#endif
