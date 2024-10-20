cmake_minimum_required(VERSION 3.20...3.30)

project(
    Vi
    VERSION 0.1
    DESCRIPTION "Vi Game Engine"
    LANGUAGES CXX)

if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME)
    set(CMAKE_CXX_EXTENSIONS OFF)
    set_property(GLOBAL PROPERTY USE_FOLDERS ON)
endif()

#TODO: Add CPM

add_subdirectory(Sandbox)
add_subdirectory(Vi_Engine)
