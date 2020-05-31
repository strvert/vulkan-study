cmake_minimum_required(VERSION 3.12)

add_library(tiny_gltf
    ./src/tiny_gltf.cpp
    )
target_include_directories(tiny_gltf
    PRIVATE ./include
    )
