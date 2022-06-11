#include"App.h"


int CALLBACK  WinMain(
	HINSTANCE hInstance,
	HINSTANCE hPrevenInstance,
	LPSTR	  lpCmdLine,
	int       nCmdShow)
{


	return App{}.BeginPlay();

}