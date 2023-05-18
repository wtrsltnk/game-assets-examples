cmake_minimum_required(VERSION 2.6)

project(hl.viewer)

CPMAddPackage(
    NAME SDL2
    VERSION  2.0.22
    URL https://github.com/libsdl-org/SDL/archive/refs/tags/release-2.0.22.zip
    OPTIONS
        "SDL_SHARED Off"
)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x")

find_package(OpenGL REQUIRED)

add_executable(hl.viewer
    ../common/camera.cpp
    ../common/font.cpp
    ../common/settings.cpp
    ../common/log.cpp
    ../common/sdl-program.cpp
    filesystem.cpp
    program.cpp
    viewerhud.cpp
)

target_include_directories(hl.viewer
    PUBLIC ../game-assets/include
)

target_link_libraries(hl.viewer
    game-assets
    glm
    SDL2-static
    Ole32 Oleaut32 Imm32 Winmm Version
    ${OPENGL_LIBRARIES}
)
