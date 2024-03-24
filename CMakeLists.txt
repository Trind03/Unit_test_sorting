cmake_minimum_required(VERSION 3.28)
project(sort)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_BUILD_PARALLEL_LEVEL 4)


# Primary directories
set(SOURCE_DIR "${CMAKE_SOURCE_DIR}/src")
set(Algo "${SOURCE_DIR}/algo")

# Paths to algorithms
set(cocktailSort "${Algo}/CocktailSort")
set(bubblesort "${Algo}/BubbleSort")
set(selectionSort "${Algo}/SelectionSort")
set(insertionSort "${Algo}/InsertionSort")
set(mergeSort "${Algo}/MergeSort")


# Add sub directories and add source paths.
add_subdirectory(googletest)
include_directories(
    ${SOURCE_DIR}
    ${Algo}
    ${cocktailSort}
    ${bubblesort}
    ${selectionSort}
    ${insertionSort}
    ${mergeSort}
    ${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR}
)

add_executable(sort
${SOURCE_DIR}/main.cpp
${cocktailSort}/cocktailSort.cpp
${bubblesort}/bubblesort.cpp
${selectionSort}/selectionSort.cpp
${insertionSort}/insertionSort.cpp
${mergeSort}/mergeSort.cpp
)

target_link_libraries(sort gtest gtest_main)