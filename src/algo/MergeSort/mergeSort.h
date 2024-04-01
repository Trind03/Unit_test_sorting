#pragma once 
#include <array>
#include "algorithm.h"
#define arraySize 10000

class MergeSort
{
public:
    MergeSort(std::array<int,arraySize>&correct,std::array<int,arraySize>&generated);

    void merge(std::array<int,arraySize>&array, int const left, int const mid,int const right);

    void sort(std::array<int,arraySize>&array, int const begin, int const end);

    std::array<int,arraySize>Generated;
    std::array<int,arraySize>Correct;
};
