cmake_minimum_required(VERSION 3.28)
project(sort)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_BUILD_PARALLEL_LEVEL 4)


# Primary directories 
set(SOURCE_DIR "${CMAKE_SOURCE_DIR}/src")
set(Algo "${SOURCE_DIR}/algo")


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
    ${countingSort}
    ${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR}
)

add_executable(sort
${SOURCE_DIR}/main.cpp
${Algo}/CocktailSort/cocktailSort.cpp
${Algo}/BubbleSort/bubblesort.cpp
${Algo}/SelectionSort/selectionSort.cpp
${Algo}/InsertionSort/insertionSort.cpp
${Algo}/MergeSort/mergeSort.cpp
${Algo}/CountingSort/countingSort.cpp
)

target_link_libraries(sort gtest gtest_main)