#include "cocktailSort.h"
#include <vector>

Cocktailsort::Cocktailsort(std::vector<int>_correct) : correct(_correct)
{}


void Cocktailsort::sort(std::vector<int> Array)
{
    bool swapped = true;
    int sum = 0;
    int start = 0;
    int end = Array.capacity() - 1;

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
