#include <vector>
#include "bubbleSort.h"

BubbleSort::BubbleSort()
{
    correct = {0,1,2,3,4,5,6,7,8,9};
}


void BubbleSort::sort(std::array<int,10>(arr))
{
    int i, ii;
    for (i = 0; i < arr.size() - 1; i++)

        for (ii = 0; ii < arr.size() - i - 1; ii++)
            if (arr[ii] > arr[ii + 1])
                std::swap(arr[ii], arr[ii + 1]);
    generated = arr;
}
