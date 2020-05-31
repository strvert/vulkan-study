cmake_minimum_required(VERSION 3.12)

project(vulkan_prac)

find_package(glfw3 REQUIRED)
find_package(glm REQUIRED)

set(CMAKE_C_COMPILER clang)
set(CMAKE_CXX_COMPILER clang++)

add_subdirectory(thirdparty)

add_executable(${CMAKE_PROJECT_NAME} main.cpp)

target_include_directories(${CMAKE_PROJECT_NAME}
    PRIVATE ./thirdparty/stb/include
    PRIVATE ./thirdparty/tiny_gltf/include
    )

target_compile_options(${CMAKE_PROJECT_NAME}
    PRIVATE -O2 -Wall
    )

target_link_libraries(${CMAKE_PROJECT_NAME} glfw glm stb tiny_gltf)

add_custom_target(exec
    DEPENDS vulkan_prac
    COMMAND cp ../resources . -r
    COMMAND ./${CMAKE_PROJECT_NAME}
    )

set_property(TARGET ${CMAKE_PROJECT_NAME}
        PROPERTY CXX_STANDARD 17
    )
