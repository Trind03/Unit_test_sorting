#pragma once
#include <vector>


struct Cocktailsort
{
    Cocktailsort(std::vector<int>_correct);
    void sort(std::vector<int> Array);

    std::vector<int>generated;
    std::vector<int>correct;
};
