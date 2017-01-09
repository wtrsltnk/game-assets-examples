cmake_minimum_required(VERSION 2.8)

project(game-assets-examples)

include(gl.utilities/win-cpp-deps.cmake/win-cpp-deps.cmake)

include_directories(
    gl.utilities
    game-assets/include
    )

add_subdirectory(game-assets)
add_subdirectory(hl.viewer)
