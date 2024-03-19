cmake_minimum_required(VERSION 3.28)
project(sort)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_BUILD_TYPE "Release")
set(CMAKE_BUILD_PARALLEL_LEVEL 4)
#set(CMAKE_GENERATOR "Ninja Multi-Config")

# Add sub directories and add source paths.
add_subdirectory(googletest)
include_directories(
    ${cmake_SOURCE_DIR}/src
    ${CMAKE_SOURCE_DIR}/src/algo
    ${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR}
)

add_executable(sort
src/main.cpp
src/algo/cocktailSort.cpp
src/algo/bubblesort.cpp
src/algo/selectionSort.cpp
)

target_link_libraries(sort gtest gtest_main)