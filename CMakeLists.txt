cmake_minimum_required(VERSION 3.20)
project(MapWalker)

set(CMAKE_CXX_STANDARD 17)

add_executable(MapWalker main.cpp Map.cpp Map.h Country.cpp Country.h)
