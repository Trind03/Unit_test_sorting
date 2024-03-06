#include <iostream>
#include <vector>


void render(const char* message,std::vector<int>&array)
{
    std::cout << message;
    for(int arr : array) std::cout << arr << " - ";
    std::cout << "\n";
    //return 0;
}