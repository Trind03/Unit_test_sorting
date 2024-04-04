#pragma once
#include <array>
#include <vector>
#include "algorithm.h"

#define arraySize 10000


class CountingSort: public algorithm
{
public:
    CountingSort(std::array<int,arraySize>&correct,std::array<int,arraySize>&generated);
    void CountingSort::sort(std::array<int, arraySize>& arr) override;

    std::array<int,arraySize>Generated;
    std::array<int,arraySize>Correct;
};