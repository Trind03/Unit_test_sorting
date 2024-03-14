#pragma once
#define arraysize 10000


struct SelectionSort
{

    SelectionSort(std::array<int,arraysize>_correct);
    void sort(std::array<int,arraysize>_correct);

    std::array<int,arraysize>generated;
    std::array<int,arraysize>correct;
};