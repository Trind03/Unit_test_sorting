#pragma once
#include <array>
#define arraySize 10000

class algorithm
{
public:
    void virtual sort(std::array<int,arraySize>&arr) = 0;
    bool virtual validator() = 0;

    std::array<int,arraySize>Generated;
    std::array<int,arraySize>Correct;
};



