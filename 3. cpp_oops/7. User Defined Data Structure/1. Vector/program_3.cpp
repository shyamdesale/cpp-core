#include <iostream>
using namespace std;

class Vector
{
public:
    int size;
    int capicity;
    int *arr;

    Vector()
    {
        size = 0;
        capicity = 1;
        arr = new int[1];
    }
    void add(int element)
    {
        if (size == capicity)
        {
            
        }
    }
};