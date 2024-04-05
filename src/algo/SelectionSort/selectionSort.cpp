#include <array>
#include <utility>
#include "selectionSort.h"
#define arraySize 10000


SelectionSort::SelectionSort(std::array<int,arraySize>&correct,std::array<int,arraySize>&generated) : Correct(correct), Generated(generated)
{};

bool SelectionSort::validator()
{
    for (int i = 1; i < Generated.size(); i++)
        if (Generated[i] < Generated[i - 1]) 
            return false;
    return true;
}

void SelectionSort::sort(std::array<int,arraySize>&arr) 
{ 
	int i, j, min_idx; 
	for (i = 0; i < arr.size()-1; i++)
	{ 

		min_idx = i; 
		
		for (j = i + 1; j < arr.size(); j++) 
			if (arr[j] < arr[min_idx]) 
				min_idx = j; 

		if (min_idx != i) 
			std::swap(arr[min_idx], arr[i]); 
	} 
} 
