#include <array>
#include "mergeSort.h"
#include <memory>


MergeSort::MergeSort(std::array<int,arraySize>&correct,std::array<int,arraySize>&generated) : Generated(generated), Correct(correct)
{}




void MergeSort::sort(std::array<int,arraySize>&array, int const begin, int const end)
{
    if (begin >= end)
        return;
 
    int mid = begin + (end - begin) / 2;
    sort(array, begin, mid);
    sort(array, mid + 1, end);
    merge(array, begin, mid, end);
}


void MergeSort::merge(std::array<int,arraySize>&array, int const left, int const mid,int const right)
{
    int const subArrayOne = mid - left + 1;
    int const subArrayTwo = right - mid;

    //std::unique_ptr<std::array<int,10>>(leftArray) = std::make_unique<std::array<int,10>>(subArrayOne);
    //std::unique_ptr<std::array<int,10>>(rightArray) = std::make_unique<std::array<int,10>>(subArrayTwo);

    auto *leftArray = new int[subArrayOne],
         *rightArray = new int[subArrayTwo];
 
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