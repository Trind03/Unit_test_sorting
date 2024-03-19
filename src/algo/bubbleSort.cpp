#include <array>
#include "bubbleSort.h"


BubbleSort::BubbleSort(std::array<int,10000>&correct,std::array<int,10000>&generated) : Correct(correct), Generated(generated)
{}


void BubbleSort::sort()
{
    std::array<int,10000>&arr = Generated;
    int i, ii;
    for (i = 0; i < arr.size() - 1; i++)

        for (ii = 0; ii < arr.size() - i - 1; ii++)
            if (arr[ii] > arr[ii + 1])
                std::swap(arr[ii], arr[ii + 1]);
}
