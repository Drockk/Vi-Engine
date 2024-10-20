project(
    "Sandbox"
    LANGUAGES CXX)

add_executable(${PROJECT_NAME})
target_sources(${PROJECT_NAME}
    PRIVATE
    Source/SandboxApplication.cpp)

target_link_libraries(${PROJECT_NAME} Vi_Engine)

set_target_properties(${PROJECT_NAME} PROPERTIES LINKER_LANGUAGE CXX)
set_target_properties(${PROJECT_NAME} PROPERTIES CXX_STANDARD 23)
