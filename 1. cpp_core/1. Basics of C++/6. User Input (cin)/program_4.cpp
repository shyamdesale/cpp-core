#include<iostream>
using namespace std;
int main()
{
    float length = 5;
    cout<<"Enter a Length : ";
    cin>>length;
    float breadth = 7;
    cout<<"Enter a Breadth : ";
    cin>>breadth;
    float perimeter = 2 * (length + breadth);
    cout<<"Perimeter of Rectangle is : "<<perimeter;
}