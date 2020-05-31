cmake_minimum_required(VERSION 3.12)

add_subdirectory(stb)
add_subdirectory(json)
add_subdirectory(tiny_gltf)

target_include_directories(tiny_gltf
    PRIVATE ./json/include
    PRIVATE ./stb/include
    )
