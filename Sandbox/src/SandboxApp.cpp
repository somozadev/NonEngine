#include <NonEngine.h>
class Sandbox : public NonEngine::Application
{
public:
	Sandbox()
	{

	}
	~Sandbox()
	{

	}
};

NonEngine::Application* NonEngine::CreateApplication()
{
	return new Sandbox();
}