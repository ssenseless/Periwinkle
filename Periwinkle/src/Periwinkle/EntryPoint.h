#pragma once

#ifdef PW_PLATFORM_WINDOWS

extern Periwinkle::Application* Periwinkle::CreateApplication();

int main(int argc, char** argv) {
	Periwinkle::Log::init();

	PW_CORE_TRACE("HELP");
	PW_CORE_INFO("HELP");
	PW_CORE_WARN("HELP");
	PW_CORE_ERROR("HELP");

	PW_TRACE("HELP");
	PW_INFO("HELP");
	PW_WARN("HELP");
	PW_ERROR("HELP");

	auto app = Periwinkle::CreateApplication();
	
	app->Run();

	delete app;
}

#endif