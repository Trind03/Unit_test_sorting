set(CMAKE_CXX_STANDARD 20)
set(CMAKE_BUILD_PARALLEL_LEVEL 4)

# Add sub directories and add source paths.
add_subdirectory(googletest)

# Primary directories 
set(SOURCE_DIR "${CMAKE_SOURCE_DIR}/src")
set(Algo "${CMAKE_SOURCE_DIR}/src/algo")


set(CocktailSort "${Algo}/CocktailSort")
set(BubbleSort "${Algo}/BubbleSort")
set(SelectionSort "${Algo}/SelectionSort")
set(InsertionSort "${Algo}/InsertionSort")
set(MergeSort "${Algo}/MergeSort")
set(CountingSort "${Algo}/CountingSort")
set(QuickSort "${Algo}/QuickSort")


include_directories(
    ${SOURCE_DIR}
    ${Algo}
    ${CocktailSort}/CocktailSort
    ${BubbleSort}/BubbleSort
    ${SelectionSort}/SelectionSort
    ${InsertionSort}/InsertionSort
    ${MergeSort}/MergeSort
    ${CountingSort}/CountingSort
    ${QuickSort}/QuickSort
    ${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR}
)
