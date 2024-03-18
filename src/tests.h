#pragma once
#include "cocktailSort.h"
#include <gtest/gtest.h>
#include "cocktailSort.h"
#include "bubbleSort.h"
#include "selectionSort.h"
#include <fstream>
#include <iostream>
#include "to_be_sorted.cpp"



// Overload for << to print out forted array
std::ostream& operator<<(std::ostream &stream, std::vector<int>& array)
{
    stream << "\n";
    for(int arr : array) stream << arr << " - ";
    stream << "\n";

    return stream;
}
// Unit test for cocktailSort 

TEST(Unit_cocktailSort,cocktailSort)
{
    std::unique_ptr<Cocktailsort>(cocktailsort) = std::make_unique<Cocktailsort>();
    cocktailsort->sort(TB_Sort);

    EXPECT_EQ(cocktailsort->Correct,cocktailsort->Generated);
}

/*
// Unit test for bubbleSort 
TEST(Unit_bubbleSort,bubbleSort)
{
    std::unique_ptr<BubbleSort>(bubbleSort) = std::make_unique<BubbleSort>();
    bubbleSort->sort();

    EXPECT_EQ(bubbleSort->correct,bubbleSort->generated);
}

// Unit test for selectionSort 
TEST(Unit_selectionSort,selectionSort)
{
    std::unique_ptr<SelectionSort>(selectionSort) = std::make_unique<SelectionSort>();
    selectionSort->sort();

    EXPECT_EQ(selectionSort->correct,selectionSort->generated);
}
*/