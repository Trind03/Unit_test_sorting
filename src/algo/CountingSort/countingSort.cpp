#include <array>
#include "countingSort.h"
#define arraySize 10000

CountingSort::CountingSort(std::array<int,arraySize>&generated): Generated(generated)
{}


void CountingSort::sort()
{
    std::array<int, arraySize>& arr = Generated;
    int maxElement = arr[0];
    
    for (int i = 1; i < arr.size(); ++i)
    {
        if (arr[i] > maxElement)
            maxElement = arr[i];
    }

    std::array<int, arraySize * 10> count = {0};
    
    for (int num : arr)
        count[num]++;

    for (int i = 1; i <= maxElement; ++i)
        count[i] += count[i - 1];

    std::array<int, arraySize> output;

    for (int i = arr.size() - 1; i >= 0; --i)
    {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }


    Generated = output;
}
