#pragma once
#include "wx/wx.h";

/*

	The main panel that is to be displayed.

*/
class MainFrame;
class MainPanel : public wxPanel
{
public:
	MainPanel(MainFrame* frame);
	~MainPanel();

private:
	wxStaticText* kakaraLabel;
	wxButton* startButton;
};

#include "KakaraLauncher.h";