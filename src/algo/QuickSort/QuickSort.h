#pragma once
#include <array>
#include "algorithm.h"
#include "QuickSort.h"
#define arraySize 10000

class QuickSort : algorithm
{
    int sort(std::array<int,arraySize>arr,int low,int high);
    void quickSort(std::array<int,arraySize>arr,int low,int high);

    std::array<int,arraySize>Generated;
};