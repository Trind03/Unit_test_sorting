#pragma once
#include <array>
#define arraySize 10000

class algorithm
{
public:
    void virtual sort() = 0;
    bool algorithm::validator(std::array<int,arraySize>&arr);


    std::array<int,arraySize>Generated;
    std::array<int,arraySize>Correct;
};



