#pragma once

#include "wx/wx.h";
#include "MainFrame.h";

/*
	This is the main class of the KakaraLauncher.
	This controls the entire GUI.
*/
class KakaraLauncher : public wxApp
{
public:
	KakaraLauncher();
	~KakaraLauncher();

private:
	MainFrame* mainFrame;
	

public:
	virtual bool OnInit();
	MainFrame* getMainFrame();
};

