#include <array>
#include <utility>
#include "selectionSort.h"
#define arraysize 10000

SelectionSort::SelectionSort(std::array<int,arraysize>_correct) : correct(_correct)
{};

void SelectionSort::sort(std::array<int,arraysize>arr) 
{ 
	int i, j, min_idx; 

	for (i = 0; i < arr.size() - 1; i++) { 

		min_idx = i; 
		for (j = i + 1; j < arr.size(); j++) { 
			if (arr[j] < arr[min_idx]) 
				min_idx = j; 
		} 

		if (min_idx != i) 
			std::swap(arr[min_idx], arr[i]); 
	} 
    generated = arr;
} 
