cmake_minimum_required(VERSION 3.10)
project(cal LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

get_filename_component(PARENT_DIR "${CMAKE_CURRENT_SOURCE_DIR}" DIRECTORY)
include_directories(${PARENT_DIR}/external/)

add_executable(cal main.cpp)
