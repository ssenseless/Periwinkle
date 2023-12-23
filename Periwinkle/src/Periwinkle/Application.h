#pragma once

#include "Core.h"

namespace Periwinkle {
	class PERIWINKLE_API Application {
	public:
		Application();
		virtual ~Application();
		
		void Run();
	};

	//requires client definition
	Application* CreateApplication();
}

