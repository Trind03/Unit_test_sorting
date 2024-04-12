#include <algorithm>
#include <array>
#include "QuickSort.h"
#define arraySize 10000

QuickSort::QuickSort(std::array<int,arraySize>&arr)
{
  Generated = arr;
}

int QuickSort::quickSort(std::array<int,arraySize>&arr,int low,int high)
{
  //choose the pivot
  
  int pivot = arr[high];
  //Index of smaller element and Indicate
  //the right position of pivot found so far
  int i=(low-1);
  
  for(int j = low ;j <= high;j++)
  {
    //If current element is smaller than the pivot
    if(arr[j]<pivot)
    {
      //Increment index of smaller element
      i++;
      std::swap(arr[i],arr[j]);
    }
  }
  std::swap(arr[i+1],arr[high]);
  return (i+1);
}

// The Quicksort function Implement
           
void QuickSort::sort()
{
  std::array<int,arraySize>&arr = Generated;
  int low = 0, high = 9999;
  // when low is less than high
  if(low<high)
  {
    // pi is the partition return index of pivot
    
    int pi = quickSort(arr,low,high);
    
    //Recursion Call
    //smaller element than pivot goes left and
    //higher element goes right
    sort();
    sort();
  }
}
