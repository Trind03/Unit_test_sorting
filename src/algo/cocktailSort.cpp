#include "cocktailSort.h"
#include <vector>
#include <random>
#include <ctime>

Cocktailsort::Cocktailsort(std::vector<int>&_correct,std::vector<int>&_generated) : Correct(_correct), Generated(_generated)
{    int X_Seed;
    Generated.reserve(10000);
    std::mt19937 rand(std::time(nullptr));
    std::uniform_int_distribution<int> dist(0,100000);

    for(int i = 0; i < 10000; i++)
    {
        X_Seed = dist(rand);
        Generated.push_back(X_Seed);
        Correct.push_back(X_Seed); 
    }
}


void Cocktailsort::sort()
{
    std::vector<int>&arr = Generated;
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
