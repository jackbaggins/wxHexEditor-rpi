///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Feb  5 2017)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __TAGDIALOGGUI_H__
#define __TAGDIALOGGUI_H__

#include <wx-3.0/wx/artprov.h>
#include <wx-3.0/wx/xrc/xmlres.h>
#include <wx-3.0/wx/intl.h>
#include <wx-3.0/wx/string.h>
#include <wx-3.0/wx/textctrl.h>
#include <wx-3.0/wx/gdicmn.h>
#include <wx-3.0/wx/font.h>
#include <wx-3.0/wx/colour.h>
#include <wx-3.0/wx/settings.h>
#include <wx-3.0/wx/stattext.h>
#include <wx-3.0/wx/clrpicker.h>
#include <wx-3.0/wx/sizer.h>
#include <wx-3.0/wx/button.h>
#include <wx-3.0/wx/dialog.h>

///////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
/// Class TagDialogGui
///////////////////////////////////////////////////////////////////////////////
class TagDialogGui : public wxDialog 
{
	private:
	
	protected:
		wxTextCtrl* TagTextCtrl;
		wxStaticText* m_staticText1;
		wxStaticText* m_staticText2;
		wxColourPickerCtrl* m_FontColourPicker;
		wxColourPickerCtrl* m_NoteColourPicker;
		wxButton* m_CancelButton;
		wxButton* m_RemoveButton;
		wxButton* m_SaveButton;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnClose( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnDelete( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnSave( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		TagDialogGui( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Tag Dialog"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER ); 
		~TagDialogGui();
	
};

#endif //__TAGDIALOGGUI_H__
