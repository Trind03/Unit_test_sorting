set(CMAKE_CXX_STANDARD 20)
set(CMAKE_BUILD_PARALLEL_LEVEL 4)

# Add sub directories and add source paths.
add_subdirectory(googletest)

# Primary directories 
set(SOURCE_DIR "${CMAKE_SOURCE_DIR}/src")
set(Algo "${SOURCE_DIR}/algo")

include_directories(
    ${SOURCE_DIR}
    ${Algo}
    ${Algo}/CocktailSort
    ${Algo}/BubbleSort
    ${Algo}/SelectionSort
    ${Algo}/InsertionSort
    ${Algo}/MergeSort
    ${Algo}/CountingSort
    ${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR}
)