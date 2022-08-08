cmake_minimum_required(VERSION 3.23)
project(ch_01)

set(CMAKE_CXX_STANDARD 14) # C++14

add_executable(ch_01 main.cpp matrix.cpp matrix.h maxSubSum.cpp)
