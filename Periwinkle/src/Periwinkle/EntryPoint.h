#pragma once

#ifdef PW_PLATFORM_WINDOWS

extern Periwinkle::Application* Periwinkle::CreateApplication();

int main(int argc, char** argv) {
	auto app = Periwinkle::CreateApplication();
	
	app->Run();

	delete app;
}

#endif