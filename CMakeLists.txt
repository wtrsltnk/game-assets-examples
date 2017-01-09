cmake_minimum_required(VERSION 2.8)

project(game-assets-examples)

set(WIN_CPP_PREFIX_PATH $ENV{WIN_CPP_PREFIX_PATH})
if (NOT WIN_CPP_PREFIX_PATH)
    message("Cannot find WIN_CPP_PREFIX_PATH. Add it to your environment variables")
endif()
if (NOT EXISTS "${WIN_CPP_PREFIX_PATH}")
    message("${WIN_CPP_PREFIX_PATH} does not exist")
else()
    set(CMAKE_PREFIX_PATH "${WIN_CPP_PREFIX_PATH}")
    set(CMAKE_MODULE_PATH "${WIN_CPP_PREFIX_PATH}/cmake-modules")
    set(ZLIB_ROOT ${WIN_CPP_PREFIX_PATH})
endif()

include_directories(game-assets/include)

add_subdirectory(game-assets)
add_subdirectory(viewer)
