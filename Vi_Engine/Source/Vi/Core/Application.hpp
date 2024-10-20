#pragma once

#include <memory>

namespace vi
{
class Application
{
public:
    Application() = default;
    ~Application() = default;

    auto initialize() -> void;
};
}

extern std::unique_ptr<vi::Application> createApplication();
