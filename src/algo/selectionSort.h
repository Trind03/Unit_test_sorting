#pragma once

struct SelectionSort
{
    SelectionSort(std::array<int,10>_correct);
    void sort(std::array<int,10>_correct);

    std::array<int,10>generated;
    std::array<int,10>correct;
};