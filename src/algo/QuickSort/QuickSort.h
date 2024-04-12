#pragma once
#include <array>
#include "algorithm.h"
#include "QuickSort.h"
#define arraySize 10000

class QuickSort : public algorithm
{
    public:
    QuickSort(std::array<int,arraySize>&arr);
    void sort();
    int quickSort(std::array<int,arraySize>&arr,int low,int high);

    std::array<int,arraySize>Generated;
};