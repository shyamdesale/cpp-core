// Create your own vector -

#include<iostream>
using namespace std;

class Vector
{
    public:
        int size;          // current number of elements stored
        int capicity;      // total memory allocated (spelling wrong but not changing)
        int* arr;          // pointer to dynamic array

    Vector()
    {
        size = 0;          // initially vector is empty
        capicity = 1;      // start with capacity 1
        arr = new int[1];  // allocate memory for 1 element
    }

    void add(int element)
    {
        if (size == capicity)      // if array is full, resize needed
        {
            capicity *= 2;         // double the capacity
            int* arr2 = new int[capicity];  // allocate new bigger array

            for (int i = 0; i < size; i++)
            {
                arr2[i] = arr[i];  // copy old data into new array
            }
            arr = arr2;            // point arr to new array
                                  // (old array memory leak — but not changing code)
        }
        arr[size++] = element;     // insert element at next index and increase size
    }

    void print ()
    {
        for (int i = 0; i < size; i++)
        {
            cout<<arr[i]<<"  ";    // print all elements
        }
        cout<<endl;
    }
};

int main ()
{
    Vector v;   // create vector object

    cout<<v.size<<" : Size. "<<v.capicity<<" : Capicity. ";  // print initial size & cap
    v.add(10);  // add element
    v.print();  // print vector

    cout<<v.size<<" : Size. "<<v.capicity<<" : Capicity. ";
    v.add(8);
    v.print();

    cout<<v.size<<" : Size. "<<v.capicity<<" : Capicity. ";
    v.add(4);
    v.print();

    cout<<v.size<<" : Size. "<<v.capicity<<" : Capicity. ";
    v.add(23);
    v.print();
}