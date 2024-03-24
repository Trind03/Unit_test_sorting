cmake_minimum_required(VERSION 3.28)
project(sort)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_BUILD_PARALLEL_LEVEL 4)


# Variables for file paths
set(SOURCE_DIR "${CMAKE_SOURCE_DIR}/src")
set(Algo "${SOURCE_DIR}/algo")


# Add sub directories and add source paths.
add_subdirectory(googletest)
include_directories(
    ${SOURCE_DIR}
    ${Algo}
    ${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR}
)

add_executable(sort
${SOURCE_DIR}/main.cpp
${Algo}/cocktailSort.cpp
${Algo}/bubblesort.cpp
${Algo}/selectionSort.cpp
${Algo}/insertionSort.cpp
${Algo}/mergeSort.cpp
)

target_link_libraries(sort gtest gtest_main)