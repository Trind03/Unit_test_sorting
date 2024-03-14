#pragma once
#include <array>
#define arraysize 10000

struct BubbleSort
{
    BubbleSort(std::array<int,arraysize>(_correct));
    void sort(std::array<int,arraysize>arr);

    std::array<int,arraysize>generated;
    std::array<int,arraysize>correct;
};