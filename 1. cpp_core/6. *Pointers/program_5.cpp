#include<iostream>
using namespace std;
int maxoftwo(int x , int y)
{
    if (x>y) return x;
    else return y;
    
}
int main ()
{
    cout<<maxoftwo(4,5);
}