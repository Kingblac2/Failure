#pragma once
#include "Windows.h"

class App
{
public:
	App();
	 //master frame /message loop

	int BeginPlay();
private:
	void PerFrame();

private:
	Window wnd;
};