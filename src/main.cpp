#include <iostream>
#include <vector>
#include "cocktailSort.h"
#include <gtest/gtest.h>
#include "bubblesort.h"


std::ostream& operator<<(std::ostream &stream, std::vector<int>&array)
{
    stream << "\n";
    for(int arr : array) stream << arr << " - ";
    stream << "\n";
    return stream;
}
TEST(Unit_cocktailSort,cocktailSort)
{
    Cocktailsort cocktailsort;
    const std::vector<int>(correct) = {1,2,3,4,5,6,7,8,9};

    cocktailsort.sort({4,7,2,9,5,3,1,6,8});

    std::cout << cocktailsort.generated;
        
    EXPECT_EQ(cocktailsort.correct,cocktailsort.generated);
}

TEST(Unit_bubbleSort,bubbleSort)
{
    BubbleSort sort;

    sort.sort({4,7,2,9,5,3,1,6,8});
    std::cout << sort.Generated;
    EXPECT_EQ(sort.correct,sort.Generated);
}

int main(int argc, char *argv[])
{
   testing::InitGoogleTest(&argc,argv);
   return RUN_ALL_TESTS();
}