#pragma once
#include <array>
#include "algorithm.h"
#define arraySize 10000


class BubbleSort : public algorithm
{
public:
    BubbleSort(std::array<int,arraySize>&generated);
    void sort(std::array<int,arraySize>&arr) override;

    std::array<int,arraySize>Generated;

    std::array<int,arraySize>Correct;
};