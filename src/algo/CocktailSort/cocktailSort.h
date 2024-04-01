#pragma once
#include <array>
#include "algorithm.h"
#define arraySize 10000


struct CocktailSort : public algorithm
{
    CocktailSort(std::array<int,arraySize>&correct,std::array<int,arraySize>&generated);
    void sort(std::array<int,arraySize>&arr) override;

    std::array<int,arraySize>Generated;
    std::array<int,arraySize>Correct;
};
