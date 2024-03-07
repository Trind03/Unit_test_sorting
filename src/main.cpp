#include <iostream>
#include <vector>
#include "cocktailSort.h"
#include "toolkit.h"
#include <gtest/gtest.h>
#include "bubblesort.h"



TEST(Unit_cocktailSort,cocktailSort)
{
    Cocktailsort sort;
    const std::vector<int>(correct) = {1,2,3,4,5,6,7,8,9};

    sort.cocktailSort({4,7,2,9,5,3,1,6,8});

    std::cout << "cocktail Sort\n";
    render("Predefined array -> ",sort.Sorted);   
    render("Sorted array     -> ",sort.Sorted);  
    
    EXPECT_EQ(correct,sort.Sorted);
}

TEST(Unit_bubbleSort,bubbleSort)
{
    std::vector<int>(correct) = {1,2,3,4,5,6,7,8,9};
    std::vector<int>(nums) = {4,7,2,9,5,3,1,6,8};

    std::cout << "Bouble Sort\n";
    render("Predefined array -> ",correct);   
    bubbleSort(nums);
    render("Sorted array     -> ",nums); 
 
    EXPECT_EQ(correct,nums);
}

int main(int argc, char *argv[])
{
   testing::InitGoogleTest(&argc,argv);
   return RUN_ALL_TESTS();
}