#ifndef APP_H
#define APP_H

#include <wx-3.0/wx/wxprec.h>

#ifdef __BORLANDC__
    #pragma hdrstop
#endif

#ifndef WX_PRECOMP
    #include <wx-3.0/wx/wx.h>
#endif

class MyApp : public wxApp
{
	public:
		virtual bool OnInit();
};

#endif // APP_H
