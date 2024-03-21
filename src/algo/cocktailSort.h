#pragma once
#include <array>
#define arraySize 10000
struct Cocktailsort
{
    Cocktailsort(std::array<int,arraySize>&correct,std::array<int,arraySize>&generated);
    void sort();

    std::array<int,arraySize>Generated;
    std::array<int,arraySize>Correct;
};
