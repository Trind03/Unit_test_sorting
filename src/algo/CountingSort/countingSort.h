#pragma once
#include <array>
#include <vector>
#include "algorithm.h"

#define arraySize 10000


class CountingSort: public algorithm
{
public:
    CountingSort(std::array<int,arraySize>&correct,std::array<int,arraySize>&generated);
    void sort()override;

public:
    std::array<int,arraySize>Generated;
    std::array<int,arraySize>Correct;
};