cmake_minimum_required(VERSION 2.8)

project(game-assets-examples)

include(cmake/get_cpm.cmake)

CPMAddPackage(
    NAME glm
    GITHUB_REPOSITORY g-truc/glm
    GIT_TAG 0.9.9.8
)

add_subdirectory(game-assets)
add_subdirectory(hl.viewer)
