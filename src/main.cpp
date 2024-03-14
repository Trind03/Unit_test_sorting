#include <iostream>
#include <vector>
#include <future>
#include <gtest/gtest.h>
#include "tests.h"

#define __Overload__
/* Overload for << to print out forted array*/

#ifdef __Overload__
std::ostream& operator<<(std::ostream &stream, std::vector<int>& array)
{
    stream << "\n";
    for(int arr : array) stream << arr << " - ";
    stream << "\n";

    return stream;
}
#endif

int main(int argc, char *argv[])
{
    testing::InitGoogleTest(&argc,argv);
    std::future<int>process = std::async(std::launch::async,RUN_ALL_TESTS);
    return process.get();
}


