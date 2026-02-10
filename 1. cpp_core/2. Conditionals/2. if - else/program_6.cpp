// Example : give the length and breadth of a rectangle, write a program to find whether the area of the rectangle is greter than its perimeter

#include<iostream>
using namespace std;
int main()
{
    float length;
    cout<<"Enter a length of a rectangle : ";
    cin>>length;
    float breadth;
    cout<<"Enter a breadth of a rectangle : ";
    cin>>breadth;
    float area = length * breadth;
    cout<<"Area of rectangle is : "<<area<<endl;
    float perimeter = 2 * (length + breadth);
    cout<<"Perimeter of rectangle is : "<<perimeter<<endl;
    if (area > perimeter)
    {
        cout<<"The area of rectangle is greter than its perimeter";
    }
    else
    {
        cout<<"The area of rectangle is not greter than its perimeter";
    }
}