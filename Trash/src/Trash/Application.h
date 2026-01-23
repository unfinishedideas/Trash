#pragma once

#include "Core.h"

namespace Trash {

	class TRASH_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();
}
