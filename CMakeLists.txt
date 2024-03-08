cmake_minimum_required(VERSION 3.28)
project(sort)
set(CXX_STANDARD 20)
set(CMAKE_BUILD_TYPE "Release")
# Add sub directories and add source paths.
add_subdirectory(googletest)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
include_directories(${cmake_SOURCE_DIR}/src)
include_directories(${CMAKE_SOURCE_DIR}/src/algo)

add_executable(sort
src/main.cpp
src/algo/cocktailSort.cpp
src/algo/bubblesort.cpp
)

target_link_libraries(sort gtest gtest_main)