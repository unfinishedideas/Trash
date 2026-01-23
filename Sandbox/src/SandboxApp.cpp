#include <Trash.h>

class Sandbox : public Trash::Application
{
public:
	Sandbox() 
	{

	}
	~Sandbox()
	{

	}
};

Trash::Application* Trash::CreateApplication()
{
	return new Sandbox();
}
