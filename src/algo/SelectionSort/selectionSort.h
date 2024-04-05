#pragma once
#include <array>
#include "algorithm.h"
#define arraySize 10000


class SelectionSort : public algorithm
{
public:
    SelectionSort(std::array<int,arraySize>&correct,std::array<int,arraySize>&generated);
    void sort(std::array<int,arraySize>&arr) override;
    bool SelectionSort::validator()override;


    std::array<int,arraySize>Generated;
    std::array<int,arraySize>Correct;
};