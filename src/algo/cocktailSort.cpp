#include "cocktailSort.h"
#include <array>
#include <random>
#include <ctime>
#define arraySize 10000

CocktailSort::CocktailSort(std::array<int,arraySize>&_correct,std::array<int,arraySize>&_generated) : Correct(_correct), Generated(_generated)
{}


void CocktailSort::sort(std::array<int,arraySize>&arr)
{
    bool swapped = true;
    int sum = 0;
    int start = 0;
    int end = arr.size() - 1;

    while (swapped)
    {
        swapped = false;

        // Forward iteration
        for (int i = start; i < end; ++i)
        {
            if (arr[i] > arr[i + 1])
            {
                std::swap(arr[i], arr[i + 1]);
                swapped = true;
            }
        }

        if (!swapped) break;

        swapped = false;
        --end;

        // Backward iteration
        for (int i = end - 1; i >= start; --i)
        {
            if (arr[i] > arr[i + 1])
            {
                std::swap(arr[i], arr[i + 1]);
                swapped = true;
            }
        }
        ++start;
    }
};
