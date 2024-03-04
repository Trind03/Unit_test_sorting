cmake_minimum_required(VERSION 3.27)
project(sort)
set(CXX_STANDARD 20)

# Add sub directories and add source paths.
add_subdirectory(googletest)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
include_directories(${cmake_SOURCE_DIR}/src)
include_directories(${CMAKE_SOURCE_DIR}/src/algo)

add_executable(sort
src/main.cpp
src/toolkit.cpp
src/algo/cocktailSort.cpp
)

target_link_libraries(sort gtest gtest_main)