#include <vector>
#include <utility>
#include "selectionSort.h"


SelectionSort::SelectionSort(std::vector<int>&correct,std::vector<int>&generated) : Correct(correct), Generated(generated)
{};

void SelectionSort::sort() 
{ 
	std::vector<int>&arr = Generated;
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
} 
