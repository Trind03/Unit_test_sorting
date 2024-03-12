#include <iostream>
#include <array>
#include <future>
#include <gtest/gtest.h>
#include "cocktailSort.h"
#include "bubbleSort.h"
#include "selectionSort.h"

int main(int argc, char *argv[])
{
   testing::InitGoogleTest(&argc,argv);
   std::future<int>process = std::async(std::launch::async,RUN_ALL_TESTS);
   return process.get();
}


std::ostream& operator<<(std::ostream &stream, std::array<int,10>& array)
{
    stream << "\n";
    for(int arr : array) stream << arr << " - ";
    stream << "\n";

    return stream;
}

// Unit test for cocktailSort
TEST(Unit_cocktailSort,cocktailSort)
{
    Cocktailsort cocktailsort({0,1,2,3,4,5,6,7,8,9});
    cocktailsort.sort({4,7,2,9,5,3,1,6,8,0});
    
    std::cout << cocktailsort.generated;
    EXPECT_EQ(cocktailsort.correct,cocktailsort.generated);
}


// Unit test for bubbleSort
TEST(Unit_bubbleSort,bubbleSort)
{
    BubbleSort bubbleSort({0,1,2,3,4,5,6,7,8,9});
    bubbleSort.sort({4,7,2,9,5,3,1,6,8,0});

    std::cout << bubbleSort.generated;
    EXPECT_EQ(bubbleSort.correct,bubbleSort.generated);
}

// Unit test for selectionSort
TEST(Unit_selectionSort,selectionSort)
{
    SelectionSort selectionSort({0,1,2,3,4,5,6,7,8,9});
    selectionSort.sort({4,7,2,9,5,3,1,6,8,0});

    std::cout << selectionSort.generated;
    EXPECT_EQ(selectionSort.correct,selectionSort.generated);
}
