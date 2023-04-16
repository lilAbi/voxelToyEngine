cmake_minimum_required(VERSION 3.25)
project(toyGameEngine)
set(CMAKE_CXX_STANDARD 20)

include_directories(src)

add_subdirectory(lib)

#find and include glfw library from conan toolchain
find_package(glfw3 REQUIRED)
include_directories(${glfw3_INCLUDE_DIR})

#find and include imgui library from conan toolchain
find_package(imgui REQUIRED)
include_directories(${imgui_INCLUDE_DIR})

file(GLOB SRC_FILES CONFIGURE_DEPENDS
        ${PROJECT_SOURCE_DIR}/src/main.cpp
        ${PROJECT_SOURCE_DIR}/src/*/*.cpp)

add_executable(toyGameEngine ${SRC_FILES})

target_link_libraries(toyGameEngine ${glfw3_LIBRARIES} glad)
