cmake_minimum_required(VERSION 3.10)

project(Galaxy VERSION 0.1)

set(SOURCE_FILES main.cpp)
add_executable(galaxy src/${SOURCE_FILES})

configure_file(inc/GalaxyConfig.h.in GalaxyConfig.h)
target_include_directories(galaxy PUBLIC "${PROJECT_SOURCE_DIR}/inc/")

set(CMAKE_CXX_FLAGS "-DCMAKE_EXPORT_COMPILE_COMMANDS=1")
