#pragma once
#include <array>
#define arraysize 10000


struct Cocktailsort
{
    Cocktailsort(std::array<int,arraysize>_correct);
    void sort(std::array<int,arraysize> Array);

    std::array<int,arraysize>generated;
    std::array<int,arraysize>correct;
};
