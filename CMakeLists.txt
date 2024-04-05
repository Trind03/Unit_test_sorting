cmake_minimum_required(VERSION 3.28)
project(sort)
include(${CMAKE_SOURCE_DIR}/init.cmake)

# Add sub directories and add source paths.
add_subdirectory(googletest)

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