#pragma once
#include "core.h"
#include "Events/Event.h"

namespace Hazel {
	class HAZEL_API Application
	{
	public:
		Application();
		virtual ~Application();
		
		void Run();
	};

	// 在用户中定义
	Application* CreateApplication();
};

