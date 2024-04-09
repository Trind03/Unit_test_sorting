#include <array>
#include "algorithm.h"
#define arraySize 10000
bool algorithm::validator(std::array<int,arraySize>&arr)
{
    for (int i = 1; i < arr.size(); i++)
        if (arr[i] < arr[i - 1]) 
            return false;
    return true;
}