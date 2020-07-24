#include "MainFrame.h"
#include "MainPanel.h";

//wxBEGIN_EVENT_TABLE(MainFrame, wxFrame)
	//EVT_BUTTON(1001, OnButtonClicked)
//wxEND_EVENT_TABLE()

#include "KakaraLauncher.h";

MainFrame::MainFrame() : wxFrame(nullptr, wxID_ANY, "Kakara Launcher", wxPoint(0, 0), wxSize(800, 600))
{
	this->Center();
	currentPanel = new MainPanel(this);
	currentPanel->Show();
}

MainFrame::~MainFrame()
{
}

void MainFrame::setCurrentPanel(wxPanel* panel)
{
	currentPanel->Hide();
	currentPanel = panel;
	currentPanel->Show();
}