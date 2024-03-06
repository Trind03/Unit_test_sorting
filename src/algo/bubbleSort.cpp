#include <vector>

void bubbleSort(std::vector<int>&(arr))
{
    int i, ii;
    for (i = 0; i < arr.capacity() - 1; i++)

        for (ii = 0; ii < arr.capacity() - i - 1; ii++)
            if (arr[ii] > arr[ii + 1])
                std::swap(arr[ii], arr[ii + 1]);
}