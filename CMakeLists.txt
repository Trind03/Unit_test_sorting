cmake_minimum_required(VERSION 3.27)
project(sort)

set(CXX_STANDARD 20)


add_executable(sort ./src/toolkit.cpp ./src/main.cpp ./src/algo/cocktailSort.cpp)