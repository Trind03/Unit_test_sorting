#pragma once
#include <vector>

struct Cocktailsort
{
    Cocktailsort(std::vector<int>&correct,std::vector<int>&generated);
    void sort();

    std::vector<int>Generated;
    std::vector<int>Correct;
};
