
#ifndef VGUI_FOCUSCHANGESIGNAL_H
#define VGUI_FOCUSCHANGESIGNAL_H

#include<VGUI.h>

namespace vgui
{

class Panel;

class VGUIAPI FocusChangeSignal
{
public:
	virtual void focusChanged(bool lost,Panel* panel)=0;
};

}

#endif