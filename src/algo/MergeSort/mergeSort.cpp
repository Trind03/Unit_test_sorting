#include <array>
#include "mergeSort.h"
#include <memory>


MergeSort::MergeSort(std::array<int,arraySize>&correct,std::array<int,arraySize>&generated) : Generated(generated), Correct(correct)
{}

bool MergeSort::validator(std::array<int,arraySize>&arr)
{
    for (int i = 1; i < arr.size(); i++)
        if (arr[i] < arr[i - 1]) 
            return false;
    return true;
}


void MergeSort::sort(int const begin, int const end)
{
    std::array<int, arraySize>& array = Generated;
    if (begin >= end)
        return;
 
    int mid = begin + (end - begin) / 2;
    sort(begin, mid);
    sort(mid + 1, end);
    merge(begin, mid, end);
}


void MergeSort::merge(int const left, int const mid,int const right)
{
    std::array<int, arraySize>& array = Generated;
    int const subArrayOne = mid - left + 1;
    int const subArrayTwo = right - mid;


    int *leftArray = new int[subArrayOne],*rightArray = new int[subArrayTwo];
 
    for (auto i = 0; i < subArrayOne; i++)
        leftArray[i] = array[left + i];
    for (auto j = 0; j < subArrayTwo; j++)
        rightArray[j] = array[mid + 1 + j];
 
    auto indexOfSubArrayOne = 0, indexOfSubArrayTwo = 0;
    int indexOfMergedArray = left;
 
    while (indexOfSubArrayOne < subArrayOne
           && indexOfSubArrayTwo < subArrayTwo)
           {
        if (leftArray[indexOfSubArrayOne]
            <= rightArray[indexOfSubArrayTwo])
            {
            array[indexOfMergedArray]
                = leftArray[indexOfSubArrayOne];
            indexOfSubArrayOne++;
        }
        else
        {
            array[indexOfMergedArray]
                = rightArray[indexOfSubArrayTwo];
            indexOfSubArrayTwo++;
        }
        indexOfMergedArray++;
    }

    while (indexOfSubArrayOne < subArrayOne)
    {
        array[indexOfMergedArray]
            = leftArray[indexOfSubArrayOne];
        indexOfSubArrayOne++;
        indexOfMergedArray++;
    }
 

    while (indexOfSubArrayTwo < subArrayTwo)
    {
        array[indexOfMergedArray]
            = rightArray[indexOfSubArrayTwo];
        indexOfSubArrayTwo++;
        indexOfMergedArray++;
    }
    delete[] leftArray;
    delete[] rightArray;
}