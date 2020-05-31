cmake_minimum_required(VERSION 3.12)

add_library(stb STATIC
    ./src/stb_image.c
    ./src/stb_image_write.c
    )
target_include_directories(stb
    PRIVATE ./include
    )
