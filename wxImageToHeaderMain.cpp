/***************************************************************
 * Name:      wxImageToHeaderMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    SanAndreasP ()
 * Created:   2014-06-23
 * Copyright: SanAndreasP ()
 * License:
 **************************************************************/

#include "wxImageToHeaderMain.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(wxImageToHeaderFrame)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(wxImageToHeaderFrame)
const long wxImageToHeaderFrame::ID_CHECKBOX1 = wxNewId();
const long wxImageToHeaderFrame::ID_CHECKBOX2 = wxNewId();
const long wxImageToHeaderFrame::ID_STATICBOX1 = wxNewId();
const long wxImageToHeaderFrame::ID_LISTBOX1 = wxNewId();
const long wxImageToHeaderFrame::ID_BUTTON2 = wxNewId();
const long wxImageToHeaderFrame::ID_BUTTON1 = wxNewId();
const long wxImageToHeaderFrame::ID_TEXTCTRL1 = wxNewId();
const long wxImageToHeaderFrame::ID_BUTTON3 = wxNewId();
const long wxImageToHeaderFrame::ID_STATICBOX2 = wxNewId();
const long wxImageToHeaderFrame::ID_RICHTEXTCTRL1 = wxNewId();
const long wxImageToHeaderFrame::ID_CHECKBOX3 = wxNewId();
const long wxImageToHeaderFrame::ID_TEXTCTRL2 = wxNewId();
const long wxImageToHeaderFrame::ID_BUTTON4 = wxNewId();
const long wxImageToHeaderFrame::ID_STATICTEXT1 = wxNewId();
const long wxImageToHeaderFrame::ID_PANEL1 = wxNewId();
const long wxImageToHeaderFrame::idMenuQuit = wxNewId();
const long wxImageToHeaderFrame::idMenuAbout = wxNewId();
const long wxImageToHeaderFrame::ID_STATUSBAR1 = wxNewId();
const long wxImageToHeaderFrame::ID_TEXTENTRYDIALOG1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(wxImageToHeaderFrame,wxFrame)
    //(*EventTable(wxImageToHeaderFrame)
    //*)
END_EVENT_TABLE()

wxImageToHeaderFrame::wxImageToHeaderFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(wxImageToHeaderFrame)
    wxMenuItem* MenuItem2;
    wxMenuItem* MenuItem1;
    wxMenu* Menu1;
    wxMenuBar* MenuBar1;
    wxMenu* Menu2;

    Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
    SetClientSize(wxSize(1000,400));
    Panel1 = new wxPanel(this, ID_PANEL1, wxPoint(216,264), wxSize(592,432), wxTAB_TRAVERSAL, _T("ID_PANEL1"));
    CB_WithAlpha = new wxCheckBox(Panel1, ID_CHECKBOX1, _("with alpha channel"), wxPoint(320,72), wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX1"));
    CB_WithAlpha->SetValue(false);
    CB_FileOut = new wxCheckBox(Panel1, ID_CHECKBOX2, _("output to file:"), wxPoint(320,96), wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX2"));
    CB_FileOut->SetValue(false);
    StaticBox1 = new wxStaticBox(Panel1, ID_STATICBOX1, _("Selected Images"), wxPoint(16,16), wxSize(288,376), 0, _T("ID_STATICBOX1"));
    LB_Images = new wxListBox(Panel1, ID_LISTBOX1, wxPoint(24,32), wxSize(272,320), 0, 0, 0, wxDefaultValidator, _T("ID_LISTBOX1"));
    Btn_RemoveFile = new wxButton(Panel1, ID_BUTTON2, _("-"), wxPoint(160,360), wxSize(24,24), 0, wxDefaultValidator, _T("ID_BUTTON2"));
    Btn_AddFile = new wxButton(Panel1, ID_BUTTON1, _("+"), wxPoint(136,360), wxSize(24,24), 0, wxDefaultValidator, _T("ID_BUTTON1"));
    TC_FileOut = new wxTextCtrl(Panel1, ID_TEXTCTRL1, wxEmptyString, wxPoint(336,112), wxSize(168,24), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
    TC_FileOut->Disable();
    Btn_FileOut = new wxButton(Panel1, ID_BUTTON3, _("Choose..."), wxPoint(504,112), wxSize(75,24), 0, wxDefaultValidator, _T("ID_BUTTON3"));
    Btn_FileOut->Disable();
    StaticBox2 = new wxStaticBox(Panel1, ID_STATICBOX2, _("Output"), wxPoint(600,16), wxSize(384,376), 0, _T("ID_STATICBOX2"));
    RichTextCtrl1 = new wxRichTextCtrl(Panel1, ID_RICHTEXTCTRL1, wxEmptyString, wxPoint(608,32), wxSize(368,352), wxRE_MULTILINE|wxRE_READONLY, wxDefaultValidator, _T("ID_RICHTEXTCTRL1"));
    wxRichTextAttr rchtxtAttr_1;
    rchtxtAttr_1.SetBulletStyle(wxTEXT_ATTR_BULLET_STYLE_ALIGN_LEFT);
    CB_Compress = new wxCheckBox(Panel1, ID_CHECKBOX3, _("Compress Bytes with EasyComp™"), wxPoint(320,144), wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX3"));
    CB_Compress->SetValue(false);
    CB_Compress->Disable();
    TextCtrl1 = new wxTextCtrl(Panel1, ID_TEXTCTRL2, wxEmptyString, wxPoint(320,40), wxSize(256,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
    Button1 = new wxButton(Panel1, ID_BUTTON4, _("Convert"), wxPoint(320,216), wxSize(256,32), 0, wxDefaultValidator, _T("ID_BUTTON4"));
    StaticText1 = new wxStaticText(Panel1, ID_STATICTEXT1, _("Header-Filename"), wxPoint(320,24), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
    MenuBar1 = new wxMenuBar();
    Menu1 = new wxMenu();
    MenuItem1 = new wxMenuItem(Menu1, idMenuQuit, _("Quit\tAlt-F4"), _("Quit the application"), wxITEM_NORMAL);
    Menu1->Append(MenuItem1);
    MenuBar1->Append(Menu1, _("&File"));
    Menu2 = new wxMenu();
    MenuItem2 = new wxMenuItem(Menu2, idMenuAbout, _("About\tF1"), _("Show info about this application"), wxITEM_NORMAL);
    Menu2->Append(MenuItem2);
    MenuBar1->Append(Menu2, _("Help"));
    SetMenuBar(MenuBar1);
    StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
    int __wxStatusBarWidths_1[1] = { -1 };
    int __wxStatusBarStyles_1[1] = { wxSB_NORMAL };
    StatusBar1->SetFieldsCount(1,__wxStatusBarWidths_1);
    StatusBar1->SetStatusStyles(1,__wxStatusBarStyles_1);
    SetStatusBar(StatusBar1);
    FD_ImageFiles = new wxFileDialog(this, _("Select file"), wxEmptyString, wxEmptyString, _("Portable Network Graphics (*.png)|*.png"), wxFD_DEFAULT_STYLE|wxFD_OPEN|wxFD_FILE_MUST_EXIST|wxFD_MULTIPLE, wxDefaultPosition, wxDefaultSize, _T("wxFileDialog"));
    TED_ImageVarName = new wxTextEntryDialog(this, wxEmptyString, _("Please select a variable name"), wxEmptyString, wxOK|wxCANCEL|wxCENTRE|wxWS_EX_VALIDATE_RECURSIVELY, wxDefaultPosition);

    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&wxImageToHeaderFrame::OnBtn_AddFileClick);
    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&wxImageToHeaderFrame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&wxImageToHeaderFrame::OnAbout);
    //*)
}

wxImageToHeaderFrame::~wxImageToHeaderFrame()
{
    //(*Destroy(wxImageToHeaderFrame)
    //*)
}

void wxImageToHeaderFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void wxImageToHeaderFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}

void wxImageToHeaderFrame::OnBtn_AddFileClick(wxCommandEvent& event)
{
    if( this->FD_ImageFiles->ShowModal() == wxID_OK ) {
        wxArrayString files;
        this->FD_ImageFiles->GetFilenames(files);
        for( wxString file : files ) {
            if( this->TED_ImageVarName->ShowModal() == wxID_OK ) {
                this->m_images.insert(std::pair<std::string, std::string>(this->TED_ImageVarName->GetValue().ToStdString(), file.ToStdString()));
            }
        }
    }
}
