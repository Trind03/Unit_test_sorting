#include "cocktailSort.h"
#include <vector>
#include <random>
#include <ctime>

Cocktailsort::Cocktailsort()// : correct(_correct)
{
    int X_Seed;
    Generated.reserve(10000);
    std::mt19937 rand(std::time(nullptr));
    std::uniform_int_distribution<int> dist(1,1000);
    for(int i = 0; i < 10000; i++)
    {
        X_Seed = dist(rand);
        Generated.push_back(dist(X_Seed));
        Correct.push_back(dist(X_Seed)); 
    }
}



void Cocktailsort::sort()
{
    bool swapped = true;
    int sum = 0;
    int start = 0;
    int end = Generated.size() - 1;

    while (swapped)
    {
        swapped = false;

        // Forward iteration
        for (int i = start; i < end; ++i)
        {
            if (Generated[i] > Generated[i + 1])
            {
                std::swap(Generated[i], Generated[i + 1]);
                swapped = true;
            }
        }

        if (!swapped) break;

        swapped = false;
        --end;

        // Backward iteration
        for (int i = end - 1; i >= start; --i)
        {
            if (Generated[i] > Generated[i + 1])
            {
                std::swap(Generated[i], Generated[i + 1]);
                swapped = true;
            }
        }
        ++start;
    }
};
