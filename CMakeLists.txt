cmake_minimum_required(VERSION 3.27)
project(sort)

set(CXX_STANDARD 20)


add_executable(sort toolkit.cpp main.cpp ./algo/cocktailSort.cpp)