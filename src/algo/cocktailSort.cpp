#include "cocktailSort.h"
#include <array>
#include <random>
#include <ctime>

Cocktailsort::Cocktailsort(std::array<int,10000>&_correct,std::array<int,10000>&_generated) : Correct(_correct), Generated(_generated)
{}


void Cocktailsort::sort()
{
    std::array<int,10000>&arr = Generated;
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
