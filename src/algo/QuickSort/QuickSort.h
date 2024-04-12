#pragma once
#include <array>
#include "algorithm.h"
#include "QuickSort.h"
#define arraySize 10000

class QuickSort// : public algorithm
{
public:
    QuickSort(std::array<int,arraySize>&arr);

    void sort(std::array<int,arraySize>&arr,int low,int high);
    int quickSort(std::array<int, arraySize>& arr, int low, int high);
    bool validator(std::array<int,arraySize>&arr)
    {
    for (int i = 1; i < arr.size(); i++)
        if (arr[i] < arr[i - 1]) 
            return false;
    return true;
    }
    std::array<int,arraySize>Generated;
};