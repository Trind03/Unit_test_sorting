cmake_minimum_required(VERSION 3.27)
project(sort)

set(CXX_STANDARD 20)

add_subdirectory(googletest)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})


add_executable(Google_Tests_run test1.cpp test2.cpp)
target_link_libraries(Google_Tests_run gtest gtest_main)