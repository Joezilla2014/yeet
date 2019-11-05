#include "ErrorFunctions.h"
#include "Globals.h"

void OnError(int err, std::string msg)
{
	//g_usableApp->window()->setInputCaptureCount(0);
	//g_usableApp->window()->setMouseVisible(true);
	std::string emsg = "An unexpected error has occured and "+g_PlaceholderName+" has to quit. We're sorry!" + msg;
	std::string title = g_PlaceholderName+"Crash";
	//clearInstances();
	MessageBox(NULL, emsg.c_str(), title.c_str(), MB_OK);
	exit(err);
}