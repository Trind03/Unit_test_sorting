#pragma once
#include <array>

struct SelectionSort
{

    SelectionSort(std::array<int,10000>&correct,std::array<int,10000>&generated);
    void sort();

    std::array<int,10000>Generated;
    std::array<int,10000>Correct;
};