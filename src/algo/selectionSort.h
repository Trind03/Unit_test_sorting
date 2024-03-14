#pragma once
#include <vector>

struct SelectionSort
{

    SelectionSort(std::vector<int>_correct);
    void sort(std::vector<int>_correct);

    std::vector<int>generated;
    std::vector<int>correct;
};