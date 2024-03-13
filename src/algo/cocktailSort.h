#pragma once
#include <array>
    
struct Cocktailsort
{
    Cocktailsort(std::array<int,10>_correct);
    void sort(std::array<int,10> Array);

    std::array<int,10>generated;
    std::array<int,10>correct;
};
