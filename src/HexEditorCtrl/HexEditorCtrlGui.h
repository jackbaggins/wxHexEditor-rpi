///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Mar  8 2013)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __HEXEDITORCTRLGUI_H__
#define __HEXEDITORCTRLGUI_H__

#include <wx-3.0/wx/artprov.h>
#include <wx-3.0/wx/xrc/xmlres.h>
class wxHexCtrl;
class wxHexOffsetCtrl;
class wxHexTextCtrl;

#include <wx-3.0/wx/string.h>
#include <wx-3.0/wx/stattext.h>
#include <wx-3.0/wx/gdicmn.h>
#include <wx-3.0/wx/font.h>
#include <wx-3.0/wx/colour.h>
#include <wx-3.0/wx/settings.h>
#include <wx-3.0/wx/textctrl.h>
#include <wx-3.0/wx/scrolbar.h>
#include <wx-3.0/wx/sizer.h>
#include <wx-3.0/wx/panel.h>

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
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnKeyboardChar( wxKeyEvent& event ) { event.Skip(); }
		virtual void OnResize( wxSizeEvent& event ) { event.Skip(); }
		virtual void OnOffsetScroll( wxScrollEvent& event ) { event.Skip(); }
		
	
	public:
		wxScrollBar* offset_scroll_real;
		
		HexEditorCtrlGui( wxWindow* parent, wxWindowID id = ID_DEFAULT, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxTAB_TRAVERSAL ); 
		~HexEditorCtrlGui();
	
};

#endif //__HEXEDITORCTRLGUI_H__
