#include <algorithm>
#include <array>
#include "QuickSort.h"
#include <iostream>
#define arraySize 10000

QuickSort::QuickSort(std::array<int,arraySize>&arr): Generated(arr)
{}

int QuickSort::quickSort(std::array<int, arraySize>& arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j <= high-1; j++) {
        if (arr[j] < pivot) {
            i++;
            std::swap(arr[i], arr[j]);
        }
    }
    std::swap(arr[i + 1], arr[high]);
    return (i + 1);
}

// The Quicksort function Implement
           
void QuickSort::sort(std::array<int, arraySize>& arr, int low, int high) {
    if (low < high) {
        int pi = quickSort(arr, low, high);
        sort(arr, low, pi - 1);
        sort(arr, pi + 1, high);
    }
}

    bool QuickSort::validator(std::array<int,arraySize>&arr)
    {
        for (int i = 1; i < arr.size(); i++)
            if (arr[i] < arr[i - 1]) 
                return false;
        return true;
    }