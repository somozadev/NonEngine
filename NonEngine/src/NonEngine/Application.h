#pragma once
#include "Core.h"
namespace NonEngine
{
	class NONENGINE_API Application
	{
	public:
		Application();
		virtual~Application();

		void Run();
	};

	//To be defined in Client
	Application* CreateApplication();


}

