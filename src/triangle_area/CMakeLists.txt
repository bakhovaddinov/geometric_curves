cmake_minimum_required(VERSION 3.16)

set(TARGET_NAME triangle_area)

add_library(${TARGET_NAME} SHARED triangle_area.cpp)

target_include_directories(${TARGET_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
