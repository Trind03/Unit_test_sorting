#include <vector>
#include "bubbleSort.h"
#define arraysize 10000

BubbleSort::BubbleSort(std::array<int,arraysize>_correct)
{
    correct = _correct;
}


void BubbleSort::sort(std::array<int,arraysize>arr)
{
    int i, ii;
    for (i = 0; i < arr.size() - 1; i++)

        for (ii = 0; ii < arr.size() - i - 1; ii++)
            if (arr[ii] > arr[ii + 1])
                std::swap(arr[ii], arr[ii + 1]);
    generated = arr;
}
