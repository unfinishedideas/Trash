#pragma once

#ifdef TS_PLATFORM_WINDOWS

extern Trash::Application* Trash::CreateApplication();

int main(int argc, char ** argv)
{
	printf("Trash Engine\n");
	auto  app = Trash::CreateApplication();
	app->Run();
	delete app;
}

#endif
