#include "algorithm.h"

bool algorithm::validator()
{
    for (int i = 1; i < Generated.size(); i++)
        if (Generated[i] < Generated[i - 1]) 
            return false;
    return true;
}