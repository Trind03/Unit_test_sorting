#pragma once
#include <array>
#define arraySize 10000

class algorithm
{
public:
    void virtual sort(std::array<int,arraySize>&arr) = 0;
    bool virtual validator()
    {
        for (int i = 1; i < Generated.size(); i++)
            if (Generated[i] < Generated[i - 1]) 
                return false;
        return true;
    }
    std::array<int,arraySize>Generated;
    std::array<int,arraySize>Correct;

};