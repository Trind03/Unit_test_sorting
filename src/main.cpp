#include <iostream>
#include <vector>
#include <future>
#include <memory>
#include <gtest/gtest.h>
#include "tests.h"


int main(int argc, char *argv[])
{
    testing::InitGoogleTest(&argc,argv);
    std::future<int>process = std::async(std::launch::async,RUN_ALL_TESTS);
    return process.get();
}

/* Overload for << to print out forted array

std::ostream& operator<<(std::ostream &stream, std::vector<int>& array)
{
    stream << "\n";
    for(int arr : array) stream << arr << " - ";
    stream << "\n";

    return stream;
}
*/

