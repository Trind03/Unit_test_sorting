#pragma once
#include <array>
#define arraySize 10000

struct algorithm
{
    void virtual sort(std::array<int,arraySize>&arr) = 0;
    
    std::array<int,arraySize>Generated;
    std::array<int,arraySize>Correct;

};