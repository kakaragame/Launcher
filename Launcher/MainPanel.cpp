#include "MainPanel.h"

MainPanel::MainPanel(MainFrame* frame) : wxPanel(frame, wxID_ANY)
{
	this->SetSize(frame->GetSize());
	kakaraLabel = new wxStaticText(this, wxID_ANY, "Kakara", wxPoint(40, 40), wxSize(100, 100));
	kakaraLabel->CenterOnParent();

	startButton = new wxButton(this, 1, "Start", wxPoint(40, 30), wxSize(40, 30));
}

MainPanel::~MainPanel()
{
}