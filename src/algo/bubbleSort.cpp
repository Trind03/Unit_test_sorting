#include <vector>
#include "bubbleSort.h"


BubbleSort::BubbleSort(std::vector<int>_correct)
{
    correct = _correct;
}


void BubbleSort::sort(std::vector<int>arr)
{
    int i, ii;
    for (i = 0; i < arr.capacity() - 1; i++)

        for (ii = 0; ii < arr.size() - i - 1; ii++)
            if (arr[ii] > arr[ii + 1])
                std::swap(arr[ii], arr[ii + 1]);
    generated = arr;
}
