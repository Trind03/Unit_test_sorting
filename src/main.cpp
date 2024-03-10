#include <iostream>
#include <vector>
#include <gtest/gtest.h>
#include "cocktailSort.h"
#include "bubbleSort.h"
#include "selectionSort.h"


std::ostream& operator<<(std::ostream &stream, std::vector<int>&array)
{
    stream << "\n";
    for(int arr : array) stream << arr << " - ";
    stream << "\n";
    return stream;
}
TEST(Unit_cocktailSort,cocktailSort)
{
    Cocktailsort cocktailsort({0,1,2,3,4,5,6,7,8,9}); // {4,7,2,9,5,3,1,6,8,0}
    std::cout << cocktailsort.generated;
    EXPECT_EQ(cocktailsort.correct,cocktailsort.generated);
}

TEST(Unit_bubbleSort,bubbleSort)
{
    BubbleSort sort;
    sort.sort({4,7,2,9,5,3,1,6,8});

    std::cout << sort.generated;
    EXPECT_EQ(sort.correct,sort.generated);
}

int main(int argc, char *argv[])
{
   testing::InitGoogleTest(&argc,argv);
   return RUN_ALL_TESTS();
}