#pragma once
#include <gtest/gtest.h>
#include <memory>
#include "testSet.h"
#include "BubbleSort/bubbleSort.h"
#include "CocktailSort/cocktailSort.h"
#include "SelectionSort/selectionSort.h"
#include "InsertionSort/insertionSort.h"
#include "MergeSort/mergeSort.h"
#include "CountingSort/countingSort.h"
#include "QuickSort/QuickSort.h"

// Unit test for cocktailSort 
TEST(Unit_cocktailSort,cocktailSort)
{
    std::unique_ptr<algorithm>(Cocktailsort) = std::make_unique<CocktailSort>(TB_Sort);
    Cocktailsort->sort();

    EXPECT_TRUE(Cocktailsort->validator(Cocktailsort->Generated));
}


// Unit test for selectionSort 
TEST(Unit_selectionSort,selectionSort)
{
    std::unique_ptr<algorithm>(Selectionsort) = std::make_unique<SelectionSort>(TB_Sort);
    Selectionsort->sort();

    EXPECT_TRUE(Selectionsort->validator(Selectionsort->Generated));
}

// Unit test for insertionsort 
TEST(Unit_insertionsort,insertionsort)
{
    std::unique_ptr<algorithm>(insertionsort) = std::make_unique<InsertionSort>(TB_Sort);
    insertionsort->sort();

    EXPECT_TRUE(insertionsort->validator(insertionsort->Generated));
}

// Unit test for mergesort 
TEST(Unit_mergeSort,mergesort)
{
    std::unique_ptr<MergeSort>(mergeSort) = std::make_unique<MergeSort>(TB_Sort);
    mergeSort->sort(0,9999);

    EXPECT_TRUE(mergeSort->validator(mergeSort->Generated));
}


// Unit test for countingsort
 
TEST(Unit_countingSort,countingsort)
{
    std::unique_ptr<CountingSort>(countingSort) = std::make_unique<CountingSort>(TB_Sort);
    countingSort->sort();

    EXPECT_TRUE(countingSort->validator(countingSort->Generated));
}

// Unit test for bubbleSort 
TEST(Unit_bubbleSort,bubbleSort)
{
    std::unique_ptr<BubbleSort>(Bubblesort) = std::make_unique<BubbleSort>(TB_Sort);
    Bubblesort->sort();

    EXPECT_TRUE(Bubblesort->validator(Bubblesort->Generated));
}

// Unit test for QuickSort 
TEST(Unit_QuickSort,QuickSort)
{
    std::unique_ptr<QuickSort>(Quicksort) = std::make_unique<QuickSort>(TB_Sort);
    Quicksort->sort(Quicksort->Generated,0,9999);

    EXPECT_TRUE(Quicksort->validator(Quicksort->Generated));
}