//  write a function to calculate the nth fibonacci number using recursion :
//  eg : 1 1 2 3 5 8 13 21 34 55 89...........
// 1 , 1+1 = 2, 1+2 = 3, 2+3 = 5,.............

#include<iostream>
using namespace std;
int fibo(int a)
{
    if(a==1 || a==2) return 1;
    return fibo(a-1) + fibo(a-2);
}
int main()
{
    int x;
    cout<<"Enter Number : ";
    cin>>x;
    cout<<fibo(x);
}