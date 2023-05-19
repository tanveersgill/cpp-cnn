cmake_minimum_required(VERSION 3.23)
project(cpp_cnn)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(cpp_cnn
        main.cpp
        Matrix.cpp
        Matrix.h)
