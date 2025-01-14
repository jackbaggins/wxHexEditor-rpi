///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.0.0-6-ga75305af)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
class wxHexCtrl;
class wxHexOffsetCtrl;
class wxHexTextCtrl;

#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/textctrl.h>
#include <wx/scrolbar.h>
#include <wx/sizer.h>
#include <wx/panel.h>

#include "wxHexCtrl/wxHexCtrl.h"

///////////////////////////////////////////////////////////////////////////

#define ID_DEFAULT wxID_ANY // Default
#define ID_HEXBOX 1000
#define ID_TEXTBOX 1001

///////////////////////////////////////////////////////////////////////////////
/// Class HexEditorCtrlGui
///////////////////////////////////////////////////////////////////////////////
class HexEditorCtrlGui : public wxPanel
{
	private:

	protected:
		wxStaticText* m_static_offset;
		wxStaticText* m_static_address;
		wxStaticText* m_static_byteview;
		wxStaticText* m_static_null;
		wxHexOffsetCtrl* offset_ctrl;
		wxHexCtrl* hex_ctrl;
		wxHexTextCtrl* text_ctrl;

		// Virtual event handlers, override them in your derived class
		virtual void OnKeyboardChar( wxKeyEvent& event ) { event.Skip(); }
		virtual void OnResize( wxSizeEvent& event ) { event.Skip(); }
		virtual void OnOffsetScroll( wxScrollEvent& event ) { event.Skip(); }


	public:
		wxScrollBar* offset_scroll_real;

		HexEditorCtrlGui( wxWindow* parent, wxWindowID id = ID_DEFAULT, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxTAB_TRAVERSAL, const wxString& name = wxEmptyString );

		~HexEditorCtrlGui();

};

