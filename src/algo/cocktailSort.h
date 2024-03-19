#pragma once
#include <array>

struct Cocktailsort
{
    Cocktailsort(std::array<int,10000>&correct,std::array<int,10000>&generated);
    void sort();

    std::array<int,10000>Generated;
    std::array<int,10000>Correct;
};
