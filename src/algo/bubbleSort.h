#pragma once
#include <array>

struct BubbleSort
{
    BubbleSort();
    void sort(std::array<int,10>arr);

    std::array<int,10>generated;
    std::array<int,10>correct;
};