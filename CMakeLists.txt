cmake_minimum_required(VERSION 3.27)
project(sort)
include(${CMAKE_SOURCE_DIR}/init.cmake)


add_executable(sort
${SOURCE_DIR}/main.cpp
${Algo}/algorithm.cpp
${Algo}/CocktailSort/cocktailSort.cpp
${Algo}/BubbleSort/bubbleSort.cpp
${Algo}/SelectionSort/selectionSort.cpp
${Algo}/InsertionSort/insertionSort.cpp
${Algo}/MergeSort/mergeSort.cpp
${Algo}/CountingSort/countingSort.cpp
${Algo}/QuickSort/QuickSort.cpp
)

target_link_libraries(sort gtest gtest_main)