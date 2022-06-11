#include"App.h"

App::App() : wnd(800, 600, "Son of a bastard")
{}


int App::BeginPlay()
{
	while (true)
	{

		// process all messages pending, but to not block for new messages
		if (const auto ecode = Window::ProcessMessages())
		{
			// if return optional has value, means we're quitting so return exit code

			return *ecode;
		}
		PerFrame();
	}

}

void App::PerFrame()
{

}