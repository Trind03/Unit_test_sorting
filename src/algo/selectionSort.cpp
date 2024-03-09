#include <vector>
#include <utility>
#include "selectionSort.h"

SelectionSort::SelectionSort()
{
    correct = {1,2,3,4,5,6,7,8,9};
};

void SelectionSort::selectionSort(std::vector<int>(arr)) 
{ 
	int i, j, min_idx; 

	for (i = 0; i < arr.capacity() - 1; i++) { 

		min_idx = i; 
		for (j = i + 1; j < arr.capacity(); j++) { 
			if (arr[j] < arr[min_idx]) 
				min_idx = j; 
		} 

		if (min_idx != i) 
			std::swap(arr[min_idx], arr[i]); 
	} 
    generated = arr;
} 
