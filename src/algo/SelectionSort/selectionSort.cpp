#include <array>
#include <utility>
#include "selectionSort.h"
#define arraySize 10000


SelectionSort::SelectionSort(std::array<int,arraySize>&correct,std::array<int,arraySize>&generated) : Correct(correct), Generated(generated)
{};

void SelectionSort::sort(std::array<int,arraySize>&arr) 
{ 
	int i, j, min_idx; 
	for (i = 0; i < arr.size()-1; i++)
	{ 

		min_idx = i; 
		for (j = i + 1; j < arr.size(); j++) 
		{ 
			if (arr[j] < arr[min_idx]) 
				min_idx = j; 
		} 

		if (min_idx != i) 
			std::swap(arr[min_idx], arr[i]); 
	} 
} 
