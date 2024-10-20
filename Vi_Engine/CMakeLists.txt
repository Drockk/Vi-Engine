project(
    Vi_Engine
    LANGUAGES CXX)

add_library(${PROJECT_NAME} STATIC)
target_sources(${PROJECT_NAME}
    PRIVATE
    Source/Vi/Core/Application.cpp
    PUBLIC
    FILE_SET HEADERS
    FILES
    Source/Vi.hpp
    Source/Vi/Core/Application.hpp
    Source/Vi/Core/Entrypoint.hpp)

include_directories(Source)
set_target_properties(${PROJECT_NAME} PROPERTIES LINKER_LANGUAGE CXX)
set_target_properties(${PROJECT_NAME} PROPERTIES CXX_STANDARD 23)
