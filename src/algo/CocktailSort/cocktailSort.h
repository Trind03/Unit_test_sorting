#pragma once
#include <array>
#include "algorithm.h"
#define arraySize 10000


class CocktailSort : public algorithm
{
public:
    CocktailSort(std::array<int,arraySize>&correct,std::array<int,arraySize>&generated);
    void sort(std::array<int,arraySize>&arr) override;
    bool validator();

    std::array<int,arraySize>Generated;
    std::array<int,arraySize>Correct;
};
