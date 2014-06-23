/***************************************************************
 * Name:      wxImageToHeaderApp.cpp
 * Purpose:   Code for Application Class
 * Author:    SanAndreasP ()
 * Created:   2014-06-23
 * Copyright: SanAndreasP ()
 * License:
 **************************************************************/

#include "wxImageToHeaderApp.h"

//(*AppHeaders
#include "wxImageToHeaderMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(wxImageToHeaderApp);

bool wxImageToHeaderApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	wxImageToHeaderFrame* Frame = new wxImageToHeaderFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
