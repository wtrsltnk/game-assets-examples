cmake_minimum_required(VERSION 2.6)

project(hl.viewer)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x")

find_package(OpenGL REQUIRED)

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIR})

find_package(GLM REQUIRED)
include_directories(${GLM_INCLUDE_DIR})

set(SRC_APP
    ../common/camera.cpp
    ../common/font.cpp
    ../common/settings.cpp
    ../common/log.cpp
    ../common/sdl-program.cpp
    filesystem.cpp
    program.cpp
	viewerhud.cpp
)

add_executable(hl.viewer ${SRC_APP})

target_link_libraries(hl.viewer
    game-assets
    ${SDL2_LIBRARY} Ole32 Oleaut32 Imm32 Winmm Version
    ${OPENGL_LIBRARIES}
)
