#include <array>
#include "insertionSort.h"
#define arraySize 10000

InsertionSort::InsertionSort(std::array<int,arraySize>&generated): Generated(generated)
{}


void InsertionSort::sort() 
{
    std::array<int, arraySize>& arr = Generated;

    int key, j;
    for (int i = 1; i < arr.size(); i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
