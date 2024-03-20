#pragma once
#include "cocktailSort.h"
#include <gtest/gtest.h>
#include "cocktailSort.h"
#include "bubbleSort.h"
#include "selectionSort.h"
#include "testSet.h"
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
    std::unique_ptr<Cocktailsort>(cocktailsort) = std::make_unique<Cocktailsort>(Sorted,TB_Sort);
    cocktailsort->sort();

    EXPECT_EQ(cocktailsort->Correct,cocktailsort->Generated);
}


// Unit test for bubbleSort 
TEST(Unit_bubbleSort,bubbleSort)
{
    std::unique_ptr<BubbleSort>(bubbleSort) = std::make_unique<BubbleSort>(Sorted,TB_Sort);
    bubbleSort->sort();

    EXPECT_EQ(bubbleSort->Correct,bubbleSort->Generated);
}

// Unit test for selectionSort 
TEST(Unit_selectionSort,selectionSort)
{
    std::unique_ptr<SelectionSort>(selectionSort) = std::make_unique<SelectionSort>(Sorted,TB_Sort);
    selectionSort->sort();

    EXPECT_EQ(selectionSort->Correct,selectionSort->Generated);
}
