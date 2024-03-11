#include "cocktailSort.h"
#include <array>


Cocktailsort::Cocktailsort(std::array<int,10>_correct) : correct(_correct)
{}

int getsize(std::array<int,10>arr) {return sizeof(arr) / 4;}

void Cocktailsort::sort(std::array<int,10> Array)
{
    bool swapped = true;
    int sum = 0;
    int start = 0;
    int end = Array.size() - 1;

    while (swapped)
    {
        swapped = false;

        // Forward iteration
        for (int i = start; i < end; ++i)
        {
            if (Array[i] > Array[i + 1])
            {
                std::swap(Array[i], Array[i + 1]);
                swapped = true;
            }
        }

        if (!swapped) break;

        swapped = false;
        --end;

        // Backward iteration
        for (int i = end - 1; i >= start; --i)
        {
            if (Array[i] > Array[i + 1])
            {
                std::swap(Array[i], Array[i + 1]);
                swapped = true;
            }
        }
        ++start;
    }
    this->generated = Array;
};
