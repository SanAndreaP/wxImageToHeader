/***************************************************************
 * Name:      wxImageToHeaderMain.h
 * Purpose:   Defines Application Frame
 * Author:    SanAndreasP ()
 * Created:   2014-06-23
 * Copyright: SanAndreasP ()
 * License:
 **************************************************************/

#ifndef wxImageToHeaderMAIN_H
#define wxImageToHeaderMAIN_H

//(*Headers(wxImageToHeaderFrame)
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/checkbox.h>
#include <wx/listbox.h>
#include <wx/statbox.h>
#include <wx/panel.h>
#include <wx/filedlg.h>
#include <wx/button.h>
#include <wx/frame.h>
//*)

#include <vector>
#include <sstream>

class wxImageToHeaderFrame: public wxFrame
{
    public:

        wxImageToHeaderFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~wxImageToHeaderFrame();

    private:

        //(*Handlers(wxImageToHeaderFrame)
        void OnQuit(wxCommandEvent& event);
        void OnBtn_AddFileClick(wxCommandEvent& event);
        void OnButton1Click(wxCommandEvent& event);
        void OnCB_FileOutClick(wxCommandEvent& event);
        //*)

        //(*Identifiers(wxImageToHeaderFrame)
        static const long ID_CHECKBOX1;
        static const long ID_CHECKBOX2;
        static const long ID_STATICBOX1;
        static const long ID_LISTBOX1;
        static const long ID_BUTTON2;
        static const long ID_BUTTON1;
        static const long ID_TEXTCTRL1;
        static const long ID_BUTTON3;
        static const long ID_STATICBOX2;
        static const long ID_CHECKBOX3;
        static const long ID_TEXTCTRL2;
        static const long ID_BUTTON4;
        static const long ID_STATICTEXT1;
        static const long ID_TEXTCTRL3;
        static const long ID_PANEL1;
        //*)

        //(*Declarations(wxImageToHeaderFrame)
        wxFileDialog* FD_ImageFiles;
        wxButton* Btn_AddFile;
        wxButton* Btn_FileOut;
        wxButton* Button1;
        wxTextCtrl* TC_FileOut;
        wxPanel* Panel1;
        wxStaticText* StaticText1;
        wxStaticBox* StaticBox1;
        wxStaticBox* StaticBox2;
        wxTextCtrl* TC_Output;
        wxCheckBox* CB_WithAlpha;
        wxTextCtrl* TC_Namesp;
        wxButton* Btn_RemoveFile;
        wxCheckBox* CB_Compress;
        wxListBox* LB_Images;
        wxCheckBox* CB_FileOut;
        //*)

        std::vector<std::pair<std::string, std::string>> m_images;

        DECLARE_EVENT_TABLE()

        bool checkValidHeaderName();
};

#endif // wxImageToHeaderMAIN_H
