#pragma once
#include <array>
#include "algorithm.h"
#define arraySize 10000


class SelectionSort : public algorithm
{
public:
    SelectionSort(std::array<int,arraySize>&generated);
    void sort() override;


    std::array<int,arraySize>Generated;
};