#pragma once

#ifdef NE_PLATFORM_WINDOWS

extern NonEngine::Application* NonEngine::CreateApplication();

int main(int argc, char** argv)
{
	auto app = NonEngine::CreateApplication();
	app->Run();
	delete app;
}

#else
	#error NonEngine only supports Windows!
#endif