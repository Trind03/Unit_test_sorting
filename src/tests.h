#pragma once
#include <gtest/gtest.h>
#include <memory>
#include <cocktailSort.h>
#include <bubbleSort.h>
#include <selectionSort.h>
#include <insertionSort.h>
#include <testSet.h>
#include <mergeSort.h>
#define arraySize 10000


// Overload for << to print out forted array
std::ostream& operator<<(std::ostream &stream, std::array<int,10000>& array)
{
    stream << "\n";
    for(int arr : array) stream << arr << " - ";
    stream << "\n";

    return stream;
}


// Unit test for cocktailSort 
TEST(Unit_cocktailSort,cocktailSort)
{
    std::unique_ptr<CocktailSort>(Cocktailsort) = std::make_unique<CocktailSort>(Sorted,TB_Sort);
    Cocktailsort->sort(Cocktailsort->Generated);

    EXPECT_EQ(Cocktailsort->Correct,Cocktailsort->Generated);
}


// Unit test for bubbleSort 
TEST(Unit_bubbleSort,bubbleSort)
{
    
    std::unique_ptr<BubbleSort>(Bubblesort) = std::make_unique<BubbleSort>(Sorted,TB_Sort);
    Bubblesort->sort(Bubblesort->Generated);

    EXPECT_EQ(Bubblesort->Correct,Bubblesort->Generated);
}

// Unit test for selectionSort 
TEST(Unit_selectionSort,selectionSort)
{
    
    std::unique_ptr<SelectionSort>(Selectionsort) = std::make_unique<SelectionSort>(Sorted,TB_Sort);
    Selectionsort->sort(Selectionsort->Generated);

    EXPECT_EQ(Selectionsort->Correct,Selectionsort->Generated);
}
TEST(Unit_insertionsort,insertionsort)
{
    
    std::unique_ptr<InsertionSort>(insertionsort) = std::make_unique<InsertionSort>(Sorted,TB_Sort);
    insertionsort->sort(insertionsort->Generated);

    EXPECT_EQ(insertionsort->Correct,insertionsort->Generated);    
}

TEST(Unit_mergeSort,mergesort)
{
    
    std::unique_ptr<MergeSort>(mergeSort) = std::make_unique<MergeSort>(Sorted,TB_Sort);
    mergeSort->sort(mergeSort->Generated,0,9999);

    EXPECT_EQ(mergeSort->Correct,mergeSort->Generated);    
}