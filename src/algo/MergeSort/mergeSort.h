#pragma once 
#include <array>
#include "algorithm.h"
#define arraySize 10000

class MergeSort: public algorithm
{
public:
    MergeSort(std::array<int,arraySize>&generated);

    void merge(int const left, int const mid,int const right);
        bool validator(std::array<int,arraySize>&arr);

    void sort(int const begin, int const end);

    std::array<int,arraySize>Generated;
};
