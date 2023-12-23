#include <Periwinkle.h>

class Sandbox : public Periwinkle::Application {
public:
	Sandbox() {

	}

	~Sandbox() {

	}
};

Periwinkle::Application* Periwinkle::CreateApplication() {
	return new Sandbox();
}