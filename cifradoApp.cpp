//---------------------------------------------------------------------------
//
// Name:        cifradoApp.cpp
// Author:      Olivero
// Created:     04/05/2017 08:19:22 p.m.
// Description: 
//
//---------------------------------------------------------------------------

#include "cifradoApp.h"
#include "cifradoFrm.h"

IMPLEMENT_APP(cifradoFrmApp)

bool cifradoFrmApp::OnInit()
{
    cifradoFrm* frame = new cifradoFrm(NULL);
    SetTopWindow(frame);
    frame->Show();
    return true;
}
 
int cifradoFrmApp::OnExit()
{
	return 0;
}
