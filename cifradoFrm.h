///-----------------------------------------------------------------
///
/// @file      cifradoFrm.h
/// @author    Olivero
/// Created:   04/05/2017 08:19:23 p.m.
/// @section   DESCRIPTION
///            cifradoFrm class declaration
///
///------------------------------------------------------------------

#ifndef __CIFRADOFRM_H__
#define __CIFRADOFRM_H__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
	#include <wx/frame.h>
#else
	#include <wx/wxprec.h>
#endif

//Do not add custom headers between 
//Header Include Start and Header Include End.
//wxDev-C++ designer will remove them. Add custom headers after the block.
////Header Include Start
#include <wx/msgdlg.h>
#include <wx/menu.h>
#include <wx/filedlg.h>
#include <wx/checkbox.h>
#include <wx/button.h>
#include <wx/textctrl.h>
#include <wx/richtext/richtextctrl.h>
#include <wx/stattext.h>
#include <wx/panel.h>
////Header Include End

////Dialog Style Start
#undef cifradoFrm_STYLE
#define cifradoFrm_STYLE wxCAPTION | wxSYSTEM_MENU | wxMINIMIZE_BOX | wxCLOSE_BOX
////Dialog Style End

class cifradoFrm : public wxFrame
{
	private:
		DECLARE_EVENT_TABLE();
		
	public:
		cifradoFrm(wxWindow *parent, wxWindowID id = 1, const wxString &title = wxT("cifrado"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = cifradoFrm_STYLE);
		virtual ~cifradoFrm();
		void WxMemo1Updated(wxCommandEvent& event);
		void WxButton2Click(wxCommandEvent& event);
		void insertnumeroUpdated(wxCommandEvent& event);
		void inserttextodecClickUrl(wxTextUrlEvent& event);
		void WxButtonDecodificarClick(wxCommandEvent& event);
		void inserttextodecUpdated(wxCommandEvent& event);
		void WxCheckBox1Click(wxCommandEvent& event);
		void WxButtoncodifClick(wxCommandEvent& event);
		void WxCheckBox2Click(wxCommandEvent& event);
		void inserttextodecUpdated0(wxCommandEvent& event);
		void insertnumUpdated(wxCommandEvent& event);
		void WxopenClick(wxCommandEvent& event);
		void WxcloseClick(wxCommandEvent& event);
		void WxnewClick(wxCommandEvent& event);
		void WxsaveClick(wxCommandEvent& event);
		void WxexitClick(wxCommandEvent& event);
		void WxsaveasClick(wxCommandEvent& event);
		void WxfileDecidificadoClick(wxCommandEvent& event);
		void WxfileCodificadoClick(wxCommandEvent& event);
		void WxCheckBox1Click0(wxCommandEvent& event);
		void WxButtoncodifClick0(wxCommandEvent& event);
		void insertnumeroUpdated0(wxCommandEvent& event);
		
		
	private:
		//Do not add custom control declarations between
		//GUI Control Declaration Start and GUI Control Declaration End.
		//wxDev-C++ will remove them. Add custom code after the block.
		////GUI Control Declaration Start
		wxMessageDialog *WxMessageDialog1;
		wxFileDialog *WxOpenFileDialog1;
		wxMenuBar *WxMenuBar1;
		wxFileDialog *WxSaveFileDialog1;
		wxTextCtrl *insertnumero;
		wxButton *WxButtoncodif;
		wxCheckBox *WxCheckBox1;
		wxStaticText *WxStaticText8;
		wxStaticText *WxStaticText7;
		wxTextCtrl *inserttextodec;
		wxPanel *WxPanel2;
		wxCheckBox *WxCheckBox2;
		wxTextCtrl *insertnum;
		wxStaticText *WxStaticText4;
		wxButton *WxButtonDecodificar;
		wxStaticText *WxStaticText5;
		wxTextCtrl *inserttextocod;
		wxPanel *WxPanel3;
		wxRichTextCtrl *WxRichTextCtrl1;
		wxStaticText *WxStaticText1;
		wxPanel *WxPanel1;
		////GUI Control Declaration End
		
	private:
		//Note: if you receive any error with these enum IDs, then you need to
		//change your old form code that are based on the #define control IDs.
		//#defines may replace a numeric value for the enum names.
		//Try copy and pasting the below block in your old form header files.
		enum
		{
			////GUI Enum Control ID Start
			ID_INSERTNUMERO = 1060,
			ID_WXBUTTONCODIF = 1059,
			ID_WXCHECKBOX1 = 1058,
			ID_WXPANEL2 = 1057,
			ID_WXCHECKBOX2 = 1037,
			ID_INSERTNUM = 1027,
			ID_WXSTATICTEXT4 = 1026,
			ID_WXBUTTON2 = 1019,
			ID_WXSTATICTEXT3 = 1017,
			ID_WXMEMO1 = 1016,
			ID_WXPANEL3 = 1020,
			ID_WXRICHTEXTCTRL1 = 1056,
			ID_WXSTATICTEXT1 = 1044,
			ID_WXPANEL1 = 1001,
			////GUI Enum Control ID End
			ID_DUMMY_VALUE_ //don't remove this value unless you have other enum values
		};
		
	private:
		void OnClose(wxCloseEvent& event);
		void CreateGUIControls();
};

#endif
