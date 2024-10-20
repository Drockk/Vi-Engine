#include <Source/Vi.hpp> //Fix This...

class SandboxApp: public vi::Application
{};

std::unique_ptr<vi::Application> createApplication()
{
    return std::make_unique<SandboxApp>();
}
