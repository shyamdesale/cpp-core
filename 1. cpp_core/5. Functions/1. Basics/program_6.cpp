// Sum of two numbers

#include<iostream>
using namespace std;

void sum (int a , int b)    // int a & int b = formal parameters
{
    cout<<"The sum of two numbers : "<<a + b;
}

int main ()
{
    sum (5 , 9);    // 5 , 9 = actual parameters
    return 0;
}