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

TEST(Unit_cocktailSort,cocktailSort)
{
    Cocktailsort cocktailsort({0,1,2,3,4,5,6,7,8,9}); // {4,7,2,9,5,3,1,6,8,0}
    cocktailsort.sort({4,7,2,9,5,3,1,6,8,0});
    
    std::cout << cocktailsort.generated;
    EXPECT_EQ(cocktailsort.correct,cocktailsort.generated);
}

TEST(Unit_bubbleSort,bubbleSort)
{
    BubbleSort bubbleSort({0,1,2,3,4,5,6,7,8,9});
    bubbleSort.sort();

    std::cout << bubbleSort.generated;
    EXPECT_EQ(bubbleSort.correct,bubbleSort.generated);
}

TEST(Unit_selectionSort,selectionSort)
{
    SelectionSort selectionSort({0,1,2,3,4,5,6,7,8,9});
    selectionSort.sort({4,7,2,9,5,3,1,6,8,0});

    std::cout << selectionSort.generated;
    EXPECT_EQ(selectionSort.correct,selectionSort.generated);
}
