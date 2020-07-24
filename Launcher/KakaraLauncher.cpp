#include "KakaraLauncher.h"

wxIMPLEMENT_APP(KakaraLauncher);

KakaraLauncher::KakaraLauncher() {

}

KakaraLauncher::~KakaraLauncher() {

}

bool KakaraLauncher::OnInit()
{
	mainFrame = new MainFrame();
	mainFrame->Show();
	return true;
}

MainFrame* KakaraLauncher::getMainFrame()
{
	return mainFrame;
}
