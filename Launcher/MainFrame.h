#pragma once

#include "wx/wx.h";

/*

	This is the primary frame of the KakaraLauncher.

*/
class MainFrame : public wxFrame
{
public:
	MainFrame();
	~MainFrame();


public:
	wxPanel* currentPanel;

	void setCurrentPanel(wxPanel* panel);
};

