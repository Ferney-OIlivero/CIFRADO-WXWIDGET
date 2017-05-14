///-----------------------------------------------------------------
///
/// @file      cifradoFrm.cpp
/// @author    Olivero
/// Created:   04/05/2017 08:19:23 p.m.
/// @section   DESCRIPTION
///            cifradoFrm class implementation
///
///------------------------------------------------------------------

#include "cifradoFrm.h"
#include <wx/textfile.h>

//Do not add custom headers between
//Header Include Start and Header Include End
//wxDev-C++ designer will remove them
////Header Include Start
////Header Include End

//----------------------------------------------------------------------------
// cifradoFrm
//----------------------------------------------------------------------------
//Add Custom Events only in the appropriate block.
//Code added in other places will be removed by wxDev-C++
////Event Table Start
BEGIN_EVENT_TABLE(cifradoFrm,wxFrame)
	////Manual Code Start
	////Manual Code End
	
	EVT_CLOSE(cifradoFrm::OnClose)
	EVT_MENU(wxID_FILE1, cifradoFrm::WxfileDecidificadoClick)
	EVT_MENU(wxID_FILE2, cifradoFrm::WxfileCodificadoClick)
	EVT_MENU(wxID_NEW, cifradoFrm::WxnewClick)
	EVT_MENU(wxID_SAVE, cifradoFrm::WxsaveClick)
	EVT_MENU(wxID_SAVEAS, cifradoFrm::WxsaveasClick)
	EVT_MENU(wxID_EXIT, cifradoFrm::WxexitClick)
	
	EVT_TEXT(ID_INSERTNUMERO,cifradoFrm::insertnumeroUpdated0)
	EVT_BUTTON(ID_WXBUTTONCODIF,cifradoFrm::WxButtoncodifClick0)
	EVT_CHECKBOX(ID_WXCHECKBOX1,cifradoFrm::WxCheckBox1Click0)
	EVT_CHECKBOX(ID_WXCHECKBOX2,cifradoFrm::WxCheckBox2Click)
	
	EVT_TEXT(ID_INSERTNUM,cifradoFrm::insertnumUpdated)
	EVT_BUTTON(ID_WXBUTTON2,cifradoFrm::WxButtonDecodificarClick)
END_EVENT_TABLE()
////Event Table End

cifradoFrm::cifradoFrm(wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &position, const wxSize& size, long style)
: wxFrame(parent, id, title, position, size, style)
{
	CreateGUIControls();
}

cifradoFrm::~cifradoFrm()
{
}

void cifradoFrm::CreateGUIControls()
{
	//Do not add custom code between
	//GUI Items Creation Start and GUI Items Creation End
	//wxDev-C++ designer will remove them.
	//Add the custom code before or after the blocks
	////GUI Items Creation Start

	WxPanel1 = new wxPanel(this, ID_WXPANEL1, wxPoint(0, 0), wxSize(617, 496));
	WxPanel1->SetBackgroundColour(wxColour(_("SKY BLUE")));

	WxStaticText1 = new wxStaticText(WxPanel1, ID_WXSTATICTEXT1, _("Cifrado de Cesar"), wxPoint(191, 0), wxDefaultSize, 0, _("WxStaticText1"));
	WxStaticText1->SetForegroundColour(wxColour(255,255,255));
	WxStaticText1->SetFont(wxFont(24, wxSWISS, wxNORMAL, wxBOLD, false, _("Viner Hand ITC")));

	WxRichTextCtrl1 = new wxRichTextCtrl(WxPanel1, ID_WXRICHTEXTCTRL1, _(""), wxPoint(6, 53), wxSize(604, 416), 0, wxDefaultValidator, _("WxRichTextCtrl1"));
	WxRichTextCtrl1->SetMaxLength(0);
	WxRichTextCtrl1->Enable(false);
	WxRichTextCtrl1->AppendText(_("      El cifrado César es uno de los primeros métodos de cifrado conocidos"));
	WxRichTextCtrl1->AppendText(_(" históricamente. Consiste en escribir un mensaje que esta formado por las"));
	WxRichTextCtrl1->AppendText(_(" letras del alfabeto latino normal, luego todo este mensaje sera codificado"));
	WxRichTextCtrl1->AppendText(_(" desplazando la posicion de cada letra con respecto al numero de  cifrado"));
	WxRichTextCtrl1->AppendText(_(" que se le asigne."));
	WxRichTextCtrl1->AppendText(_(""));
	WxRichTextCtrl1->AppendText(_(""));
	WxRichTextCtrl1->AppendText(_(""));
	WxRichTextCtrl1->AppendText(_(" SELECCIONE:   ARCHIVO / NUEVO  (Para Comenzar) o bien"));
	WxRichTextCtrl1->AppendText(_(""));
	WxRichTextCtrl1->AppendText(_(" SELECCIONE:   ARCHIVO / ABRIR (Archivo Codificado o Archivo Codificado)"));
	WxRichTextCtrl1->AppendText(_(" "));
	WxRichTextCtrl1->AppendText(_(""));
	WxRichTextCtrl1->AppendText(_(""));
	WxRichTextCtrl1->AppendText(_(""));
	WxRichTextCtrl1->AppendText(_(" Olivero Ferney"));
	WxRichTextCtrl1->AppendText(_(""));
	WxRichTextCtrl1->AppendText(_(" Sarria Anderson"));
	WxRichTextCtrl1->SetFocus();
	WxRichTextCtrl1->SetInsertionPointEnd();
	WxRichTextCtrl1->SetForegroundColour(wxColour(255,255,255));
	WxRichTextCtrl1->SetBackgroundColour(wxColour(_("SKY BLUE")));
	WxRichTextCtrl1->SetFont(wxFont(14, wxSWISS, wxITALIC, wxBOLD, false, _("Arial Narrow")));

	WxPanel3 = new wxPanel(WxPanel1, ID_WXPANEL3, wxPoint(12, 267), wxSize(589, 209));
	WxPanel3->Show(false);
	WxPanel3->SetBackgroundColour(wxColour(38,153,107));

	inserttextocod = new wxTextCtrl(WxPanel3, ID_WXMEMO1, wxEmptyString, wxPoint(20, 58), wxSize(560, 144), wxTE_MULTILINE, wxDefaultValidator, _("inserttextocod"));
	inserttextocod->SetMaxLength(0);
	inserttextocod->Enable(false);
	inserttextocod->SetFocus();
	inserttextocod->SetInsertionPointEnd();

	WxStaticText5 = new wxStaticText(WxPanel3, ID_WXSTATICTEXT3, _("Texto Codificado"), wxPoint(194, 4), wxDefaultSize, 0, _("WxStaticText5"));
	WxStaticText5->SetForegroundColour(wxColour(255,255,255));
	WxStaticText5->SetFont(wxFont(18, wxSWISS, wxITALIC, wxBOLD, false, _("Century Schoolbook")));

	WxButtonDecodificar = new wxButton(WxPanel3, ID_WXBUTTON2, _("DECODIFICAR"), wxPoint(485, 17), wxSize(92, 25), 0, wxDefaultValidator, _("WxButtonDecodificar"));
	WxButtonDecodificar->Enable(false);
	WxButtonDecodificar->SetFont(wxFont(8, wxSWISS, wxNORMAL, wxNORMAL, false, _("Century Schoolbook")));

	WxStaticText4 = new wxStaticText(WxPanel3, ID_WXSTATICTEXT4, _("N° Cifrado:"), wxPoint(8, 30), wxDefaultSize, 0, _("WxStaticText4"));
	WxStaticText4->SetForegroundColour(wxColour(255,255,255));
	WxStaticText4->SetFont(wxFont(14, wxSWISS, wxITALIC, wxBOLD, false, _("Century Schoolbook")));

	insertnum = new wxTextCtrl(WxPanel3, ID_INSERTNUM, _(""), wxPoint(118, 34), wxSize(69, 19), 0, wxTextValidator(wxFILTER_NUMERIC, NULL), _("insertnum"));
	insertnum->Enable(false);

	WxCheckBox2 = new wxCheckBox(WxPanel3, ID_WXCHECKBOX2, _("Select"), wxPoint(8, 8), wxSize(52, 17), 0, wxDefaultValidator, _("WxCheckBox2"));

	WxPanel2 = new wxPanel(WxPanel1, ID_WXPANEL2, wxPoint(12, 53), wxSize(589, 209));
	WxPanel2->Show(false);
	WxPanel2->SetBackgroundColour(wxColour(35,156,107));

	inserttextodec = new wxTextCtrl(WxPanel2, ID_WXMEMO1, wxEmptyString, wxPoint(20, 58), wxSize(560, 144), wxTE_MULTILINE, wxDefaultValidator, _("inserttextodec"));
	inserttextodec->SetMaxLength(0);
	inserttextodec->Enable(false);
	inserttextodec->SetFocus();
	inserttextodec->SetInsertionPointEnd();

	WxStaticText7 = new wxStaticText(WxPanel2, ID_WXSTATICTEXT3, _("Texto Decodificado"), wxPoint(184, 4), wxDefaultSize, 0, _("WxStaticText7"));
	WxStaticText7->SetForegroundColour(wxColour(255,255,255));
	WxStaticText7->SetFont(wxFont(18, wxSWISS, wxITALIC, wxBOLD, false, _("Century Schoolbook")));

	WxStaticText8 = new wxStaticText(WxPanel2, ID_WXSTATICTEXT4, _("N° Cifrado:"), wxPoint(8, 30), wxDefaultSize, 0, _("WxStaticText8"));
	WxStaticText8->SetForegroundColour(wxColour(255,255,255));
	WxStaticText8->SetFont(wxFont(14, wxSWISS, wxITALIC, wxBOLD, false, _("Century Schoolbook")));

	WxCheckBox1 = new wxCheckBox(WxPanel2, ID_WXCHECKBOX1, _("Select"), wxPoint(8, 6), wxSize(48, 17), 0, wxDefaultValidator, _("WxCheckBox1"));

	WxButtoncodif = new wxButton(WxPanel2, ID_WXBUTTONCODIF, _("CODIFICAR"), wxPoint(504, 20), wxSize(75, 25), 0, wxDefaultValidator, _("WxButtoncodif"));
	WxButtoncodif->Enable(false);

	insertnumero = new wxTextCtrl(WxPanel2, ID_INSERTNUMERO, _(""), wxPoint(119, 34), wxSize(71, 19), 0, wxDefaultValidator, _("insertnumero"));

	WxSaveFileDialog1 =  new wxFileDialog(this, _("Choose a file"), _(""), _(""), _("*.*"), wxFD_SAVE);

	WxMenuBar1 = new wxMenuBar();
	wxMenu *wxID_FILE_Mnu_Obj = new wxMenu();
	
	wxMenu *wxID_OPEN_Mnu_Obj = new wxMenu();
	wxID_OPEN_Mnu_Obj->Append(wxID_FILE1, _("Archivo Decodificado"), _(""), wxITEM_NORMAL);
	wxID_OPEN_Mnu_Obj->Append(wxID_FILE2, _("Archivo Codificado"), _(""), wxITEM_NORMAL);
	wxID_FILE_Mnu_Obj->Append(wxID_OPEN, _("Abrir"), wxID_OPEN_Mnu_Obj);
	wxID_FILE_Mnu_Obj->Append(wxID_NEW, _("Nuevo"), _(""), wxITEM_NORMAL);
	wxID_FILE_Mnu_Obj->Append(wxID_SAVE, _("Guardar"), _(""), wxITEM_NORMAL);
	wxID_FILE_Mnu_Obj->Append(wxID_SAVEAS, _("Guardar Como"), _(""), wxITEM_NORMAL);
	wxID_FILE_Mnu_Obj->Append(wxID_EXIT, _("Salir"), _(""), wxITEM_NORMAL);
	WxMenuBar1->Append(wxID_FILE_Mnu_Obj, _("Archivo"));
	SetMenuBar(WxMenuBar1);

	WxOpenFileDialog1 =  new wxFileDialog(this, _("Choose a file"), _(""), _(""), _("*.*"), wxFD_OPEN);

	WxMessageDialog1 =  new wxMessageDialog(this, _("Desea Reemplazarlo?"), _("El Archivo ya Existe!"), wxOK | wxCANCEL);

	SetTitle(_("cifrado"));
	SetIcon(wxNullIcon);
	SetSize(8,8,630,534);
	Center();
	
	////GUI Items Creation End

	
}

void cifradoFrm::OnClose(wxCloseEvent& event)
{
	Destroy();
}

/*
 * WxMemo1Updated
 */
void cifradoFrm::WxMemo1Updated(wxCommandEvent& event)
{
	// insert your code here
}



void cifradoFrm::WxButtonDecodificarClick(wxCommandEvent& event)
{
    wxString texto;
	int num,tam,ban=0;
    char temp;
	num= wxAtoi(insertnum->GetValue());
    texto=inserttextocod->GetValue();
    tam=texto.size();
	for(int x=0; x<tam; x++){
		if(texto[x]>64 && texto[x]<91){
            temp=texto[x];
            temp=temp+((num%26));
			texto[x]=temp;
			if(texto[x]>90){
                temp=texto[x];
                temp=temp-26;
				texto[x]=temp;
			}
			ban=1;
		}
        if(texto[x]>96 && texto[x]<123){
            temp=texto[x];
            temp=temp+((num%26));
			texto[x]=temp;
			if(texto[x]>122){
                temp=texto[x];
                temp=temp-26;
				texto[x]=temp;
			}
		}
		if(texto[x]=='#'){
            if(ban==1){
                texto[x]='ñ';
            }
			texto[x]='Ñ';
		}		
	}
	inserttextodec->SetValue(texto);
}

/*
 * inserttextodecUpdated
 */
void cifradoFrm::inserttextodecUpdated(wxCommandEvent& event)
{
	// insert your code here
}

/*
 * WxCheckBox2Click
 */
void cifradoFrm::WxCheckBox2Click(wxCommandEvent& event)
{
    if (WxCheckBox2->GetValue()==true){
        WxCheckBox1->SetValue(false);
        inserttextocod->Enable(true);
        insertnum->Enable(true);
        inserttextodec->Enable(false);
        insertnumero->Enable(false);
        inserttextodec->SetValue("");
        insertnumero->SetValue("");
    }else{
        inserttextocod->Enable(false);
        insertnum->Enable(false);
        inserttextocod->SetValue("");
        insertnum->SetValue("");
        
    }       
}



/*
 * insertnumUpdated
 */
void cifradoFrm::insertnumUpdated(wxCommandEvent& event)
{
    if(insertnum->GetValue()!=""){
        WxButtonDecodificar->Enable(true);
    }else{
        WxButtonDecodificar->Enable(false);
    }
	// insert your code here
}

/*
 * WxopenClick
 */
wxTextFile tfile;

void cifradoFrm::WxcloseClick(wxCommandEvent& event)
{
    Destroy();
	// insert your code here
}

/*
 * WxnewClick
 */
void cifradoFrm::WxnewClick(wxCommandEvent& event)
{
    WxRichTextCtrl1->Show(false);
    WxPanel2->Show(true);
    WxPanel3->Show(true);
    tfile.Close();
    WxCheckBox1->SetValue(false);
    WxCheckBox2->SetValue(false);
    inserttextodec->Enable(false);
    insertnumero->Enable(false);
    inserttextocod->Enable(false);
    insertnum->Enable(false);
    inserttextocod->SetValue("");
    insertnum->SetValue("");
    inserttextodec->SetValue("");
    insertnumero->SetValue("");
}

/*
 * WxsaveClick
 */
void cifradoFrm::WxsaveClick(wxCommandEvent& event)
{
    if(tfile.IsOpened() == true){
        wxString Ltexto;
        int num=inserttextocod->GetNumberOfLines();
        tfile.Clear();
        for(int x=0; x<num;x++){
            Ltexto=inserttextocod->GetLineText(x);
            tfile.AddLine( wxT(texto) );
        }
        tfile.Write();
    }else{
        if (WxSaveFileDialog1->ShowModal() == wxID_OK){
            wxString savedireccion=WxSaveFileDialog1->GetPath();
            wxString Ltexto;
            int num=inserttextocod->GetNumberOfLines(); 
            wxTextFile file(savedireccion);
            if(file.Exists() == true){
                if(WxMessageDialog1->ShowModal() == wxID_OK){
                    file.Create();
                    file.Open();
                    file.Clear();
                    for(int x=0; x<num;x++){
                        Ltexto=inserttextocod->GetLineText(x);
                        file.AddLine( wxT(texto) );
                    }
             
                    file.Write();
                    file.Close();
                }else{return;}
            }else{
                file.Create();
                file.Open();
                file.Clear();
                for(int x=0; x<num;x++){
                    Ltexto=inserttextocod->GetLineText(x);
                    file.AddLine( wxT(texto) );
                }
         
                file.Write();
                file.Close();
            }
            

        }
    }

}

/*
 * WxsaveasClick
 */
void cifradoFrm::WxsaveasClick(wxCommandEvent& event)
{
    if (WxSaveFileDialog1->ShowModal() == wxID_OK){
        
        wxString savedireccion=WxSaveFileDialog1->GetPath();
        wxString Ltexto;
        int num=inserttextocod->GetNumberOfLines(); 
        wxTextFile file(savedireccion);
        
        if(file.Exists() == true){
            if(WxMessageDialog1->ShowModal() == wxID_OK){
                file.Create();
                file.Open();
                file.Clear();
                for(int x=0; x<num;x++){
                    Ltexto=inserttextocod->GetLineText(x);
                    file.AddLine( wxT(texto) );
                }
         
                file.Write();
                file.Close();
            }else{return;}
        }else{
            file.Create();
            file.Open();
            file.Clear();
            for(int x=0; x<num;x++){
                Ltexto=inserttextocod->GetLineText(x);
                file.AddLine( wxT(texto) );
            }
     
            file.Write();
            file.Close();
        }
    }
	// insert your code here
}

/*
 * WxexitClick
 */
void cifradoFrm::WxexitClick(wxCommandEvent& event)
{
    Destroy();
	// insert your code here
}

/*
 * WxfileDecidificadoClick
 */
void cifradoFrm::WxfileDecidificadoClick(wxCommandEvent& event)
{	
    if(WxOpenFileDialog1->ShowModal() == wxID_OK){
        inserttextodec->SetValue("");
        wxString texto,temp,nombrefile;
        nombrefile=WxOpenFileDialog1->GetPath();
        tfile.Open(nombrefile);
        texto = tfile.GetFirstLine();
        texto=texto+'\n';
        inserttextodec->SetValue(texto);
        while(!tfile.Eof()){
            texto=texto+tfile.GetNextLine()+'\n';
            inserttextodec->SetValue(texto); // placeholder, do whatever you want with the string
        }
        WxCheckBox1->SetValue(true);
        inserttextodec->Enable(true);
        insertnumero->Enable(true);
        WxPanel2->Enable(true);
        WxPanel3->Enable(true);
        WxRichTextCtrl1->Show(false);
        WxPanel2->Show(true);
        WxPanel3->Show(true);
    }else{
        return;
    }
	// insert your code here
}

/*
 * WxfileCodificadoClick
 */
void cifradoFrm::WxfileCodificadoClick(wxCommandEvent& event)
{	
    if(WxOpenFileDialog1->ShowModal() == wxID_OK){
        inserttextocod->SetValue("");
        wxString texto,temp,nombrefile;
        nombrefile=WxOpenFileDialog1->GetPath();
        tfile.Open(nombrefile);
        texto = tfile.GetFirstLine();
        texto=texto+'\n';
        inserttextocod->SetValue(texto);
        while(!tfile.Eof()){
            texto=texto+tfile.GetNextLine()+'\n';
            inserttextocod->SetValue(texto); // placeholder, do whatever you want with the string
        }
        WxCheckBox2->SetValue(true);
        inserttextocod->Enable(true);
        insertnum->Enable(true);
        WxPanel2->Enable(true);
        WxPanel3->Enable(true);
        WxRichTextCtrl1->Show(false);
        WxPanel2->Show(true);
        WxPanel3->Show(true);
    }else{
        return;
    }
	// insert your code here
}

/*
 * WxCheckBox1Click0
 */
void cifradoFrm::WxCheckBox1Click0(wxCommandEvent& event)
{
    if (WxCheckBox1->GetValue()==true){
        WxCheckBox2->SetValue(false);
        inserttextodec->Enable(true);
        insertnumero->Enable(true);
        inserttextocod->Enable(false);
        insertnum->Enable(false);
        inserttextocod->SetValue("");
        insertnum->SetValue("");
    }else{
        inserttextodec->Enable(false);
        insertnumero->Enable(false);
        inserttextodec->SetValue("");
        insertnumero->SetValue("");
    }
	// insert your code here
}

/*
 * WxButtoncodifClick0
 */
void cifradoFrm::WxButtoncodifClick0(wxCommandEvent& event)
{
	wxString texto;
	int num,tam;
    char temp;
	num=wxAtoi(insertnumero->GetValue());
    texto=inserttextodec->GetValue();
    tam=texto.size();
	for(int x=0; x<tam; x++){
		if(texto[x]>64 && texto[x]<91){
            temp=texto[x];
            temp=temp-((num%26));
			texto[x]=temp;
			if(texto[x]<65){
                temp=texto[x];
                temp=temp+26;
				texto[x]=temp;
			}
		}
		if(texto[x]>96 && texto[x]<123){
            temp=texto[x];
            temp=temp-((num%26));
			texto[x]=temp;
			if(texto[x]<97){
                temp=texto[x];
                temp=temp+26;
				texto[x]=temp;
			}
		}
		if(texto[x]=='Ñ' || texto[x]=='ñ'){
			texto[x]='#';
		}		
	}
	
	inserttextocod->SetValue(texto);

}

/*
 * insertnumeroUpdated0
 */
void cifradoFrm::insertnumeroUpdated0(wxCommandEvent& event)
{
    if(insertnumero->GetValue()!=""){
        WxButtoncodif->Enable(true);
    }else{
        WxButtoncodif->Enable(false);
    }
	// insert your code here
}
