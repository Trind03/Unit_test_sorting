#pragma once
#include <vector>
#include <set>

struct Cocktailsort
{
    Cocktailsort(std::vector<int>&Correct,std::vector<int>&generated);
    void sort();

    std::vector<int>Generated;
    std::vector<int>Correct;
};
