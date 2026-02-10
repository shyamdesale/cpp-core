#include<iostream>
using namespace std;

class Vector
{
    public:
        int size;          // number of elements currently stored in the vector
        int capicity;      // total allocated memory capacity (spelling wrong but keeping same)
        int* arr;          // pointer to a dynamically allocated array

    Vector()
    {
        size = 0;          // vector initially empty
        capicity = 1;      // starting memory capacity is 1
        arr = new int[1];  // allocate memory for 1 integer
    }

    void add(int element)
    {
        // if array is full, then resize required
        if (size == capicity)
        {
            capicity *= 2;                     // double the capacity
            int* arr2 = new int[capicity];     // allocate a new larger array

            // copy all old elements into new array
            for (int i = 0; i < size; i++)
            {
                arr2[i] = arr[i];
            }

            arr = arr2;    // assign new array to arr (old array is leaked here, not freeing)
        }

        // insert new element and then increase size
        arr[size++] = element;
    }

    void print ()
    {
        // print all stored elements
        for (int i = 0; i < size; i++)
        {
            cout<<arr[i]<<"  ";
        }
        cout<<endl;
    }

    int get(int idx)
    {
        // if vector is empty, return -1
        if (size == 0)
        {
            cout<<"Array is Empty";
            return -1;
        }
        
        // index out of range (invalid index)
        if (idx >= size || idx < 0)
        {
            cout<<"Invalid Index"<<endl;
            return -1;
        }
        
        // valid index → return element
        return arr[idx];
    }

    void remove()
    {
        // if vector already empty
        if (size == 0)
        {
            cout<<"Array is Empty";
        }

        // reduce size (no bounds protection)
        size--;
    }
};

int main ()
{
    Vector v;   // create Vector object

    v.add(10);  // add element 10
    v.print();  // print elements

    v.add(8);   // add element 8
    v.print();

    v.add(4);   // add element 4
    v.print();

    v.add(23);  // add element 23
    v.print();

    v.get(20);  // try accessing invalid index
    v.get(2);   // access valid index 2
    v.get(0);   // access valid index 0

    v.remove(); // remove last element (just reduces size)
    v.print();  // print remaining elements
}