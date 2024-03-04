#include <iostream>
#include <vector>
#include "cocktailSort.h"
#include "toolkit.h"
#include <gtest/gtest.h>

TEST(Unit_cocktailSort,cocktailSort)
{
    std::vector<int>(correct) = {1,2,3,4,5,6,7,8,9};
    std::vector<int>(nums) = {4,7,2,9,5,3,1,6,8};
    //render(correct);   
    cocktailSort(nums);
    //render(nums);  
    EXPECT_EQ(correct,nums);
}

int main(int argc, char *argv[])
{
   testing::InitGoogleTest(&argc,argv);
   return RUN_ALL_TESTS();
}