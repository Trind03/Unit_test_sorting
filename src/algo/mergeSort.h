#pragma once 
#include <array>
#include "algorithm.h"

class MergeSort : private algorithm
{
    MergeSort(std::array<int,arraySize>&correct,std::array<int,arraySize>&generated);
    void merge(std::array<int,arraySize>&array, int const left, int const mid,int const right);
    void mergeSort(std::array<int,arraySize>&array, int const begin, int const end);
};
