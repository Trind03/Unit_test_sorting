#pragma once
#include <array>
#include "algorithm.h"

#define arraySize 10000

class CountingSort : public algorithm
{
public:
    CountingSort(std::array<int,arraySize>&correct,std::array<int,arraySize>&generated);
    void sort(std::array<int,arraySize>&arr) override;

    std::array<int,arraySize>Generated;
    std::array<int,arraySize>Correct;
};
/*

vector<int> countSort(vector<int>& inputArray)
{
 
    int N = inputArray.size();
 
    // Finding the maximum element of array inputArray[].
    int M = 0;
 
    for (int i = 0; i < N; i++)
        M = max(M, inputArray[i]);
 
    // Initializing countArray[] with 0
    vector<int> countArray(M + 1, 0);
 
    // Mapping each element of inputArray[] as an index
    // of countArray[] array
 
    for (int i = 0; i < N; i++)
        countArray[inputArray[i]]++;
 
    // Calculating prefix sum at every index
    // of array countArray[]
    for (int i = 1; i <= M; i++)
        countArray[i] += countArray[i - 1];
 
    // Creating outputArray[] from countArray[] array
    vector<int> outputArray(N);
 
    for (int i = N - 1; i >= 0; i--)
 
    {
        outputArray[countArray[inputArray[i]] - 1]
            = inputArray[i];
 
        countArray[inputArray[i]]--;
    }
 
    return outputArray;
}
*/